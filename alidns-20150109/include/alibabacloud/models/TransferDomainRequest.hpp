// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class TransferDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(TargetUserId, targetUserId_);
    };
    friend void from_json(const Darabonba::Json& j, TransferDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(TargetUserId, targetUserId_);
    };
    TransferDomainRequest() = default ;
    TransferDomainRequest(const TransferDomainRequest &) = default ;
    TransferDomainRequest(TransferDomainRequest &&) = default ;
    TransferDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferDomainRequest() = default ;
    TransferDomainRequest& operator=(const TransferDomainRequest &) = default ;
    TransferDomainRequest& operator=(TransferDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainNames_ == nullptr
        && this->lang_ == nullptr && this->remark_ == nullptr && this->targetUserId_ == nullptr; };
    // domainNames Field Functions 
    bool hasDomainNames() const { return this->domainNames_ != nullptr;};
    void deleteDomainNames() { this->domainNames_ = nullptr;};
    inline string getDomainNames() const { DARABONBA_PTR_GET_DEFAULT(domainNames_, "") };
    inline TransferDomainRequest& setDomainNames(string domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline TransferDomainRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline TransferDomainRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // targetUserId Field Functions 
    bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
    void deleteTargetUserId() { this->targetUserId_ = nullptr;};
    inline int64_t getTargetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, 0L) };
    inline TransferDomainRequest& setTargetUserId(int64_t targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


  protected:
    // The domain names. Separate multiple domain names with commas (,). Only domain names registered with Alibaba Cloud are supported.
    // 
    // This parameter is required.
    shared_ptr<string> domainNames_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The description of the domain name.
    shared_ptr<string> remark_ {};
    // The destination user ID. The domain names and their Domain Name System (DNS) records are transferred to the destination user ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> targetUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
