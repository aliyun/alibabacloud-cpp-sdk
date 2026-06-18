// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMHOSTNAMESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMHOSTNAMESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListCustomHostnamesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomHostnamesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(NameMatchType, nameMatchType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomHostnamesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(NameMatchType, nameMatchType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListCustomHostnamesRequest() = default ;
    ListCustomHostnamesRequest(const ListCustomHostnamesRequest &) = default ;
    ListCustomHostnamesRequest(ListCustomHostnamesRequest &&) = default ;
    ListCustomHostnamesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomHostnamesRequest() = default ;
    ListCustomHostnamesRequest& operator=(const ListCustomHostnamesRequest &) = default ;
    ListCustomHostnamesRequest& operator=(ListCustomHostnamesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostname_ == nullptr
        && this->nameMatchType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->recordId_ == nullptr && this->siteId_ == nullptr
        && this->status_ == nullptr; };
    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline ListCustomHostnamesRequest& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // nameMatchType Field Functions 
    bool hasNameMatchType() const { return this->nameMatchType_ != nullptr;};
    void deleteNameMatchType() { this->nameMatchType_ = nullptr;};
    inline string getNameMatchType() const { DARABONBA_PTR_GET_DEFAULT(nameMatchType_, "") };
    inline ListCustomHostnamesRequest& setNameMatchType(string nameMatchType) { DARABONBA_PTR_SET_VALUE(nameMatchType_, nameMatchType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCustomHostnamesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomHostnamesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline ListCustomHostnamesRequest& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListCustomHostnamesRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCustomHostnamesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The SaaS domain name.
    shared_ptr<string> hostname_ {};
    // The search match mode for the SaaS domain name. Default value: exact. Valid values:
    // - **prefix**: prefix match.
    // - **suffix**: suffix match.
    // - **exact**: exact match.
    // - **fuzzy**: fuzzy match.
    shared_ptr<string> nameMatchType_ {};
    // The page number, starting from 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 100. Maximum value: 500.
    shared_ptr<int32_t> pageSize_ {};
    // The associated record ID. You can call the [ListRecords](https://help.aliyun.com/document_detail/2850265.html) operation to obtain the record ID.
    shared_ptr<int64_t> recordId_ {};
    // The site ID. You can call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to obtain the site ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The SaaS domain name status. Valid values:
    // - **pending**: pending verification.
    // - **active**: activated.
    // - **conflicted**: occupied.
    // - **offline**: offline.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
