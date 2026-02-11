// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDISPATCHRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDISPATCHRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class UpdateDispatchRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDispatchRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DispatchRule, dispatchRule_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDispatchRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DispatchRule, dispatchRule_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateDispatchRuleRequest() = default ;
    UpdateDispatchRuleRequest(const UpdateDispatchRuleRequest &) = default ;
    UpdateDispatchRuleRequest(UpdateDispatchRuleRequest &&) = default ;
    UpdateDispatchRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDispatchRuleRequest() = default ;
    UpdateDispatchRuleRequest& operator=(const UpdateDispatchRuleRequest &) = default ;
    UpdateDispatchRuleRequest& operator=(UpdateDispatchRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dispatchRule_ == nullptr
        && this->regionId_ == nullptr; };
    // dispatchRule Field Functions 
    bool hasDispatchRule() const { return this->dispatchRule_ != nullptr;};
    void deleteDispatchRule() { this->dispatchRule_ = nullptr;};
    inline string getDispatchRule() const { DARABONBA_PTR_GET_DEFAULT(dispatchRule_, "") };
    inline UpdateDispatchRuleRequest& setDispatchRule(string dispatchRule) { DARABONBA_PTR_SET_VALUE(dispatchRule_, dispatchRule) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDispatchRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> dispatchRule_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
