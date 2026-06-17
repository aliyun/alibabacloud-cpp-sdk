// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCONTROLPOLICYPOSITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCONTROLPOLICYPOSITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyControlPolicyPositionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyControlPolicyPositionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NewOrder, newOrder_);
      DARABONBA_PTR_TO_JSON(OldOrder, oldOrder_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyControlPolicyPositionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NewOrder, newOrder_);
      DARABONBA_PTR_FROM_JSON(OldOrder, oldOrder_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    ModifyControlPolicyPositionRequest() = default ;
    ModifyControlPolicyPositionRequest(const ModifyControlPolicyPositionRequest &) = default ;
    ModifyControlPolicyPositionRequest(ModifyControlPolicyPositionRequest &&) = default ;
    ModifyControlPolicyPositionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyControlPolicyPositionRequest() = default ;
    ModifyControlPolicyPositionRequest& operator=(const ModifyControlPolicyPositionRequest &) = default ;
    ModifyControlPolicyPositionRequest& operator=(ModifyControlPolicyPositionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->direction_ == nullptr
        && this->lang_ == nullptr && this->newOrder_ == nullptr && this->oldOrder_ == nullptr && this->sourceIp_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ModifyControlPolicyPositionRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyControlPolicyPositionRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // newOrder Field Functions 
    bool hasNewOrder() const { return this->newOrder_ != nullptr;};
    void deleteNewOrder() { this->newOrder_ = nullptr;};
    inline string getNewOrder() const { DARABONBA_PTR_GET_DEFAULT(newOrder_, "") };
    inline ModifyControlPolicyPositionRequest& setNewOrder(string newOrder) { DARABONBA_PTR_SET_VALUE(newOrder_, newOrder) };


    // oldOrder Field Functions 
    bool hasOldOrder() const { return this->oldOrder_ != nullptr;};
    void deleteOldOrder() { this->oldOrder_ = nullptr;};
    inline string getOldOrder() const { DARABONBA_PTR_GET_DEFAULT(oldOrder_, "") };
    inline ModifyControlPolicyPositionRequest& setOldOrder(string oldOrder) { DARABONBA_PTR_SET_VALUE(oldOrder_, oldOrder) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyControlPolicyPositionRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The traffic direction of the IPv4 access control policy for the Internet firewall. Valid values:
    // 
    // - in: inbound traffic.
    // 
    // - out: outbound traffic.
    // 
    // This parameter is required.
    shared_ptr<string> direction_ {};
    // The language of the response message. Valid values:
    // 
    // - zh (default): Chinese.
    // 
    // - en: English.
    shared_ptr<string> lang_ {};
    // The new priority for the IPv4 access control policy of the Internet firewall. The priority is a number. A smaller number indicates a higher priority. The value 1 indicates the highest priority.
    // 
    // > The new priority value cannot be outside the range of existing priorities for IPv4 policies. Otherwise, the API call fails. Before you call this operation, call [DescribePolicyPriorUsed](https://help.aliyun.com/document_detail/138862.html) to query the priority range of IPv4 policies for a specific traffic direction.
    // 
    // This parameter is required.
    shared_ptr<string> newOrder_ {};
    // The current priority of the IPv4 access control policy that you want to modify.
    // 
    // This parameter is required.
    shared_ptr<string> oldOrder_ {};
    // The source IP address of the visitor.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
