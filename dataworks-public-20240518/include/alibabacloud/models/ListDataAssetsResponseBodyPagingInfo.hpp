// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAASSETSRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAASSETSRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataAssetsResponseBodyPagingInfoDataAssets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataAssetsResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataAssetsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DataAssets, dataAssets_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAssetsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DataAssets, dataAssets_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataAssetsResponseBodyPagingInfo() = default ;
    ListDataAssetsResponseBodyPagingInfo(const ListDataAssetsResponseBodyPagingInfo &) = default ;
    ListDataAssetsResponseBodyPagingInfo(ListDataAssetsResponseBodyPagingInfo &&) = default ;
    ListDataAssetsResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataAssetsResponseBodyPagingInfo() = default ;
    ListDataAssetsResponseBodyPagingInfo& operator=(const ListDataAssetsResponseBodyPagingInfo &) = default ;
    ListDataAssetsResponseBodyPagingInfo& operator=(ListDataAssetsResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataAssets_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // dataAssets Field Functions 
    bool hasDataAssets() const { return this->dataAssets_ != nullptr;};
    void deleteDataAssets() { this->dataAssets_ = nullptr;};
    inline const vector<Models::ListDataAssetsResponseBodyPagingInfoDataAssets> & dataAssets() const { DARABONBA_PTR_GET_CONST(dataAssets_, vector<Models::ListDataAssetsResponseBodyPagingInfoDataAssets>) };
    inline vector<Models::ListDataAssetsResponseBodyPagingInfoDataAssets> dataAssets() { DARABONBA_PTR_GET(dataAssets_, vector<Models::ListDataAssetsResponseBodyPagingInfoDataAssets>) };
    inline ListDataAssetsResponseBodyPagingInfo& setDataAssets(const vector<Models::ListDataAssetsResponseBodyPagingInfoDataAssets> & dataAssets) { DARABONBA_PTR_SET_VALUE(dataAssets_, dataAssets) };
    inline ListDataAssetsResponseBodyPagingInfo& setDataAssets(vector<Models::ListDataAssetsResponseBodyPagingInfoDataAssets> && dataAssets) { DARABONBA_PTR_SET_RVALUE(dataAssets_, dataAssets) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataAssetsResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataAssetsResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataAssetsResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The data assets.
    std::shared_ptr<vector<Models::ListDataAssetsResponseBodyPagingInfoDataAssets>> dataAssets_ = nullptr;
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
