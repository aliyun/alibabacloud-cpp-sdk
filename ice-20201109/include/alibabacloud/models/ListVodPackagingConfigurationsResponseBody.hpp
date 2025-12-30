// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVODPACKAGINGCONFIGURATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVODPACKAGINGCONFIGURATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/VodPackagingConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListVodPackagingConfigurationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVodPackagingConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PackagingConfigurations, packagingConfigurations_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListVodPackagingConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PackagingConfigurations, packagingConfigurations_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListVodPackagingConfigurationsResponseBody() = default ;
    ListVodPackagingConfigurationsResponseBody(const ListVodPackagingConfigurationsResponseBody &) = default ;
    ListVodPackagingConfigurationsResponseBody(ListVodPackagingConfigurationsResponseBody &&) = default ;
    ListVodPackagingConfigurationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVodPackagingConfigurationsResponseBody() = default ;
    ListVodPackagingConfigurationsResponseBody& operator=(const ListVodPackagingConfigurationsResponseBody &) = default ;
    ListVodPackagingConfigurationsResponseBody& operator=(ListVodPackagingConfigurationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->packagingConfigurations_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->sortBy_ == nullptr && this->totalCount_ == nullptr; };
    // packagingConfigurations Field Functions 
    bool hasPackagingConfigurations() const { return this->packagingConfigurations_ != nullptr;};
    void deletePackagingConfigurations() { this->packagingConfigurations_ = nullptr;};
    inline const vector<VodPackagingConfiguration> & getPackagingConfigurations() const { DARABONBA_PTR_GET_CONST(packagingConfigurations_, vector<VodPackagingConfiguration>) };
    inline vector<VodPackagingConfiguration> getPackagingConfigurations() { DARABONBA_PTR_GET(packagingConfigurations_, vector<VodPackagingConfiguration>) };
    inline ListVodPackagingConfigurationsResponseBody& setPackagingConfigurations(const vector<VodPackagingConfiguration> & packagingConfigurations) { DARABONBA_PTR_SET_VALUE(packagingConfigurations_, packagingConfigurations) };
    inline ListVodPackagingConfigurationsResponseBody& setPackagingConfigurations(vector<VodPackagingConfiguration> && packagingConfigurations) { DARABONBA_PTR_SET_RVALUE(packagingConfigurations_, packagingConfigurations) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListVodPackagingConfigurationsResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListVodPackagingConfigurationsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVodPackagingConfigurationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListVodPackagingConfigurationsResponseBody& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListVodPackagingConfigurationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The packaging configurations.
    shared_ptr<vector<VodPackagingConfiguration>> packagingConfigurations_ {};
    // The page number. Default value: 1.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The sorting order of the packaging configurations based on the time when they were created. Valid values:
    // 
    // *   desc: descending order.
    // *   asc: ascending order.
    shared_ptr<string> sortBy_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
