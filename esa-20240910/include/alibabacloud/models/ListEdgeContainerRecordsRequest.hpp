// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGECONTAINERRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGECONTAINERRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListEdgeContainerRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeContainerRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RecordMatchType, recordMatchType_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeContainerRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RecordMatchType, recordMatchType_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    ListEdgeContainerRecordsRequest() = default ;
    ListEdgeContainerRecordsRequest(const ListEdgeContainerRecordsRequest &) = default ;
    ListEdgeContainerRecordsRequest(ListEdgeContainerRecordsRequest &&) = default ;
    ListEdgeContainerRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeContainerRecordsRequest() = default ;
    ListEdgeContainerRecordsRequest& operator=(const ListEdgeContainerRecordsRequest &) = default ;
    ListEdgeContainerRecordsRequest& operator=(ListEdgeContainerRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->recordMatchType_ != nullptr && this->recordName_ != nullptr && this->siteId_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListEdgeContainerRecordsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEdgeContainerRecordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // recordMatchType Field Functions 
    bool hasRecordMatchType() const { return this->recordMatchType_ != nullptr;};
    void deleteRecordMatchType() { this->recordMatchType_ = nullptr;};
    inline string recordMatchType() const { DARABONBA_PTR_GET_DEFAULT(recordMatchType_, "") };
    inline ListEdgeContainerRecordsRequest& setRecordMatchType(string recordMatchType) { DARABONBA_PTR_SET_VALUE(recordMatchType_, recordMatchType) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string recordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline ListEdgeContainerRecordsRequest& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListEdgeContainerRecordsRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: **500**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The match mode to filter the record names:
    // 
    // *   **fuzzy**
    // *   **prefix**
    // *   **suffix**
    // *   **exact** (default)
    std::shared_ptr<string> recordMatchType_ = nullptr;
    // The record name.
    std::shared_ptr<string> recordName_ = nullptr;
    // The website ID. You can call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
