// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCOMPUTESOURCECONNECTIVITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKCOMPUTESOURCECONNECTIVITYREQUEST_HPP_
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
  class CheckComputeSourceConnectivityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckComputeSourceConnectivityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckCommand, checkCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckComputeSourceConnectivityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckCommand, checkCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CheckComputeSourceConnectivityRequest() = default ;
    CheckComputeSourceConnectivityRequest(const CheckComputeSourceConnectivityRequest &) = default ;
    CheckComputeSourceConnectivityRequest(CheckComputeSourceConnectivityRequest &&) = default ;
    CheckComputeSourceConnectivityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckComputeSourceConnectivityRequest() = default ;
    CheckComputeSourceConnectivityRequest& operator=(const CheckComputeSourceConnectivityRequest &) = default ;
    CheckComputeSourceConnectivityRequest& operator=(CheckComputeSourceConnectivityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckCommand& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigList, configList_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, CheckCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
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
        // This parameter is required.
        shared_ptr<string> key_ {};
        // This parameter is required.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->configList_ == nullptr
        && this->type_ == nullptr; };
      // configList Field Functions 
      bool hasConfigList() const { return this->configList_ != nullptr;};
      void deleteConfigList() { this->configList_ = nullptr;};
      inline const vector<CheckCommand::ConfigList> & getConfigList() const { DARABONBA_PTR_GET_CONST(configList_, vector<CheckCommand::ConfigList>) };
      inline vector<CheckCommand::ConfigList> getConfigList() { DARABONBA_PTR_GET(configList_, vector<CheckCommand::ConfigList>) };
      inline CheckCommand& setConfigList(const vector<CheckCommand::ConfigList> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
      inline CheckCommand& setConfigList(vector<CheckCommand::ConfigList> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CheckCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // This parameter is required.
      shared_ptr<vector<CheckCommand::ConfigList>> configList_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->checkCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // checkCommand Field Functions 
    bool hasCheckCommand() const { return this->checkCommand_ != nullptr;};
    void deleteCheckCommand() { this->checkCommand_ = nullptr;};
    inline const CheckComputeSourceConnectivityRequest::CheckCommand & getCheckCommand() const { DARABONBA_PTR_GET_CONST(checkCommand_, CheckComputeSourceConnectivityRequest::CheckCommand) };
    inline CheckComputeSourceConnectivityRequest::CheckCommand getCheckCommand() { DARABONBA_PTR_GET(checkCommand_, CheckComputeSourceConnectivityRequest::CheckCommand) };
    inline CheckComputeSourceConnectivityRequest& setCheckCommand(const CheckComputeSourceConnectivityRequest::CheckCommand & checkCommand) { DARABONBA_PTR_SET_VALUE(checkCommand_, checkCommand) };
    inline CheckComputeSourceConnectivityRequest& setCheckCommand(CheckComputeSourceConnectivityRequest::CheckCommand && checkCommand) { DARABONBA_PTR_SET_RVALUE(checkCommand_, checkCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CheckComputeSourceConnectivityRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<CheckComputeSourceConnectivityRequest::CheckCommand> checkCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
