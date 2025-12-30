// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDATASOURCECONNECTIVITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKDATASOURCECONNECTIVITYREQUEST_HPP_
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
  class CheckDataSourceConnectivityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDataSourceConnectivityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckCommand, checkCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDataSourceConnectivityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckCommand, checkCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CheckDataSourceConnectivityRequest() = default ;
    CheckDataSourceConnectivityRequest(const CheckDataSourceConnectivityRequest &) = default ;
    CheckDataSourceConnectivityRequest(CheckDataSourceConnectivityRequest &&) = default ;
    CheckDataSourceConnectivityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDataSourceConnectivityRequest() = default ;
    CheckDataSourceConnectivityRequest& operator=(const CheckDataSourceConnectivityRequest &) = default ;
    CheckDataSourceConnectivityRequest& operator=(CheckDataSourceConnectivityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckCommand& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigItemList, configItemList_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, CheckCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigItemList, configItemList_);
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
        // This parameter is required.
        shared_ptr<string> key_ {};
        // This parameter is required.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->configItemList_ == nullptr
        && this->type_ == nullptr; };
      // configItemList Field Functions 
      bool hasConfigItemList() const { return this->configItemList_ != nullptr;};
      void deleteConfigItemList() { this->configItemList_ = nullptr;};
      inline const vector<CheckCommand::ConfigItemList> & getConfigItemList() const { DARABONBA_PTR_GET_CONST(configItemList_, vector<CheckCommand::ConfigItemList>) };
      inline vector<CheckCommand::ConfigItemList> getConfigItemList() { DARABONBA_PTR_GET(configItemList_, vector<CheckCommand::ConfigItemList>) };
      inline CheckCommand& setConfigItemList(const vector<CheckCommand::ConfigItemList> & configItemList) { DARABONBA_PTR_SET_VALUE(configItemList_, configItemList) };
      inline CheckCommand& setConfigItemList(vector<CheckCommand::ConfigItemList> && configItemList) { DARABONBA_PTR_SET_RVALUE(configItemList_, configItemList) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CheckCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // This parameter is required.
      shared_ptr<vector<CheckCommand::ConfigItemList>> configItemList_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->checkCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // checkCommand Field Functions 
    bool hasCheckCommand() const { return this->checkCommand_ != nullptr;};
    void deleteCheckCommand() { this->checkCommand_ = nullptr;};
    inline const CheckDataSourceConnectivityRequest::CheckCommand & getCheckCommand() const { DARABONBA_PTR_GET_CONST(checkCommand_, CheckDataSourceConnectivityRequest::CheckCommand) };
    inline CheckDataSourceConnectivityRequest::CheckCommand getCheckCommand() { DARABONBA_PTR_GET(checkCommand_, CheckDataSourceConnectivityRequest::CheckCommand) };
    inline CheckDataSourceConnectivityRequest& setCheckCommand(const CheckDataSourceConnectivityRequest::CheckCommand & checkCommand) { DARABONBA_PTR_SET_VALUE(checkCommand_, checkCommand) };
    inline CheckDataSourceConnectivityRequest& setCheckCommand(CheckDataSourceConnectivityRequest::CheckCommand && checkCommand) { DARABONBA_PTR_SET_RVALUE(checkCommand_, checkCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CheckDataSourceConnectivityRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<CheckDataSourceConnectivityRequest::CheckCommand> checkCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
