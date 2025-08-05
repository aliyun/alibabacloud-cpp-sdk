// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTREAMINGDATASOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTREAMINGDATASOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListStreamingDataSourcesResponseBodyDataSourceItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListStreamingDataSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStreamingDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceItems, dataSourceItems_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListStreamingDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceItems, dataSourceItems_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListStreamingDataSourcesResponseBody() = default ;
    ListStreamingDataSourcesResponseBody(const ListStreamingDataSourcesResponseBody &) = default ;
    ListStreamingDataSourcesResponseBody(ListStreamingDataSourcesResponseBody &&) = default ;
    ListStreamingDataSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStreamingDataSourcesResponseBody() = default ;
    ListStreamingDataSourcesResponseBody& operator=(const ListStreamingDataSourcesResponseBody &) = default ;
    ListStreamingDataSourcesResponseBody& operator=(ListStreamingDataSourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceItems_ != nullptr
        && this->pageNumber_ != nullptr && this->requestId_ != nullptr && this->totalRecordCount_ != nullptr; };
    // dataSourceItems Field Functions 
    bool hasDataSourceItems() const { return this->dataSourceItems_ != nullptr;};
    void deleteDataSourceItems() { this->dataSourceItems_ = nullptr;};
    inline const vector<ListStreamingDataSourcesResponseBodyDataSourceItems> & dataSourceItems() const { DARABONBA_PTR_GET_CONST(dataSourceItems_, vector<ListStreamingDataSourcesResponseBodyDataSourceItems>) };
    inline vector<ListStreamingDataSourcesResponseBodyDataSourceItems> dataSourceItems() { DARABONBA_PTR_GET(dataSourceItems_, vector<ListStreamingDataSourcesResponseBodyDataSourceItems>) };
    inline ListStreamingDataSourcesResponseBody& setDataSourceItems(const vector<ListStreamingDataSourcesResponseBodyDataSourceItems> & dataSourceItems) { DARABONBA_PTR_SET_VALUE(dataSourceItems_, dataSourceItems) };
    inline ListStreamingDataSourcesResponseBody& setDataSourceItems(vector<ListStreamingDataSourcesResponseBodyDataSourceItems> && dataSourceItems) { DARABONBA_PTR_SET_RVALUE(dataSourceItems_, dataSourceItems) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListStreamingDataSourcesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStreamingDataSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t totalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline ListStreamingDataSourcesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The queried data sources.
    std::shared_ptr<vector<ListStreamingDataSourcesResponseBodyDataSourceItems>> dataSourceItems_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
