// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRECORDSTORAGELIFECYCLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUTRECORDSTORAGELIFECYCLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class PutRecordStorageLifeCycleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutRecordStorageLifeCycleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PutRecordStorageLifeCycleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PutRecordStorageLifeCycleResponseBody() = default ;
    PutRecordStorageLifeCycleResponseBody(const PutRecordStorageLifeCycleResponseBody &) = default ;
    PutRecordStorageLifeCycleResponseBody(PutRecordStorageLifeCycleResponseBody &&) = default ;
    PutRecordStorageLifeCycleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutRecordStorageLifeCycleResponseBody() = default ;
    PutRecordStorageLifeCycleResponseBody& operator=(const PutRecordStorageLifeCycleResponseBody &) = default ;
    PutRecordStorageLifeCycleResponseBody& operator=(PutRecordStorageLifeCycleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->msg_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline PutRecordStorageLifeCycleResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline PutRecordStorageLifeCycleResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PutRecordStorageLifeCycleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<string> msg_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
