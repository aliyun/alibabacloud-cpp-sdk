// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYINSTANCEDOMAINCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYINSTANCEDOMAINCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetInstanceResponseBodyInstanceDomainConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyInstanceDomainConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultDomain, defaultDomain_);
      DARABONBA_PTR_TO_JSON(InitDomain, initDomain_);
      DARABONBA_PTR_TO_JSON(InitDomainAutoRedirectStatus, initDomainAutoRedirectStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyInstanceDomainConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultDomain, defaultDomain_);
      DARABONBA_PTR_FROM_JSON(InitDomain, initDomain_);
      DARABONBA_PTR_FROM_JSON(InitDomainAutoRedirectStatus, initDomainAutoRedirectStatus_);
    };
    GetInstanceResponseBodyInstanceDomainConfig() = default ;
    GetInstanceResponseBodyInstanceDomainConfig(const GetInstanceResponseBodyInstanceDomainConfig &) = default ;
    GetInstanceResponseBodyInstanceDomainConfig(GetInstanceResponseBodyInstanceDomainConfig &&) = default ;
    GetInstanceResponseBodyInstanceDomainConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyInstanceDomainConfig() = default ;
    GetInstanceResponseBodyInstanceDomainConfig& operator=(const GetInstanceResponseBodyInstanceDomainConfig &) = default ;
    GetInstanceResponseBodyInstanceDomainConfig& operator=(GetInstanceResponseBodyInstanceDomainConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultDomain_ != nullptr
        && this->initDomain_ != nullptr && this->initDomainAutoRedirectStatus_ != nullptr; };
    // defaultDomain Field Functions 
    bool hasDefaultDomain() const { return this->defaultDomain_ != nullptr;};
    void deleteDefaultDomain() { this->defaultDomain_ = nullptr;};
    inline string defaultDomain() const { DARABONBA_PTR_GET_DEFAULT(defaultDomain_, "") };
    inline GetInstanceResponseBodyInstanceDomainConfig& setDefaultDomain(string defaultDomain) { DARABONBA_PTR_SET_VALUE(defaultDomain_, defaultDomain) };


    // initDomain Field Functions 
    bool hasInitDomain() const { return this->initDomain_ != nullptr;};
    void deleteInitDomain() { this->initDomain_ = nullptr;};
    inline string initDomain() const { DARABONBA_PTR_GET_DEFAULT(initDomain_, "") };
    inline GetInstanceResponseBodyInstanceDomainConfig& setInitDomain(string initDomain) { DARABONBA_PTR_SET_VALUE(initDomain_, initDomain) };


    // initDomainAutoRedirectStatus Field Functions 
    bool hasInitDomainAutoRedirectStatus() const { return this->initDomainAutoRedirectStatus_ != nullptr;};
    void deleteInitDomainAutoRedirectStatus() { this->initDomainAutoRedirectStatus_ = nullptr;};
    inline string initDomainAutoRedirectStatus() const { DARABONBA_PTR_GET_DEFAULT(initDomainAutoRedirectStatus_, "") };
    inline GetInstanceResponseBodyInstanceDomainConfig& setInitDomainAutoRedirectStatus(string initDomainAutoRedirectStatus) { DARABONBA_PTR_SET_VALUE(initDomainAutoRedirectStatus_, initDomainAutoRedirectStatus) };


  protected:
    // The default domain of the instance.
    std::shared_ptr<string> defaultDomain_ = nullptr;
    // The init domain of the instance.
    std::shared_ptr<string> initDomain_ = nullptr;
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> initDomainAutoRedirectStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
