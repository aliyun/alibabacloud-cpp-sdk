// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTEXPORTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTEXPORTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetProjectExportJobResponseBodyProjectExportJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetProjectExportJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectExportJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectExportJob, projectExportJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectExportJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectExportJob, projectExportJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProjectExportJobResponseBody() = default ;
    GetProjectExportJobResponseBody(const GetProjectExportJobResponseBody &) = default ;
    GetProjectExportJobResponseBody(GetProjectExportJobResponseBody &&) = default ;
    GetProjectExportJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectExportJobResponseBody() = default ;
    GetProjectExportJobResponseBody& operator=(const GetProjectExportJobResponseBody &) = default ;
    GetProjectExportJobResponseBody& operator=(GetProjectExportJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectExportJob_ != nullptr
        && this->requestId_ != nullptr; };
    // projectExportJob Field Functions 
    bool hasProjectExportJob() const { return this->projectExportJob_ != nullptr;};
    void deleteProjectExportJob() { this->projectExportJob_ = nullptr;};
    inline const GetProjectExportJobResponseBodyProjectExportJob & projectExportJob() const { DARABONBA_PTR_GET_CONST(projectExportJob_, GetProjectExportJobResponseBodyProjectExportJob) };
    inline GetProjectExportJobResponseBodyProjectExportJob projectExportJob() { DARABONBA_PTR_GET(projectExportJob_, GetProjectExportJobResponseBodyProjectExportJob) };
    inline GetProjectExportJobResponseBody& setProjectExportJob(const GetProjectExportJobResponseBodyProjectExportJob & projectExportJob) { DARABONBA_PTR_SET_VALUE(projectExportJob_, projectExportJob) };
    inline GetProjectExportJobResponseBody& setProjectExportJob(GetProjectExportJobResponseBodyProjectExportJob && projectExportJob) { DARABONBA_PTR_SET_RVALUE(projectExportJob_, projectExportJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProjectExportJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetProjectExportJobResponseBodyProjectExportJob> projectExportJob_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
