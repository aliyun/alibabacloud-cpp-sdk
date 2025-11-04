// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDEXDOCUMENTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINDEXDOCUMENTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIndexDocumentsResponseBodyDataDocuments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListIndexDocumentsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndexDocumentsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Documents, documents_);
      DARABONBA_PTR_TO_JSON(IndexId, indexId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndexDocumentsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Documents, documents_);
      DARABONBA_PTR_FROM_JSON(IndexId, indexId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIndexDocumentsResponseBodyData() = default ;
    ListIndexDocumentsResponseBodyData(const ListIndexDocumentsResponseBodyData &) = default ;
    ListIndexDocumentsResponseBodyData(ListIndexDocumentsResponseBodyData &&) = default ;
    ListIndexDocumentsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndexDocumentsResponseBodyData() = default ;
    ListIndexDocumentsResponseBodyData& operator=(const ListIndexDocumentsResponseBodyData &) = default ;
    ListIndexDocumentsResponseBodyData& operator=(ListIndexDocumentsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->documents_ == nullptr
        && return this->indexId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // documents Field Functions 
    bool hasDocuments() const { return this->documents_ != nullptr;};
    void deleteDocuments() { this->documents_ = nullptr;};
    inline const vector<Models::ListIndexDocumentsResponseBodyDataDocuments> & documents() const { DARABONBA_PTR_GET_CONST(documents_, vector<Models::ListIndexDocumentsResponseBodyDataDocuments>) };
    inline vector<Models::ListIndexDocumentsResponseBodyDataDocuments> documents() { DARABONBA_PTR_GET(documents_, vector<Models::ListIndexDocumentsResponseBodyDataDocuments>) };
    inline ListIndexDocumentsResponseBodyData& setDocuments(const vector<Models::ListIndexDocumentsResponseBodyDataDocuments> & documents) { DARABONBA_PTR_SET_VALUE(documents_, documents) };
    inline ListIndexDocumentsResponseBodyData& setDocuments(vector<Models::ListIndexDocumentsResponseBodyDataDocuments> && documents) { DARABONBA_PTR_SET_RVALUE(documents_, documents) };


    // indexId Field Functions 
    bool hasIndexId() const { return this->indexId_ != nullptr;};
    void deleteIndexId() { this->indexId_ = nullptr;};
    inline string indexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
    inline ListIndexDocumentsResponseBodyData& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListIndexDocumentsResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListIndexDocumentsResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListIndexDocumentsResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of documents in the knowledge base.
    std::shared_ptr<vector<Models::ListIndexDocumentsResponseBodyDataDocuments>> documents_ = nullptr;
    // The primary key ID of the knowledge base.
    std::shared_ptr<string> indexId_ = nullptr;
    // The specified page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The specified number of documents on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of documents returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
