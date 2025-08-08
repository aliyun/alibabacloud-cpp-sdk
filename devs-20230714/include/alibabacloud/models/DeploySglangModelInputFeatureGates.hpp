// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYSGLANGMODELINPUTFEATUREGATES_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYSGLANGMODELINPUTFEATUREGATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeploySGLangModelInputFeatureGates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploySGLangModelInputFeatureGates& obj) { 
      DARABONBA_PTR_TO_JSON(asyncProvisionCheck, asyncProvisionCheck_);
      DARABONBA_PTR_TO_JSON(disableRollbackOnProvisionFailure, disableRollbackOnProvisionFailure_);
    };
    friend void from_json(const Darabonba::Json& j, DeploySGLangModelInputFeatureGates& obj) { 
      DARABONBA_PTR_FROM_JSON(asyncProvisionCheck, asyncProvisionCheck_);
      DARABONBA_PTR_FROM_JSON(disableRollbackOnProvisionFailure, disableRollbackOnProvisionFailure_);
    };
    DeploySGLangModelInputFeatureGates() = default ;
    DeploySGLangModelInputFeatureGates(const DeploySGLangModelInputFeatureGates &) = default ;
    DeploySGLangModelInputFeatureGates(DeploySGLangModelInputFeatureGates &&) = default ;
    DeploySGLangModelInputFeatureGates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploySGLangModelInputFeatureGates() = default ;
    DeploySGLangModelInputFeatureGates& operator=(const DeploySGLangModelInputFeatureGates &) = default ;
    DeploySGLangModelInputFeatureGates& operator=(DeploySGLangModelInputFeatureGates &&) = default ;
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
    inline DeploySGLangModelInputFeatureGates& setAsyncProvisionCheck(bool asyncProvisionCheck) { DARABONBA_PTR_SET_VALUE(asyncProvisionCheck_, asyncProvisionCheck) };


    // disableRollbackOnProvisionFailure Field Functions 
    bool hasDisableRollbackOnProvisionFailure() const { return this->disableRollbackOnProvisionFailure_ != nullptr;};
    void deleteDisableRollbackOnProvisionFailure() { this->disableRollbackOnProvisionFailure_ = nullptr;};
    inline bool disableRollbackOnProvisionFailure() const { DARABONBA_PTR_GET_DEFAULT(disableRollbackOnProvisionFailure_, false) };
    inline DeploySGLangModelInputFeatureGates& setDisableRollbackOnProvisionFailure(bool disableRollbackOnProvisionFailure) { DARABONBA_PTR_SET_VALUE(disableRollbackOnProvisionFailure_, disableRollbackOnProvisionFailure) };


  protected:
    std::shared_ptr<bool> asyncProvisionCheck_ = nullptr;
    std::shared_ptr<bool> disableRollbackOnProvisionFailure_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
