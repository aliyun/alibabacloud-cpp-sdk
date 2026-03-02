// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCEUPDATECMD_HPP_
#define ALIBABACLOUD_MODELS_RESOURCEUPDATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ResourceUpdateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceUpdateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(configuration, configuration_);
      DARABONBA_PTR_TO_JSON(credentials, credentials_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(useScope, useScope_);
      DARABONBA_PTR_TO_JSON(useType, useType_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceUpdateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(credentials, credentials_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(useScope, useScope_);
      DARABONBA_PTR_FROM_JSON(useType, useType_);
    };
    ResourceUpdateCmd() = default ;
    ResourceUpdateCmd(const ResourceUpdateCmd &) = default ;
    ResourceUpdateCmd(ResourceUpdateCmd &&) = default ;
    ResourceUpdateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceUpdateCmd() = default ;
    ResourceUpdateCmd& operator=(const ResourceUpdateCmd &) = default ;
    ResourceUpdateCmd& operator=(ResourceUpdateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->configuration_ == nullptr && this->credentials_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->namespace_ == nullptr
        && this->useScope_ == nullptr && this->useType_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ResourceUpdateCmd& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline string getConfiguration() const { DARABONBA_PTR_GET_DEFAULT(configuration_, "") };
    inline ResourceUpdateCmd& setConfiguration(string configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };


    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline string getCredentials() const { DARABONBA_PTR_GET_DEFAULT(credentials_, "") };
    inline ResourceUpdateCmd& setCredentials(string credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ResourceUpdateCmd& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ResourceUpdateCmd& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ResourceUpdateCmd& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // useScope Field Functions 
    bool hasUseScope() const { return this->useScope_ != nullptr;};
    void deleteUseScope() { this->useScope_ = nullptr;};
    inline string getUseScope() const { DARABONBA_PTR_GET_DEFAULT(useScope_, "") };
    inline ResourceUpdateCmd& setUseScope(string useScope) { DARABONBA_PTR_SET_VALUE(useScope_, useScope) };


    // useType Field Functions 
    bool hasUseType() const { return this->useType_ != nullptr;};
    void deleteUseType() { this->useType_ = nullptr;};
    inline string getUseType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
    inline ResourceUpdateCmd& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


  protected:
    shared_ptr<string> address_ {};
    shared_ptr<string> configuration_ {};
    shared_ptr<string> credentials_ {};
    shared_ptr<string> description_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> namespace_ {};
    shared_ptr<string> useScope_ {};
    shared_ptr<string> useType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
