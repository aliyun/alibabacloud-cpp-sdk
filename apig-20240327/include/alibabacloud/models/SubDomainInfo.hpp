// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBDOMAININFO_HPP_
#define ALIBABACLOUD_MODELS_SUBDOMAININFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class SubDomainInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubDomainInfo& obj) { 
      DARABONBA_PTR_TO_JSON(domainId, domainId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(networkType, networkType_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, SubDomainInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(domainId, domainId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(networkType, networkType_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
    };
    SubDomainInfo() = default ;
    SubDomainInfo(const SubDomainInfo &) = default ;
    SubDomainInfo(SubDomainInfo &&) = default ;
    SubDomainInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubDomainInfo() = default ;
    SubDomainInfo& operator=(const SubDomainInfo &) = default ;
    SubDomainInfo& operator=(SubDomainInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainId_ == nullptr
        && this->name_ == nullptr && this->networkType_ == nullptr && this->protocol_ == nullptr; };
    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline SubDomainInfo& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubDomainInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline SubDomainInfo& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline SubDomainInfo& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    // The domain name ID.
    shared_ptr<string> domainId_ {};
    // The domain name.
    shared_ptr<string> name_ {};
    // The network type. Valid values:
    // 
    // Valid values:
    // 
    // *   Intranet
    // *   Internet
    shared_ptr<string> networkType_ {};
    // The protocol.
    // 
    // Valid values:
    // 
    // *   HTTPS
    // *   HTTP
    shared_ptr<string> protocol_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
