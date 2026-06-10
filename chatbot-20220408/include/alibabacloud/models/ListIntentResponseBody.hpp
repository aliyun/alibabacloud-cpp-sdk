// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTENTRESPONSEBODY_HPP_
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
  class ListIntentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Intents, intents_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Intents, intents_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIntentResponseBody() = default ;
    ListIntentResponseBody(const ListIntentResponseBody &) = default ;
    ListIntentResponseBody(ListIntentResponseBody &&) = default ;
    ListIntentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntentResponseBody() = default ;
    ListIntentResponseBody& operator=(const ListIntentResponseBody &) = default ;
    ListIntentResponseBody& operator=(ListIntentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Intents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Intents& obj) { 
        DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
        DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_TO_JSON(IntentId, intentId_);
        DARABONBA_PTR_TO_JSON(IntentName, intentName_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(ModifyUserId, modifyUserId_);
        DARABONBA_PTR_TO_JSON(ModifyUserName, modifyUserName_);
        DARABONBA_PTR_TO_JSON(SlotInfos, slotInfos_);
      };
      friend void from_json(const Darabonba::Json& j, Intents& obj) { 
        DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
        DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
        DARABONBA_PTR_FROM_JSON(IntentName, intentName_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(ModifyUserId, modifyUserId_);
        DARABONBA_PTR_FROM_JSON(ModifyUserName, modifyUserName_);
        DARABONBA_PTR_FROM_JSON(SlotInfos, slotInfos_);
      };
      Intents() = default ;
      Intents(const Intents &) = default ;
      Intents(Intents &&) = default ;
      Intents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Intents() = default ;
      Intents& operator=(const Intents &) = default ;
      Intents& operator=(Intents &&) = default ;
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
        // Indicates whether the slot can accept multiple values.
        shared_ptr<bool> array_ {};
        // Indicates whether the slot contains sensitive data.
        shared_ptr<bool> encrypt_ {};
        // Indicates whether the slot value is collected interactively.
        shared_ptr<bool> interactive_ {};
        // The slot name.
        shared_ptr<string> name_ {};
        // The slot ID.
        shared_ptr<string> slotId_ {};
        // The slot value (entity name).
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->createTime_ == nullptr && this->createUserId_ == nullptr && this->createUserName_ == nullptr && this->intentId_ == nullptr && this->intentName_ == nullptr
        && this->modifyTime_ == nullptr && this->modifyUserId_ == nullptr && this->modifyUserName_ == nullptr && this->slotInfos_ == nullptr; };
      // aliasName Field Functions 
      bool hasAliasName() const { return this->aliasName_ != nullptr;};
      void deleteAliasName() { this->aliasName_ = nullptr;};
      inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
      inline Intents& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Intents& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUserId Field Functions 
      bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
      void deleteCreateUserId() { this->createUserId_ = nullptr;};
      inline string getCreateUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
      inline Intents& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


      // createUserName Field Functions 
      bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
      void deleteCreateUserName() { this->createUserName_ = nullptr;};
      inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
      inline Intents& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


      // intentId Field Functions 
      bool hasIntentId() const { return this->intentId_ != nullptr;};
      void deleteIntentId() { this->intentId_ = nullptr;};
      inline int64_t getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
      inline Intents& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


      // intentName Field Functions 
      bool hasIntentName() const { return this->intentName_ != nullptr;};
      void deleteIntentName() { this->intentName_ = nullptr;};
      inline string getIntentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
      inline Intents& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Intents& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // modifyUserId Field Functions 
      bool hasModifyUserId() const { return this->modifyUserId_ != nullptr;};
      void deleteModifyUserId() { this->modifyUserId_ = nullptr;};
      inline string getModifyUserId() const { DARABONBA_PTR_GET_DEFAULT(modifyUserId_, "") };
      inline Intents& setModifyUserId(string modifyUserId) { DARABONBA_PTR_SET_VALUE(modifyUserId_, modifyUserId) };


      // modifyUserName Field Functions 
      bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
      void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
      inline string getModifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
      inline Intents& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


      // slotInfos Field Functions 
      bool hasSlotInfos() const { return this->slotInfos_ != nullptr;};
      void deleteSlotInfos() { this->slotInfos_ = nullptr;};
      inline const vector<Intents::SlotInfos> & getSlotInfos() const { DARABONBA_PTR_GET_CONST(slotInfos_, vector<Intents::SlotInfos>) };
      inline vector<Intents::SlotInfos> getSlotInfos() { DARABONBA_PTR_GET(slotInfos_, vector<Intents::SlotInfos>) };
      inline Intents& setSlotInfos(const vector<Intents::SlotInfos> & slotInfos) { DARABONBA_PTR_SET_VALUE(slotInfos_, slotInfos) };
      inline Intents& setSlotInfos(vector<Intents::SlotInfos> && slotInfos) { DARABONBA_PTR_SET_RVALUE(slotInfos_, slotInfos) };


    protected:
      // The intent alias.
      shared_ptr<string> aliasName_ {};
      // The time at which the intent was created, in UTC.
      shared_ptr<string> createTime_ {};
      // The ID of the user who created the intent.
      shared_ptr<string> createUserId_ {};
      // The name of the user who created the intent.
      shared_ptr<string> createUserName_ {};
      // The intent ID.
      shared_ptr<int64_t> intentId_ {};
      // The intent name.
      shared_ptr<string> intentName_ {};
      // The time at which the intent was last modified, in UTC.
      shared_ptr<string> modifyTime_ {};
      // The ID of the user who last modified the intent.
      shared_ptr<string> modifyUserId_ {};
      // The name of the user who last modified the intent.
      shared_ptr<string> modifyUserName_ {};
      // A list of slots associated with the intent.
      shared_ptr<vector<Intents::SlotInfos>> slotInfos_ {};
    };

    virtual bool empty() const override { return this->intents_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // intents Field Functions 
    bool hasIntents() const { return this->intents_ != nullptr;};
    void deleteIntents() { this->intents_ = nullptr;};
    inline const vector<ListIntentResponseBody::Intents> & getIntents() const { DARABONBA_PTR_GET_CONST(intents_, vector<ListIntentResponseBody::Intents>) };
    inline vector<ListIntentResponseBody::Intents> getIntents() { DARABONBA_PTR_GET(intents_, vector<ListIntentResponseBody::Intents>) };
    inline ListIntentResponseBody& setIntents(const vector<ListIntentResponseBody::Intents> & intents) { DARABONBA_PTR_SET_VALUE(intents_, intents) };
    inline ListIntentResponseBody& setIntents(vector<ListIntentResponseBody::Intents> && intents) { DARABONBA_PTR_SET_RVALUE(intents_, intents) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListIntentResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListIntentResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListIntentResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A list of intents.
    shared_ptr<vector<ListIntentResponseBody::Intents>> intents_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of intents per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of intents.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
