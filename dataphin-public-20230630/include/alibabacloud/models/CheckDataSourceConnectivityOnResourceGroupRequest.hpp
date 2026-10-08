// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDATASOURCECONNECTIVITYONRESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKDATASOURCECONNECTIVITYONRESOURCEGROUPREQUEST_HPP_
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
  class CheckDataSourceConnectivityOnResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDataSourceConnectivityOnResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckCommand, checkCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDataSourceConnectivityOnResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckCommand, checkCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    CheckDataSourceConnectivityOnResourceGroupRequest() = default ;
    CheckDataSourceConnectivityOnResourceGroupRequest(const CheckDataSourceConnectivityOnResourceGroupRequest &) = default ;
    CheckDataSourceConnectivityOnResourceGroupRequest(CheckDataSourceConnectivityOnResourceGroupRequest &&) = default ;
    CheckDataSourceConnectivityOnResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDataSourceConnectivityOnResourceGroupRequest() = default ;
    CheckDataSourceConnectivityOnResourceGroupRequest& operator=(const CheckDataSourceConnectivityOnResourceGroupRequest &) = default ;
    CheckDataSourceConnectivityOnResourceGroupRequest& operator=(CheckDataSourceConnectivityOnResourceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckCommand& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigItemList, configItemList_);
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, CheckCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigItemList, configItemList_);
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      CheckCommand() = default ;
      CheckCommand(const CheckCommand &) = default ;
      CheckCommand(CheckCommand &&) = default ;
      CheckCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckCommand() = default ;
      CheckCommand& operator=(const CheckCommand &) = default ;
      CheckCommand& operator=(CheckCommand &&) = default ;
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
        && this->dataSourceId_ == nullptr && this->resourceGroupId_ == nullptr && this->type_ == nullptr; };
      // configItemList Field Functions 
      bool hasConfigItemList() const { return this->configItemList_ != nullptr;};
      void deleteConfigItemList() { this->configItemList_ = nullptr;};
      inline const vector<CheckCommand::ConfigItemList> & getConfigItemList() const { DARABONBA_PTR_GET_CONST(configItemList_, vector<CheckCommand::ConfigItemList>) };
      inline vector<CheckCommand::ConfigItemList> getConfigItemList() { DARABONBA_PTR_GET(configItemList_, vector<CheckCommand::ConfigItemList>) };
      inline CheckCommand& setConfigItemList(const vector<CheckCommand::ConfigItemList> & configItemList) { DARABONBA_PTR_SET_VALUE(configItemList_, configItemList) };
      inline CheckCommand& setConfigItemList(vector<CheckCommand::ConfigItemList> && configItemList) { DARABONBA_PTR_SET_RVALUE(configItemList_, configItemList) };


      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
      inline CheckCommand& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline CheckCommand& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CheckCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<vector<CheckCommand::ConfigItemList>> configItemList_ {};
      shared_ptr<string> dataSourceId_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->checkCommand_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // checkCommand Field Functions 
    bool hasCheckCommand() const { return this->checkCommand_ != nullptr;};
    void deleteCheckCommand() { this->checkCommand_ = nullptr;};
    inline const CheckDataSourceConnectivityOnResourceGroupRequest::CheckCommand & getCheckCommand() const { DARABONBA_PTR_GET_CONST(checkCommand_, CheckDataSourceConnectivityOnResourceGroupRequest::CheckCommand) };
    inline CheckDataSourceConnectivityOnResourceGroupRequest::CheckCommand getCheckCommand() { DARABONBA_PTR_GET(checkCommand_, CheckDataSourceConnectivityOnResourceGroupRequest::CheckCommand) };
    inline CheckDataSourceConnectivityOnResourceGroupRequest& setCheckCommand(const CheckDataSourceConnectivityOnResourceGroupRequest::CheckCommand & checkCommand) { DARABONBA_PTR_SET_VALUE(checkCommand_, checkCommand) };
    inline CheckDataSourceConnectivityOnResourceGroupRequest& setCheckCommand(CheckDataSourceConnectivityOnResourceGroupRequest::CheckCommand && checkCommand) { DARABONBA_PTR_SET_RVALUE(checkCommand_, checkCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CheckDataSourceConnectivityOnResourceGroupRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline CheckDataSourceConnectivityOnResourceGroupRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // This parameter is required.
    shared_ptr<CheckDataSourceConnectivityOnResourceGroupRequest::CheckCommand> checkCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
