// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCECREATECMD_HPP_
#define ALIBABACLOUD_MODELS_RESOURCECREATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ResourceCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(configuration, configuration_);
      DARABONBA_PTR_TO_JSON(credentials, credentials_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(env, env_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(useScope, useScope_);
      DARABONBA_PTR_TO_JSON(useType, useType_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(credentials, credentials_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(env, env_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(useScope, useScope_);
      DARABONBA_PTR_FROM_JSON(useType, useType_);
    };
    ResourceCreateCmd() = default ;
    ResourceCreateCmd(const ResourceCreateCmd &) = default ;
    ResourceCreateCmd(ResourceCreateCmd &&) = default ;
    ResourceCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceCreateCmd() = default ;
    ResourceCreateCmd& operator=(const ResourceCreateCmd &) = default ;
    ResourceCreateCmd& operator=(ResourceCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->companyId_ == nullptr && this->configuration_ == nullptr && this->credentials_ == nullptr && this->description_ == nullptr && this->env_ == nullptr
        && this->name_ == nullptr && this->namespace_ == nullptr && this->productId_ == nullptr && this->type_ == nullptr && this->useScope_ == nullptr
        && this->useType_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ResourceCreateCmd& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline ResourceCreateCmd& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline string getConfiguration() const { DARABONBA_PTR_GET_DEFAULT(configuration_, "") };
    inline ResourceCreateCmd& setConfiguration(string configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };


    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline string getCredentials() const { DARABONBA_PTR_GET_DEFAULT(credentials_, "") };
    inline ResourceCreateCmd& setCredentials(string credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ResourceCreateCmd& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ResourceCreateCmd& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ResourceCreateCmd& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ResourceCreateCmd& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline ResourceCreateCmd& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ResourceCreateCmd& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // useScope Field Functions 
    bool hasUseScope() const { return this->useScope_ != nullptr;};
    void deleteUseScope() { this->useScope_ = nullptr;};
    inline string getUseScope() const { DARABONBA_PTR_GET_DEFAULT(useScope_, "") };
    inline ResourceCreateCmd& setUseScope(string useScope) { DARABONBA_PTR_SET_VALUE(useScope_, useScope) };


    // useType Field Functions 
    bool hasUseType() const { return this->useType_ != nullptr;};
    void deleteUseType() { this->useType_ = nullptr;};
    inline string getUseType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
    inline ResourceCreateCmd& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


  protected:
    // This parameter is required.
    shared_ptr<string> address_ {};
    // This parameter is required.
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<string> configuration_ {};
    // This parameter is required.
    shared_ptr<string> credentials_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> env_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> namespace_ {};
    // This parameter is required.
    shared_ptr<int64_t> productId_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
    // This parameter is required.
    shared_ptr<string> useScope_ {};
    // This parameter is required.
    shared_ptr<string> useType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
