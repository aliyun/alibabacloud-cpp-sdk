// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYELASTICITYASSURANCEAUTORENEWATTRIBUTEREQUESTPRIVATEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYELASTICITYASSURANCEAUTORENEWATTRIBUTEREQUESTPRIVATEPOOLOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    ModifyElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions() = default ;
    ModifyElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions(const ModifyElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions &) = default ;
    ModifyElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions(ModifyElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions &&) = default ;
    ModifyElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions() = default ;
    ModifyElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions& operator=(const ModifyElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions &) = default ;
    ModifyElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions& operator=(ModifyElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline const vector<string> & id() const { DARABONBA_PTR_GET_CONST(id_, vector<string>) };
    inline vector<string> id() { DARABONBA_PTR_GET(id_, vector<string>) };
    inline ModifyElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions& setId(const vector<string> & id) { DARABONBA_PTR_SET_VALUE(id_, id) };
    inline ModifyElasticityAssuranceAutoRenewAttributeRequestPrivatePoolOptions& setId(vector<string> && id) { DARABONBA_PTR_SET_RVALUE(id_, id) };


  protected:
    // The IDs of elasticity assurances.
    // 
    // >  You can renew up to 50 elasticity assurances at a time.
    std::shared_ptr<vector<string>> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
