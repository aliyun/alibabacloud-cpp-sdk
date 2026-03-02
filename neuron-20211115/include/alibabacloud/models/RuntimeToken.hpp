// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTIMETOKEN_HPP_
#define ALIBABACLOUD_MODELS_RUNTIMETOKEN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class RuntimeToken : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RuntimeToken& obj) { 
      DARABONBA_PTR_TO_JSON(env, env_);
      DARABONBA_PTR_TO_JSON(pbcId, pbcId_);
      DARABONBA_PTR_TO_JSON(pbcName, pbcName_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
      DARABONBA_PTR_TO_JSON(token, token_);
    };
    friend void from_json(const Darabonba::Json& j, RuntimeToken& obj) { 
      DARABONBA_PTR_FROM_JSON(env, env_);
      DARABONBA_PTR_FROM_JSON(pbcId, pbcId_);
      DARABONBA_PTR_FROM_JSON(pbcName, pbcName_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(token, token_);
    };
    RuntimeToken() = default ;
    RuntimeToken(const RuntimeToken &) = default ;
    RuntimeToken(RuntimeToken &&) = default ;
    RuntimeToken(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RuntimeToken() = default ;
    RuntimeToken& operator=(const RuntimeToken &) = default ;
    RuntimeToken& operator=(RuntimeToken &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && this->pbcId_ == nullptr && this->pbcName_ == nullptr && this->serviceId_ == nullptr && this->serviceName_ == nullptr && this->token_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline RuntimeToken& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // pbcId Field Functions 
    bool hasPbcId() const { return this->pbcId_ != nullptr;};
    void deletePbcId() { this->pbcId_ = nullptr;};
    inline int64_t getPbcId() const { DARABONBA_PTR_GET_DEFAULT(pbcId_, 0L) };
    inline RuntimeToken& setPbcId(int64_t pbcId) { DARABONBA_PTR_SET_VALUE(pbcId_, pbcId) };


    // pbcName Field Functions 
    bool hasPbcName() const { return this->pbcName_ != nullptr;};
    void deletePbcName() { this->pbcName_ = nullptr;};
    inline string getPbcName() const { DARABONBA_PTR_GET_DEFAULT(pbcName_, "") };
    inline RuntimeToken& setPbcName(string pbcName) { DARABONBA_PTR_SET_VALUE(pbcName_, pbcName) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int64_t getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
    inline RuntimeToken& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline RuntimeToken& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline RuntimeToken& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    shared_ptr<string> env_ {};
    shared_ptr<int64_t> pbcId_ {};
    shared_ptr<string> pbcName_ {};
    shared_ptr<int64_t> serviceId_ {};
    shared_ptr<string> serviceName_ {};
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
