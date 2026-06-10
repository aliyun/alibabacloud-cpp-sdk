// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class DescribeIntentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIntentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(IntentName, intentName_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ModifyUserId, modifyUserId_);
      DARABONBA_PTR_TO_JSON(ModifyUserName, modifyUserName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlotInfos, slotInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIntentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(IntentName, intentName_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ModifyUserId, modifyUserId_);
      DARABONBA_PTR_FROM_JSON(ModifyUserName, modifyUserName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlotInfos, slotInfos_);
    };
    DescribeIntentResponseBody() = default ;
    DescribeIntentResponseBody(const DescribeIntentResponseBody &) = default ;
    DescribeIntentResponseBody(DescribeIntentResponseBody &&) = default ;
    DescribeIntentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIntentResponseBody() = default ;
    DescribeIntentResponseBody& operator=(const DescribeIntentResponseBody &) = default ;
    DescribeIntentResponseBody& operator=(DescribeIntentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SlotInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlotInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Array, array_);
        DARABONBA_PTR_TO_JSON(Encrypt, encrypt_);
        DARABONBA_PTR_TO_JSON(Interactive, interactive_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SlotId, slotId_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, SlotInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Array, array_);
        DARABONBA_PTR_FROM_JSON(Encrypt, encrypt_);
        DARABONBA_PTR_FROM_JSON(Interactive, interactive_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SlotId, slotId_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      SlotInfos() = default ;
      SlotInfos(const SlotInfos &) = default ;
      SlotInfos(SlotInfos &&) = default ;
      SlotInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlotInfos() = default ;
      SlotInfos& operator=(const SlotInfos &) = default ;
      SlotInfos& operator=(SlotInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->array_ == nullptr
        && this->encrypt_ == nullptr && this->interactive_ == nullptr && this->name_ == nullptr && this->slotId_ == nullptr && this->value_ == nullptr; };
      // array Field Functions 
      bool hasArray() const { return this->array_ != nullptr;};
      void deleteArray() { this->array_ = nullptr;};
      inline bool getArray() const { DARABONBA_PTR_GET_DEFAULT(array_, false) };
      inline SlotInfos& setArray(bool array) { DARABONBA_PTR_SET_VALUE(array_, array) };


      // encrypt Field Functions 
      bool hasEncrypt() const { return this->encrypt_ != nullptr;};
      void deleteEncrypt() { this->encrypt_ = nullptr;};
      inline bool getEncrypt() const { DARABONBA_PTR_GET_DEFAULT(encrypt_, false) };
      inline SlotInfos& setEncrypt(bool encrypt) { DARABONBA_PTR_SET_VALUE(encrypt_, encrypt) };


      // interactive Field Functions 
      bool hasInteractive() const { return this->interactive_ != nullptr;};
      void deleteInteractive() { this->interactive_ = nullptr;};
      inline bool getInteractive() const { DARABONBA_PTR_GET_DEFAULT(interactive_, false) };
      inline SlotInfos& setInteractive(bool interactive) { DARABONBA_PTR_SET_VALUE(interactive_, interactive) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SlotInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // slotId Field Functions 
      bool hasSlotId() const { return this->slotId_ != nullptr;};
      void deleteSlotId() { this->slotId_ = nullptr;};
      inline string getSlotId() const { DARABONBA_PTR_GET_DEFAULT(slotId_, "") };
      inline SlotInfos& setSlotId(string slotId) { DARABONBA_PTR_SET_VALUE(slotId_, slotId) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline SlotInfos& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Indicates whether the slot can contain an array of values.
      shared_ptr<bool> array_ {};
      // Indicates whether the slot is configured to encrypt its value.
      shared_ptr<bool> encrypt_ {};
      // Indicates whether interactive slot filling is enabled. Default value: false.
      shared_ptr<bool> interactive_ {};
      // The slot name.
      shared_ptr<string> name_ {};
      // The slot ID.
      shared_ptr<string> slotId_ {};
      // The value extracted for the slot.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->createTime_ == nullptr && this->createUserId_ == nullptr && this->createUserName_ == nullptr && this->intentId_ == nullptr && this->intentName_ == nullptr
        && this->modifyTime_ == nullptr && this->modifyUserId_ == nullptr && this->modifyUserName_ == nullptr && this->requestId_ == nullptr && this->slotInfos_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeIntentResponseBody& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeIntentResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline string getCreateUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
    inline DescribeIntentResponseBody& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline DescribeIntentResponseBody& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline DescribeIntentResponseBody& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // intentName Field Functions 
    bool hasIntentName() const { return this->intentName_ != nullptr;};
    void deleteIntentName() { this->intentName_ = nullptr;};
    inline string getIntentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
    inline DescribeIntentResponseBody& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeIntentResponseBody& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // modifyUserId Field Functions 
    bool hasModifyUserId() const { return this->modifyUserId_ != nullptr;};
    void deleteModifyUserId() { this->modifyUserId_ = nullptr;};
    inline string getModifyUserId() const { DARABONBA_PTR_GET_DEFAULT(modifyUserId_, "") };
    inline DescribeIntentResponseBody& setModifyUserId(string modifyUserId) { DARABONBA_PTR_SET_VALUE(modifyUserId_, modifyUserId) };


    // modifyUserName Field Functions 
    bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
    void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
    inline string getModifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
    inline DescribeIntentResponseBody& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIntentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slotInfos Field Functions 
    bool hasSlotInfos() const { return this->slotInfos_ != nullptr;};
    void deleteSlotInfos() { this->slotInfos_ = nullptr;};
    inline const vector<DescribeIntentResponseBody::SlotInfos> & getSlotInfos() const { DARABONBA_PTR_GET_CONST(slotInfos_, vector<DescribeIntentResponseBody::SlotInfos>) };
    inline vector<DescribeIntentResponseBody::SlotInfos> getSlotInfos() { DARABONBA_PTR_GET(slotInfos_, vector<DescribeIntentResponseBody::SlotInfos>) };
    inline DescribeIntentResponseBody& setSlotInfos(const vector<DescribeIntentResponseBody::SlotInfos> & slotInfos) { DARABONBA_PTR_SET_VALUE(slotInfos_, slotInfos) };
    inline DescribeIntentResponseBody& setSlotInfos(vector<DescribeIntentResponseBody::SlotInfos> && slotInfos) { DARABONBA_PTR_SET_RVALUE(slotInfos_, slotInfos) };


  protected:
    // The intent alias.
    shared_ptr<string> aliasName_ {};
    // The time when the intent was created, in UTC format.
    shared_ptr<string> createTime_ {};
    // The creator ID.
    shared_ptr<string> createUserId_ {};
    // The creator name.
    shared_ptr<string> createUserName_ {};
    // The intent ID.
    shared_ptr<int64_t> intentId_ {};
    // The intent name.
    shared_ptr<string> intentName_ {};
    // The time when the intent was last modified, in UTC format.
    shared_ptr<string> modifyTime_ {};
    // The modifier ID.
    shared_ptr<string> modifyUserId_ {};
    // The modifier name.
    shared_ptr<string> modifyUserName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // An array of objects that contain the slot information for the intent.
    shared_ptr<vector<DescribeIntentResponseBody::SlotInfos>> slotInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
