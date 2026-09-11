// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class ListResourceTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resourceTypes, resourceTypes_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resourceTypes, resourceTypes_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListResourceTypesResponseBody() = default ;
    ListResourceTypesResponseBody(const ListResourceTypesResponseBody &) = default ;
    ListResourceTypesResponseBody(ListResourceTypesResponseBody &&) = default ;
    ListResourceTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTypesResponseBody() = default ;
    ListResourceTypesResponseBody& operator=(const ListResourceTypesResponseBody &) = default ;
    ListResourceTypesResponseBody& operator=(ListResourceTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceTypes& obj) { 
        DARABONBA_PTR_TO_JSON(createOnlyProperties, createOnlyProperties_);
        DARABONBA_PTR_TO_JSON(deleteOnlyProperties, deleteOnlyProperties_);
        DARABONBA_PTR_TO_JSON(filterProperties, filterProperties_);
        DARABONBA_PTR_TO_JSON(getOnlyProperties, getOnlyProperties_);
        DARABONBA_PTR_TO_JSON(getResponseProperties, getResponseProperties_);
        DARABONBA_PTR_TO_JSON(handlers, handlers_);
        DARABONBA_PTR_TO_JSON(info, info_);
        DARABONBA_PTR_TO_JSON(listOnlyProperties, listOnlyProperties_);
        DARABONBA_PTR_TO_JSON(listResponseProperties, listResponseProperties_);
        DARABONBA_PTR_TO_JSON(primaryIdentifier, primaryIdentifier_);
        DARABONBA_PTR_TO_JSON(product, product_);
        DARABONBA_ANY_TO_JSON(properties, properties_);
        DARABONBA_PTR_TO_JSON(publicProperties, publicProperties_);
        DARABONBA_PTR_TO_JSON(readOnlyProperties, readOnlyProperties_);
        DARABONBA_PTR_TO_JSON(required, required_);
        DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(sensitiveInfoProperties, sensitiveInfoProperties_);
        DARABONBA_PTR_TO_JSON(updateOnlyProperties, updateOnlyProperties_);
        DARABONBA_PTR_TO_JSON(updateTypeProperties, updateTypeProperties_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(createOnlyProperties, createOnlyProperties_);
        DARABONBA_PTR_FROM_JSON(deleteOnlyProperties, deleteOnlyProperties_);
        DARABONBA_PTR_FROM_JSON(filterProperties, filterProperties_);
        DARABONBA_PTR_FROM_JSON(getOnlyProperties, getOnlyProperties_);
        DARABONBA_PTR_FROM_JSON(getResponseProperties, getResponseProperties_);
        DARABONBA_PTR_FROM_JSON(handlers, handlers_);
        DARABONBA_PTR_FROM_JSON(info, info_);
        DARABONBA_PTR_FROM_JSON(listOnlyProperties, listOnlyProperties_);
        DARABONBA_PTR_FROM_JSON(listResponseProperties, listResponseProperties_);
        DARABONBA_PTR_FROM_JSON(primaryIdentifier, primaryIdentifier_);
        DARABONBA_PTR_FROM_JSON(product, product_);
        DARABONBA_ANY_FROM_JSON(properties, properties_);
        DARABONBA_PTR_FROM_JSON(publicProperties, publicProperties_);
        DARABONBA_PTR_FROM_JSON(readOnlyProperties, readOnlyProperties_);
        DARABONBA_PTR_FROM_JSON(required, required_);
        DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(sensitiveInfoProperties, sensitiveInfoProperties_);
        DARABONBA_PTR_FROM_JSON(updateOnlyProperties, updateOnlyProperties_);
        DARABONBA_PTR_FROM_JSON(updateTypeProperties, updateTypeProperties_);
      };
      ResourceTypes() = default ;
      ResourceTypes(const ResourceTypes &) = default ;
      ResourceTypes(ResourceTypes &&) = default ;
      ResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceTypes() = default ;
      ResourceTypes& operator=(const ResourceTypes &) = default ;
      ResourceTypes& operator=(ResourceTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Info : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Info& obj) { 
          DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(deliveryScope, deliveryScope_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(title, title_);
        };
        friend void from_json(const Darabonba::Json& j, Info& obj) { 
          DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(deliveryScope, deliveryScope_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(title, title_);
        };
        Info() = default ;
        Info(const Info &) = default ;
        Info(Info &&) = default ;
        Info(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Info() = default ;
        Info& operator=(const Info &) = default ;
        Info& operator=(Info &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->deliveryScope_ == nullptr && this->description_ == nullptr && this->title_ == nullptr; };
        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline Info& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // deliveryScope Field Functions 
        bool hasDeliveryScope() const { return this->deliveryScope_ != nullptr;};
        void deleteDeliveryScope() { this->deliveryScope_ = nullptr;};
        inline string getDeliveryScope() const { DARABONBA_PTR_GET_DEFAULT(deliveryScope_, "") };
        inline Info& setDeliveryScope(string deliveryScope) { DARABONBA_PTR_SET_VALUE(deliveryScope_, deliveryScope) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Info& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Info& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // Billing method\\
        // paid free
        shared_ptr<string> chargeType_ {};
        // The deployment level of the resource.
        // 
        // center
        // 
        // region
        // 
        // zone
        shared_ptr<string> deliveryScope_ {};
        // The description of the resource type.
        shared_ptr<string> description_ {};
        // The name of the resource type.
        shared_ptr<string> title_ {};
      };

      class Handlers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Handlers& obj) { 
          DARABONBA_PTR_TO_JSON(create, create_);
          DARABONBA_PTR_TO_JSON(delete, delete_);
          DARABONBA_PTR_TO_JSON(get, get_);
          DARABONBA_PTR_TO_JSON(list, list_);
          DARABONBA_PTR_TO_JSON(update, update_);
        };
        friend void from_json(const Darabonba::Json& j, Handlers& obj) { 
          DARABONBA_PTR_FROM_JSON(create, create_);
          DARABONBA_PTR_FROM_JSON(delete, delete_);
          DARABONBA_PTR_FROM_JSON(get, get_);
          DARABONBA_PTR_FROM_JSON(list, list_);
          DARABONBA_PTR_FROM_JSON(update, update_);
        };
        Handlers() = default ;
        Handlers(const Handlers &) = default ;
        Handlers(Handlers &&) = default ;
        Handlers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Handlers() = default ;
        Handlers& operator=(const Handlers &) = default ;
        Handlers& operator=(Handlers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Update : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Update& obj) { 
            DARABONBA_PTR_TO_JSON(permissions, permissions_);
          };
          friend void from_json(const Darabonba::Json& j, Update& obj) { 
            DARABONBA_PTR_FROM_JSON(permissions, permissions_);
          };
          Update() = default ;
          Update(const Update &) = default ;
          Update(Update &&) = default ;
          Update(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Update() = default ;
          Update& operator=(const Update &) = default ;
          Update& operator=(Update &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->permissions_ == nullptr; };
          // permissions Field Functions 
          bool hasPermissions() const { return this->permissions_ != nullptr;};
          void deletePermissions() { this->permissions_ = nullptr;};
          inline const vector<string> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<string>) };
          inline vector<string> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<string>) };
          inline Update& setPermissions(const vector<string> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
          inline Update& setPermissions(vector<string> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


        protected:
          // The RAM permissions required.
          shared_ptr<vector<string>> permissions_ {};
        };

        class List : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const List& obj) { 
            DARABONBA_PTR_TO_JSON(permissions, permissions_);
          };
          friend void from_json(const Darabonba::Json& j, List& obj) { 
            DARABONBA_PTR_FROM_JSON(permissions, permissions_);
          };
          List() = default ;
          List(const List &) = default ;
          List(List &&) = default ;
          List(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~List() = default ;
          List& operator=(const List &) = default ;
          List& operator=(List &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->permissions_ == nullptr; };
          // permissions Field Functions 
          bool hasPermissions() const { return this->permissions_ != nullptr;};
          void deletePermissions() { this->permissions_ = nullptr;};
          inline const vector<string> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<string>) };
          inline vector<string> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<string>) };
          inline List& setPermissions(const vector<string> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
          inline List& setPermissions(vector<string> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


        protected:
          // The RAM permissions required.
          shared_ptr<vector<string>> permissions_ {};
        };

        class Get : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Get& obj) { 
            DARABONBA_PTR_TO_JSON(permissions, permissions_);
          };
          friend void from_json(const Darabonba::Json& j, Get& obj) { 
            DARABONBA_PTR_FROM_JSON(permissions, permissions_);
          };
          Get() = default ;
          Get(const Get &) = default ;
          Get(Get &&) = default ;
          Get(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Get() = default ;
          Get& operator=(const Get &) = default ;
          Get& operator=(Get &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->permissions_ == nullptr; };
          // permissions Field Functions 
          bool hasPermissions() const { return this->permissions_ != nullptr;};
          void deletePermissions() { this->permissions_ = nullptr;};
          inline const vector<string> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<string>) };
          inline vector<string> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<string>) };
          inline Get& setPermissions(const vector<string> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
          inline Get& setPermissions(vector<string> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


        protected:
          // The RAM permissions required.
          shared_ptr<vector<string>> permissions_ {};
        };

        class Delete : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Delete& obj) { 
            DARABONBA_PTR_TO_JSON(permissions, permissions_);
          };
          friend void from_json(const Darabonba::Json& j, Delete& obj) { 
            DARABONBA_PTR_FROM_JSON(permissions, permissions_);
          };
          Delete() = default ;
          Delete(const Delete &) = default ;
          Delete(Delete &&) = default ;
          Delete(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Delete() = default ;
          Delete& operator=(const Delete &) = default ;
          Delete& operator=(Delete &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->permissions_ == nullptr; };
          // permissions Field Functions 
          bool hasPermissions() const { return this->permissions_ != nullptr;};
          void deletePermissions() { this->permissions_ = nullptr;};
          inline const vector<string> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<string>) };
          inline vector<string> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<string>) };
          inline Delete& setPermissions(const vector<string> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
          inline Delete& setPermissions(vector<string> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


        protected:
          // The RAM permissions required.
          shared_ptr<vector<string>> permissions_ {};
        };

        class Create : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Create& obj) { 
            DARABONBA_PTR_TO_JSON(permissions, permissions_);
          };
          friend void from_json(const Darabonba::Json& j, Create& obj) { 
            DARABONBA_PTR_FROM_JSON(permissions, permissions_);
          };
          Create() = default ;
          Create(const Create &) = default ;
          Create(Create &&) = default ;
          Create(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Create() = default ;
          Create& operator=(const Create &) = default ;
          Create& operator=(Create &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->permissions_ == nullptr; };
          // permissions Field Functions 
          bool hasPermissions() const { return this->permissions_ != nullptr;};
          void deletePermissions() { this->permissions_ = nullptr;};
          inline const vector<string> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<string>) };
          inline vector<string> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<string>) };
          inline Create& setPermissions(const vector<string> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
          inline Create& setPermissions(vector<string> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


        protected:
          // The RAM permissions required.
          shared_ptr<vector<string>> permissions_ {};
        };

        virtual bool empty() const override { return this->create_ == nullptr
        && this->delete_ == nullptr && this->get_ == nullptr && this->list_ == nullptr && this->update_ == nullptr; };
        // create Field Functions 
        bool hasCreate() const { return this->create_ != nullptr;};
        void deleteCreate() { this->create_ = nullptr;};
        inline const Handlers::Create & getCreate() const { DARABONBA_PTR_GET_CONST(create_, Handlers::Create) };
        inline Handlers::Create getCreate() { DARABONBA_PTR_GET(create_, Handlers::Create) };
        inline Handlers& setCreate(const Handlers::Create & create) { DARABONBA_PTR_SET_VALUE(create_, create) };
        inline Handlers& setCreate(Handlers::Create && create) { DARABONBA_PTR_SET_RVALUE(create_, create) };


        // delete Field Functions 
        bool hasDelete() const { return this->delete_ != nullptr;};
        void deleteDelete() { this->delete_ = nullptr;};
        inline const Handlers::Delete & getDelete() const { DARABONBA_PTR_GET_CONST(delete_, Handlers::Delete) };
        inline Handlers::Delete getDelete() { DARABONBA_PTR_GET(delete_, Handlers::Delete) };
        inline Handlers& setDelete(const Handlers::Delete & _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };
        inline Handlers& setDelete(Handlers::Delete && _delete) { DARABONBA_PTR_SET_RVALUE(delete_, _delete) };


        // get Field Functions 
        bool hasGet() const { return this->get_ != nullptr;};
        void deleteGet() { this->get_ = nullptr;};
        inline const Handlers::Get & getGet() const { DARABONBA_PTR_GET_CONST(get_, Handlers::Get) };
        inline Handlers::Get getGet() { DARABONBA_PTR_GET(get_, Handlers::Get) };
        inline Handlers& setGet(const Handlers::Get & get) { DARABONBA_PTR_SET_VALUE(get_, get) };
        inline Handlers& setGet(Handlers::Get && get) { DARABONBA_PTR_SET_RVALUE(get_, get) };


        // list Field Functions 
        bool hasList() const { return this->list_ != nullptr;};
        void deleteList() { this->list_ = nullptr;};
        inline const Handlers::List & getList() const { DARABONBA_PTR_GET_CONST(list_, Handlers::List) };
        inline Handlers::List getList() { DARABONBA_PTR_GET(list_, Handlers::List) };
        inline Handlers& setList(const Handlers::List & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
        inline Handlers& setList(Handlers::List && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


        // update Field Functions 
        bool hasUpdate() const { return this->update_ != nullptr;};
        void deleteUpdate() { this->update_ = nullptr;};
        inline const Handlers::Update & getUpdate() const { DARABONBA_PTR_GET_CONST(update_, Handlers::Update) };
        inline Handlers::Update getUpdate() { DARABONBA_PTR_GET(update_, Handlers::Update) };
        inline Handlers& setUpdate(const Handlers::Update & update) { DARABONBA_PTR_SET_VALUE(update_, update) };
        inline Handlers& setUpdate(Handlers::Update && update) { DARABONBA_PTR_SET_RVALUE(update_, update) };


      protected:
        // The information about the create operation.
        shared_ptr<Handlers::Create> create_ {};
        // The information about the delete operation.
        shared_ptr<Handlers::Delete> delete_ {};
        // The information about the query operation.
        shared_ptr<Handlers::Get> get_ {};
        // The information about the list operation.
        shared_ptr<Handlers::List> list_ {};
        // The information about the update operation.
        shared_ptr<Handlers::Update> update_ {};
      };

      virtual bool empty() const override { return this->createOnlyProperties_ == nullptr
        && this->deleteOnlyProperties_ == nullptr && this->filterProperties_ == nullptr && this->getOnlyProperties_ == nullptr && this->getResponseProperties_ == nullptr && this->handlers_ == nullptr
        && this->info_ == nullptr && this->listOnlyProperties_ == nullptr && this->listResponseProperties_ == nullptr && this->primaryIdentifier_ == nullptr && this->product_ == nullptr
        && this->properties_ == nullptr && this->publicProperties_ == nullptr && this->readOnlyProperties_ == nullptr && this->required_ == nullptr && this->resourceType_ == nullptr
        && this->sensitiveInfoProperties_ == nullptr && this->updateOnlyProperties_ == nullptr && this->updateTypeProperties_ == nullptr; };
      // createOnlyProperties Field Functions 
      bool hasCreateOnlyProperties() const { return this->createOnlyProperties_ != nullptr;};
      void deleteCreateOnlyProperties() { this->createOnlyProperties_ = nullptr;};
      inline const vector<string> & getCreateOnlyProperties() const { DARABONBA_PTR_GET_CONST(createOnlyProperties_, vector<string>) };
      inline vector<string> getCreateOnlyProperties() { DARABONBA_PTR_GET(createOnlyProperties_, vector<string>) };
      inline ResourceTypes& setCreateOnlyProperties(const vector<string> & createOnlyProperties) { DARABONBA_PTR_SET_VALUE(createOnlyProperties_, createOnlyProperties) };
      inline ResourceTypes& setCreateOnlyProperties(vector<string> && createOnlyProperties) { DARABONBA_PTR_SET_RVALUE(createOnlyProperties_, createOnlyProperties) };


      // deleteOnlyProperties Field Functions 
      bool hasDeleteOnlyProperties() const { return this->deleteOnlyProperties_ != nullptr;};
      void deleteDeleteOnlyProperties() { this->deleteOnlyProperties_ = nullptr;};
      inline const vector<string> & getDeleteOnlyProperties() const { DARABONBA_PTR_GET_CONST(deleteOnlyProperties_, vector<string>) };
      inline vector<string> getDeleteOnlyProperties() { DARABONBA_PTR_GET(deleteOnlyProperties_, vector<string>) };
      inline ResourceTypes& setDeleteOnlyProperties(const vector<string> & deleteOnlyProperties) { DARABONBA_PTR_SET_VALUE(deleteOnlyProperties_, deleteOnlyProperties) };
      inline ResourceTypes& setDeleteOnlyProperties(vector<string> && deleteOnlyProperties) { DARABONBA_PTR_SET_RVALUE(deleteOnlyProperties_, deleteOnlyProperties) };


      // filterProperties Field Functions 
      bool hasFilterProperties() const { return this->filterProperties_ != nullptr;};
      void deleteFilterProperties() { this->filterProperties_ = nullptr;};
      inline const vector<string> & getFilterProperties() const { DARABONBA_PTR_GET_CONST(filterProperties_, vector<string>) };
      inline vector<string> getFilterProperties() { DARABONBA_PTR_GET(filterProperties_, vector<string>) };
      inline ResourceTypes& setFilterProperties(const vector<string> & filterProperties) { DARABONBA_PTR_SET_VALUE(filterProperties_, filterProperties) };
      inline ResourceTypes& setFilterProperties(vector<string> && filterProperties) { DARABONBA_PTR_SET_RVALUE(filterProperties_, filterProperties) };


      // getOnlyProperties Field Functions 
      bool hasGetOnlyProperties() const { return this->getOnlyProperties_ != nullptr;};
      void deleteGetOnlyProperties() { this->getOnlyProperties_ = nullptr;};
      inline const vector<string> & getGetOnlyProperties() const { DARABONBA_PTR_GET_CONST(getOnlyProperties_, vector<string>) };
      inline vector<string> getGetOnlyProperties() { DARABONBA_PTR_GET(getOnlyProperties_, vector<string>) };
      inline ResourceTypes& setGetOnlyProperties(const vector<string> & getOnlyProperties) { DARABONBA_PTR_SET_VALUE(getOnlyProperties_, getOnlyProperties) };
      inline ResourceTypes& setGetOnlyProperties(vector<string> && getOnlyProperties) { DARABONBA_PTR_SET_RVALUE(getOnlyProperties_, getOnlyProperties) };


      // getResponseProperties Field Functions 
      bool hasGetResponseProperties() const { return this->getResponseProperties_ != nullptr;};
      void deleteGetResponseProperties() { this->getResponseProperties_ = nullptr;};
      inline const vector<string> & getGetResponseProperties() const { DARABONBA_PTR_GET_CONST(getResponseProperties_, vector<string>) };
      inline vector<string> getGetResponseProperties() { DARABONBA_PTR_GET(getResponseProperties_, vector<string>) };
      inline ResourceTypes& setGetResponseProperties(const vector<string> & getResponseProperties) { DARABONBA_PTR_SET_VALUE(getResponseProperties_, getResponseProperties) };
      inline ResourceTypes& setGetResponseProperties(vector<string> && getResponseProperties) { DARABONBA_PTR_SET_RVALUE(getResponseProperties_, getResponseProperties) };


      // handlers Field Functions 
      bool hasHandlers() const { return this->handlers_ != nullptr;};
      void deleteHandlers() { this->handlers_ = nullptr;};
      inline const ResourceTypes::Handlers & getHandlers() const { DARABONBA_PTR_GET_CONST(handlers_, ResourceTypes::Handlers) };
      inline ResourceTypes::Handlers getHandlers() { DARABONBA_PTR_GET(handlers_, ResourceTypes::Handlers) };
      inline ResourceTypes& setHandlers(const ResourceTypes::Handlers & handlers) { DARABONBA_PTR_SET_VALUE(handlers_, handlers) };
      inline ResourceTypes& setHandlers(ResourceTypes::Handlers && handlers) { DARABONBA_PTR_SET_RVALUE(handlers_, handlers) };


      // info Field Functions 
      bool hasInfo() const { return this->info_ != nullptr;};
      void deleteInfo() { this->info_ = nullptr;};
      inline const ResourceTypes::Info & getInfo() const { DARABONBA_PTR_GET_CONST(info_, ResourceTypes::Info) };
      inline ResourceTypes::Info getInfo() { DARABONBA_PTR_GET(info_, ResourceTypes::Info) };
      inline ResourceTypes& setInfo(const ResourceTypes::Info & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
      inline ResourceTypes& setInfo(ResourceTypes::Info && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


      // listOnlyProperties Field Functions 
      bool hasListOnlyProperties() const { return this->listOnlyProperties_ != nullptr;};
      void deleteListOnlyProperties() { this->listOnlyProperties_ = nullptr;};
      inline const vector<string> & getListOnlyProperties() const { DARABONBA_PTR_GET_CONST(listOnlyProperties_, vector<string>) };
      inline vector<string> getListOnlyProperties() { DARABONBA_PTR_GET(listOnlyProperties_, vector<string>) };
      inline ResourceTypes& setListOnlyProperties(const vector<string> & listOnlyProperties) { DARABONBA_PTR_SET_VALUE(listOnlyProperties_, listOnlyProperties) };
      inline ResourceTypes& setListOnlyProperties(vector<string> && listOnlyProperties) { DARABONBA_PTR_SET_RVALUE(listOnlyProperties_, listOnlyProperties) };


      // listResponseProperties Field Functions 
      bool hasListResponseProperties() const { return this->listResponseProperties_ != nullptr;};
      void deleteListResponseProperties() { this->listResponseProperties_ = nullptr;};
      inline const vector<string> & getListResponseProperties() const { DARABONBA_PTR_GET_CONST(listResponseProperties_, vector<string>) };
      inline vector<string> getListResponseProperties() { DARABONBA_PTR_GET(listResponseProperties_, vector<string>) };
      inline ResourceTypes& setListResponseProperties(const vector<string> & listResponseProperties) { DARABONBA_PTR_SET_VALUE(listResponseProperties_, listResponseProperties) };
      inline ResourceTypes& setListResponseProperties(vector<string> && listResponseProperties) { DARABONBA_PTR_SET_RVALUE(listResponseProperties_, listResponseProperties) };


      // primaryIdentifier Field Functions 
      bool hasPrimaryIdentifier() const { return this->primaryIdentifier_ != nullptr;};
      void deletePrimaryIdentifier() { this->primaryIdentifier_ = nullptr;};
      inline string getPrimaryIdentifier() const { DARABONBA_PTR_GET_DEFAULT(primaryIdentifier_, "") };
      inline ResourceTypes& setPrimaryIdentifier(string primaryIdentifier) { DARABONBA_PTR_SET_VALUE(primaryIdentifier_, primaryIdentifier) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline ResourceTypes& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline       const Darabonba::Json & getProperties() const { DARABONBA_GET(properties_) };
      Darabonba::Json & getProperties() { DARABONBA_GET(properties_) };
      inline ResourceTypes& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
      inline ResourceTypes& setProperties(Darabonba::Json && properties) { DARABONBA_SET_RVALUE(properties_, properties) };


      // publicProperties Field Functions 
      bool hasPublicProperties() const { return this->publicProperties_ != nullptr;};
      void deletePublicProperties() { this->publicProperties_ = nullptr;};
      inline const vector<string> & getPublicProperties() const { DARABONBA_PTR_GET_CONST(publicProperties_, vector<string>) };
      inline vector<string> getPublicProperties() { DARABONBA_PTR_GET(publicProperties_, vector<string>) };
      inline ResourceTypes& setPublicProperties(const vector<string> & publicProperties) { DARABONBA_PTR_SET_VALUE(publicProperties_, publicProperties) };
      inline ResourceTypes& setPublicProperties(vector<string> && publicProperties) { DARABONBA_PTR_SET_RVALUE(publicProperties_, publicProperties) };


      // readOnlyProperties Field Functions 
      bool hasReadOnlyProperties() const { return this->readOnlyProperties_ != nullptr;};
      void deleteReadOnlyProperties() { this->readOnlyProperties_ = nullptr;};
      inline const vector<string> & getReadOnlyProperties() const { DARABONBA_PTR_GET_CONST(readOnlyProperties_, vector<string>) };
      inline vector<string> getReadOnlyProperties() { DARABONBA_PTR_GET(readOnlyProperties_, vector<string>) };
      inline ResourceTypes& setReadOnlyProperties(const vector<string> & readOnlyProperties) { DARABONBA_PTR_SET_VALUE(readOnlyProperties_, readOnlyProperties) };
      inline ResourceTypes& setReadOnlyProperties(vector<string> && readOnlyProperties) { DARABONBA_PTR_SET_RVALUE(readOnlyProperties_, readOnlyProperties) };


      // required Field Functions 
      bool hasRequired() const { return this->required_ != nullptr;};
      void deleteRequired() { this->required_ = nullptr;};
      inline const vector<string> & getRequired() const { DARABONBA_PTR_GET_CONST(required_, vector<string>) };
      inline vector<string> getRequired() { DARABONBA_PTR_GET(required_, vector<string>) };
      inline ResourceTypes& setRequired(const vector<string> & required) { DARABONBA_PTR_SET_VALUE(required_, required) };
      inline ResourceTypes& setRequired(vector<string> && required) { DARABONBA_PTR_SET_RVALUE(required_, required) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ResourceTypes& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // sensitiveInfoProperties Field Functions 
      bool hasSensitiveInfoProperties() const { return this->sensitiveInfoProperties_ != nullptr;};
      void deleteSensitiveInfoProperties() { this->sensitiveInfoProperties_ = nullptr;};
      inline const vector<string> & getSensitiveInfoProperties() const { DARABONBA_PTR_GET_CONST(sensitiveInfoProperties_, vector<string>) };
      inline vector<string> getSensitiveInfoProperties() { DARABONBA_PTR_GET(sensitiveInfoProperties_, vector<string>) };
      inline ResourceTypes& setSensitiveInfoProperties(const vector<string> & sensitiveInfoProperties) { DARABONBA_PTR_SET_VALUE(sensitiveInfoProperties_, sensitiveInfoProperties) };
      inline ResourceTypes& setSensitiveInfoProperties(vector<string> && sensitiveInfoProperties) { DARABONBA_PTR_SET_RVALUE(sensitiveInfoProperties_, sensitiveInfoProperties) };


      // updateOnlyProperties Field Functions 
      bool hasUpdateOnlyProperties() const { return this->updateOnlyProperties_ != nullptr;};
      void deleteUpdateOnlyProperties() { this->updateOnlyProperties_ = nullptr;};
      inline const vector<string> & getUpdateOnlyProperties() const { DARABONBA_PTR_GET_CONST(updateOnlyProperties_, vector<string>) };
      inline vector<string> getUpdateOnlyProperties() { DARABONBA_PTR_GET(updateOnlyProperties_, vector<string>) };
      inline ResourceTypes& setUpdateOnlyProperties(const vector<string> & updateOnlyProperties) { DARABONBA_PTR_SET_VALUE(updateOnlyProperties_, updateOnlyProperties) };
      inline ResourceTypes& setUpdateOnlyProperties(vector<string> && updateOnlyProperties) { DARABONBA_PTR_SET_RVALUE(updateOnlyProperties_, updateOnlyProperties) };


      // updateTypeProperties Field Functions 
      bool hasUpdateTypeProperties() const { return this->updateTypeProperties_ != nullptr;};
      void deleteUpdateTypeProperties() { this->updateTypeProperties_ = nullptr;};
      inline const vector<string> & getUpdateTypeProperties() const { DARABONBA_PTR_GET_CONST(updateTypeProperties_, vector<string>) };
      inline vector<string> getUpdateTypeProperties() { DARABONBA_PTR_GET(updateTypeProperties_, vector<string>) };
      inline ResourceTypes& setUpdateTypeProperties(const vector<string> & updateTypeProperties) { DARABONBA_PTR_SET_VALUE(updateTypeProperties_, updateTypeProperties) };
      inline ResourceTypes& setUpdateTypeProperties(vector<string> && updateTypeProperties) { DARABONBA_PTR_SET_RVALUE(updateTypeProperties_, updateTypeProperties) };


    protected:
      // The properties that are specific to the create operation. You need to specify these properties when you create the resource. These properties are not returned when you query the resource.
      shared_ptr<vector<string>> createOnlyProperties_ {};
      // The properties that are specific to the delete operation. You need to specify these properties when you delete the resource. These properties are not returned when you query the resource.
      shared_ptr<vector<string>> deleteOnlyProperties_ {};
      // The properties that can be used to filter the resource when you list the resource.
      shared_ptr<vector<string>> filterProperties_ {};
      // The properties that are specific to the query operation. You need to specify these properties when you query the resource. These properties are not returned in the query result.
      shared_ptr<vector<string>> getOnlyProperties_ {};
      // The properties that are returned when you query the resource.
      shared_ptr<vector<string>> getResponseProperties_ {};
      // The information about the operation, including the required Resource Access Management (RAM) permissions.
      shared_ptr<ResourceTypes::Handlers> handlers_ {};
      // The information about the resource type.
      shared_ptr<ResourceTypes::Info> info_ {};
      // The properties that are specific to the list operation. You need to specify these properties when you list the resource. These properties are not returned when you query the resource.
      shared_ptr<vector<string>> listOnlyProperties_ {};
      // The properties that are returned when you list the resource.
      shared_ptr<vector<string>> listResponseProperties_ {};
      // The ID of the resource.
      shared_ptr<string> primaryIdentifier_ {};
      // The code of the service.
      shared_ptr<string> product_ {};
      // The resource properties. The key specifies the property name and the value specifies the details of the property.
      Darabonba::Json properties_ {};
      // The common properties of the resource. The common properties are not operation-specific.
      shared_ptr<vector<string>> publicProperties_ {};
      // The read-only properties. These properties are returned only when you list or query the resource. You do not need to specify these properties when you create or update the resource.
      shared_ptr<vector<string>> readOnlyProperties_ {};
      // The properties that must be specified when you create the resource.
      shared_ptr<vector<string>> required_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
      // The sensitive properties, such as the password.
      shared_ptr<vector<string>> sensitiveInfoProperties_ {};
      // The properties that are specific to the update operation. You need to specify these properties when you update the resource. These properties are not returned when you query the resource.
      shared_ptr<vector<string>> updateOnlyProperties_ {};
      // The properties that can be modified.
      shared_ptr<vector<string>> updateTypeProperties_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->resourceTypes_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResourceTypesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceTypesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const vector<ListResourceTypesResponseBody::ResourceTypes> & getResourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<ListResourceTypesResponseBody::ResourceTypes>) };
    inline vector<ListResourceTypesResponseBody::ResourceTypes> getResourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<ListResourceTypesResponseBody::ResourceTypes>) };
    inline ListResourceTypesResponseBody& setResourceTypes(const vector<ListResourceTypesResponseBody::ResourceTypes> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline ListResourceTypesResponseBody& setResourceTypes(vector<ListResourceTypesResponseBody::ResourceTypes> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListResourceTypesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The ID of a request.
    shared_ptr<string> requestId_ {};
    // The information about the resource types.
    shared_ptr<vector<ListResourceTypesResponseBody::ResourceTypes>> resourceTypes_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
