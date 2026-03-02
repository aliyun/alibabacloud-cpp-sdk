// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENVINFODO_HPP_
#define ALIBABACLOUD_MODELS_ENVINFODO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class EnvInfoDO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnvInfoDO& obj) { 
      DARABONBA_PTR_TO_JSON(env, env_);
      DARABONBA_PTR_TO_JSON(envType, envType_);
      DARABONBA_PTR_TO_JSON(orgType, orgType_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(productName, productName_);
      DARABONBA_PTR_TO_JSON(region, region_);
    };
    friend void from_json(const Darabonba::Json& j, EnvInfoDO& obj) { 
      DARABONBA_PTR_FROM_JSON(env, env_);
      DARABONBA_PTR_FROM_JSON(envType, envType_);
      DARABONBA_PTR_FROM_JSON(orgType, orgType_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(productName, productName_);
      DARABONBA_PTR_FROM_JSON(region, region_);
    };
    EnvInfoDO() = default ;
    EnvInfoDO(const EnvInfoDO &) = default ;
    EnvInfoDO(EnvInfoDO &&) = default ;
    EnvInfoDO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnvInfoDO() = default ;
    EnvInfoDO& operator=(const EnvInfoDO &) = default ;
    EnvInfoDO& operator=(EnvInfoDO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && this->envType_ == nullptr && this->orgType_ == nullptr && this->productId_ == nullptr && this->productName_ == nullptr && this->region_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline EnvInfoDO& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline EnvInfoDO& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // orgType Field Functions 
    bool hasOrgType() const { return this->orgType_ != nullptr;};
    void deleteOrgType() { this->orgType_ = nullptr;};
    inline string getOrgType() const { DARABONBA_PTR_GET_DEFAULT(orgType_, "") };
    inline EnvInfoDO& setOrgType(string orgType) { DARABONBA_PTR_SET_VALUE(orgType_, orgType) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline EnvInfoDO& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline EnvInfoDO& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline EnvInfoDO& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    shared_ptr<string> env_ {};
    shared_ptr<string> envType_ {};
    shared_ptr<string> orgType_ {};
    shared_ptr<int64_t> productId_ {};
    shared_ptr<string> productName_ {};
    shared_ptr<string> region_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
