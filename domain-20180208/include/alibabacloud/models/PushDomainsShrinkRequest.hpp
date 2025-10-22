// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHDOMAINSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHDOMAINSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class PushDomainsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushDomainsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainList, domainListShrink_);
      DARABONBA_PTR_TO_JSON(OutBizId, outBizId_);
      DARABONBA_PTR_TO_JSON(PublishRemark, publishRemark_);
      DARABONBA_PTR_TO_JSON(ReceiverAccount, receiverAccount_);
    };
    friend void from_json(const Darabonba::Json& j, PushDomainsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainList, domainListShrink_);
      DARABONBA_PTR_FROM_JSON(OutBizId, outBizId_);
      DARABONBA_PTR_FROM_JSON(PublishRemark, publishRemark_);
      DARABONBA_PTR_FROM_JSON(ReceiverAccount, receiverAccount_);
    };
    PushDomainsShrinkRequest() = default ;
    PushDomainsShrinkRequest(const PushDomainsShrinkRequest &) = default ;
    PushDomainsShrinkRequest(PushDomainsShrinkRequest &&) = default ;
    PushDomainsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushDomainsShrinkRequest() = default ;
    PushDomainsShrinkRequest& operator=(const PushDomainsShrinkRequest &) = default ;
    PushDomainsShrinkRequest& operator=(PushDomainsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainListShrink_ == nullptr
        && return this->outBizId_ == nullptr && return this->publishRemark_ == nullptr && return this->receiverAccount_ == nullptr; };
    // domainListShrink Field Functions 
    bool hasDomainListShrink() const { return this->domainListShrink_ != nullptr;};
    void deleteDomainListShrink() { this->domainListShrink_ = nullptr;};
    inline string domainListShrink() const { DARABONBA_PTR_GET_DEFAULT(domainListShrink_, "") };
    inline PushDomainsShrinkRequest& setDomainListShrink(string domainListShrink) { DARABONBA_PTR_SET_VALUE(domainListShrink_, domainListShrink) };


    // outBizId Field Functions 
    bool hasOutBizId() const { return this->outBizId_ != nullptr;};
    void deleteOutBizId() { this->outBizId_ = nullptr;};
    inline string outBizId() const { DARABONBA_PTR_GET_DEFAULT(outBizId_, "") };
    inline PushDomainsShrinkRequest& setOutBizId(string outBizId) { DARABONBA_PTR_SET_VALUE(outBizId_, outBizId) };


    // publishRemark Field Functions 
    bool hasPublishRemark() const { return this->publishRemark_ != nullptr;};
    void deletePublishRemark() { this->publishRemark_ = nullptr;};
    inline string publishRemark() const { DARABONBA_PTR_GET_DEFAULT(publishRemark_, "") };
    inline PushDomainsShrinkRequest& setPublishRemark(string publishRemark) { DARABONBA_PTR_SET_VALUE(publishRemark_, publishRemark) };


    // receiverAccount Field Functions 
    bool hasReceiverAccount() const { return this->receiverAccount_ != nullptr;};
    void deleteReceiverAccount() { this->receiverAccount_ = nullptr;};
    inline string receiverAccount() const { DARABONBA_PTR_GET_DEFAULT(receiverAccount_, "") };
    inline PushDomainsShrinkRequest& setReceiverAccount(string receiverAccount) { DARABONBA_PTR_SET_VALUE(receiverAccount_, receiverAccount) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> domainListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outBizId_ = nullptr;
    std::shared_ptr<string> publishRemark_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> receiverAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
