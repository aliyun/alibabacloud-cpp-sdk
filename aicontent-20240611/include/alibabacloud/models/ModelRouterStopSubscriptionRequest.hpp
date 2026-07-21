// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERSTOPSUBSCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERSTOPSUBSCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterStopSubscriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterStopSubscriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(balanceType, balanceType_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterStopSubscriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(balanceType, balanceType_);
    };
    ModelRouterStopSubscriptionRequest() = default ;
    ModelRouterStopSubscriptionRequest(const ModelRouterStopSubscriptionRequest &) = default ;
    ModelRouterStopSubscriptionRequest(ModelRouterStopSubscriptionRequest &&) = default ;
    ModelRouterStopSubscriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterStopSubscriptionRequest() = default ;
    ModelRouterStopSubscriptionRequest& operator=(const ModelRouterStopSubscriptionRequest &) = default ;
    ModelRouterStopSubscriptionRequest& operator=(ModelRouterStopSubscriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->balanceType_ == nullptr; };
    // balanceType Field Functions 
    bool hasBalanceType() const { return this->balanceType_ != nullptr;};
    void deleteBalanceType() { this->balanceType_ = nullptr;};
    inline string getBalanceType() const { DARABONBA_PTR_GET_DEFAULT(balanceType_, "") };
    inline ModelRouterStopSubscriptionRequest& setBalanceType(string balanceType) { DARABONBA_PTR_SET_VALUE(balanceType_, balanceType) };


  protected:
    shared_ptr<string> balanceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
