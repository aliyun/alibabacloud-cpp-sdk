// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSRESPONSEBODYFAILEDFCPARAMETERSFCPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSRESPONSEBODYFAILEDFCPARAMETERSFCPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter() = default ;
    PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter(const PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter &) = default ;
    PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter(PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter &&) = default ;
    PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter() = default ;
    PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter& operator=(const PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter &) = default ;
    PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter& operator=(PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->functionName_ != nullptr
        && this->id_ != nullptr && this->region_ != nullptr && this->serviceName_ != nullptr; };
    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline PutEventRuleTargetsResponseBodyFailedFcParametersFcParameter& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The name of the function.
    std::shared_ptr<string> functionName_ = nullptr;
    // The ID of the recipient.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The name of the Function Compute service.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
