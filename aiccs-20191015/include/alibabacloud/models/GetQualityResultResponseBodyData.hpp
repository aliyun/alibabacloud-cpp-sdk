// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetQualityResultResponseBodyDataQualityResultResponseList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetQualityResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QualityResultResponseList, qualityResultResponseList_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QualityResultResponseList, qualityResultResponseList_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    GetQualityResultResponseBodyData() = default ;
    GetQualityResultResponseBodyData(const GetQualityResultResponseBodyData &) = default ;
    GetQualityResultResponseBodyData(GetQualityResultResponseBodyData &&) = default ;
    GetQualityResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityResultResponseBodyData() = default ;
    GetQualityResultResponseBodyData& operator=(const GetQualityResultResponseBodyData &) = default ;
    GetQualityResultResponseBodyData& operator=(GetQualityResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNo_ != nullptr
        && this->pageSize_ != nullptr && this->qualityResultResponseList_ != nullptr && this->totalNum_ != nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetQualityResultResponseBodyData& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetQualityResultResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // qualityResultResponseList Field Functions 
    bool hasQualityResultResponseList() const { return this->qualityResultResponseList_ != nullptr;};
    void deleteQualityResultResponseList() { this->qualityResultResponseList_ = nullptr;};
    inline const vector<Models::GetQualityResultResponseBodyDataQualityResultResponseList> & qualityResultResponseList() const { DARABONBA_PTR_GET_CONST(qualityResultResponseList_, vector<Models::GetQualityResultResponseBodyDataQualityResultResponseList>) };
    inline vector<Models::GetQualityResultResponseBodyDataQualityResultResponseList> qualityResultResponseList() { DARABONBA_PTR_GET(qualityResultResponseList_, vector<Models::GetQualityResultResponseBodyDataQualityResultResponseList>) };
    inline GetQualityResultResponseBodyData& setQualityResultResponseList(const vector<Models::GetQualityResultResponseBodyDataQualityResultResponseList> & qualityResultResponseList) { DARABONBA_PTR_SET_VALUE(qualityResultResponseList_, qualityResultResponseList) };
    inline GetQualityResultResponseBodyData& setQualityResultResponseList(vector<Models::GetQualityResultResponseBodyDataQualityResultResponseList> && qualityResultResponseList) { DARABONBA_PTR_SET_RVALUE(qualityResultResponseList_, qualityResultResponseList) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline GetQualityResultResponseBodyData& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<Models::GetQualityResultResponseBodyDataQualityResultResponseList>> qualityResultResponseList_ = nullptr;
    std::shared_ptr<int32_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
