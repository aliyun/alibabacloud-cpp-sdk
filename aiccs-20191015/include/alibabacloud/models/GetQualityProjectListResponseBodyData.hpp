// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYPROJECTLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYPROJECTLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetQualityProjectListResponseBodyDataQualityProjectList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetQualityProjectListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityProjectListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QualityProjectList, qualityProjectList_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityProjectListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QualityProjectList, qualityProjectList_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetQualityProjectListResponseBodyData() = default ;
    GetQualityProjectListResponseBodyData(const GetQualityProjectListResponseBodyData &) = default ;
    GetQualityProjectListResponseBodyData(GetQualityProjectListResponseBodyData &&) = default ;
    GetQualityProjectListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityProjectListResponseBodyData() = default ;
    GetQualityProjectListResponseBodyData& operator=(const GetQualityProjectListResponseBodyData &) = default ;
    GetQualityProjectListResponseBodyData& operator=(GetQualityProjectListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNo_ != nullptr
        && this->pageSize_ != nullptr && this->qualityProjectList_ != nullptr && this->total_ != nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetQualityProjectListResponseBodyData& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetQualityProjectListResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // qualityProjectList Field Functions 
    bool hasQualityProjectList() const { return this->qualityProjectList_ != nullptr;};
    void deleteQualityProjectList() { this->qualityProjectList_ = nullptr;};
    inline const vector<Models::GetQualityProjectListResponseBodyDataQualityProjectList> & qualityProjectList() const { DARABONBA_PTR_GET_CONST(qualityProjectList_, vector<Models::GetQualityProjectListResponseBodyDataQualityProjectList>) };
    inline vector<Models::GetQualityProjectListResponseBodyDataQualityProjectList> qualityProjectList() { DARABONBA_PTR_GET(qualityProjectList_, vector<Models::GetQualityProjectListResponseBodyDataQualityProjectList>) };
    inline GetQualityProjectListResponseBodyData& setQualityProjectList(const vector<Models::GetQualityProjectListResponseBodyDataQualityProjectList> & qualityProjectList) { DARABONBA_PTR_SET_VALUE(qualityProjectList_, qualityProjectList) };
    inline GetQualityProjectListResponseBodyData& setQualityProjectList(vector<Models::GetQualityProjectListResponseBodyDataQualityProjectList> && qualityProjectList) { DARABONBA_PTR_SET_RVALUE(qualityProjectList_, qualityProjectList) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetQualityProjectListResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<Models::GetQualityProjectListResponseBodyDataQualityProjectList>> qualityProjectList_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
