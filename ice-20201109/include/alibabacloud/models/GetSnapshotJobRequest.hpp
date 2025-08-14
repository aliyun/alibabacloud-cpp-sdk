// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSNAPSHOTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSNAPSHOTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetSnapshotJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSnapshotJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSnapshotJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    GetSnapshotJobRequest() = default ;
    GetSnapshotJobRequest(const GetSnapshotJobRequest &) = default ;
    GetSnapshotJobRequest(GetSnapshotJobRequest &&) = default ;
    GetSnapshotJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSnapshotJobRequest() = default ;
    GetSnapshotJobRequest& operator=(const GetSnapshotJobRequest &) = default ;
    GetSnapshotJobRequest& operator=(GetSnapshotJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetSnapshotJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The ID of the snapshot job.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
