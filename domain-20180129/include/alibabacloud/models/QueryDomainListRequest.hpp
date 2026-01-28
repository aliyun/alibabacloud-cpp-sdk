// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ccompany, ccompany_);
      DARABONBA_PTR_TO_JSON(Dns, dns_);
      DARABONBA_PTR_TO_JSON(DomainGroupId, domainGroupId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndExpirationDate, endExpirationDate_);
      DARABONBA_PTR_TO_JSON(EndRegistrationDate, endRegistrationDate_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(OrderByType, orderByType_);
      DARABONBA_PTR_TO_JSON(OrderKeyType, orderKeyType_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductDomainType, productDomainType_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(Registrar, registrar_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StartExpirationDate, startExpirationDate_);
      DARABONBA_PTR_TO_JSON(StartRegistrationDate, startRegistrationDate_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ccompany, ccompany_);
      DARABONBA_PTR_FROM_JSON(Dns, dns_);
      DARABONBA_PTR_FROM_JSON(DomainGroupId, domainGroupId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndExpirationDate, endExpirationDate_);
      DARABONBA_PTR_FROM_JSON(EndRegistrationDate, endRegistrationDate_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(OrderByType, orderByType_);
      DARABONBA_PTR_FROM_JSON(OrderKeyType, orderKeyType_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductDomainType, productDomainType_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(Registrar, registrar_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StartExpirationDate, startExpirationDate_);
      DARABONBA_PTR_FROM_JSON(StartRegistrationDate, startRegistrationDate_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    QueryDomainListRequest() = default ;
    QueryDomainListRequest(const QueryDomainListRequest &) = default ;
    QueryDomainListRequest(QueryDomainListRequest &&) = default ;
    QueryDomainListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainListRequest() = default ;
    QueryDomainListRequest& operator=(const QueryDomainListRequest &) = default ;
    QueryDomainListRequest& operator=(QueryDomainListRequest &&) = default ;
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
      // The key of the tag to add to the resource.
      shared_ptr<string> key_ {};
      // The value of the tag to add to the resource.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->ccompany_ == nullptr
        && this->dns_ == nullptr && this->domainGroupId_ == nullptr && this->domainName_ == nullptr && this->endExpirationDate_ == nullptr && this->endRegistrationDate_ == nullptr
        && this->lang_ == nullptr && this->orderByType_ == nullptr && this->orderKeyType_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr
        && this->productDomainType_ == nullptr && this->queryType_ == nullptr && this->registrar_ == nullptr && this->resourceGroupId_ == nullptr && this->startExpirationDate_ == nullptr
        && this->startRegistrationDate_ == nullptr && this->tag_ == nullptr && this->userClientIp_ == nullptr; };
    // ccompany Field Functions 
    bool hasCcompany() const { return this->ccompany_ != nullptr;};
    void deleteCcompany() { this->ccompany_ = nullptr;};
    inline string getCcompany() const { DARABONBA_PTR_GET_DEFAULT(ccompany_, "") };
    inline QueryDomainListRequest& setCcompany(string ccompany) { DARABONBA_PTR_SET_VALUE(ccompany_, ccompany) };


    // dns Field Functions 
    bool hasDns() const { return this->dns_ != nullptr;};
    void deleteDns() { this->dns_ = nullptr;};
    inline string getDns() const { DARABONBA_PTR_GET_DEFAULT(dns_, "") };
    inline QueryDomainListRequest& setDns(string dns) { DARABONBA_PTR_SET_VALUE(dns_, dns) };


    // domainGroupId Field Functions 
    bool hasDomainGroupId() const { return this->domainGroupId_ != nullptr;};
    void deleteDomainGroupId() { this->domainGroupId_ = nullptr;};
    inline string getDomainGroupId() const { DARABONBA_PTR_GET_DEFAULT(domainGroupId_, "") };
    inline QueryDomainListRequest& setDomainGroupId(string domainGroupId) { DARABONBA_PTR_SET_VALUE(domainGroupId_, domainGroupId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryDomainListRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endExpirationDate Field Functions 
    bool hasEndExpirationDate() const { return this->endExpirationDate_ != nullptr;};
    void deleteEndExpirationDate() { this->endExpirationDate_ = nullptr;};
    inline int64_t getEndExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(endExpirationDate_, 0L) };
    inline QueryDomainListRequest& setEndExpirationDate(int64_t endExpirationDate) { DARABONBA_PTR_SET_VALUE(endExpirationDate_, endExpirationDate) };


    // endRegistrationDate Field Functions 
    bool hasEndRegistrationDate() const { return this->endRegistrationDate_ != nullptr;};
    void deleteEndRegistrationDate() { this->endRegistrationDate_ = nullptr;};
    inline int64_t getEndRegistrationDate() const { DARABONBA_PTR_GET_DEFAULT(endRegistrationDate_, 0L) };
    inline QueryDomainListRequest& setEndRegistrationDate(int64_t endRegistrationDate) { DARABONBA_PTR_SET_VALUE(endRegistrationDate_, endRegistrationDate) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryDomainListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // orderByType Field Functions 
    bool hasOrderByType() const { return this->orderByType_ != nullptr;};
    void deleteOrderByType() { this->orderByType_ = nullptr;};
    inline string getOrderByType() const { DARABONBA_PTR_GET_DEFAULT(orderByType_, "") };
    inline QueryDomainListRequest& setOrderByType(string orderByType) { DARABONBA_PTR_SET_VALUE(orderByType_, orderByType) };


    // orderKeyType Field Functions 
    bool hasOrderKeyType() const { return this->orderKeyType_ != nullptr;};
    void deleteOrderKeyType() { this->orderKeyType_ = nullptr;};
    inline string getOrderKeyType() const { DARABONBA_PTR_GET_DEFAULT(orderKeyType_, "") };
    inline QueryDomainListRequest& setOrderKeyType(string orderKeyType) { DARABONBA_PTR_SET_VALUE(orderKeyType_, orderKeyType) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryDomainListRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryDomainListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productDomainType Field Functions 
    bool hasProductDomainType() const { return this->productDomainType_ != nullptr;};
    void deleteProductDomainType() { this->productDomainType_ = nullptr;};
    inline string getProductDomainType() const { DARABONBA_PTR_GET_DEFAULT(productDomainType_, "") };
    inline QueryDomainListRequest& setProductDomainType(string productDomainType) { DARABONBA_PTR_SET_VALUE(productDomainType_, productDomainType) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string getQueryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline QueryDomainListRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // registrar Field Functions 
    bool hasRegistrar() const { return this->registrar_ != nullptr;};
    void deleteRegistrar() { this->registrar_ = nullptr;};
    inline string getRegistrar() const { DARABONBA_PTR_GET_DEFAULT(registrar_, "") };
    inline QueryDomainListRequest& setRegistrar(string registrar) { DARABONBA_PTR_SET_VALUE(registrar_, registrar) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline QueryDomainListRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // startExpirationDate Field Functions 
    bool hasStartExpirationDate() const { return this->startExpirationDate_ != nullptr;};
    void deleteStartExpirationDate() { this->startExpirationDate_ = nullptr;};
    inline int64_t getStartExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(startExpirationDate_, 0L) };
    inline QueryDomainListRequest& setStartExpirationDate(int64_t startExpirationDate) { DARABONBA_PTR_SET_VALUE(startExpirationDate_, startExpirationDate) };


    // startRegistrationDate Field Functions 
    bool hasStartRegistrationDate() const { return this->startRegistrationDate_ != nullptr;};
    void deleteStartRegistrationDate() { this->startRegistrationDate_ = nullptr;};
    inline int64_t getStartRegistrationDate() const { DARABONBA_PTR_GET_DEFAULT(startRegistrationDate_, 0L) };
    inline QueryDomainListRequest& setStartRegistrationDate(int64_t startRegistrationDate) { DARABONBA_PTR_SET_VALUE(startRegistrationDate_, startRegistrationDate) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<QueryDomainListRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<QueryDomainListRequest::Tag>) };
    inline vector<QueryDomainListRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<QueryDomainListRequest::Tag>) };
    inline QueryDomainListRequest& setTag(const vector<QueryDomainListRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline QueryDomainListRequest& setTag(vector<QueryDomainListRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline QueryDomainListRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // The name of the domain name registrant.
    shared_ptr<string> ccompany_ {};
    shared_ptr<string> dns_ {};
    // The ID of the domain name group.
    shared_ptr<string> domainGroupId_ {};
    // The domain name. You can search for the domain name in the domain name list.
    shared_ptr<string> domainName_ {};
    // The end of the time range to query domain names based on expiration dates. Set the value to a UNIX timestamp representing the number of milliseconds that have elapsed from January 1, 1970, 00:00:00 UTC to the time you perform the query. Only queries by day are supported.
    shared_ptr<int64_t> endExpirationDate_ {};
    // The end of the time range to query domain names based on registration dates. Set the value to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. Only queries by day are supported.
    shared_ptr<int64_t> endRegistrationDate_ {};
    // The language of the error message to return if the request fails. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    // 
    // Default value: **en**.
    shared_ptr<string> lang_ {};
    // The order of the information based on which the domain names are sorted, such as the registration date and expiration date. Valid values:
    // 
    // *   **ASC**: ascending order
    // *   **DESC**: descending order
    // 
    // >  If this parameter is not specified, the default value **DESC** is used.
    shared_ptr<string> orderByType_ {};
    // The field that you use to sort the domain names. Valid values:
    // 
    // *   **RegistrationDate**: registration date
    // *   **ExpirationDate**: expiration date
    // 
    // >  If this parameter is not specified, the domain names are sorted by the time when they were added to the database.
    shared_ptr<string> orderKeyType_ {};
    // The page number.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The type of the domain name. Valid values:
    // 
    // *   **New gTLD**: new generic top-level domain names
    // *   **gTLD**: generic top-level domain names
    // *   **ccTLD**: country code top-level domain names
    shared_ptr<string> productDomainType_ {};
    // The category of the domain names that you want to query. Valid values:
    // 
    // *   **1**: the domain names that need to be renewed
    // *   **2**: the domain names that need to be redeemed
    shared_ptr<string> queryType_ {};
    shared_ptr<string> registrar_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The beginning of the time range to query domain names based on expiration dates. Set the value to a UNIX timestamp representing the number of milliseconds that have elapsed from January 1, 1970, 00:00:00 UTC to the time you perform the query. Only queries by day are supported.
    shared_ptr<int64_t> startExpirationDate_ {};
    // The beginning of the time range to query domain names based on registration dates. Set the value to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. Only queries by day are supported.
    shared_ptr<int64_t> startRegistrationDate_ {};
    // The tags to add to the resource.
    shared_ptr<vector<QueryDomainListRequest::Tag>> tag_ {};
    // The IP address of the client. Set the value to **127.0.0.1**.
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
