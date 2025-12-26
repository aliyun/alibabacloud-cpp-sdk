// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGEBASEJOBUSERVPC_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGEBASEJOBUSERVPC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class KnowledgeBaseJobUserVpc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KnowledgeBaseJobUserVpc& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, KnowledgeBaseJobUserVpc& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    KnowledgeBaseJobUserVpc() = default ;
    KnowledgeBaseJobUserVpc(const KnowledgeBaseJobUserVpc &) = default ;
    KnowledgeBaseJobUserVpc(KnowledgeBaseJobUserVpc &&) = default ;
    KnowledgeBaseJobUserVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KnowledgeBaseJobUserVpc() = default ;
    KnowledgeBaseJobUserVpc& operator=(const KnowledgeBaseJobUserVpc &) = default ;
    KnowledgeBaseJobUserVpc& operator=(KnowledgeBaseJobUserVpc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityGroupId_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline KnowledgeBaseJobUserVpc& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline KnowledgeBaseJobUserVpc& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline KnowledgeBaseJobUserVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // 安全组ID
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // 交换机ID
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // VPC ID
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
