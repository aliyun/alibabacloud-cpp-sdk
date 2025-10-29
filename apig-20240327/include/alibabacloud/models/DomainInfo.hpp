// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOMAININFO_HPP_
#define ALIBABACLOUD_MODELS_DOMAININFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class DomainInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DomainInfo& obj) { 
      DARABONBA_PTR_TO_JSON(certIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(clientCACert, clientCACert_);
      DARABONBA_PTR_TO_JSON(createFrom, createFrom_);
      DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(domainId, domainId_);
      DARABONBA_PTR_TO_JSON(forceHttps, forceHttps_);
      DARABONBA_PTR_TO_JSON(mTLSEnabled, mTLSEnabled_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DomainInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(certIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(clientCACert, clientCACert_);
      DARABONBA_PTR_FROM_JSON(createFrom, createFrom_);
      DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(domainId, domainId_);
      DARABONBA_PTR_FROM_JSON(forceHttps, forceHttps_);
      DARABONBA_PTR_FROM_JSON(mTLSEnabled, mTLSEnabled_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
    };
    DomainInfo() = default ;
    DomainInfo(const DomainInfo &) = default ;
    DomainInfo(DomainInfo &&) = default ;
    DomainInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DomainInfo() = default ;
    DomainInfo& operator=(const DomainInfo &) = default ;
    DomainInfo& operator=(DomainInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certIdentifier_ == nullptr
        && return this->clientCACert_ == nullptr && return this->createFrom_ == nullptr && return this->createTimestamp_ == nullptr && return this->domainId_ == nullptr && return this->forceHttps_ == nullptr
        && return this->mTLSEnabled_ == nullptr && return this->name_ == nullptr && return this->protocol_ == nullptr && return this->resourceGroupId_ == nullptr && return this->status_ == nullptr
        && return this->updateTimestamp_ == nullptr; };
    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline DomainInfo& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // clientCACert Field Functions 
    bool hasClientCACert() const { return this->clientCACert_ != nullptr;};
    void deleteClientCACert() { this->clientCACert_ = nullptr;};
    inline string clientCACert() const { DARABONBA_PTR_GET_DEFAULT(clientCACert_, "") };
    inline DomainInfo& setClientCACert(string clientCACert) { DARABONBA_PTR_SET_VALUE(clientCACert_, clientCACert) };


    // createFrom Field Functions 
    bool hasCreateFrom() const { return this->createFrom_ != nullptr;};
    void deleteCreateFrom() { this->createFrom_ = nullptr;};
    inline string createFrom() const { DARABONBA_PTR_GET_DEFAULT(createFrom_, "") };
    inline DomainInfo& setCreateFrom(string createFrom) { DARABONBA_PTR_SET_VALUE(createFrom_, createFrom) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DomainInfo& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline DomainInfo& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // forceHttps Field Functions 
    bool hasForceHttps() const { return this->forceHttps_ != nullptr;};
    void deleteForceHttps() { this->forceHttps_ = nullptr;};
    inline bool forceHttps() const { DARABONBA_PTR_GET_DEFAULT(forceHttps_, false) };
    inline DomainInfo& setForceHttps(bool forceHttps) { DARABONBA_PTR_SET_VALUE(forceHttps_, forceHttps) };


    // mTLSEnabled Field Functions 
    bool hasMTLSEnabled() const { return this->mTLSEnabled_ != nullptr;};
    void deleteMTLSEnabled() { this->mTLSEnabled_ = nullptr;};
    inline bool mTLSEnabled() const { DARABONBA_PTR_GET_DEFAULT(mTLSEnabled_, false) };
    inline DomainInfo& setMTLSEnabled(bool mTLSEnabled) { DARABONBA_PTR_SET_VALUE(mTLSEnabled_, mTLSEnabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DomainInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DomainInfo& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DomainInfo& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DomainInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DomainInfo& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    std::shared_ptr<string> certIdentifier_ = nullptr;
    std::shared_ptr<string> clientCACert_ = nullptr;
    std::shared_ptr<string> createFrom_ = nullptr;
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    std::shared_ptr<string> domainId_ = nullptr;
    std::shared_ptr<bool> forceHttps_ = nullptr;
    std::shared_ptr<bool> mTLSEnabled_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
