// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYJVSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYJVSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ModifyJVSInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyJVSInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyToAll, applyToAll_);
      DARABONBA_PTR_TO_JSON(CreditConfig, creditConfig_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyJVSInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyToAll, applyToAll_);
      DARABONBA_PTR_FROM_JSON(CreditConfig, creditConfig_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
    };
    ModifyJVSInstanceRequest() = default ;
    ModifyJVSInstanceRequest(const ModifyJVSInstanceRequest &) = default ;
    ModifyJVSInstanceRequest(ModifyJVSInstanceRequest &&) = default ;
    ModifyJVSInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyJVSInstanceRequest() = default ;
    ModifyJVSInstanceRequest& operator=(const ModifyJVSInstanceRequest &) = default ;
    ModifyJVSInstanceRequest& operator=(ModifyJVSInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreditConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreditConfig& obj) { 
        DARABONBA_PTR_TO_JSON(CreditLimit, creditLimit_);
        DARABONBA_PTR_TO_JSON(LimitPeriod, limitPeriod_);
      };
      friend void from_json(const Darabonba::Json& j, CreditConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(CreditLimit, creditLimit_);
        DARABONBA_PTR_FROM_JSON(LimitPeriod, limitPeriod_);
      };
      CreditConfig() = default ;
      CreditConfig(const CreditConfig &) = default ;
      CreditConfig(CreditConfig &&) = default ;
      CreditConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreditConfig() = default ;
      CreditConfig& operator=(const CreditConfig &) = default ;
      CreditConfig& operator=(CreditConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creditLimit_ == nullptr
        && this->limitPeriod_ == nullptr; };
      // creditLimit Field Functions 
      bool hasCreditLimit() const { return this->creditLimit_ != nullptr;};
      void deleteCreditLimit() { this->creditLimit_ = nullptr;};
      inline int64_t getCreditLimit() const { DARABONBA_PTR_GET_DEFAULT(creditLimit_, 0L) };
      inline CreditConfig& setCreditLimit(int64_t creditLimit) { DARABONBA_PTR_SET_VALUE(creditLimit_, creditLimit) };


      // limitPeriod Field Functions 
      bool hasLimitPeriod() const { return this->limitPeriod_ != nullptr;};
      void deleteLimitPeriod() { this->limitPeriod_ = nullptr;};
      inline string getLimitPeriod() const { DARABONBA_PTR_GET_DEFAULT(limitPeriod_, "") };
      inline CreditConfig& setLimitPeriod(string limitPeriod) { DARABONBA_PTR_SET_VALUE(limitPeriod_, limitPeriod) };


    protected:
      shared_ptr<int64_t> creditLimit_ {};
      shared_ptr<string> limitPeriod_ {};
    };

    virtual bool empty() const override { return this->applyToAll_ == nullptr
        && this->creditConfig_ == nullptr && this->instanceIds_ == nullptr && this->instanceName_ == nullptr; };
    // applyToAll Field Functions 
    bool hasApplyToAll() const { return this->applyToAll_ != nullptr;};
    void deleteApplyToAll() { this->applyToAll_ = nullptr;};
    inline bool getApplyToAll() const { DARABONBA_PTR_GET_DEFAULT(applyToAll_, false) };
    inline ModifyJVSInstanceRequest& setApplyToAll(bool applyToAll) { DARABONBA_PTR_SET_VALUE(applyToAll_, applyToAll) };


    // creditConfig Field Functions 
    bool hasCreditConfig() const { return this->creditConfig_ != nullptr;};
    void deleteCreditConfig() { this->creditConfig_ = nullptr;};
    inline const vector<ModifyJVSInstanceRequest::CreditConfig> & getCreditConfig() const { DARABONBA_PTR_GET_CONST(creditConfig_, vector<ModifyJVSInstanceRequest::CreditConfig>) };
    inline vector<ModifyJVSInstanceRequest::CreditConfig> getCreditConfig() { DARABONBA_PTR_GET(creditConfig_, vector<ModifyJVSInstanceRequest::CreditConfig>) };
    inline ModifyJVSInstanceRequest& setCreditConfig(const vector<ModifyJVSInstanceRequest::CreditConfig> & creditConfig) { DARABONBA_PTR_SET_VALUE(creditConfig_, creditConfig) };
    inline ModifyJVSInstanceRequest& setCreditConfig(vector<ModifyJVSInstanceRequest::CreditConfig> && creditConfig) { DARABONBA_PTR_SET_RVALUE(creditConfig_, creditConfig) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline ModifyJVSInstanceRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline ModifyJVSInstanceRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyJVSInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


  protected:
    shared_ptr<bool> applyToAll_ {};
    shared_ptr<vector<ModifyJVSInstanceRequest::CreditConfig>> creditConfig_ {};
    shared_ptr<vector<string>> instanceIds_ {};
    shared_ptr<string> instanceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
