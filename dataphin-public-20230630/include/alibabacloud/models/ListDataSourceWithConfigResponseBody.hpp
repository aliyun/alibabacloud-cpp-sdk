// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCEWITHCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCEWITHCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataSourceWithConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceWithConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceWithConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataSourceWithConfigResponseBody() = default ;
    ListDataSourceWithConfigResponseBody(const ListDataSourceWithConfigResponseBody &) = default ;
    ListDataSourceWithConfigResponseBody(ListDataSourceWithConfigResponseBody &&) = default ;
    ListDataSourceWithConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceWithConfigResponseBody() = default ;
    ListDataSourceWithConfigResponseBody& operator=(const ListDataSourceWithConfigResponseBody &) = default ;
    ListDataSourceWithConfigResponseBody& operator=(ListDataSourceWithConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(DataSourceList, dataSourceList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSourceList, dataSourceList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataSourceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSourceList& obj) { 
          DARABONBA_PTR_TO_JSON(DevDataSourceInfo, devDataSourceInfo_);
          DARABONBA_PTR_TO_JSON(ProdDataSourceInfo, prodDataSourceInfo_);
        };
        friend void from_json(const Darabonba::Json& j, DataSourceList& obj) { 
          DARABONBA_PTR_FROM_JSON(DevDataSourceInfo, devDataSourceInfo_);
          DARABONBA_PTR_FROM_JSON(ProdDataSourceInfo, prodDataSourceInfo_);
        };
        DataSourceList() = default ;
        DataSourceList(const DataSourceList &) = default ;
        DataSourceList(DataSourceList &&) = default ;
        DataSourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSourceList() = default ;
        DataSourceList& operator=(const DataSourceList &) = default ;
        DataSourceList& operator=(DataSourceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ProdDataSourceInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ProdDataSourceInfo& obj) { 
            DARABONBA_PTR_TO_JSON(ConfigItemList, configItemList_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(Creator, creator_);
            DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Env, env_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Owner, owner_);
            DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
            DARABONBA_PTR_TO_JSON(Scope, scope_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, ProdDataSourceInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(ConfigItemList, configItemList_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(Creator, creator_);
            DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Env, env_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Owner, owner_);
            DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
            DARABONBA_PTR_FROM_JSON(Scope, scope_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          ProdDataSourceInfo() = default ;
          ProdDataSourceInfo(const ProdDataSourceInfo &) = default ;
          ProdDataSourceInfo(ProdDataSourceInfo &&) = default ;
          ProdDataSourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ProdDataSourceInfo() = default ;
          ProdDataSourceInfo& operator=(const ProdDataSourceInfo &) = default ;
          ProdDataSourceInfo& operator=(ProdDataSourceInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ConfigItemList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ConfigItemList& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, ConfigItemList& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            ConfigItemList() = default ;
            ConfigItemList(const ConfigItemList &) = default ;
            ConfigItemList(ConfigItemList &&) = default ;
            ConfigItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ConfigItemList() = default ;
            ConfigItemList& operator=(const ConfigItemList &) = default ;
            ConfigItemList& operator=(ConfigItemList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline ConfigItemList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline ConfigItemList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> key_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->configItemList_ == nullptr
        && this->createTime_ == nullptr && this->creator_ == nullptr && this->creatorName_ == nullptr && this->description_ == nullptr && this->env_ == nullptr
        && this->id_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->ownerName_ == nullptr
        && this->scope_ == nullptr && this->type_ == nullptr; };
          // configItemList Field Functions 
          bool hasConfigItemList() const { return this->configItemList_ != nullptr;};
          void deleteConfigItemList() { this->configItemList_ = nullptr;};
          inline const vector<ProdDataSourceInfo::ConfigItemList> & getConfigItemList() const { DARABONBA_PTR_GET_CONST(configItemList_, vector<ProdDataSourceInfo::ConfigItemList>) };
          inline vector<ProdDataSourceInfo::ConfigItemList> getConfigItemList() { DARABONBA_PTR_GET(configItemList_, vector<ProdDataSourceInfo::ConfigItemList>) };
          inline ProdDataSourceInfo& setConfigItemList(const vector<ProdDataSourceInfo::ConfigItemList> & configItemList) { DARABONBA_PTR_SET_VALUE(configItemList_, configItemList) };
          inline ProdDataSourceInfo& setConfigItemList(vector<ProdDataSourceInfo::ConfigItemList> && configItemList) { DARABONBA_PTR_SET_RVALUE(configItemList_, configItemList) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline ProdDataSourceInfo& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // creator Field Functions 
          bool hasCreator() const { return this->creator_ != nullptr;};
          void deleteCreator() { this->creator_ = nullptr;};
          inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
          inline ProdDataSourceInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


          // creatorName Field Functions 
          bool hasCreatorName() const { return this->creatorName_ != nullptr;};
          void deleteCreatorName() { this->creatorName_ = nullptr;};
          inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
          inline ProdDataSourceInfo& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline ProdDataSourceInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // env Field Functions 
          bool hasEnv() const { return this->env_ != nullptr;};
          void deleteEnv() { this->env_ = nullptr;};
          inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
          inline ProdDataSourceInfo& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline ProdDataSourceInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // modifyTime Field Functions 
          bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
          void deleteModifyTime() { this->modifyTime_ = nullptr;};
          inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
          inline ProdDataSourceInfo& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ProdDataSourceInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // owner Field Functions 
          bool hasOwner() const { return this->owner_ != nullptr;};
          void deleteOwner() { this->owner_ = nullptr;};
          inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
          inline ProdDataSourceInfo& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


          // ownerName Field Functions 
          bool hasOwnerName() const { return this->ownerName_ != nullptr;};
          void deleteOwnerName() { this->ownerName_ = nullptr;};
          inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
          inline ProdDataSourceInfo& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


          // scope Field Functions 
          bool hasScope() const { return this->scope_ != nullptr;};
          void deleteScope() { this->scope_ = nullptr;};
          inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
          inline ProdDataSourceInfo& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline ProdDataSourceInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<vector<ProdDataSourceInfo::ConfigItemList>> configItemList_ {};
          shared_ptr<int64_t> createTime_ {};
          shared_ptr<string> creator_ {};
          shared_ptr<string> creatorName_ {};
          shared_ptr<string> description_ {};
          shared_ptr<string> env_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<int64_t> modifyTime_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> owner_ {};
          shared_ptr<string> ownerName_ {};
          shared_ptr<string> scope_ {};
          shared_ptr<string> type_ {};
        };

        class DevDataSourceInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DevDataSourceInfo& obj) { 
            DARABONBA_PTR_TO_JSON(ConfigItemList, configItemList_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(Creator, creator_);
            DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Env, env_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Owner, owner_);
            DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
            DARABONBA_PTR_TO_JSON(Scope, scope_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, DevDataSourceInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(ConfigItemList, configItemList_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(Creator, creator_);
            DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Env, env_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Owner, owner_);
            DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
            DARABONBA_PTR_FROM_JSON(Scope, scope_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          DevDataSourceInfo() = default ;
          DevDataSourceInfo(const DevDataSourceInfo &) = default ;
          DevDataSourceInfo(DevDataSourceInfo &&) = default ;
          DevDataSourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DevDataSourceInfo() = default ;
          DevDataSourceInfo& operator=(const DevDataSourceInfo &) = default ;
          DevDataSourceInfo& operator=(DevDataSourceInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ConfigItemList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ConfigItemList& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, ConfigItemList& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            ConfigItemList() = default ;
            ConfigItemList(const ConfigItemList &) = default ;
            ConfigItemList(ConfigItemList &&) = default ;
            ConfigItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ConfigItemList() = default ;
            ConfigItemList& operator=(const ConfigItemList &) = default ;
            ConfigItemList& operator=(ConfigItemList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline ConfigItemList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline ConfigItemList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> key_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->configItemList_ == nullptr
        && this->createTime_ == nullptr && this->creator_ == nullptr && this->creatorName_ == nullptr && this->description_ == nullptr && this->env_ == nullptr
        && this->id_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->ownerName_ == nullptr
        && this->scope_ == nullptr && this->type_ == nullptr; };
          // configItemList Field Functions 
          bool hasConfigItemList() const { return this->configItemList_ != nullptr;};
          void deleteConfigItemList() { this->configItemList_ = nullptr;};
          inline const vector<DevDataSourceInfo::ConfigItemList> & getConfigItemList() const { DARABONBA_PTR_GET_CONST(configItemList_, vector<DevDataSourceInfo::ConfigItemList>) };
          inline vector<DevDataSourceInfo::ConfigItemList> getConfigItemList() { DARABONBA_PTR_GET(configItemList_, vector<DevDataSourceInfo::ConfigItemList>) };
          inline DevDataSourceInfo& setConfigItemList(const vector<DevDataSourceInfo::ConfigItemList> & configItemList) { DARABONBA_PTR_SET_VALUE(configItemList_, configItemList) };
          inline DevDataSourceInfo& setConfigItemList(vector<DevDataSourceInfo::ConfigItemList> && configItemList) { DARABONBA_PTR_SET_RVALUE(configItemList_, configItemList) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline DevDataSourceInfo& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // creator Field Functions 
          bool hasCreator() const { return this->creator_ != nullptr;};
          void deleteCreator() { this->creator_ = nullptr;};
          inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
          inline DevDataSourceInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


          // creatorName Field Functions 
          bool hasCreatorName() const { return this->creatorName_ != nullptr;};
          void deleteCreatorName() { this->creatorName_ = nullptr;};
          inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
          inline DevDataSourceInfo& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline DevDataSourceInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // env Field Functions 
          bool hasEnv() const { return this->env_ != nullptr;};
          void deleteEnv() { this->env_ = nullptr;};
          inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
          inline DevDataSourceInfo& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline DevDataSourceInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // modifyTime Field Functions 
          bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
          void deleteModifyTime() { this->modifyTime_ = nullptr;};
          inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
          inline DevDataSourceInfo& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline DevDataSourceInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // owner Field Functions 
          bool hasOwner() const { return this->owner_ != nullptr;};
          void deleteOwner() { this->owner_ = nullptr;};
          inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
          inline DevDataSourceInfo& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


          // ownerName Field Functions 
          bool hasOwnerName() const { return this->ownerName_ != nullptr;};
          void deleteOwnerName() { this->ownerName_ = nullptr;};
          inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
          inline DevDataSourceInfo& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


          // scope Field Functions 
          bool hasScope() const { return this->scope_ != nullptr;};
          void deleteScope() { this->scope_ = nullptr;};
          inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
          inline DevDataSourceInfo& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline DevDataSourceInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<vector<DevDataSourceInfo::ConfigItemList>> configItemList_ {};
          shared_ptr<int64_t> createTime_ {};
          shared_ptr<string> creator_ {};
          shared_ptr<string> creatorName_ {};
          shared_ptr<string> description_ {};
          shared_ptr<string> env_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<int64_t> modifyTime_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> owner_ {};
          shared_ptr<string> ownerName_ {};
          shared_ptr<string> scope_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->devDataSourceInfo_ == nullptr
        && this->prodDataSourceInfo_ == nullptr; };
        // devDataSourceInfo Field Functions 
        bool hasDevDataSourceInfo() const { return this->devDataSourceInfo_ != nullptr;};
        void deleteDevDataSourceInfo() { this->devDataSourceInfo_ = nullptr;};
        inline const DataSourceList::DevDataSourceInfo & getDevDataSourceInfo() const { DARABONBA_PTR_GET_CONST(devDataSourceInfo_, DataSourceList::DevDataSourceInfo) };
        inline DataSourceList::DevDataSourceInfo getDevDataSourceInfo() { DARABONBA_PTR_GET(devDataSourceInfo_, DataSourceList::DevDataSourceInfo) };
        inline DataSourceList& setDevDataSourceInfo(const DataSourceList::DevDataSourceInfo & devDataSourceInfo) { DARABONBA_PTR_SET_VALUE(devDataSourceInfo_, devDataSourceInfo) };
        inline DataSourceList& setDevDataSourceInfo(DataSourceList::DevDataSourceInfo && devDataSourceInfo) { DARABONBA_PTR_SET_RVALUE(devDataSourceInfo_, devDataSourceInfo) };


        // prodDataSourceInfo Field Functions 
        bool hasProdDataSourceInfo() const { return this->prodDataSourceInfo_ != nullptr;};
        void deleteProdDataSourceInfo() { this->prodDataSourceInfo_ = nullptr;};
        inline const DataSourceList::ProdDataSourceInfo & getProdDataSourceInfo() const { DARABONBA_PTR_GET_CONST(prodDataSourceInfo_, DataSourceList::ProdDataSourceInfo) };
        inline DataSourceList::ProdDataSourceInfo getProdDataSourceInfo() { DARABONBA_PTR_GET(prodDataSourceInfo_, DataSourceList::ProdDataSourceInfo) };
        inline DataSourceList& setProdDataSourceInfo(const DataSourceList::ProdDataSourceInfo & prodDataSourceInfo) { DARABONBA_PTR_SET_VALUE(prodDataSourceInfo_, prodDataSourceInfo) };
        inline DataSourceList& setProdDataSourceInfo(DataSourceList::ProdDataSourceInfo && prodDataSourceInfo) { DARABONBA_PTR_SET_RVALUE(prodDataSourceInfo_, prodDataSourceInfo) };


      protected:
        // 开发环境数据源信息
        shared_ptr<DataSourceList::DevDataSourceInfo> devDataSourceInfo_ {};
        // 生产环境数据源
        shared_ptr<DataSourceList::ProdDataSourceInfo> prodDataSourceInfo_ {};
      };

      virtual bool empty() const override { return this->dataSourceList_ == nullptr
        && this->totalCount_ == nullptr; };
      // dataSourceList Field Functions 
      bool hasDataSourceList() const { return this->dataSourceList_ != nullptr;};
      void deleteDataSourceList() { this->dataSourceList_ = nullptr;};
      inline const vector<PageResult::DataSourceList> & getDataSourceList() const { DARABONBA_PTR_GET_CONST(dataSourceList_, vector<PageResult::DataSourceList>) };
      inline vector<PageResult::DataSourceList> getDataSourceList() { DARABONBA_PTR_GET(dataSourceList_, vector<PageResult::DataSourceList>) };
      inline PageResult& setDataSourceList(const vector<PageResult::DataSourceList> & dataSourceList) { DARABONBA_PTR_SET_VALUE(dataSourceList_, dataSourceList) };
      inline PageResult& setDataSourceList(vector<PageResult::DataSourceList> && dataSourceList) { DARABONBA_PTR_SET_RVALUE(dataSourceList_, dataSourceList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline PageResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageResult::DataSourceList>> dataSourceList_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDataSourceWithConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDataSourceWithConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDataSourceWithConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListDataSourceWithConfigResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListDataSourceWithConfigResponseBody::PageResult) };
    inline ListDataSourceWithConfigResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListDataSourceWithConfigResponseBody::PageResult) };
    inline ListDataSourceWithConfigResponseBody& setPageResult(const ListDataSourceWithConfigResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListDataSourceWithConfigResponseBody& setPageResult(ListDataSourceWithConfigResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataSourceWithConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataSourceWithConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListDataSourceWithConfigResponseBody::PageResult> pageResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
