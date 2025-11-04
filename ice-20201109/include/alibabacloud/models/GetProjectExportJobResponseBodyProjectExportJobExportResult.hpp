// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTEXPORTJOBRESPONSEBODYPROJECTEXPORTJOBEXPORTRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTEXPORTJOBRESPONSEBODYPROJECTEXPORTJOBEXPORTRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetProjectExportJobResponseBodyProjectExportJobExportResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectExportJobResponseBodyProjectExportJobExportResult& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectUrl, projectUrl_);
      DARABONBA_PTR_TO_JSON(Timeline, timeline_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectExportJobResponseBodyProjectExportJobExportResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectUrl, projectUrl_);
      DARABONBA_PTR_FROM_JSON(Timeline, timeline_);
    };
    GetProjectExportJobResponseBodyProjectExportJobExportResult() = default ;
    GetProjectExportJobResponseBodyProjectExportJobExportResult(const GetProjectExportJobResponseBodyProjectExportJobExportResult &) = default ;
    GetProjectExportJobResponseBodyProjectExportJobExportResult(GetProjectExportJobResponseBodyProjectExportJobExportResult &&) = default ;
    GetProjectExportJobResponseBodyProjectExportJobExportResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectExportJobResponseBodyProjectExportJobExportResult() = default ;
    GetProjectExportJobResponseBodyProjectExportJobExportResult& operator=(const GetProjectExportJobResponseBodyProjectExportJobExportResult &) = default ;
    GetProjectExportJobResponseBodyProjectExportJobExportResult& operator=(GetProjectExportJobResponseBodyProjectExportJobExportResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectUrl_ == nullptr
        && return this->timeline_ == nullptr; };
    // projectUrl Field Functions 
    bool hasProjectUrl() const { return this->projectUrl_ != nullptr;};
    void deleteProjectUrl() { this->projectUrl_ = nullptr;};
    inline string projectUrl() const { DARABONBA_PTR_GET_DEFAULT(projectUrl_, "") };
    inline GetProjectExportJobResponseBodyProjectExportJobExportResult& setProjectUrl(string projectUrl) { DARABONBA_PTR_SET_VALUE(projectUrl_, projectUrl) };


    // timeline Field Functions 
    bool hasTimeline() const { return this->timeline_ != nullptr;};
    void deleteTimeline() { this->timeline_ = nullptr;};
    inline string timeline() const { DARABONBA_PTR_GET_DEFAULT(timeline_, "") };
    inline GetProjectExportJobResponseBodyProjectExportJobExportResult& setTimeline(string timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };


  protected:
    // The URL of the exported project, which is typically a signed OSS URL. This field is returned when ExportType is AdobePremierePro.
    std::shared_ptr<string> projectUrl_ = nullptr;
    // The timeline of the online editing job. This field is returned when ExportType is BaseTimeline. For data structure, see [Timeline](https://help.aliyun.com/document_detail/198823.html).
    std::shared_ptr<string> timeline_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
