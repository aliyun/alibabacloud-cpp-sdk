// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTHORIZATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTHORIZATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateAuthorizationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(resources, resources_);
    };
    UpdateAuthorizationRuleRequest() = default ;
    UpdateAuthorizationRuleRequest(const UpdateAuthorizationRuleRequest &) = default ;
    UpdateAuthorizationRuleRequest(UpdateAuthorizationRuleRequest &&) = default ;
    UpdateAuthorizationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAuthorizationRuleRequest() = default ;
    UpdateAuthorizationRuleRequest& operator=(const UpdateAuthorizationRuleRequest &) = default ;
    UpdateAuthorizationRuleRequest& operator=(UpdateAuthorizationRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resources_ == nullptr; };
    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<string> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<string>) };
    inline vector<string> getResources() { DARABONBA_PTR_GET(resources_, vector<string>) };
    inline UpdateAuthorizationRuleRequest& setResources(const vector<string> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline UpdateAuthorizationRuleRequest& setResources(vector<string> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    shared_ptr<vector<string>> resources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
