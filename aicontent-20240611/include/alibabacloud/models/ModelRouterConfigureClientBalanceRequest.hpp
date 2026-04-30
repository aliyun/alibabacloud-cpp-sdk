// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERCONFIGURECLIENTBALANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERCONFIGURECLIENTBALANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterConfigureClientBalanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterConfigureClientBalanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(balanceType, balanceType_);
      DARABONBA_PTR_TO_JSON(enableBalance, enableBalance_);
      DARABONBA_PTR_TO_JSON(initialBalance, initialBalance_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterConfigureClientBalanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(balanceType, balanceType_);
      DARABONBA_PTR_FROM_JSON(enableBalance, enableBalance_);
      DARABONBA_PTR_FROM_JSON(initialBalance, initialBalance_);
    };
    ModelRouterConfigureClientBalanceRequest() = default ;
    ModelRouterConfigureClientBalanceRequest(const ModelRouterConfigureClientBalanceRequest &) = default ;
    ModelRouterConfigureClientBalanceRequest(ModelRouterConfigureClientBalanceRequest &&) = default ;
    ModelRouterConfigureClientBalanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterConfigureClientBalanceRequest() = default ;
    ModelRouterConfigureClientBalanceRequest& operator=(const ModelRouterConfigureClientBalanceRequest &) = default ;
    ModelRouterConfigureClientBalanceRequest& operator=(ModelRouterConfigureClientBalanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->balanceType_ == nullptr
        && this->enableBalance_ == nullptr && this->initialBalance_ == nullptr; };
    // balanceType Field Functions 
    bool hasBalanceType() const { return this->balanceType_ != nullptr;};
    void deleteBalanceType() { this->balanceType_ = nullptr;};
    inline string getBalanceType() const { DARABONBA_PTR_GET_DEFAULT(balanceType_, "") };
    inline ModelRouterConfigureClientBalanceRequest& setBalanceType(string balanceType) { DARABONBA_PTR_SET_VALUE(balanceType_, balanceType) };


    // enableBalance Field Functions 
    bool hasEnableBalance() const { return this->enableBalance_ != nullptr;};
    void deleteEnableBalance() { this->enableBalance_ = nullptr;};
    inline bool getEnableBalance() const { DARABONBA_PTR_GET_DEFAULT(enableBalance_, false) };
    inline ModelRouterConfigureClientBalanceRequest& setEnableBalance(bool enableBalance) { DARABONBA_PTR_SET_VALUE(enableBalance_, enableBalance) };


    // initialBalance Field Functions 
    bool hasInitialBalance() const { return this->initialBalance_ != nullptr;};
    void deleteInitialBalance() { this->initialBalance_ = nullptr;};
    inline double getInitialBalance() const { DARABONBA_PTR_GET_DEFAULT(initialBalance_, 0.0) };
    inline ModelRouterConfigureClientBalanceRequest& setInitialBalance(double initialBalance) { DARABONBA_PTR_SET_VALUE(initialBalance_, initialBalance) };


  protected:
    shared_ptr<string> balanceType_ {};
    shared_ptr<bool> enableBalance_ {};
    shared_ptr<double> initialBalance_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
