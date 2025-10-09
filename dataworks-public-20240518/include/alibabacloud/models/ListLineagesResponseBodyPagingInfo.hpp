// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLINEAGESRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTLINEAGESRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLineagesResponseBodyPagingInfoLineages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListLineagesResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLineagesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Lineages, lineages_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLineagesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Lineages, lineages_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLineagesResponseBodyPagingInfo() = default ;
    ListLineagesResponseBodyPagingInfo(const ListLineagesResponseBodyPagingInfo &) = default ;
    ListLineagesResponseBodyPagingInfo(ListLineagesResponseBodyPagingInfo &&) = default ;
    ListLineagesResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLineagesResponseBodyPagingInfo() = default ;
    ListLineagesResponseBodyPagingInfo& operator=(const ListLineagesResponseBodyPagingInfo &) = default ;
    ListLineagesResponseBodyPagingInfo& operator=(ListLineagesResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lineages_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // lineages Field Functions 
    bool hasLineages() const { return this->lineages_ != nullptr;};
    void deleteLineages() { this->lineages_ = nullptr;};
    inline const vector<Models::ListLineagesResponseBodyPagingInfoLineages> & lineages() const { DARABONBA_PTR_GET_CONST(lineages_, vector<Models::ListLineagesResponseBodyPagingInfoLineages>) };
    inline vector<Models::ListLineagesResponseBodyPagingInfoLineages> lineages() { DARABONBA_PTR_GET(lineages_, vector<Models::ListLineagesResponseBodyPagingInfoLineages>) };
    inline ListLineagesResponseBodyPagingInfo& setLineages(const vector<Models::ListLineagesResponseBodyPagingInfoLineages> & lineages) { DARABONBA_PTR_SET_VALUE(lineages_, lineages) };
    inline ListLineagesResponseBodyPagingInfo& setLineages(vector<Models::ListLineagesResponseBodyPagingInfoLineages> && lineages) { DARABONBA_PTR_SET_RVALUE(lineages_, lineages) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListLineagesResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLineagesResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLineagesResponseBodyPagingInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListLineagesResponseBodyPagingInfoLineages>> lineages_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
