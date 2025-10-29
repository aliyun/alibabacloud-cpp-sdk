// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAASSETTAGSRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAASSETTAGSRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataAssetTagsResponseBodyPagingInfoDataAssetTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataAssetTagsResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataAssetTagsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DataAssetTags, dataAssetTags_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAssetTagsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DataAssetTags, dataAssetTags_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataAssetTagsResponseBodyPagingInfo() = default ;
    ListDataAssetTagsResponseBodyPagingInfo(const ListDataAssetTagsResponseBodyPagingInfo &) = default ;
    ListDataAssetTagsResponseBodyPagingInfo(ListDataAssetTagsResponseBodyPagingInfo &&) = default ;
    ListDataAssetTagsResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataAssetTagsResponseBodyPagingInfo() = default ;
    ListDataAssetTagsResponseBodyPagingInfo& operator=(const ListDataAssetTagsResponseBodyPagingInfo &) = default ;
    ListDataAssetTagsResponseBodyPagingInfo& operator=(ListDataAssetTagsResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataAssetTags_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // dataAssetTags Field Functions 
    bool hasDataAssetTags() const { return this->dataAssetTags_ != nullptr;};
    void deleteDataAssetTags() { this->dataAssetTags_ = nullptr;};
    inline const vector<Models::ListDataAssetTagsResponseBodyPagingInfoDataAssetTags> & dataAssetTags() const { DARABONBA_PTR_GET_CONST(dataAssetTags_, vector<Models::ListDataAssetTagsResponseBodyPagingInfoDataAssetTags>) };
    inline vector<Models::ListDataAssetTagsResponseBodyPagingInfoDataAssetTags> dataAssetTags() { DARABONBA_PTR_GET(dataAssetTags_, vector<Models::ListDataAssetTagsResponseBodyPagingInfoDataAssetTags>) };
    inline ListDataAssetTagsResponseBodyPagingInfo& setDataAssetTags(const vector<Models::ListDataAssetTagsResponseBodyPagingInfoDataAssetTags> & dataAssetTags) { DARABONBA_PTR_SET_VALUE(dataAssetTags_, dataAssetTags) };
    inline ListDataAssetTagsResponseBodyPagingInfo& setDataAssetTags(vector<Models::ListDataAssetTagsResponseBodyPagingInfoDataAssetTags> && dataAssetTags) { DARABONBA_PTR_SET_RVALUE(dataAssetTags_, dataAssetTags) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataAssetTagsResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataAssetTagsResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataAssetTagsResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The tags.
    std::shared_ptr<vector<Models::ListDataAssetTagsResponseBodyPagingInfoDataAssetTags>> dataAssetTags_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
