// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGSETLISTRESPONSEBODYCONFIGSETSIPPOOL_HPP_
#define ALIBABACLOUD_MODELS_CONFIGSETLISTRESPONSEBODYCONFIGSETSIPPOOL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ConfigSetListResponseBodyConfigSetsIpPool : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigSetListResponseBodyConfigSetsIpPool& obj) { 
      DARABONBA_PTR_TO_JSON(IpPoolId, ipPoolId_);
      DARABONBA_PTR_TO_JSON(IpPoolName, ipPoolName_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigSetListResponseBodyConfigSetsIpPool& obj) { 
      DARABONBA_PTR_FROM_JSON(IpPoolId, ipPoolId_);
      DARABONBA_PTR_FROM_JSON(IpPoolName, ipPoolName_);
    };
    ConfigSetListResponseBodyConfigSetsIpPool() = default ;
    ConfigSetListResponseBodyConfigSetsIpPool(const ConfigSetListResponseBodyConfigSetsIpPool &) = default ;
    ConfigSetListResponseBodyConfigSetsIpPool(ConfigSetListResponseBodyConfigSetsIpPool &&) = default ;
    ConfigSetListResponseBodyConfigSetsIpPool(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigSetListResponseBodyConfigSetsIpPool() = default ;
    ConfigSetListResponseBodyConfigSetsIpPool& operator=(const ConfigSetListResponseBodyConfigSetsIpPool &) = default ;
    ConfigSetListResponseBodyConfigSetsIpPool& operator=(ConfigSetListResponseBodyConfigSetsIpPool &&) = default ;
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
    inline ConfigSetListResponseBodyConfigSetsIpPool& setIpPoolId(string ipPoolId) { DARABONBA_PTR_SET_VALUE(ipPoolId_, ipPoolId) };


    // ipPoolName Field Functions 
    bool hasIpPoolName() const { return this->ipPoolName_ != nullptr;};
    void deleteIpPoolName() { this->ipPoolName_ = nullptr;};
    inline string ipPoolName() const { DARABONBA_PTR_GET_DEFAULT(ipPoolName_, "") };
    inline ConfigSetListResponseBodyConfigSetsIpPool& setIpPoolName(string ipPoolName) { DARABONBA_PTR_SET_VALUE(ipPoolName_, ipPoolName) };


  protected:
    std::shared_ptr<string> ipPoolId_ = nullptr;
    std::shared_ptr<string> ipPoolName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
