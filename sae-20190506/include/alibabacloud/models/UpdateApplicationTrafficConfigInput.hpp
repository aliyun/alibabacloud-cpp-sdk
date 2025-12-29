// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONTRAFFICCONFIGINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONTRAFFICCONFIGINPUT_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/RoutePolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateApplicationTrafficConfigInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationTrafficConfigInput& obj) { 
      DARABONBA_PTR_TO_JSON(additionalVersionWeight, additionalVersionWeight_);
      DARABONBA_PTR_TO_JSON(resolvePolicy, resolvePolicy_);
      DARABONBA_PTR_TO_JSON(routePolicy, routePolicy_);
      DARABONBA_PTR_TO_JSON(versionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationTrafficConfigInput& obj) { 
      DARABONBA_PTR_FROM_JSON(additionalVersionWeight, additionalVersionWeight_);
      DARABONBA_PTR_FROM_JSON(resolvePolicy, resolvePolicy_);
      DARABONBA_PTR_FROM_JSON(routePolicy, routePolicy_);
      DARABONBA_PTR_FROM_JSON(versionId, versionId_);
    };
    UpdateApplicationTrafficConfigInput() = default ;
    UpdateApplicationTrafficConfigInput(const UpdateApplicationTrafficConfigInput &) = default ;
    UpdateApplicationTrafficConfigInput(UpdateApplicationTrafficConfigInput &&) = default ;
    UpdateApplicationTrafficConfigInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationTrafficConfigInput() = default ;
    UpdateApplicationTrafficConfigInput& operator=(const UpdateApplicationTrafficConfigInput &) = default ;
    UpdateApplicationTrafficConfigInput& operator=(UpdateApplicationTrafficConfigInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalVersionWeight_ == nullptr
        && this->resolvePolicy_ == nullptr && this->routePolicy_ == nullptr && this->versionId_ == nullptr; };
    // additionalVersionWeight Field Functions 
    bool hasAdditionalVersionWeight() const { return this->additionalVersionWeight_ != nullptr;};
    void deleteAdditionalVersionWeight() { this->additionalVersionWeight_ = nullptr;};
    inline const map<string, float> & getAdditionalVersionWeight() const { DARABONBA_PTR_GET_CONST(additionalVersionWeight_, map<string, float>) };
    inline map<string, float> getAdditionalVersionWeight() { DARABONBA_PTR_GET(additionalVersionWeight_, map<string, float>) };
    inline UpdateApplicationTrafficConfigInput& setAdditionalVersionWeight(const map<string, float> & additionalVersionWeight) { DARABONBA_PTR_SET_VALUE(additionalVersionWeight_, additionalVersionWeight) };
    inline UpdateApplicationTrafficConfigInput& setAdditionalVersionWeight(map<string, float> && additionalVersionWeight) { DARABONBA_PTR_SET_RVALUE(additionalVersionWeight_, additionalVersionWeight) };


    // resolvePolicy Field Functions 
    bool hasResolvePolicy() const { return this->resolvePolicy_ != nullptr;};
    void deleteResolvePolicy() { this->resolvePolicy_ = nullptr;};
    inline string getResolvePolicy() const { DARABONBA_PTR_GET_DEFAULT(resolvePolicy_, "") };
    inline UpdateApplicationTrafficConfigInput& setResolvePolicy(string resolvePolicy) { DARABONBA_PTR_SET_VALUE(resolvePolicy_, resolvePolicy) };


    // routePolicy Field Functions 
    bool hasRoutePolicy() const { return this->routePolicy_ != nullptr;};
    void deleteRoutePolicy() { this->routePolicy_ = nullptr;};
    inline const RoutePolicy & getRoutePolicy() const { DARABONBA_PTR_GET_CONST(routePolicy_, RoutePolicy) };
    inline RoutePolicy getRoutePolicy() { DARABONBA_PTR_GET(routePolicy_, RoutePolicy) };
    inline UpdateApplicationTrafficConfigInput& setRoutePolicy(const RoutePolicy & routePolicy) { DARABONBA_PTR_SET_VALUE(routePolicy_, routePolicy) };
    inline UpdateApplicationTrafficConfigInput& setRoutePolicy(RoutePolicy && routePolicy) { DARABONBA_PTR_SET_RVALUE(routePolicy_, routePolicy) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline UpdateApplicationTrafficConfigInput& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    shared_ptr<map<string, float>> additionalVersionWeight_ {};
    shared_ptr<string> resolvePolicy_ {};
    shared_ptr<RoutePolicy> routePolicy_ {};
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
