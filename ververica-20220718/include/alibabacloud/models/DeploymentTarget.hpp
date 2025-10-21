// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMENTTARGET_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMENTTARGET_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResourceQuota.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class DeploymentTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploymentTarget& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(quota, quota_);
    };
    friend void from_json(const Darabonba::Json& j, DeploymentTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(quota, quota_);
    };
    DeploymentTarget() = default ;
    DeploymentTarget(const DeploymentTarget &) = default ;
    DeploymentTarget(DeploymentTarget &&) = default ;
    DeploymentTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploymentTarget() = default ;
    DeploymentTarget& operator=(const DeploymentTarget &) = default ;
    DeploymentTarget& operator=(DeploymentTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->namespace_ == nullptr && return this->quota_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeploymentTarget& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DeploymentTarget& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const ResourceQuota & quota() const { DARABONBA_PTR_GET_CONST(quota_, ResourceQuota) };
    inline ResourceQuota quota() { DARABONBA_PTR_GET(quota_, ResourceQuota) };
    inline DeploymentTarget& setQuota(const ResourceQuota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline DeploymentTarget& setQuota(ResourceQuota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<ResourceQuota> quota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
