// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELAPIDOMAININFO_HPP_
#define ALIBABACLOUD_MODELS_MODELAPIDOMAININFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ModelApiDomainInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelApiDomainInfo& obj) { 
      DARABONBA_PTR_TO_JSON(default, default_);
      DARABONBA_PTR_TO_JSON(domainId, domainId_);
      DARABONBA_PTR_TO_JSON(domainScope, domainScope_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, ModelApiDomainInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(default, default_);
      DARABONBA_PTR_FROM_JSON(domainId, domainId_);
      DARABONBA_PTR_FROM_JSON(domainScope, domainScope_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
    };
    ModelApiDomainInfo() = default ;
    ModelApiDomainInfo(const ModelApiDomainInfo &) = default ;
    ModelApiDomainInfo(ModelApiDomainInfo &&) = default ;
    ModelApiDomainInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelApiDomainInfo() = default ;
    ModelApiDomainInfo& operator=(const ModelApiDomainInfo &) = default ;
    ModelApiDomainInfo& operator=(ModelApiDomainInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->default_ == nullptr
        && this->domainId_ == nullptr && this->domainScope_ == nullptr && this->name_ == nullptr && this->protocol_ == nullptr; };
    // default Field Functions 
    bool hasDefault() const { return this->default_ != nullptr;};
    void deleteDefault() { this->default_ = nullptr;};
    inline bool getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, false) };
    inline ModelApiDomainInfo& setDefault(bool _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline ModelApiDomainInfo& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainScope Field Functions 
    bool hasDomainScope() const { return this->domainScope_ != nullptr;};
    void deleteDomainScope() { this->domainScope_ = nullptr;};
    inline string getDomainScope() const { DARABONBA_PTR_GET_DEFAULT(domainScope_, "") };
    inline ModelApiDomainInfo& setDomainScope(string domainScope) { DARABONBA_PTR_SET_VALUE(domainScope_, domainScope) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModelApiDomainInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ModelApiDomainInfo& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    // Indicates whether it is the default domain name of the instance.
    shared_ptr<bool> default_ {};
    // The domain name ID.
    shared_ptr<string> domainId_ {};
    // The domain name scope.
    shared_ptr<string> domainScope_ {};
    // The domain name.
    shared_ptr<string> name_ {};
    // The access protocol.
    shared_ptr<string> protocol_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
