// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPGREYSERVICEGROUPCREATECMD_HPP_
#define ALIBABACLOUD_MODELS_PDPGREYSERVICEGROUPCREATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PdpGreyServiceGroupCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpGreyServiceGroupCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(env, env_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
    };
    friend void from_json(const Darabonba::Json& j, PdpGreyServiceGroupCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(env, env_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
    };
    PdpGreyServiceGroupCreateCmd() = default ;
    PdpGreyServiceGroupCreateCmd(const PdpGreyServiceGroupCreateCmd &) = default ;
    PdpGreyServiceGroupCreateCmd(PdpGreyServiceGroupCreateCmd &&) = default ;
    PdpGreyServiceGroupCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpGreyServiceGroupCreateCmd() = default ;
    PdpGreyServiceGroupCreateCmd& operator=(const PdpGreyServiceGroupCreateCmd &) = default ;
    PdpGreyServiceGroupCreateCmd& operator=(PdpGreyServiceGroupCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && this->serviceId_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline PdpGreyServiceGroupCreateCmd& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int64_t getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
    inline PdpGreyServiceGroupCreateCmd& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> env_ {};
    // This parameter is required.
    shared_ptr<int64_t> serviceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
