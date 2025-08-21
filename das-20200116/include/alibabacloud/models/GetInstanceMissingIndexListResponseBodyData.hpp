// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEMISSINGINDEXLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEMISSINGINDEXLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceMissingIndexListResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetInstanceMissingIndexListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceMissingIndexListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceMissingIndexListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetInstanceMissingIndexListResponseBodyData() = default ;
    GetInstanceMissingIndexListResponseBodyData(const GetInstanceMissingIndexListResponseBodyData &) = default ;
    GetInstanceMissingIndexListResponseBodyData(GetInstanceMissingIndexListResponseBodyData &&) = default ;
    GetInstanceMissingIndexListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceMissingIndexListResponseBodyData() = default ;
    GetInstanceMissingIndexListResponseBodyData& operator=(const GetInstanceMissingIndexListResponseBodyData &) = default ;
    GetInstanceMissingIndexListResponseBodyData& operator=(GetInstanceMissingIndexListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->total_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::GetInstanceMissingIndexListResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::GetInstanceMissingIndexListResponseBodyDataList>) };
    inline vector<Models::GetInstanceMissingIndexListResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::GetInstanceMissingIndexListResponseBodyDataList>) };
    inline GetInstanceMissingIndexListResponseBodyData& setList(const vector<Models::GetInstanceMissingIndexListResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetInstanceMissingIndexListResponseBodyData& setList(vector<Models::GetInstanceMissingIndexListResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline GetInstanceMissingIndexListResponseBodyData& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetInstanceMissingIndexListResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetInstanceMissingIndexListResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The returned data.
    std::shared_ptr<vector<Models::GetInstanceMissingIndexListResponseBodyDataList>> list_ = nullptr;
    // The page number of the page returned.
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
