// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSECURITYIPGROUPRELATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSECURITYIPGROUPRELATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifySecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class ModifySecurityIPGroupRelationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySecurityIPGroupRelationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalSecurityIPGroupRel, globalSecurityIPGroupRel_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySecurityIPGroupRelationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalSecurityIPGroupRel, globalSecurityIPGroupRel_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ModifySecurityIPGroupRelationResponseBodyData() = default ;
    ModifySecurityIPGroupRelationResponseBodyData(const ModifySecurityIPGroupRelationResponseBodyData &) = default ;
    ModifySecurityIPGroupRelationResponseBodyData(ModifySecurityIPGroupRelationResponseBodyData &&) = default ;
    ModifySecurityIPGroupRelationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySecurityIPGroupRelationResponseBodyData() = default ;
    ModifySecurityIPGroupRelationResponseBodyData& operator=(const ModifySecurityIPGroupRelationResponseBodyData &) = default ;
    ModifySecurityIPGroupRelationResponseBodyData& operator=(ModifySecurityIPGroupRelationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->globalSecurityIPGroupRel_ == nullptr
        && return this->instanceId_ == nullptr; };
    // globalSecurityIPGroupRel Field Functions 
    bool hasGlobalSecurityIPGroupRel() const { return this->globalSecurityIPGroupRel_ != nullptr;};
    void deleteGlobalSecurityIPGroupRel() { this->globalSecurityIPGroupRel_ = nullptr;};
    inline const vector<Models::ModifySecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel> & globalSecurityIPGroupRel() const { DARABONBA_PTR_GET_CONST(globalSecurityIPGroupRel_, vector<Models::ModifySecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel>) };
    inline vector<Models::ModifySecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel> globalSecurityIPGroupRel() { DARABONBA_PTR_GET(globalSecurityIPGroupRel_, vector<Models::ModifySecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel>) };
    inline ModifySecurityIPGroupRelationResponseBodyData& setGlobalSecurityIPGroupRel(const vector<Models::ModifySecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel> & globalSecurityIPGroupRel) { DARABONBA_PTR_SET_VALUE(globalSecurityIPGroupRel_, globalSecurityIPGroupRel) };
    inline ModifySecurityIPGroupRelationResponseBodyData& setGlobalSecurityIPGroupRel(vector<Models::ModifySecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel> && globalSecurityIPGroupRel) { DARABONBA_PTR_SET_RVALUE(globalSecurityIPGroupRel_, globalSecurityIPGroupRel) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifySecurityIPGroupRelationResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<vector<Models::ModifySecurityIPGroupRelationResponseBodyDataGlobalSecurityIPGroupRel>> globalSecurityIPGroupRel_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
