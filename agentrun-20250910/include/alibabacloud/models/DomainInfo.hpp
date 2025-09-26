// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOMAININFO_HPP_
#define ALIBABACLOUD_MODELS_DOMAININFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class DomainInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DomainInfo& obj) { 
      DARABONBA_PTR_TO_JSON(certIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(domainId, domainId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, DomainInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(certIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(domainId, domainId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
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
    virtual bool empty() const override { this->certIdentifier_ != nullptr
        && this->domainId_ != nullptr && this->name_ != nullptr && this->protocol_ != nullptr; };
    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline DomainInfo& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline DomainInfo& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


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


  protected:
    std::shared_ptr<string> certIdentifier_ = nullptr;
    std::shared_ptr<string> domainId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
