// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCGSEARCHREQUESTSCGFILTER_HPP_
#define ALIBABACLOUD_MODELS_SCGSEARCHREQUESTSCGFILTER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ScgSearchRequestScgFilterOffSetParam.hpp>
#include <alibabacloud/models/ScgSearchRequestScgFilterPageParam.hpp>
#include <alibabacloud/models/ScgSearchRequestScgFilterSortParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ScgSearchRequestScgFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScgSearchRequestScgFilter& obj) { 
      DARABONBA_PTR_TO_JSON(OffSetParam, offSetParam_);
      DARABONBA_PTR_TO_JSON(PageParam, pageParam_);
      DARABONBA_PTR_TO_JSON(SortParam, sortParam_);
      DARABONBA_PTR_TO_JSON(UseOffSet, useOffSet_);
    };
    friend void from_json(const Darabonba::Json& j, ScgSearchRequestScgFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(OffSetParam, offSetParam_);
      DARABONBA_PTR_FROM_JSON(PageParam, pageParam_);
      DARABONBA_PTR_FROM_JSON(SortParam, sortParam_);
      DARABONBA_PTR_FROM_JSON(UseOffSet, useOffSet_);
    };
    ScgSearchRequestScgFilter() = default ;
    ScgSearchRequestScgFilter(const ScgSearchRequestScgFilter &) = default ;
    ScgSearchRequestScgFilter(ScgSearchRequestScgFilter &&) = default ;
    ScgSearchRequestScgFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScgSearchRequestScgFilter() = default ;
    ScgSearchRequestScgFilter& operator=(const ScgSearchRequestScgFilter &) = default ;
    ScgSearchRequestScgFilter& operator=(ScgSearchRequestScgFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->offSetParam_ != nullptr
        && this->pageParam_ != nullptr && this->sortParam_ != nullptr && this->useOffSet_ != nullptr; };
    // offSetParam Field Functions 
    bool hasOffSetParam() const { return this->offSetParam_ != nullptr;};
    void deleteOffSetParam() { this->offSetParam_ = nullptr;};
    inline const Models::ScgSearchRequestScgFilterOffSetParam & offSetParam() const { DARABONBA_PTR_GET_CONST(offSetParam_, Models::ScgSearchRequestScgFilterOffSetParam) };
    inline Models::ScgSearchRequestScgFilterOffSetParam offSetParam() { DARABONBA_PTR_GET(offSetParam_, Models::ScgSearchRequestScgFilterOffSetParam) };
    inline ScgSearchRequestScgFilter& setOffSetParam(const Models::ScgSearchRequestScgFilterOffSetParam & offSetParam) { DARABONBA_PTR_SET_VALUE(offSetParam_, offSetParam) };
    inline ScgSearchRequestScgFilter& setOffSetParam(Models::ScgSearchRequestScgFilterOffSetParam && offSetParam) { DARABONBA_PTR_SET_RVALUE(offSetParam_, offSetParam) };


    // pageParam Field Functions 
    bool hasPageParam() const { return this->pageParam_ != nullptr;};
    void deletePageParam() { this->pageParam_ = nullptr;};
    inline const Models::ScgSearchRequestScgFilterPageParam & pageParam() const { DARABONBA_PTR_GET_CONST(pageParam_, Models::ScgSearchRequestScgFilterPageParam) };
    inline Models::ScgSearchRequestScgFilterPageParam pageParam() { DARABONBA_PTR_GET(pageParam_, Models::ScgSearchRequestScgFilterPageParam) };
    inline ScgSearchRequestScgFilter& setPageParam(const Models::ScgSearchRequestScgFilterPageParam & pageParam) { DARABONBA_PTR_SET_VALUE(pageParam_, pageParam) };
    inline ScgSearchRequestScgFilter& setPageParam(Models::ScgSearchRequestScgFilterPageParam && pageParam) { DARABONBA_PTR_SET_RVALUE(pageParam_, pageParam) };


    // sortParam Field Functions 
    bool hasSortParam() const { return this->sortParam_ != nullptr;};
    void deleteSortParam() { this->sortParam_ = nullptr;};
    inline const Models::ScgSearchRequestScgFilterSortParam & sortParam() const { DARABONBA_PTR_GET_CONST(sortParam_, Models::ScgSearchRequestScgFilterSortParam) };
    inline Models::ScgSearchRequestScgFilterSortParam sortParam() { DARABONBA_PTR_GET(sortParam_, Models::ScgSearchRequestScgFilterSortParam) };
    inline ScgSearchRequestScgFilter& setSortParam(const Models::ScgSearchRequestScgFilterSortParam & sortParam) { DARABONBA_PTR_SET_VALUE(sortParam_, sortParam) };
    inline ScgSearchRequestScgFilter& setSortParam(Models::ScgSearchRequestScgFilterSortParam && sortParam) { DARABONBA_PTR_SET_RVALUE(sortParam_, sortParam) };


    // useOffSet Field Functions 
    bool hasUseOffSet() const { return this->useOffSet_ != nullptr;};
    void deleteUseOffSet() { this->useOffSet_ = nullptr;};
    inline bool useOffSet() const { DARABONBA_PTR_GET_DEFAULT(useOffSet_, false) };
    inline ScgSearchRequestScgFilter& setUseOffSet(bool useOffSet) { DARABONBA_PTR_SET_VALUE(useOffSet_, useOffSet) };


  protected:
    std::shared_ptr<Models::ScgSearchRequestScgFilterOffSetParam> offSetParam_ = nullptr;
    std::shared_ptr<Models::ScgSearchRequestScgFilterPageParam> pageParam_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::ScgSearchRequestScgFilterSortParam> sortParam_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> useOffSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
