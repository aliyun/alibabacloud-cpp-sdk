// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSFERDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSFERDOMAINSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeTransferDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransferDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(FromUserId, fromUserId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TargetUserId, targetUserId_);
      DARABONBA_PTR_TO_JSON(TransferType, transferType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransferDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(FromUserId, fromUserId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TargetUserId, targetUserId_);
      DARABONBA_PTR_FROM_JSON(TransferType, transferType_);
    };
    DescribeTransferDomainsRequest() = default ;
    DescribeTransferDomainsRequest(const DescribeTransferDomainsRequest &) = default ;
    DescribeTransferDomainsRequest(DescribeTransferDomainsRequest &&) = default ;
    DescribeTransferDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransferDomainsRequest() = default ;
    DescribeTransferDomainsRequest& operator=(const DescribeTransferDomainsRequest &) = default ;
    DescribeTransferDomainsRequest& operator=(DescribeTransferDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->fromUserId_ == nullptr && return this->lang_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->targetUserId_ == nullptr
        && return this->transferType_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeTransferDomainsRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // fromUserId Field Functions 
    bool hasFromUserId() const { return this->fromUserId_ != nullptr;};
    void deleteFromUserId() { this->fromUserId_ = nullptr;};
    inline int64_t fromUserId() const { DARABONBA_PTR_GET_DEFAULT(fromUserId_, 0L) };
    inline DescribeTransferDomainsRequest& setFromUserId(int64_t fromUserId) { DARABONBA_PTR_SET_VALUE(fromUserId_, fromUserId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeTransferDomainsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeTransferDomainsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeTransferDomainsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // targetUserId Field Functions 
    bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
    void deleteTargetUserId() { this->targetUserId_ = nullptr;};
    inline int64_t targetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, 0L) };
    inline DescribeTransferDomainsRequest& setTargetUserId(int64_t targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


    // transferType Field Functions 
    bool hasTransferType() const { return this->transferType_ != nullptr;};
    void deleteTransferType() { this->transferType_ = nullptr;};
    inline string transferType() const { DARABONBA_PTR_GET_DEFAULT(transferType_, "") };
    inline DescribeTransferDomainsRequest& setTransferType(string transferType) { DARABONBA_PTR_SET_VALUE(transferType_, transferType) };


  protected:
    // Specifies the domain name for which you want to view the transfer record.
    std::shared_ptr<string> domainName_ = nullptr;
    // The user ID from which the domain name was transferred to the current account.
    std::shared_ptr<int64_t> fromUserId_ = nullptr;
    // The language.
    std::shared_ptr<string> lang_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The user ID to which the domain name was transferred from the current account.
    std::shared_ptr<int64_t> targetUserId_ = nullptr;
    // The transfer type. Valid values:
    // 
    // *   IN: The domain name was transferred to the current account.
    // *   OUT: The domain name was transferred from the current account.
    // 
    // This parameter is required.
    std::shared_ptr<string> transferType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
