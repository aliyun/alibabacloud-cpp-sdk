// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEINSPECTIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEINSPECTIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceInspectionsResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetInstanceInspectionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceInspectionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceInspectionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetInstanceInspectionsResponseBodyData() = default ;
    GetInstanceInspectionsResponseBodyData(const GetInstanceInspectionsResponseBodyData &) = default ;
    GetInstanceInspectionsResponseBodyData(GetInstanceInspectionsResponseBodyData &&) = default ;
    GetInstanceInspectionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceInspectionsResponseBodyData() = default ;
    GetInstanceInspectionsResponseBodyData& operator=(const GetInstanceInspectionsResponseBodyData &) = default ;
    GetInstanceInspectionsResponseBodyData& operator=(GetInstanceInspectionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->total_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::GetInstanceInspectionsResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::GetInstanceInspectionsResponseBodyDataList>) };
    inline vector<Models::GetInstanceInspectionsResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::GetInstanceInspectionsResponseBodyDataList>) };
    inline GetInstanceInspectionsResponseBodyData& setList(const vector<Models::GetInstanceInspectionsResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetInstanceInspectionsResponseBodyData& setList(vector<Models::GetInstanceInspectionsResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline GetInstanceInspectionsResponseBodyData& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetInstanceInspectionsResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetInstanceInspectionsResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The detailed information.
    std::shared_ptr<vector<Models::GetInstanceInspectionsResponseBodyDataList>> list_ = nullptr;
    // The page number. The value returned is a positive integer. Default value: 1.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
