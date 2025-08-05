// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSRUNOPTIONSDEADLETTERQUEUE_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSRUNOPTIONSDEADLETTERQUEUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue(const ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue(ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue& operator=(ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arn_ != nullptr
        && this->network_ != nullptr && this->securityGroupId_ != nullptr && this->vSwitchIds_ != nullptr && this->vpcId_ != nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string network() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline string vSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsDeadLetterQueue& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ARN of the dead-letter queue.
    std::shared_ptr<string> arn_ = nullptr;
    std::shared_ptr<string> network_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> vSwitchIds_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
