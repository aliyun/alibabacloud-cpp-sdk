// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACKINFOBYINTERVALRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETACKINFOBYINTERVALRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAckInfoByIntervalResponseBodyDataVoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetAckInfoByIntervalResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAckInfoByIntervalResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VoList, voList_);
    };
    friend void from_json(const Darabonba::Json& j, GetAckInfoByIntervalResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VoList, voList_);
    };
    GetAckInfoByIntervalResponseBodyData() = default ;
    GetAckInfoByIntervalResponseBodyData(const GetAckInfoByIntervalResponseBodyData &) = default ;
    GetAckInfoByIntervalResponseBodyData(GetAckInfoByIntervalResponseBodyData &&) = default ;
    GetAckInfoByIntervalResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAckInfoByIntervalResponseBodyData() = default ;
    GetAckInfoByIntervalResponseBodyData& operator=(const GetAckInfoByIntervalResponseBodyData &) = default ;
    GetAckInfoByIntervalResponseBodyData& operator=(GetAckInfoByIntervalResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr && return this->voList_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetAckInfoByIntervalResponseBodyData& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetAckInfoByIntervalResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetAckInfoByIntervalResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // voList Field Functions 
    bool hasVoList() const { return this->voList_ != nullptr;};
    void deleteVoList() { this->voList_ = nullptr;};
    inline const vector<Models::GetAckInfoByIntervalResponseBodyDataVoList> & voList() const { DARABONBA_PTR_GET_CONST(voList_, vector<Models::GetAckInfoByIntervalResponseBodyDataVoList>) };
    inline vector<Models::GetAckInfoByIntervalResponseBodyDataVoList> voList() { DARABONBA_PTR_GET(voList_, vector<Models::GetAckInfoByIntervalResponseBodyDataVoList>) };
    inline GetAckInfoByIntervalResponseBodyData& setVoList(const vector<Models::GetAckInfoByIntervalResponseBodyDataVoList> & voList) { DARABONBA_PTR_SET_VALUE(voList_, voList) };
    inline GetAckInfoByIntervalResponseBodyData& setVoList(vector<Models::GetAckInfoByIntervalResponseBodyDataVoList> && voList) { DARABONBA_PTR_SET_RVALUE(voList_, voList) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<vector<Models::GetAckInfoByIntervalResponseBodyDataVoList>> voList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
