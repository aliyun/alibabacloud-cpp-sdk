// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDISPATCHRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDISPATCHRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateDispatchRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDispatchRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DispatchRule, dispatchRule_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDispatchRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DispatchRule, dispatchRule_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateDispatchRuleRequest() = default ;
    CreateDispatchRuleRequest(const CreateDispatchRuleRequest &) = default ;
    CreateDispatchRuleRequest(CreateDispatchRuleRequest &&) = default ;
    CreateDispatchRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDispatchRuleRequest() = default ;
    CreateDispatchRuleRequest& operator=(const CreateDispatchRuleRequest &) = default ;
    CreateDispatchRuleRequest& operator=(CreateDispatchRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dispatchRule_ != nullptr
        && this->regionId_ != nullptr; };
    // dispatchRule Field Functions 
    bool hasDispatchRule() const { return this->dispatchRule_ != nullptr;};
    void deleteDispatchRule() { this->dispatchRule_ = nullptr;};
    inline string dispatchRule() const { DARABONBA_PTR_GET_DEFAULT(dispatchRule_, "") };
    inline CreateDispatchRuleRequest& setDispatchRule(string dispatchRule) { DARABONBA_PTR_SET_VALUE(dispatchRule_, dispatchRule) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDispatchRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The dispatch rule configuration. The value is a JSON string. For more information about this parameter, see the following **additional information about the DispatchRule parameter**.
    // 
    // This parameter is required.
    std::shared_ptr<string> dispatchRule_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
