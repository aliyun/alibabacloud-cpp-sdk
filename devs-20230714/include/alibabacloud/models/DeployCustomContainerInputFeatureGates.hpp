// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTFEATUREGATES_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTFEATUREGATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployCustomContainerInputFeatureGates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployCustomContainerInputFeatureGates& obj) { 
      DARABONBA_PTR_TO_JSON(asyncProvisionCheck, asyncProvisionCheck_);
      DARABONBA_PTR_TO_JSON(disableRollbackOnProvisionFailure, disableRollbackOnProvisionFailure_);
    };
    friend void from_json(const Darabonba::Json& j, DeployCustomContainerInputFeatureGates& obj) { 
      DARABONBA_PTR_FROM_JSON(asyncProvisionCheck, asyncProvisionCheck_);
      DARABONBA_PTR_FROM_JSON(disableRollbackOnProvisionFailure, disableRollbackOnProvisionFailure_);
    };
    DeployCustomContainerInputFeatureGates() = default ;
    DeployCustomContainerInputFeatureGates(const DeployCustomContainerInputFeatureGates &) = default ;
    DeployCustomContainerInputFeatureGates(DeployCustomContainerInputFeatureGates &&) = default ;
    DeployCustomContainerInputFeatureGates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployCustomContainerInputFeatureGates() = default ;
    DeployCustomContainerInputFeatureGates& operator=(const DeployCustomContainerInputFeatureGates &) = default ;
    DeployCustomContainerInputFeatureGates& operator=(DeployCustomContainerInputFeatureGates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asyncProvisionCheck_ != nullptr
        && this->disableRollbackOnProvisionFailure_ != nullptr; };
    // asyncProvisionCheck Field Functions 
    bool hasAsyncProvisionCheck() const { return this->asyncProvisionCheck_ != nullptr;};
    void deleteAsyncProvisionCheck() { this->asyncProvisionCheck_ = nullptr;};
    inline bool asyncProvisionCheck() const { DARABONBA_PTR_GET_DEFAULT(asyncProvisionCheck_, false) };
    inline DeployCustomContainerInputFeatureGates& setAsyncProvisionCheck(bool asyncProvisionCheck) { DARABONBA_PTR_SET_VALUE(asyncProvisionCheck_, asyncProvisionCheck) };


    // disableRollbackOnProvisionFailure Field Functions 
    bool hasDisableRollbackOnProvisionFailure() const { return this->disableRollbackOnProvisionFailure_ != nullptr;};
    void deleteDisableRollbackOnProvisionFailure() { this->disableRollbackOnProvisionFailure_ = nullptr;};
    inline bool disableRollbackOnProvisionFailure() const { DARABONBA_PTR_GET_DEFAULT(disableRollbackOnProvisionFailure_, false) };
    inline DeployCustomContainerInputFeatureGates& setDisableRollbackOnProvisionFailure(bool disableRollbackOnProvisionFailure) { DARABONBA_PTR_SET_VALUE(disableRollbackOnProvisionFailure_, disableRollbackOnProvisionFailure) };


  protected:
    std::shared_ptr<bool> asyncProvisionCheck_ = nullptr;
    std::shared_ptr<bool> disableRollbackOnProvisionFailure_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
