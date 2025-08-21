// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDASSQLLOGHOTDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDASSQLLOGHOTDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDasSQLLogHotDataResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetDasSQLLogHotDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDasSQLLogHotDataResponseBodyData& obj) { 
      DARABONBA_ANY_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetDasSQLLogHotDataResponseBodyData& obj) { 
      DARABONBA_ANY_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetDasSQLLogHotDataResponseBodyData() = default ;
    GetDasSQLLogHotDataResponseBodyData(const GetDasSQLLogHotDataResponseBodyData &) = default ;
    GetDasSQLLogHotDataResponseBodyData(GetDasSQLLogHotDataResponseBodyData &&) = default ;
    GetDasSQLLogHotDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDasSQLLogHotDataResponseBodyData() = default ;
    GetDasSQLLogHotDataResponseBodyData& operator=(const GetDasSQLLogHotDataResponseBodyData &) = default ;
    GetDasSQLLogHotDataResponseBodyData& operator=(GetDasSQLLogHotDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extra_ != nullptr
        && this->list_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->total_ != nullptr; };
    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline     const Darabonba::Json & extra() const { DARABONBA_GET(extra_) };
    Darabonba::Json & extra() { DARABONBA_GET(extra_) };
    inline GetDasSQLLogHotDataResponseBodyData& setExtra(const Darabonba::Json & extra) { DARABONBA_SET_VALUE(extra_, extra) };
    inline GetDasSQLLogHotDataResponseBodyData& setExtra(Darabonba::Json & extra) { DARABONBA_SET_RVALUE(extra_, extra) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::GetDasSQLLogHotDataResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::GetDasSQLLogHotDataResponseBodyDataList>) };
    inline vector<Models::GetDasSQLLogHotDataResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::GetDasSQLLogHotDataResponseBodyDataList>) };
    inline GetDasSQLLogHotDataResponseBodyData& setList(const vector<Models::GetDasSQLLogHotDataResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetDasSQLLogHotDataResponseBodyData& setList(vector<Models::GetDasSQLLogHotDataResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline GetDasSQLLogHotDataResponseBodyData& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetDasSQLLogHotDataResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetDasSQLLogHotDataResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The reserved parameter.
    Darabonba::Json extra_ = nullptr;
    // The details of the data returned.
    std::shared_ptr<vector<Models::GetDasSQLLogHotDataResponseBodyDataList>> list_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
