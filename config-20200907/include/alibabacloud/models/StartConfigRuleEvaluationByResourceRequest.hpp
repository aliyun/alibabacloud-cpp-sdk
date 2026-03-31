// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCONFIGRULEEVALUATIONBYRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTCONFIGRULEEVALUATIONBYRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class StartConfigRuleEvaluationByResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartConfigRuleEvaluationByResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, StartConfigRuleEvaluationByResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    StartConfigRuleEvaluationByResourceRequest() = default ;
    StartConfigRuleEvaluationByResourceRequest(const StartConfigRuleEvaluationByResourceRequest &) = default ;
    StartConfigRuleEvaluationByResourceRequest(StartConfigRuleEvaluationByResourceRequest &&) = default ;
    StartConfigRuleEvaluationByResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartConfigRuleEvaluationByResourceRequest() = default ;
    StartConfigRuleEvaluationByResourceRequest& operator=(const StartConfigRuleEvaluationByResourceRequest &) = default ;
    StartConfigRuleEvaluationByResourceRequest& operator=(StartConfigRuleEvaluationByResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceId_ == nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline StartConfigRuleEvaluationByResourceRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
