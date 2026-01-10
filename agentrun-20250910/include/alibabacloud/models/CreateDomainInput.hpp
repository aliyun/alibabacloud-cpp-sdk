// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOMAININPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOMAININPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateDomainInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDomainInput& obj) { 
      DARABONBA_PTR_TO_JSON(certIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDomainInput& obj) { 
      DARABONBA_PTR_FROM_JSON(certIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
    };
    CreateDomainInput() = default ;
    CreateDomainInput(const CreateDomainInput &) = default ;
    CreateDomainInput(CreateDomainInput &&) = default ;
    CreateDomainInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDomainInput() = default ;
    CreateDomainInput& operator=(const CreateDomainInput &) = default ;
    CreateDomainInput& operator=(CreateDomainInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certIdentifier_ == nullptr
        && this->name_ == nullptr && this->protocol_ == nullptr; };
    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline CreateDomainInput& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDomainInput& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateDomainInput& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    shared_ptr<string> certIdentifier_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> protocol_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
