// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENTITYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENTITYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeEntityInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEntityInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEntityInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeEntityInfoResponseBody() = default ;
    DescribeEntityInfoResponseBody(const DescribeEntityInfoResponseBody &) = default ;
    DescribeEntityInfoResponseBody(DescribeEntityInfoResponseBody &&) = default ;
    DescribeEntityInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEntityInfoResponseBody() = default ;
    DescribeEntityInfoResponseBody& operator=(const DescribeEntityInfoResponseBody &) = default ;
    DescribeEntityInfoResponseBody& operator=(DescribeEntityInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EntityId, entityId_);
        DARABONBA_ANY_TO_JSON(EntityInfo, entityInfo_);
        DARABONBA_PTR_TO_JSON(EntityType, entityType_);
        DARABONBA_ANY_TO_JSON(TipInfo, tipInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
        DARABONBA_ANY_FROM_JSON(EntityInfo, entityInfo_);
        DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
        DARABONBA_ANY_FROM_JSON(TipInfo, tipInfo_);
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
      virtual bool empty() const override { return this->entityId_ == nullptr
        && this->entityInfo_ == nullptr && this->entityType_ == nullptr && this->tipInfo_ == nullptr; };
      // entityId Field Functions 
      bool hasEntityId() const { return this->entityId_ != nullptr;};
      void deleteEntityId() { this->entityId_ = nullptr;};
      inline int64_t getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
      inline Data& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // entityInfo Field Functions 
      bool hasEntityInfo() const { return this->entityInfo_ != nullptr;};
      void deleteEntityInfo() { this->entityInfo_ = nullptr;};
      inline       const Darabonba::Json & getEntityInfo() const { DARABONBA_GET(entityInfo_) };
      Darabonba::Json & getEntityInfo() { DARABONBA_GET(entityInfo_) };
      inline Data& setEntityInfo(const Darabonba::Json & entityInfo) { DARABONBA_SET_VALUE(entityInfo_, entityInfo) };
      inline Data& setEntityInfo(Darabonba::Json && entityInfo) { DARABONBA_SET_RVALUE(entityInfo_, entityInfo) };


      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
      inline Data& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


      // tipInfo Field Functions 
      bool hasTipInfo() const { return this->tipInfo_ != nullptr;};
      void deleteTipInfo() { this->tipInfo_ = nullptr;};
      inline       const Darabonba::Json & getTipInfo() const { DARABONBA_GET(tipInfo_) };
      Darabonba::Json & getTipInfo() { DARABONBA_GET(tipInfo_) };
      inline Data& setTipInfo(const Darabonba::Json & tipInfo) { DARABONBA_SET_VALUE(tipInfo_, tipInfo) };
      inline Data& setTipInfo(Darabonba::Json && tipInfo) { DARABONBA_SET_RVALUE(tipInfo_, tipInfo) };


    protected:
      // The logical ID of the entity.
      shared_ptr<int64_t> entityId_ {};
      // The information about the entry.
      Darabonba::Json entityInfo_ {};
      // The type of the entity. Valid values:
      // 
      // *   ip
      // *   domain
      // *   url
      // *   process
      // *   file
      // *   host
      shared_ptr<string> entityType_ {};
      // The information about the risk Intelligence.
      Darabonba::Json tipInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeEntityInfoResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeEntityInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeEntityInfoResponseBody::Data) };
    inline DescribeEntityInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeEntityInfoResponseBody::Data) };
    inline DescribeEntityInfoResponseBody& setData(const DescribeEntityInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeEntityInfoResponseBody& setData(DescribeEntityInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeEntityInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEntityInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeEntityInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<DescribeEntityInfoResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
