// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATECOSTUNITRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATECOSTUNITRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class AllocateCostUnitResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateCostUnitResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateCostUnitResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AllocateCostUnitResourceResponseBody() = default ;
    AllocateCostUnitResourceResponseBody(const AllocateCostUnitResourceResponseBody &) = default ;
    AllocateCostUnitResourceResponseBody(AllocateCostUnitResourceResponseBody &&) = default ;
    AllocateCostUnitResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateCostUnitResourceResponseBody() = default ;
    AllocateCostUnitResourceResponseBody& operator=(const AllocateCostUnitResourceResponseBody &) = default ;
    AllocateCostUnitResourceResponseBody& operator=(AllocateCostUnitResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
        DARABONBA_PTR_TO_JSON(ToUnitId, toUnitId_);
        DARABONBA_PTR_TO_JSON(ToUnitUserId, toUnitUserId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
        DARABONBA_PTR_FROM_JSON(ToUnitId, toUnitId_);
        DARABONBA_PTR_FROM_JSON(ToUnitUserId, toUnitUserId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->isSuccess_ == nullptr
        && this->toUnitId_ == nullptr && this->toUnitUserId_ == nullptr; };
      // isSuccess Field Functions 
      bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
      void deleteIsSuccess() { this->isSuccess_ = nullptr;};
      inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
      inline Data& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


      // toUnitId Field Functions 
      bool hasToUnitId() const { return this->toUnitId_ != nullptr;};
      void deleteToUnitId() { this->toUnitId_ = nullptr;};
      inline int64_t getToUnitId() const { DARABONBA_PTR_GET_DEFAULT(toUnitId_, 0L) };
      inline Data& setToUnitId(int64_t toUnitId) { DARABONBA_PTR_SET_VALUE(toUnitId_, toUnitId) };


      // toUnitUserId Field Functions 
      bool hasToUnitUserId() const { return this->toUnitUserId_ != nullptr;};
      void deleteToUnitUserId() { this->toUnitUserId_ = nullptr;};
      inline int64_t getToUnitUserId() const { DARABONBA_PTR_GET_DEFAULT(toUnitUserId_, 0L) };
      inline Data& setToUnitUserId(int64_t toUnitUserId) { DARABONBA_PTR_SET_VALUE(toUnitUserId_, toUnitUserId) };


    protected:
      // Indicates whether resources are allocated to the specified cost center. Valid values:
      // 
      // *   true: The resources are allocated to the specified cost center.
      // *   false: The resources fail to be allocated to the specified cost center.
      shared_ptr<bool> isSuccess_ {};
      // The ID of the destination cost center.
      shared_ptr<int64_t> toUnitId_ {};
      // The user ID of the owner of the destination cost center.
      shared_ptr<int64_t> toUnitUserId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AllocateCostUnitResourceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AllocateCostUnitResourceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AllocateCostUnitResourceResponseBody::Data) };
    inline AllocateCostUnitResourceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AllocateCostUnitResourceResponseBody::Data) };
    inline AllocateCostUnitResourceResponseBody& setData(const AllocateCostUnitResourceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AllocateCostUnitResourceResponseBody& setData(AllocateCostUnitResourceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AllocateCostUnitResourceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AllocateCostUnitResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AllocateCostUnitResourceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<AllocateCostUnitResourceResponseBody::Data> data_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
