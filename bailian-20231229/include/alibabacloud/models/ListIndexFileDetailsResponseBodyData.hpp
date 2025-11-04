// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDEXFILEDETAILSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINDEXFILEDETAILSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIndexFileDetailsResponseBodyDataDocuments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListIndexFileDetailsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndexFileDetailsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Documents, documents_);
      DARABONBA_PTR_TO_JSON(IndexId, indexId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndexFileDetailsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Documents, documents_);
      DARABONBA_PTR_FROM_JSON(IndexId, indexId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIndexFileDetailsResponseBodyData() = default ;
    ListIndexFileDetailsResponseBodyData(const ListIndexFileDetailsResponseBodyData &) = default ;
    ListIndexFileDetailsResponseBodyData(ListIndexFileDetailsResponseBodyData &&) = default ;
    ListIndexFileDetailsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndexFileDetailsResponseBodyData() = default ;
    ListIndexFileDetailsResponseBodyData& operator=(const ListIndexFileDetailsResponseBodyData &) = default ;
    ListIndexFileDetailsResponseBodyData& operator=(ListIndexFileDetailsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->documents_ == nullptr
        && return this->indexId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // documents Field Functions 
    bool hasDocuments() const { return this->documents_ != nullptr;};
    void deleteDocuments() { this->documents_ = nullptr;};
    inline const vector<Models::ListIndexFileDetailsResponseBodyDataDocuments> & documents() const { DARABONBA_PTR_GET_CONST(documents_, vector<Models::ListIndexFileDetailsResponseBodyDataDocuments>) };
    inline vector<Models::ListIndexFileDetailsResponseBodyDataDocuments> documents() { DARABONBA_PTR_GET(documents_, vector<Models::ListIndexFileDetailsResponseBodyDataDocuments>) };
    inline ListIndexFileDetailsResponseBodyData& setDocuments(const vector<Models::ListIndexFileDetailsResponseBodyDataDocuments> & documents) { DARABONBA_PTR_SET_VALUE(documents_, documents) };
    inline ListIndexFileDetailsResponseBodyData& setDocuments(vector<Models::ListIndexFileDetailsResponseBodyDataDocuments> && documents) { DARABONBA_PTR_SET_RVALUE(documents_, documents) };


    // indexId Field Functions 
    bool hasIndexId() const { return this->indexId_ != nullptr;};
    void deleteIndexId() { this->indexId_ = nullptr;};
    inline string indexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
    inline ListIndexFileDetailsResponseBodyData& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListIndexFileDetailsResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListIndexFileDetailsResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListIndexFileDetailsResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListIndexFileDetailsResponseBodyDataDocuments>> documents_ = nullptr;
    std::shared_ptr<string> indexId_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
