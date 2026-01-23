// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUTRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class PutRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShardId, shardId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PutRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShardId, shardId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    PutRecordsResponseBody() = default ;
    PutRecordsResponseBody(const PutRecordsResponseBody &) = default ;
    PutRecordsResponseBody(PutRecordsResponseBody &&) = default ;
    PutRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutRecordsResponseBody() = default ;
    PutRecordsResponseBody& operator=(const PutRecordsResponseBody &) = default ;
    PutRecordsResponseBody& operator=(PutRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->shardId_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PutRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // shardId Field Functions 
    bool hasShardId() const { return this->shardId_ != nullptr;};
    void deleteShardId() { this->shardId_ = nullptr;};
    inline string getShardId() const { DARABONBA_PTR_GET_DEFAULT(shardId_, "") };
    inline PutRecordsResponseBody& setShardId(string shardId) { DARABONBA_PTR_SET_VALUE(shardId_, shardId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PutRecordsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> shardId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
