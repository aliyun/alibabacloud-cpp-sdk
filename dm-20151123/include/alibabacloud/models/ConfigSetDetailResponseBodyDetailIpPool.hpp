// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGSETDETAILRESPONSEBODYDETAILIPPOOL_HPP_
#define ALIBABACLOUD_MODELS_CONFIGSETDETAILRESPONSEBODYDETAILIPPOOL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ConfigSetDetailResponseBodyDetailIpPool : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigSetDetailResponseBodyDetailIpPool& obj) { 
      DARABONBA_PTR_TO_JSON(IpPoolId, ipPoolId_);
      DARABONBA_PTR_TO_JSON(IpPoolName, ipPoolName_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigSetDetailResponseBodyDetailIpPool& obj) { 
      DARABONBA_PTR_FROM_JSON(IpPoolId, ipPoolId_);
      DARABONBA_PTR_FROM_JSON(IpPoolName, ipPoolName_);
    };
    ConfigSetDetailResponseBodyDetailIpPool() = default ;
    ConfigSetDetailResponseBodyDetailIpPool(const ConfigSetDetailResponseBodyDetailIpPool &) = default ;
    ConfigSetDetailResponseBodyDetailIpPool(ConfigSetDetailResponseBodyDetailIpPool &&) = default ;
    ConfigSetDetailResponseBodyDetailIpPool(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigSetDetailResponseBodyDetailIpPool() = default ;
    ConfigSetDetailResponseBodyDetailIpPool& operator=(const ConfigSetDetailResponseBodyDetailIpPool &) = default ;
    ConfigSetDetailResponseBodyDetailIpPool& operator=(ConfigSetDetailResponseBodyDetailIpPool &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipPoolId_ == nullptr
        && return this->ipPoolName_ == nullptr; };
    // ipPoolId Field Functions 
    bool hasIpPoolId() const { return this->ipPoolId_ != nullptr;};
    void deleteIpPoolId() { this->ipPoolId_ = nullptr;};
    inline string ipPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipPoolId_, "") };
    inline ConfigSetDetailResponseBodyDetailIpPool& setIpPoolId(string ipPoolId) { DARABONBA_PTR_SET_VALUE(ipPoolId_, ipPoolId) };


    // ipPoolName Field Functions 
    bool hasIpPoolName() const { return this->ipPoolName_ != nullptr;};
    void deleteIpPoolName() { this->ipPoolName_ = nullptr;};
    inline string ipPoolName() const { DARABONBA_PTR_GET_DEFAULT(ipPoolName_, "") };
    inline ConfigSetDetailResponseBodyDetailIpPool& setIpPoolName(string ipPoolName) { DARABONBA_PTR_SET_VALUE(ipPoolName_, ipPoolName) };


  protected:
    std::shared_ptr<string> ipPoolId_ = nullptr;
    std::shared_ptr<string> ipPoolName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
