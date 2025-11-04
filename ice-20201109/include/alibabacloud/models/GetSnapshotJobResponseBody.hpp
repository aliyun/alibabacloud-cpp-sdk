// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSNAPSHOTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSNAPSHOTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSnapshotJobResponseBodySnapshotJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetSnapshotJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSnapshotJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotJob, snapshotJob_);
    };
    friend void from_json(const Darabonba::Json& j, GetSnapshotJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotJob, snapshotJob_);
    };
    GetSnapshotJobResponseBody() = default ;
    GetSnapshotJobResponseBody(const GetSnapshotJobResponseBody &) = default ;
    GetSnapshotJobResponseBody(GetSnapshotJobResponseBody &&) = default ;
    GetSnapshotJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSnapshotJobResponseBody() = default ;
    GetSnapshotJobResponseBody& operator=(const GetSnapshotJobResponseBody &) = default ;
    GetSnapshotJobResponseBody& operator=(GetSnapshotJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->snapshotJob_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSnapshotJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotJob Field Functions 
    bool hasSnapshotJob() const { return this->snapshotJob_ != nullptr;};
    void deleteSnapshotJob() { this->snapshotJob_ = nullptr;};
    inline const GetSnapshotJobResponseBodySnapshotJob & snapshotJob() const { DARABONBA_PTR_GET_CONST(snapshotJob_, GetSnapshotJobResponseBodySnapshotJob) };
    inline GetSnapshotJobResponseBodySnapshotJob snapshotJob() { DARABONBA_PTR_GET(snapshotJob_, GetSnapshotJobResponseBodySnapshotJob) };
    inline GetSnapshotJobResponseBody& setSnapshotJob(const GetSnapshotJobResponseBodySnapshotJob & snapshotJob) { DARABONBA_PTR_SET_VALUE(snapshotJob_, snapshotJob) };
    inline GetSnapshotJobResponseBody& setSnapshotJob(GetSnapshotJobResponseBodySnapshotJob && snapshotJob) { DARABONBA_PTR_SET_RVALUE(snapshotJob_, snapshotJob) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the snapshot job.
    std::shared_ptr<GetSnapshotJobResponseBodySnapshotJob> snapshotJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
