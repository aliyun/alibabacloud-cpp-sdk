// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINDICESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListIndicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IndexName, indexName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IndexName, indexName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListIndicesRequest() = default ;
    ListIndicesRequest(const ListIndicesRequest &) = default ;
    ListIndicesRequest(ListIndicesRequest &&) = default ;
    ListIndicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndicesRequest() = default ;
    ListIndicesRequest& operator=(const ListIndicesRequest &) = default ;
    ListIndicesRequest& operator=(ListIndicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->indexName_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // indexName Field Functions 
    bool hasIndexName() const { return this->indexName_ != nullptr;};
    void deleteIndexName() { this->indexName_ = nullptr;};
    inline string getIndexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
    inline ListIndicesRequest& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListIndicesRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListIndicesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The name of the knowledge base. You can query knowledge base by name. The name must be 1 to 20 characters in length and can contain characters classified as letter in Unicode, including English letters, Chinese characters, digits, among others. The name can also contain colons (:), underscores (_), periods (.), and hyphens (-).
    // 
    // This parameter is left empty by default, which means that all knowledge bases in the specified workspace are queried.
    shared_ptr<string> indexName_ {};
    // The number of the pages to return. Pages start from page 1. Default value: 1.
    shared_ptr<string> pageNumber_ {};
    // The number of knowledge bases to display on each page. No maximum value. Default value: 10.
    shared_ptr<string> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
