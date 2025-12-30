// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDRESOLVERRULEVPCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDRESOLVERRULEVPCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class BindResolverRuleVpcRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindResolverRuleVpcRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(Vpc, vpc_);
    };
    friend void from_json(const Darabonba::Json& j, BindResolverRuleVpcRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(Vpc, vpc_);
    };
    BindResolverRuleVpcRequest() = default ;
    BindResolverRuleVpcRequest(const BindResolverRuleVpcRequest &) = default ;
    BindResolverRuleVpcRequest(BindResolverRuleVpcRequest &&) = default ;
    BindResolverRuleVpcRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindResolverRuleVpcRequest() = default ;
    BindResolverRuleVpcRequest& operator=(const BindResolverRuleVpcRequest &) = default ;
    BindResolverRuleVpcRequest& operator=(BindResolverRuleVpcRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Vpc : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Vpc& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcType, vpcType_);
      };
      friend void from_json(const Darabonba::Json& j, Vpc& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcType, vpcType_);
      };
      Vpc() = default ;
      Vpc(const Vpc &) = default ;
      Vpc(Vpc &&) = default ;
      Vpc(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Vpc() = default ;
      Vpc& operator=(const Vpc &) = default ;
      Vpc& operator=(Vpc &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->vpcId_ == nullptr && this->vpcType_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Vpc& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Vpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcType Field Functions 
      bool hasVpcType() const { return this->vpcType_ != nullptr;};
      void deleteVpcType() { this->vpcType_ = nullptr;};
      inline string getVpcType() const { DARABONBA_PTR_GET_DEFAULT(vpcType_, "") };
      inline Vpc& setVpcType(string vpcType) { DARABONBA_PTR_SET_VALUE(vpcType_, vpcType) };


    protected:
      // The region ID of the outbound VPC.
      shared_ptr<string> regionId_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
      // The VPC type. Valid values:
      // 
      // *   STANDARD: standard VPC
      // *   EDS: Elastic Desktop Service (EDS) workspace VPC
      shared_ptr<string> vpcType_ {};
    };

    virtual bool empty() const override { return this->lang_ == nullptr
        && this->ruleId_ == nullptr && this->vpc_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline BindResolverRuleVpcRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline BindResolverRuleVpcRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // vpc Field Functions 
    bool hasVpc() const { return this->vpc_ != nullptr;};
    void deleteVpc() { this->vpc_ = nullptr;};
    inline const vector<BindResolverRuleVpcRequest::Vpc> & getVpc() const { DARABONBA_PTR_GET_CONST(vpc_, vector<BindResolverRuleVpcRequest::Vpc>) };
    inline vector<BindResolverRuleVpcRequest::Vpc> getVpc() { DARABONBA_PTR_GET(vpc_, vector<BindResolverRuleVpcRequest::Vpc>) };
    inline BindResolverRuleVpcRequest& setVpc(const vector<BindResolverRuleVpcRequest::Vpc> & vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };
    inline BindResolverRuleVpcRequest& setVpc(vector<BindResolverRuleVpcRequest::Vpc> && vpc) { DARABONBA_PTR_SET_RVALUE(vpc_, vpc) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    // 
    // Default value: en.
    shared_ptr<string> lang_ {};
    // The ID of the forwarding rule.
    // 
    // This parameter is required.
    shared_ptr<string> ruleId_ {};
    // The VPCs that you want to associate with the forwarding rule.
    shared_ptr<vector<BindResolverRuleVpcRequest::Vpc>> vpc_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
