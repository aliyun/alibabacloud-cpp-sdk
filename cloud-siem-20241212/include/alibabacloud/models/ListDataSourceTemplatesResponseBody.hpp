// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCETEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCETEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataSourceTemplatesResponseBodyDataSourceTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDataSourceTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceTemplates, dataSourceTemplates_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceTemplates, dataSourceTemplates_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataSourceTemplatesResponseBody() = default ;
    ListDataSourceTemplatesResponseBody(const ListDataSourceTemplatesResponseBody &) = default ;
    ListDataSourceTemplatesResponseBody(ListDataSourceTemplatesResponseBody &&) = default ;
    ListDataSourceTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceTemplatesResponseBody() = default ;
    ListDataSourceTemplatesResponseBody& operator=(const ListDataSourceTemplatesResponseBody &) = default ;
    ListDataSourceTemplatesResponseBody& operator=(ListDataSourceTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceTemplates_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr; };
    // dataSourceTemplates Field Functions 
    bool hasDataSourceTemplates() const { return this->dataSourceTemplates_ != nullptr;};
    void deleteDataSourceTemplates() { this->dataSourceTemplates_ = nullptr;};
    inline const vector<ListDataSourceTemplatesResponseBodyDataSourceTemplates> & dataSourceTemplates() const { DARABONBA_PTR_GET_CONST(dataSourceTemplates_, vector<ListDataSourceTemplatesResponseBodyDataSourceTemplates>) };
    inline vector<ListDataSourceTemplatesResponseBodyDataSourceTemplates> dataSourceTemplates() { DARABONBA_PTR_GET(dataSourceTemplates_, vector<ListDataSourceTemplatesResponseBodyDataSourceTemplates>) };
    inline ListDataSourceTemplatesResponseBody& setDataSourceTemplates(const vector<ListDataSourceTemplatesResponseBodyDataSourceTemplates> & dataSourceTemplates) { DARABONBA_PTR_SET_VALUE(dataSourceTemplates_, dataSourceTemplates) };
    inline ListDataSourceTemplatesResponseBody& setDataSourceTemplates(vector<ListDataSourceTemplatesResponseBodyDataSourceTemplates> && dataSourceTemplates) { DARABONBA_PTR_SET_RVALUE(dataSourceTemplates_, dataSourceTemplates) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListDataSourceTemplatesResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListDataSourceTemplatesResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataSourceTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListDataSourceTemplatesResponseBodyDataSourceTemplates>> dataSourceTemplates_ = nullptr;
    std::shared_ptr<string> pageNumber_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
