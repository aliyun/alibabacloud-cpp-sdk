// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENTITIYSTATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETENTITIYSTATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class GetEntitiyStatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEntitiyStatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetEntitiyStatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetEntitiyStatResponseBody() = default ;
    GetEntitiyStatResponseBody(const GetEntitiyStatResponseBody &) = default ;
    GetEntitiyStatResponseBody(GetEntitiyStatResponseBody &&) = default ;
    GetEntitiyStatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEntitiyStatResponseBody() = default ;
    GetEntitiyStatResponseBody& operator=(const GetEntitiyStatResponseBody &) = default ;
    GetEntitiyStatResponseBody& operator=(GetEntitiyStatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EntityNum, entityNum_);
        DARABONBA_PTR_TO_JSON(EntityType, entityType_);
        DARABONBA_PTR_TO_JSON(EntityUuid, entityUuid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EntityNum, entityNum_);
        DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
        DARABONBA_PTR_FROM_JSON(EntityUuid, entityUuid_);
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
      virtual bool empty() const override { return this->entityNum_ == nullptr
        && this->entityType_ == nullptr && this->entityUuid_ == nullptr; };
      // entityNum Field Functions 
      bool hasEntityNum() const { return this->entityNum_ != nullptr;};
      void deleteEntityNum() { this->entityNum_ = nullptr;};
      inline int32_t getEntityNum() const { DARABONBA_PTR_GET_DEFAULT(entityNum_, 0) };
      inline Data& setEntityNum(int32_t entityNum) { DARABONBA_PTR_SET_VALUE(entityNum_, entityNum) };


      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
      inline Data& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


      // entityUuid Field Functions 
      bool hasEntityUuid() const { return this->entityUuid_ != nullptr;};
      void deleteEntityUuid() { this->entityUuid_ = nullptr;};
      inline string getEntityUuid() const { DARABONBA_PTR_GET_DEFAULT(entityUuid_, "") };
      inline Data& setEntityUuid(string entityUuid) { DARABONBA_PTR_SET_VALUE(entityUuid_, entityUuid) };


    protected:
      // The number of entities.
      shared_ptr<int32_t> entityNum_ {};
      // The entity type.
      shared_ptr<string> entityType_ {};
      // The entity UUID.
      shared_ptr<string> entityUuid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetEntitiyStatResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetEntitiyStatResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetEntitiyStatResponseBody::Data>) };
    inline vector<GetEntitiyStatResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetEntitiyStatResponseBody::Data>) };
    inline GetEntitiyStatResponseBody& setData(const vector<GetEntitiyStatResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetEntitiyStatResponseBody& setData(vector<GetEntitiyStatResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetEntitiyStatResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEntitiyStatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetEntitiyStatResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code of the request.
    shared_ptr<int32_t> code_ {};
    // The response data.
    shared_ptr<vector<GetEntitiyStatResponseBody::Data>> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - true: successful.
    // - false: failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
