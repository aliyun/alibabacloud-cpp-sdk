// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINDEXJOBSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINDEXJOBSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetIndexJobStatusResponseBodyDataDocuments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetIndexJobStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIndexJobStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Documents, documents_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetIndexJobStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Documents, documents_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetIndexJobStatusResponseBodyData() = default ;
    GetIndexJobStatusResponseBodyData(const GetIndexJobStatusResponseBodyData &) = default ;
    GetIndexJobStatusResponseBodyData(GetIndexJobStatusResponseBodyData &&) = default ;
    GetIndexJobStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIndexJobStatusResponseBodyData() = default ;
    GetIndexJobStatusResponseBodyData& operator=(const GetIndexJobStatusResponseBodyData &) = default ;
    GetIndexJobStatusResponseBodyData& operator=(GetIndexJobStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->documents_ == nullptr
        && return this->jobId_ == nullptr && return this->status_ == nullptr; };
    // documents Field Functions 
    bool hasDocuments() const { return this->documents_ != nullptr;};
    void deleteDocuments() { this->documents_ = nullptr;};
    inline const vector<Models::GetIndexJobStatusResponseBodyDataDocuments> & documents() const { DARABONBA_PTR_GET_CONST(documents_, vector<Models::GetIndexJobStatusResponseBodyDataDocuments>) };
    inline vector<Models::GetIndexJobStatusResponseBodyDataDocuments> documents() { DARABONBA_PTR_GET(documents_, vector<Models::GetIndexJobStatusResponseBodyDataDocuments>) };
    inline GetIndexJobStatusResponseBodyData& setDocuments(const vector<Models::GetIndexJobStatusResponseBodyDataDocuments> & documents) { DARABONBA_PTR_SET_VALUE(documents_, documents) };
    inline GetIndexJobStatusResponseBodyData& setDocuments(vector<Models::GetIndexJobStatusResponseBodyDataDocuments> && documents) { DARABONBA_PTR_SET_RVALUE(documents_, documents) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetIndexJobStatusResponseBodyData& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetIndexJobStatusResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The list of imported documents.
    std::shared_ptr<vector<Models::GetIndexJobStatusResponseBodyDataDocuments>> documents_ = nullptr;
    // The ID of the job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The status of the knowledge base job. Valid values:
    // 
    // *   COMPLETED
    // *   FAILED
    // *   RUNNING
    // *   PENDING
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
