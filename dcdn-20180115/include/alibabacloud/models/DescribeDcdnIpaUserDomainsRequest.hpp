// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNIPAUSERDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNIPAUSERDOMAINSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnIpaUserDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnIpaUserDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckDomainShow, checkDomainShow_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainSearchType, domainSearchType_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(FuncFilter, funcFilter_);
      DARABONBA_PTR_TO_JSON(FuncId, funcId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnIpaUserDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckDomainShow, checkDomainShow_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainSearchType, domainSearchType_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(FuncFilter, funcFilter_);
      DARABONBA_PTR_FROM_JSON(FuncId, funcId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeDcdnIpaUserDomainsRequest() = default ;
    DescribeDcdnIpaUserDomainsRequest(const DescribeDcdnIpaUserDomainsRequest &) = default ;
    DescribeDcdnIpaUserDomainsRequest(DescribeDcdnIpaUserDomainsRequest &&) = default ;
    DescribeDcdnIpaUserDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnIpaUserDomainsRequest() = default ;
    DescribeDcdnIpaUserDomainsRequest& operator=(const DescribeDcdnIpaUserDomainsRequest &) = default ;
    DescribeDcdnIpaUserDomainsRequest& operator=(DescribeDcdnIpaUserDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. Valid values of N: 1 to 20. You can call the TagDcdnResources operation to set a tag for a domain name.
      shared_ptr<string> key_ {};
      // The tag value. Valid values of N: 1 to 20.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->checkDomainShow_ == nullptr
        && this->domainName_ == nullptr && this->domainSearchType_ == nullptr && this->domainStatus_ == nullptr && this->funcFilter_ == nullptr && this->funcId_ == nullptr
        && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->resourceGroupId_ == nullptr && this->tag_ == nullptr; };
    // checkDomainShow Field Functions 
    bool hasCheckDomainShow() const { return this->checkDomainShow_ != nullptr;};
    void deleteCheckDomainShow() { this->checkDomainShow_ = nullptr;};
    inline bool getCheckDomainShow() const { DARABONBA_PTR_GET_DEFAULT(checkDomainShow_, false) };
    inline DescribeDcdnIpaUserDomainsRequest& setCheckDomainShow(bool checkDomainShow) { DARABONBA_PTR_SET_VALUE(checkDomainShow_, checkDomainShow) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnIpaUserDomainsRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainSearchType Field Functions 
    bool hasDomainSearchType() const { return this->domainSearchType_ != nullptr;};
    void deleteDomainSearchType() { this->domainSearchType_ = nullptr;};
    inline string getDomainSearchType() const { DARABONBA_PTR_GET_DEFAULT(domainSearchType_, "") };
    inline DescribeDcdnIpaUserDomainsRequest& setDomainSearchType(string domainSearchType) { DARABONBA_PTR_SET_VALUE(domainSearchType_, domainSearchType) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string getDomainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline DescribeDcdnIpaUserDomainsRequest& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // funcFilter Field Functions 
    bool hasFuncFilter() const { return this->funcFilter_ != nullptr;};
    void deleteFuncFilter() { this->funcFilter_ = nullptr;};
    inline string getFuncFilter() const { DARABONBA_PTR_GET_DEFAULT(funcFilter_, "") };
    inline DescribeDcdnIpaUserDomainsRequest& setFuncFilter(string funcFilter) { DARABONBA_PTR_SET_VALUE(funcFilter_, funcFilter) };


    // funcId Field Functions 
    bool hasFuncId() const { return this->funcId_ != nullptr;};
    void deleteFuncId() { this->funcId_ = nullptr;};
    inline string getFuncId() const { DARABONBA_PTR_GET_DEFAULT(funcId_, "") };
    inline DescribeDcdnIpaUserDomainsRequest& setFuncId(string funcId) { DARABONBA_PTR_SET_VALUE(funcId_, funcId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeDcdnIpaUserDomainsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDcdnIpaUserDomainsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDcdnIpaUserDomainsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDcdnIpaUserDomainsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeDcdnIpaUserDomainsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeDcdnIpaUserDomainsRequest::Tag>) };
    inline vector<DescribeDcdnIpaUserDomainsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeDcdnIpaUserDomainsRequest::Tag>) };
    inline DescribeDcdnIpaUserDomainsRequest& setTag(const vector<DescribeDcdnIpaUserDomainsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDcdnIpaUserDomainsRequest& setTag(vector<DescribeDcdnIpaUserDomainsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // Specifies whether to display domain names that are under review, failed the review, or failed to be configured. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> checkDomainShow_ {};
    // The domain name that is used as a keyword to filter domain names. Fuzzy match is supported.
    shared_ptr<string> domainName_ {};
    // The search method. Default value: full_match. Valid values:
    // 
    // *   **fuzzy_match**: fuzzy match
    // *   **pre_match**: prefix match
    // *   **suf_match**: suffix match
    // *   **full_match**: exact match
    shared_ptr<string> domainSearchType_ {};
    // The status of the domain name. Valid values:
    // 
    // *   **online**: enabled
    // *   **offline**: disabled
    // *   **configuring**: configuring
    // *   **configure_failed**: configuration failed
    // *   **checking**: reviewing
    // *   **check_failed:** review failed
    shared_ptr<string> domainStatus_ {};
    // The status of the feature.
    // 
    // *   config: The feature is enabled.
    // *   unconfig: The feature is not enabled.
    shared_ptr<string> funcFilter_ {};
    // The ID of the feature. For example, a value of 7 specifies the feature of configuring an expiration rule for a specific directory. For more information about feature IDs, see [Parameters for configuring features for domain names](https://help.aliyun.com/document_detail/410622.html).
    shared_ptr<string> funcId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number. Valid values: **1** to **100000**. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of domain names per page. Default value: **20**.**** Valid values: **1** to **500**.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The tags of the command.
    shared_ptr<vector<DescribeDcdnIpaUserDomainsRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
