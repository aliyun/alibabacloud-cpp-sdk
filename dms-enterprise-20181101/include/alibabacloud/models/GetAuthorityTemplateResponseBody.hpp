// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHORITYTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHORITYTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetAuthorityTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthorityTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorityTemplateView, authorityTemplateView_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthorityTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorityTemplateView, authorityTemplateView_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetAuthorityTemplateResponseBody() = default ;
    GetAuthorityTemplateResponseBody(const GetAuthorityTemplateResponseBody &) = default ;
    GetAuthorityTemplateResponseBody(GetAuthorityTemplateResponseBody &&) = default ;
    GetAuthorityTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthorityTemplateResponseBody() = default ;
    GetAuthorityTemplateResponseBody& operator=(const GetAuthorityTemplateResponseBody &) = default ;
    GetAuthorityTemplateResponseBody& operator=(GetAuthorityTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthorityTemplateView : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthorityTemplateView& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorityTemplateItemList, authorityTemplateItemList_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, AuthorityTemplateView& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorityTemplateItemList, authorityTemplateItemList_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      AuthorityTemplateView() = default ;
      AuthorityTemplateView(const AuthorityTemplateView &) = default ;
      AuthorityTemplateView(AuthorityTemplateView &&) = default ;
      AuthorityTemplateView(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthorityTemplateView() = default ;
      AuthorityTemplateView& operator=(const AuthorityTemplateView &) = default ;
      AuthorityTemplateView& operator=(AuthorityTemplateView &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AuthorityTemplateItemList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthorityTemplateItemList& obj) { 
          DARABONBA_PTR_TO_JSON(AuthorityTemplateItem, authorityTemplateItem_);
        };
        friend void from_json(const Darabonba::Json& j, AuthorityTemplateItemList& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthorityTemplateItem, authorityTemplateItem_);
        };
        AuthorityTemplateItemList() = default ;
        AuthorityTemplateItemList(const AuthorityTemplateItemList &) = default ;
        AuthorityTemplateItemList(AuthorityTemplateItemList &&) = default ;
        AuthorityTemplateItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthorityTemplateItemList() = default ;
        AuthorityTemplateItemList& operator=(const AuthorityTemplateItemList &) = default ;
        AuthorityTemplateItemList& operator=(AuthorityTemplateItemList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AuthorityTemplateItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AuthorityTemplateItem& obj) { 
            DARABONBA_PTR_TO_JSON(Attribute, attribute_);
            DARABONBA_PTR_TO_JSON(DbId, dbId_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(ItemId, itemId_);
            DARABONBA_PTR_TO_JSON(ModifierId, modifierId_);
            DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
            DARABONBA_PTR_TO_JSON(TableName, tableName_);
            DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
          };
          friend void from_json(const Darabonba::Json& j, AuthorityTemplateItem& obj) { 
            DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
            DARABONBA_PTR_FROM_JSON(DbId, dbId_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
            DARABONBA_PTR_FROM_JSON(ModifierId, modifierId_);
            DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
            DARABONBA_PTR_FROM_JSON(TableName, tableName_);
            DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
          };
          AuthorityTemplateItem() = default ;
          AuthorityTemplateItem(const AuthorityTemplateItem &) = default ;
          AuthorityTemplateItem(AuthorityTemplateItem &&) = default ;
          AuthorityTemplateItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AuthorityTemplateItem() = default ;
          AuthorityTemplateItem& operator=(const AuthorityTemplateItem &) = default ;
          AuthorityTemplateItem& operator=(AuthorityTemplateItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->attribute_ == nullptr
        && this->dbId_ == nullptr && this->instanceId_ == nullptr && this->itemId_ == nullptr && this->modifierId_ == nullptr && this->resourceType_ == nullptr
        && this->tableName_ == nullptr && this->templateId_ == nullptr; };
          // attribute Field Functions 
          bool hasAttribute() const { return this->attribute_ != nullptr;};
          void deleteAttribute() { this->attribute_ = nullptr;};
          inline string getAttribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
          inline AuthorityTemplateItem& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


          // dbId Field Functions 
          bool hasDbId() const { return this->dbId_ != nullptr;};
          void deleteDbId() { this->dbId_ = nullptr;};
          inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
          inline AuthorityTemplateItem& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
          inline AuthorityTemplateItem& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // itemId Field Functions 
          bool hasItemId() const { return this->itemId_ != nullptr;};
          void deleteItemId() { this->itemId_ = nullptr;};
          inline int64_t getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
          inline AuthorityTemplateItem& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


          // modifierId Field Functions 
          bool hasModifierId() const { return this->modifierId_ != nullptr;};
          void deleteModifierId() { this->modifierId_ = nullptr;};
          inline int64_t getModifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, 0L) };
          inline AuthorityTemplateItem& setModifierId(int64_t modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


          // resourceType Field Functions 
          bool hasResourceType() const { return this->resourceType_ != nullptr;};
          void deleteResourceType() { this->resourceType_ = nullptr;};
          inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
          inline AuthorityTemplateItem& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


          // tableName Field Functions 
          bool hasTableName() const { return this->tableName_ != nullptr;};
          void deleteTableName() { this->tableName_ = nullptr;};
          inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
          inline AuthorityTemplateItem& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


          // templateId Field Functions 
          bool hasTemplateId() const { return this->templateId_ != nullptr;};
          void deleteTemplateId() { this->templateId_ = nullptr;};
          inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
          inline AuthorityTemplateItem& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        protected:
          // Other information. For example, you can add the logon permission on an instance to the permission template.
          shared_ptr<string> attribute_ {};
          // The ID of the database.
          shared_ptr<int64_t> dbId_ {};
          // The ID of the instance.
          shared_ptr<int64_t> instanceId_ {};
          // The ID of the resource.
          shared_ptr<int64_t> itemId_ {};
          // The ID of the user who modified the resource.
          shared_ptr<int64_t> modifierId_ {};
          // The type of the resource. Valid values:
          // 
          // *   **INSTANCE**: instance
          // *   **LOGIC_DB**: logical database
          // *   **META_DB**: physical database
          // *   **LOGIC_TABLE**: logical table
          // *   **SINGLE_TABLE**: physical table
          shared_ptr<string> resourceType_ {};
          // The name of the table.
          shared_ptr<string> tableName_ {};
          // The ID of the permission template.
          shared_ptr<int64_t> templateId_ {};
        };

        virtual bool empty() const override { return this->authorityTemplateItem_ == nullptr; };
        // authorityTemplateItem Field Functions 
        bool hasAuthorityTemplateItem() const { return this->authorityTemplateItem_ != nullptr;};
        void deleteAuthorityTemplateItem() { this->authorityTemplateItem_ = nullptr;};
        inline const vector<AuthorityTemplateItemList::AuthorityTemplateItem> & getAuthorityTemplateItem() const { DARABONBA_PTR_GET_CONST(authorityTemplateItem_, vector<AuthorityTemplateItemList::AuthorityTemplateItem>) };
        inline vector<AuthorityTemplateItemList::AuthorityTemplateItem> getAuthorityTemplateItem() { DARABONBA_PTR_GET(authorityTemplateItem_, vector<AuthorityTemplateItemList::AuthorityTemplateItem>) };
        inline AuthorityTemplateItemList& setAuthorityTemplateItem(const vector<AuthorityTemplateItemList::AuthorityTemplateItem> & authorityTemplateItem) { DARABONBA_PTR_SET_VALUE(authorityTemplateItem_, authorityTemplateItem) };
        inline AuthorityTemplateItemList& setAuthorityTemplateItem(vector<AuthorityTemplateItemList::AuthorityTemplateItem> && authorityTemplateItem) { DARABONBA_PTR_SET_RVALUE(authorityTemplateItem_, authorityTemplateItem) };


      protected:
        shared_ptr<vector<AuthorityTemplateItemList::AuthorityTemplateItem>> authorityTemplateItem_ {};
      };

      virtual bool empty() const override { return this->authorityTemplateItemList_ == nullptr
        && this->createTime_ == nullptr && this->creatorId_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->templateId_ == nullptr; };
      // authorityTemplateItemList Field Functions 
      bool hasAuthorityTemplateItemList() const { return this->authorityTemplateItemList_ != nullptr;};
      void deleteAuthorityTemplateItemList() { this->authorityTemplateItemList_ = nullptr;};
      inline const AuthorityTemplateView::AuthorityTemplateItemList & getAuthorityTemplateItemList() const { DARABONBA_PTR_GET_CONST(authorityTemplateItemList_, AuthorityTemplateView::AuthorityTemplateItemList) };
      inline AuthorityTemplateView::AuthorityTemplateItemList getAuthorityTemplateItemList() { DARABONBA_PTR_GET(authorityTemplateItemList_, AuthorityTemplateView::AuthorityTemplateItemList) };
      inline AuthorityTemplateView& setAuthorityTemplateItemList(const AuthorityTemplateView::AuthorityTemplateItemList & authorityTemplateItemList) { DARABONBA_PTR_SET_VALUE(authorityTemplateItemList_, authorityTemplateItemList) };
      inline AuthorityTemplateView& setAuthorityTemplateItemList(AuthorityTemplateView::AuthorityTemplateItemList && authorityTemplateItemList) { DARABONBA_PTR_SET_RVALUE(authorityTemplateItemList_, authorityTemplateItemList) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline AuthorityTemplateView& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline int64_t getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
      inline AuthorityTemplateView& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AuthorityTemplateView& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline AuthorityTemplateView& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline AuthorityTemplateView& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      // The resource information in the permission template.
      shared_ptr<AuthorityTemplateView::AuthorityTemplateItemList> authorityTemplateItemList_ {};
      // The time when the permission template was created. The time is in the yyyy-MM-DD HH:mm:ss format.
      shared_ptr<string> createTime_ {};
      // The ID of the user who created the permission template.
      shared_ptr<int64_t> creatorId_ {};
      // The description of the permission template.
      shared_ptr<string> description_ {};
      // The name of the permission template.
      shared_ptr<string> name_ {};
      // The ID of the permission template.
      shared_ptr<int64_t> templateId_ {};
    };

    virtual bool empty() const override { return this->authorityTemplateView_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tid_ == nullptr; };
    // authorityTemplateView Field Functions 
    bool hasAuthorityTemplateView() const { return this->authorityTemplateView_ != nullptr;};
    void deleteAuthorityTemplateView() { this->authorityTemplateView_ = nullptr;};
    inline const GetAuthorityTemplateResponseBody::AuthorityTemplateView & getAuthorityTemplateView() const { DARABONBA_PTR_GET_CONST(authorityTemplateView_, GetAuthorityTemplateResponseBody::AuthorityTemplateView) };
    inline GetAuthorityTemplateResponseBody::AuthorityTemplateView getAuthorityTemplateView() { DARABONBA_PTR_GET(authorityTemplateView_, GetAuthorityTemplateResponseBody::AuthorityTemplateView) };
    inline GetAuthorityTemplateResponseBody& setAuthorityTemplateView(const GetAuthorityTemplateResponseBody::AuthorityTemplateView & authorityTemplateView) { DARABONBA_PTR_SET_VALUE(authorityTemplateView_, authorityTemplateView) };
    inline GetAuthorityTemplateResponseBody& setAuthorityTemplateView(GetAuthorityTemplateResponseBody::AuthorityTemplateView && authorityTemplateView) { DARABONBA_PTR_SET_RVALUE(authorityTemplateView_, authorityTemplateView) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetAuthorityTemplateResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetAuthorityTemplateResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuthorityTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAuthorityTemplateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetAuthorityTemplateResponseBody& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The details of the permission template.
    shared_ptr<GetAuthorityTemplateResponseBody::AuthorityTemplateView> authorityTemplateView_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The ID of the tenant.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
