// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METADATAINFO_HPP_
#define ALIBABACLOUD_MODELS_METADATAINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MetadataInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetadataInfo& obj) { 
      DARABONBA_PTR_TO_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(env, env_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(namespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(namespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(orgId, orgId_);
    };
    friend void from_json(const Darabonba::Json& j, MetadataInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(env, env_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(namespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(namespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(orgId, orgId_);
    };
    MetadataInfo() = default ;
    MetadataInfo(const MetadataInfo &) = default ;
    MetadataInfo(MetadataInfo &&) = default ;
    MetadataInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetadataInfo() = default ;
    MetadataInfo& operator=(const MetadataInfo &) = default ;
    MetadataInfo& operator=(MetadataInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enterpriseId_ == nullptr
        && this->env_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr && this->namespaceId_ == nullptr && this->namespaceName_ == nullptr
        && this->orgId_ == nullptr; };
    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline MetadataInfo& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline MetadataInfo& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline MetadataInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline MetadataInfo& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline int64_t getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, 0L) };
    inline MetadataInfo& setNamespaceId(int64_t namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline MetadataInfo& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline int32_t getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, 0) };
    inline MetadataInfo& setOrgId(int32_t orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


  protected:
    shared_ptr<int64_t> enterpriseId_ {};
    // This parameter is required.
    shared_ptr<string> env_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<int64_t> instanceId_ {};
    shared_ptr<int64_t> namespaceId_ {};
    // This parameter is required.
    shared_ptr<string> namespaceName_ {};
    shared_ptr<int32_t> orgId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
