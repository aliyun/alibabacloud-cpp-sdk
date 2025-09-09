// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCLOUDGTMMONITORTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCLOUDGTMMONITORTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchCloudGtmMonitorTemplatesResponseBodyTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SearchCloudGtmMonitorTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchCloudGtmMonitorTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, SearchCloudGtmMonitorTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    SearchCloudGtmMonitorTemplatesResponseBody() = default ;
    SearchCloudGtmMonitorTemplatesResponseBody(const SearchCloudGtmMonitorTemplatesResponseBody &) = default ;
    SearchCloudGtmMonitorTemplatesResponseBody(SearchCloudGtmMonitorTemplatesResponseBody &&) = default ;
    SearchCloudGtmMonitorTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchCloudGtmMonitorTemplatesResponseBody() = default ;
    SearchCloudGtmMonitorTemplatesResponseBody& operator=(const SearchCloudGtmMonitorTemplatesResponseBody &) = default ;
    SearchCloudGtmMonitorTemplatesResponseBody& operator=(SearchCloudGtmMonitorTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->templates_ != nullptr && this->totalItems_ != nullptr && this->totalPages_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchCloudGtmMonitorTemplatesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchCloudGtmMonitorTemplatesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchCloudGtmMonitorTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const SearchCloudGtmMonitorTemplatesResponseBodyTemplates & templates() const { DARABONBA_PTR_GET_CONST(templates_, SearchCloudGtmMonitorTemplatesResponseBodyTemplates) };
    inline SearchCloudGtmMonitorTemplatesResponseBodyTemplates templates() { DARABONBA_PTR_GET(templates_, SearchCloudGtmMonitorTemplatesResponseBodyTemplates) };
    inline SearchCloudGtmMonitorTemplatesResponseBody& setTemplates(const SearchCloudGtmMonitorTemplatesResponseBodyTemplates & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline SearchCloudGtmMonitorTemplatesResponseBody& setTemplates(SearchCloudGtmMonitorTemplatesResponseBodyTemplates && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t totalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline SearchCloudGtmMonitorTemplatesResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t totalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline SearchCloudGtmMonitorTemplatesResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    // The health check templates.
    std::shared_ptr<SearchCloudGtmMonitorTemplatesResponseBodyTemplates> templates_ = nullptr;
    std::shared_ptr<int32_t> totalItems_ = nullptr;
    std::shared_ptr<int32_t> totalPages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
