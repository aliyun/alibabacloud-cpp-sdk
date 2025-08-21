// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEAUTORESOURCEOPTIMIZERULESRESPONSEBODYDATACONFIGFAILINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEAUTORESOURCEOPTIMIZERULESRESPONSEBODYDATACONFIGFAILINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigSuccess, configSuccess_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigSuccess, configSuccess_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList() = default ;
    DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList(const DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList &) = default ;
    DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList(DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList &&) = default ;
    DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList() = default ;
    DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList& operator=(const DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList &) = default ;
    DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList& operator=(DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configSuccess_ != nullptr
        && this->errorMessage_ != nullptr && this->instanceId_ != nullptr; };
    // configSuccess Field Functions 
    bool hasConfigSuccess() const { return this->configSuccess_ != nullptr;};
    void deleteConfigSuccess() { this->configSuccess_ = nullptr;};
    inline bool configSuccess() const { DARABONBA_PTR_GET_DEFAULT(configSuccess_, false) };
    inline DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList& setConfigSuccess(bool configSuccess) { DARABONBA_PTR_SET_VALUE(configSuccess_, configSuccess) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // Indicates whether the automatic tablespace fragment recycling feature is disabled. Valid values:
    // 
    // * **true**
    // 
    // * **false**
    std::shared_ptr<bool> configSuccess_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The database instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
