// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLINEAGERELATIONSHIPSRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTLINEAGERELATIONSHIPSRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LineageRelationship.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListLineageRelationshipsResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLineageRelationshipsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(LineageRelationships, lineageRelationships_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLineageRelationshipsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(LineageRelationships, lineageRelationships_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLineageRelationshipsResponseBodyPagingInfo() = default ;
    ListLineageRelationshipsResponseBodyPagingInfo(const ListLineageRelationshipsResponseBodyPagingInfo &) = default ;
    ListLineageRelationshipsResponseBodyPagingInfo(ListLineageRelationshipsResponseBodyPagingInfo &&) = default ;
    ListLineageRelationshipsResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLineageRelationshipsResponseBodyPagingInfo() = default ;
    ListLineageRelationshipsResponseBodyPagingInfo& operator=(const ListLineageRelationshipsResponseBodyPagingInfo &) = default ;
    ListLineageRelationshipsResponseBodyPagingInfo& operator=(ListLineageRelationshipsResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lineageRelationships_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // lineageRelationships Field Functions 
    bool hasLineageRelationships() const { return this->lineageRelationships_ != nullptr;};
    void deleteLineageRelationships() { this->lineageRelationships_ = nullptr;};
    inline const vector<Models::LineageRelationship> & lineageRelationships() const { DARABONBA_PTR_GET_CONST(lineageRelationships_, vector<Models::LineageRelationship>) };
    inline vector<Models::LineageRelationship> lineageRelationships() { DARABONBA_PTR_GET(lineageRelationships_, vector<Models::LineageRelationship>) };
    inline ListLineageRelationshipsResponseBodyPagingInfo& setLineageRelationships(const vector<Models::LineageRelationship> & lineageRelationships) { DARABONBA_PTR_SET_VALUE(lineageRelationships_, lineageRelationships) };
    inline ListLineageRelationshipsResponseBodyPagingInfo& setLineageRelationships(vector<Models::LineageRelationship> && lineageRelationships) { DARABONBA_PTR_SET_RVALUE(lineageRelationships_, lineageRelationships) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListLineageRelationshipsResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLineageRelationshipsResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLineageRelationshipsResponseBodyPagingInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of data tables.
    std::shared_ptr<vector<Models::LineageRelationship>> lineageRelationships_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The page size.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total count.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
