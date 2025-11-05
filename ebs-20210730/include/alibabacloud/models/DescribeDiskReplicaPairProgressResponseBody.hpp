// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKREPLICAPAIRPROGRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKREPLICAPAIRPROGRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDiskReplicaPairProgressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskReplicaPairProgressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RecoverPoint, recoverPoint_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskReplicaPairProgressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RecoverPoint, recoverPoint_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDiskReplicaPairProgressResponseBody() = default ;
    DescribeDiskReplicaPairProgressResponseBody(const DescribeDiskReplicaPairProgressResponseBody &) = default ;
    DescribeDiskReplicaPairProgressResponseBody(DescribeDiskReplicaPairProgressResponseBody &&) = default ;
    DescribeDiskReplicaPairProgressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskReplicaPairProgressResponseBody() = default ;
    DescribeDiskReplicaPairProgressResponseBody& operator=(const DescribeDiskReplicaPairProgressResponseBody &) = default ;
    DescribeDiskReplicaPairProgressResponseBody& operator=(DescribeDiskReplicaPairProgressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->progress_ == nullptr
        && return this->recoverPoint_ == nullptr && return this->requestId_ == nullptr; };
    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline DescribeDiskReplicaPairProgressResponseBody& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // recoverPoint Field Functions 
    bool hasRecoverPoint() const { return this->recoverPoint_ != nullptr;};
    void deleteRecoverPoint() { this->recoverPoint_ = nullptr;};
    inline int64_t recoverPoint() const { DARABONBA_PTR_GET_DEFAULT(recoverPoint_, 0L) };
    inline DescribeDiskReplicaPairProgressResponseBody& setRecoverPoint(int64_t recoverPoint) { DARABONBA_PTR_SET_VALUE(recoverPoint_, recoverPoint) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiskReplicaPairProgressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The replication progress of the replication pair.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // The timestamp that indicates the last recovery point in time. The value is returned only after the replication pair works for replicating data.
    std::shared_ptr<int64_t> recoverPoint_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
