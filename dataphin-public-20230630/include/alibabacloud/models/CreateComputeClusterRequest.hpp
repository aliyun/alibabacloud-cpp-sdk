// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPUTECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPUTECLUSTERREQUEST_HPP_
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
  class CreateComputeClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComputeClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterConfig, clusterConfig_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComputeClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterConfig, clusterConfig_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    CreateComputeClusterRequest() = default ;
    CreateComputeClusterRequest(const CreateComputeClusterRequest &) = default ;
    CreateComputeClusterRequest(CreateComputeClusterRequest &&) = default ;
    CreateComputeClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComputeClusterRequest() = default ;
    CreateComputeClusterRequest& operator=(const CreateComputeClusterRequest &) = default ;
    CreateComputeClusterRequest& operator=(CreateComputeClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterAdmins, clusterAdmins_);
        DARABONBA_PTR_TO_JSON(ClusterSafetyControl, clusterSafetyControl_);
        DARABONBA_PTR_TO_JSON(ConfigList, configList_);
        DARABONBA_PTR_TO_JSON(Des, des_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(TypeVersion, typeVersion_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterAdmins, clusterAdmins_);
        DARABONBA_PTR_FROM_JSON(ClusterSafetyControl, clusterSafetyControl_);
        DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
        DARABONBA_PTR_FROM_JSON(Des, des_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(TypeVersion, typeVersion_);
      };
      ClusterConfig() = default ;
      ClusterConfig(const ClusterConfig &) = default ;
      ClusterConfig(ClusterConfig &&) = default ;
      ClusterConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterConfig() = default ;
      ClusterConfig& operator=(const ClusterConfig &) = default ;
      ClusterConfig& operator=(ClusterConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ConfigList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigList& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigList& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        ConfigList() = default ;
        ConfigList(const ConfigList &) = default ;
        ConfigList(ConfigList &&) = default ;
        ConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigList() = default ;
        ConfigList& operator=(const ConfigList &) = default ;
        ConfigList& operator=(ConfigList &&) = default ;
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
        inline ConfigList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline ConfigList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The configuration item.
        // 
        // This parameter is required.
        shared_ptr<string> key_ {};
        // The value of the configuration item.
        // 
        // This parameter is required.
        shared_ptr<string> value_ {};
      };

      class ClusterSafetyControl : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClusterSafetyControl& obj) { 
          DARABONBA_PTR_TO_JSON(ClusterSafetyAuthType, clusterSafetyAuthType_);
          DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
          DARABONBA_PTR_TO_JSON(UserIds, userIds_);
        };
        friend void from_json(const Darabonba::Json& j, ClusterSafetyControl& obj) { 
          DARABONBA_PTR_FROM_JSON(ClusterSafetyAuthType, clusterSafetyAuthType_);
          DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
          DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
        };
        ClusterSafetyControl() = default ;
        ClusterSafetyControl(const ClusterSafetyControl &) = default ;
        ClusterSafetyControl(ClusterSafetyControl &&) = default ;
        ClusterSafetyControl(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClusterSafetyControl() = default ;
        ClusterSafetyControl& operator=(const ClusterSafetyControl &) = default ;
        ClusterSafetyControl& operator=(ClusterSafetyControl &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clusterSafetyAuthType_ == nullptr
        && this->userGroupIds_ == nullptr && this->userIds_ == nullptr; };
        // clusterSafetyAuthType Field Functions 
        bool hasClusterSafetyAuthType() const { return this->clusterSafetyAuthType_ != nullptr;};
        void deleteClusterSafetyAuthType() { this->clusterSafetyAuthType_ = nullptr;};
        inline string getClusterSafetyAuthType() const { DARABONBA_PTR_GET_DEFAULT(clusterSafetyAuthType_, "") };
        inline ClusterSafetyControl& setClusterSafetyAuthType(string clusterSafetyAuthType) { DARABONBA_PTR_SET_VALUE(clusterSafetyAuthType_, clusterSafetyAuthType) };


        // userGroupIds Field Functions 
        bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
        void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
        inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
        inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
        inline ClusterSafetyControl& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
        inline ClusterSafetyControl& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


        // userIds Field Functions 
        bool hasUserIds() const { return this->userIds_ != nullptr;};
        void deleteUserIds() { this->userIds_ = nullptr;};
        inline const vector<string> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
        inline vector<string> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
        inline ClusterSafetyControl& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
        inline ClusterSafetyControl& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


      protected:
        // The control mode.
        shared_ptr<string> clusterSafetyAuthType_ {};
        // The list of whitelist user group IDs.
        shared_ptr<vector<string>> userGroupIds_ {};
        // The list of whitelist user IDs.
        shared_ptr<vector<string>> userIds_ {};
      };

      virtual bool empty() const override { return this->clusterAdmins_ == nullptr
        && this->clusterSafetyControl_ == nullptr && this->configList_ == nullptr && this->des_ == nullptr && this->name_ == nullptr && this->type_ == nullptr
        && this->typeVersion_ == nullptr; };
      // clusterAdmins Field Functions 
      bool hasClusterAdmins() const { return this->clusterAdmins_ != nullptr;};
      void deleteClusterAdmins() { this->clusterAdmins_ = nullptr;};
      inline const vector<string> & getClusterAdmins() const { DARABONBA_PTR_GET_CONST(clusterAdmins_, vector<string>) };
      inline vector<string> getClusterAdmins() { DARABONBA_PTR_GET(clusterAdmins_, vector<string>) };
      inline ClusterConfig& setClusterAdmins(const vector<string> & clusterAdmins) { DARABONBA_PTR_SET_VALUE(clusterAdmins_, clusterAdmins) };
      inline ClusterConfig& setClusterAdmins(vector<string> && clusterAdmins) { DARABONBA_PTR_SET_RVALUE(clusterAdmins_, clusterAdmins) };


      // clusterSafetyControl Field Functions 
      bool hasClusterSafetyControl() const { return this->clusterSafetyControl_ != nullptr;};
      void deleteClusterSafetyControl() { this->clusterSafetyControl_ = nullptr;};
      inline const ClusterConfig::ClusterSafetyControl & getClusterSafetyControl() const { DARABONBA_PTR_GET_CONST(clusterSafetyControl_, ClusterConfig::ClusterSafetyControl) };
      inline ClusterConfig::ClusterSafetyControl getClusterSafetyControl() { DARABONBA_PTR_GET(clusterSafetyControl_, ClusterConfig::ClusterSafetyControl) };
      inline ClusterConfig& setClusterSafetyControl(const ClusterConfig::ClusterSafetyControl & clusterSafetyControl) { DARABONBA_PTR_SET_VALUE(clusterSafetyControl_, clusterSafetyControl) };
      inline ClusterConfig& setClusterSafetyControl(ClusterConfig::ClusterSafetyControl && clusterSafetyControl) { DARABONBA_PTR_SET_RVALUE(clusterSafetyControl_, clusterSafetyControl) };


      // configList Field Functions 
      bool hasConfigList() const { return this->configList_ != nullptr;};
      void deleteConfigList() { this->configList_ = nullptr;};
      inline const vector<ClusterConfig::ConfigList> & getConfigList() const { DARABONBA_PTR_GET_CONST(configList_, vector<ClusterConfig::ConfigList>) };
      inline vector<ClusterConfig::ConfigList> getConfigList() { DARABONBA_PTR_GET(configList_, vector<ClusterConfig::ConfigList>) };
      inline ClusterConfig& setConfigList(const vector<ClusterConfig::ConfigList> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
      inline ClusterConfig& setConfigList(vector<ClusterConfig::ConfigList> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


      // des Field Functions 
      bool hasDes() const { return this->des_ != nullptr;};
      void deleteDes() { this->des_ = nullptr;};
      inline string getDes() const { DARABONBA_PTR_GET_DEFAULT(des_, "") };
      inline ClusterConfig& setDes(string des) { DARABONBA_PTR_SET_VALUE(des_, des) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ClusterConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ClusterConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // typeVersion Field Functions 
      bool hasTypeVersion() const { return this->typeVersion_ != nullptr;};
      void deleteTypeVersion() { this->typeVersion_ = nullptr;};
      inline string getTypeVersion() const { DARABONBA_PTR_GET_DEFAULT(typeVersion_, "") };
      inline ClusterConfig& setTypeVersion(string typeVersion) { DARABONBA_PTR_SET_VALUE(typeVersion_, typeVersion) };


    protected:
      // The list of cluster administrator IDs.
      shared_ptr<vector<string>> clusterAdmins_ {};
      // The cluster security control configuration.
      shared_ptr<ClusterConfig::ClusterSafetyControl> clusterSafetyControl_ {};
      // The connection configuration items.
      // 
      // This parameter is required.
      shared_ptr<vector<ClusterConfig::ConfigList>> configList_ {};
      // The cluster description.
      shared_ptr<string> des_ {};
      // The cluster name.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The cluster type.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
      // The cluster version.
      shared_ptr<string> typeVersion_ {};
    };

    virtual bool empty() const override { return this->clusterConfig_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // clusterConfig Field Functions 
    bool hasClusterConfig() const { return this->clusterConfig_ != nullptr;};
    void deleteClusterConfig() { this->clusterConfig_ = nullptr;};
    inline const CreateComputeClusterRequest::ClusterConfig & getClusterConfig() const { DARABONBA_PTR_GET_CONST(clusterConfig_, CreateComputeClusterRequest::ClusterConfig) };
    inline CreateComputeClusterRequest::ClusterConfig getClusterConfig() { DARABONBA_PTR_GET(clusterConfig_, CreateComputeClusterRequest::ClusterConfig) };
    inline CreateComputeClusterRequest& setClusterConfig(const CreateComputeClusterRequest::ClusterConfig & clusterConfig) { DARABONBA_PTR_SET_VALUE(clusterConfig_, clusterConfig) };
    inline CreateComputeClusterRequest& setClusterConfig(CreateComputeClusterRequest::ClusterConfig && clusterConfig) { DARABONBA_PTR_SET_RVALUE(clusterConfig_, clusterConfig) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateComputeClusterRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline CreateComputeClusterRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The cluster configuration.
    // 
    // This parameter is required.
    shared_ptr<CreateComputeClusterRequest::ClusterConfig> clusterConfig_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator user.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
