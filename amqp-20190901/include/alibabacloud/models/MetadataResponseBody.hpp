// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METADATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_METADATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class MetadataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetadataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, MetadataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    MetadataResponseBody() = default ;
    MetadataResponseBody(const MetadataResponseBody &) = default ;
    MetadataResponseBody(MetadataResponseBody &&) = default ;
    MetadataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetadataResponseBody() = default ;
    MetadataResponseBody& operator=(const MetadataResponseBody &) = default ;
    MetadataResponseBody& operator=(MetadataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(HasPretendPermission, hasPretendPermission_);
        DARABONBA_PTR_TO_JSON(InternalEndpoint, internalEndpoint_);
        DARABONBA_PTR_TO_JSON(PretendUserId, pretendUserId_);
        DARABONBA_PTR_TO_JSON(UserStatus, userStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(HasPretendPermission, hasPretendPermission_);
        DARABONBA_PTR_FROM_JSON(InternalEndpoint, internalEndpoint_);
        DARABONBA_PTR_FROM_JSON(PretendUserId, pretendUserId_);
        DARABONBA_PTR_FROM_JSON(UserStatus, userStatus_);
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
      virtual bool empty() const override { return this->endpoint_ == nullptr
        && this->hasPretendPermission_ == nullptr && this->internalEndpoint_ == nullptr && this->pretendUserId_ == nullptr && this->userStatus_ == nullptr; };
      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline Data& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // hasPretendPermission Field Functions 
      bool hasHasPretendPermission() const { return this->hasPretendPermission_ != nullptr;};
      void deleteHasPretendPermission() { this->hasPretendPermission_ = nullptr;};
      inline bool getHasPretendPermission() const { DARABONBA_PTR_GET_DEFAULT(hasPretendPermission_, false) };
      inline Data& setHasPretendPermission(bool hasPretendPermission) { DARABONBA_PTR_SET_VALUE(hasPretendPermission_, hasPretendPermission) };


      // internalEndpoint Field Functions 
      bool hasInternalEndpoint() const { return this->internalEndpoint_ != nullptr;};
      void deleteInternalEndpoint() { this->internalEndpoint_ = nullptr;};
      inline string getInternalEndpoint() const { DARABONBA_PTR_GET_DEFAULT(internalEndpoint_, "") };
      inline Data& setInternalEndpoint(string internalEndpoint) { DARABONBA_PTR_SET_VALUE(internalEndpoint_, internalEndpoint) };


      // pretendUserId Field Functions 
      bool hasPretendUserId() const { return this->pretendUserId_ != nullptr;};
      void deletePretendUserId() { this->pretendUserId_ = nullptr;};
      inline string getPretendUserId() const { DARABONBA_PTR_GET_DEFAULT(pretendUserId_, "") };
      inline Data& setPretendUserId(string pretendUserId) { DARABONBA_PTR_SET_VALUE(pretendUserId_, pretendUserId) };


      // userStatus Field Functions 
      bool hasUserStatus() const { return this->userStatus_ != nullptr;};
      void deleteUserStatus() { this->userStatus_ = nullptr;};
      inline int32_t getUserStatus() const { DARABONBA_PTR_GET_DEFAULT(userStatus_, 0) };
      inline Data& setUserStatus(int32_t userStatus) { DARABONBA_PTR_SET_VALUE(userStatus_, userStatus) };


    protected:
      shared_ptr<string> endpoint_ {};
      shared_ptr<bool> hasPretendPermission_ {};
      shared_ptr<string> internalEndpoint_ {};
      shared_ptr<string> pretendUserId_ {};
      shared_ptr<int32_t> userStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline MetadataResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const MetadataResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, MetadataResponseBody::Data) };
    inline MetadataResponseBody::Data getData() { DARABONBA_PTR_GET(data_, MetadataResponseBody::Data) };
    inline MetadataResponseBody& setData(const MetadataResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MetadataResponseBody& setData(MetadataResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MetadataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MetadataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline MetadataResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<MetadataResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
