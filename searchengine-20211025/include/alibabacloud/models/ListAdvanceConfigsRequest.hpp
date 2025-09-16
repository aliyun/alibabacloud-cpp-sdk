// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADVANCECONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTADVANCECONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListAdvanceConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAdvanceConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(indexName, indexName_);
      DARABONBA_PTR_TO_JSON(newMode, newMode_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListAdvanceConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(indexName, indexName_);
      DARABONBA_PTR_FROM_JSON(newMode, newMode_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListAdvanceConfigsRequest() = default ;
    ListAdvanceConfigsRequest(const ListAdvanceConfigsRequest &) = default ;
    ListAdvanceConfigsRequest(ListAdvanceConfigsRequest &&) = default ;
    ListAdvanceConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAdvanceConfigsRequest() = default ;
    ListAdvanceConfigsRequest& operator=(const ListAdvanceConfigsRequest &) = default ;
    ListAdvanceConfigsRequest& operator=(ListAdvanceConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceName_ != nullptr
        && this->indexName_ != nullptr && this->newMode_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->type_ != nullptr; };
    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline ListAdvanceConfigsRequest& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // indexName Field Functions 
    bool hasIndexName() const { return this->indexName_ != nullptr;};
    void deleteIndexName() { this->indexName_ = nullptr;};
    inline string indexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
    inline ListAdvanceConfigsRequest& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


    // newMode Field Functions 
    bool hasNewMode() const { return this->newMode_ != nullptr;};
    void deleteNewMode() { this->newMode_ = nullptr;};
    inline bool newMode() const { DARABONBA_PTR_GET_DEFAULT(newMode_, false) };
    inline ListAdvanceConfigsRequest& setNewMode(bool newMode) { DARABONBA_PTR_SET_VALUE(newMode_, newMode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListAdvanceConfigsRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListAdvanceConfigsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAdvanceConfigsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the data source.
    std::shared_ptr<string> dataSourceName_ = nullptr;
    // The index name.
    std::shared_ptr<string> indexName_ = nullptr;
    // Specifies whether the OpenSearch Vector Search Edition instance is of the new version.
    std::shared_ptr<bool> newMode_ = nullptr;
    std::shared_ptr<string> pageNumber_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    // The type of advanced configurations that you want to query. Valid values: - online -offline (default)
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
