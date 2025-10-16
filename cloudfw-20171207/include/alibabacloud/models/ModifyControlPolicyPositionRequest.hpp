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
        && return this->lang_ == nullptr && return this->newOrder_ == nullptr && return this->oldOrder_ == nullptr && return this->sourceIp_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ModifyControlPolicyPositionRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyControlPolicyPositionRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // newOrder Field Functions 
    bool hasNewOrder() const { return this->newOrder_ != nullptr;};
    void deleteNewOrder() { this->newOrder_ = nullptr;};
    inline string newOrder() const { DARABONBA_PTR_GET_DEFAULT(newOrder_, "") };
    inline ModifyControlPolicyPositionRequest& setNewOrder(string newOrder) { DARABONBA_PTR_SET_VALUE(newOrder_, newOrder) };


    // oldOrder Field Functions 
    bool hasOldOrder() const { return this->oldOrder_ != nullptr;};
    void deleteOldOrder() { this->oldOrder_ = nullptr;};
    inline string oldOrder() const { DARABONBA_PTR_GET_DEFAULT(oldOrder_, "") };
    inline ModifyControlPolicyPositionRequest& setOldOrder(string oldOrder) { DARABONBA_PTR_SET_VALUE(oldOrder_, oldOrder) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyControlPolicyPositionRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The direction of the traffic to which the IPv4 access control policy applies. Valid values:
    // 
    // *   in: inbound traffic
    // *   out: outbound traffic
    // 
    // This parameter is required.
    std::shared_ptr<string> direction_ = nullptr;
    // The language of the content within the response. Valid values:
    // 
    // *   zh: Chinese (default)
    // *   en: English
    std::shared_ptr<string> lang_ = nullptr;
    // The new priority of the IPv4 access control policy. You must specify a numeric value for this parameter. The value 1 indicates the highest priority. A larger value indicates a lower priority.
    // 
    // >  The new priority cannot exceed the priority range of the IPv4 access control policy. Otherwise, an error occurs when you call this operation. Before you call this operation, we recommend that you use the [DescribePolicyPriorUsed](https://help.aliyun.com/document_detail/138862.html) operation to query the priority range of the IPv4 access control policy in the specified direction.
    // 
    // This parameter is required.
    std::shared_ptr<string> newOrder_ = nullptr;
    // The original priority of the IPv4 access control policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> oldOrder_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
