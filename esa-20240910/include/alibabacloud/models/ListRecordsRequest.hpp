// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(CustomPort, customPort_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Proxied, proxied_);
      DARABONBA_PTR_TO_JSON(RecordMatchType, recordMatchType_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(CustomPort, customPort_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Proxied, proxied_);
      DARABONBA_PTR_FROM_JSON(RecordMatchType, recordMatchType_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListRecordsRequest() = default ;
    ListRecordsRequest(const ListRecordsRequest &) = default ;
    ListRecordsRequest(ListRecordsRequest &&) = default ;
    ListRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecordsRequest() = default ;
    ListRecordsRequest& operator=(const ListRecordsRequest &) = default ;
    ListRecordsRequest& operator=(ListRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizName_ == nullptr
        && this->customPort_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->proxied_ == nullptr && this->recordMatchType_ == nullptr
        && this->recordName_ == nullptr && this->siteId_ == nullptr && this->sourceType_ == nullptr && this->type_ == nullptr; };
    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string getBizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline ListRecordsRequest& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // customPort Field Functions 
    bool hasCustomPort() const { return this->customPort_ != nullptr;};
    void deleteCustomPort() { this->customPort_ = nullptr;};
    inline string getCustomPort() const { DARABONBA_PTR_GET_DEFAULT(customPort_, "") };
    inline ListRecordsRequest& setCustomPort(string customPort) { DARABONBA_PTR_SET_VALUE(customPort_, customPort) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListRecordsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRecordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // proxied Field Functions 
    bool hasProxied() const { return this->proxied_ != nullptr;};
    void deleteProxied() { this->proxied_ = nullptr;};
    inline bool getProxied() const { DARABONBA_PTR_GET_DEFAULT(proxied_, false) };
    inline ListRecordsRequest& setProxied(bool proxied) { DARABONBA_PTR_SET_VALUE(proxied_, proxied) };


    // recordMatchType Field Functions 
    bool hasRecordMatchType() const { return this->recordMatchType_ != nullptr;};
    void deleteRecordMatchType() { this->recordMatchType_ = nullptr;};
    inline string getRecordMatchType() const { DARABONBA_PTR_GET_DEFAULT(recordMatchType_, "") };
    inline ListRecordsRequest& setRecordMatchType(string recordMatchType) { DARABONBA_PTR_SET_VALUE(recordMatchType_, recordMatchType) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline ListRecordsRequest& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListRecordsRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListRecordsRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListRecordsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The business scenario for acceleration. Use this parameter to filter results. Valid values:
    // 
    // - **image_video**: Images and videos.
    // 
    // - **api**: API.
    // 
    // - **web**: Web page.
    shared_ptr<string> bizName_ {};
    shared_ptr<string> customPort_ {};
    // The page number. Defaults to **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The page size. Defaults to **500**.
    shared_ptr<int32_t> pageSize_ {};
    // Filters the results based on whether the record is proxied. Valid values:
    // 
    // - **true**: The record is proxied.
    // 
    // - **false**: The record is not proxied.
    shared_ptr<bool> proxied_ {};
    // The match type for the record name search. Defaults to **exact**. Valid values:
    // 
    // - **prefix**: Prefix match.
    // 
    // - **suffix**: Suffix match.
    // 
    // - **exact**: Exact match.
    // 
    // - **fuzzy**: Fuzzy match.
    shared_ptr<string> recordMatchType_ {};
    // The record name. Use this parameter to filter query results.
    shared_ptr<string> recordName_ {};
    // The site ID. You can get this ID by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // Filters the results by the record\\"s origin type. This filter applies only to CNAME records. Valid values:
    // 
    // - **OSS**: OSS origin.
    // 
    // - **S3**: S3 origin.
    // 
    // - **LB**: Load balancer origin.
    // 
    // - **OP**: Origin pool.
    // 
    // - **Domain**: Domain origin.
    shared_ptr<string> sourceType_ {};
    // The DNS record type. Use this parameter to filter results.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
