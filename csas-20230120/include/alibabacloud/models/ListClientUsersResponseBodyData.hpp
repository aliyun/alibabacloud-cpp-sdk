// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLIENTUSERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCLIENTUSERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListClientUsersResponseBodyDataDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListClientUsersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClientUsersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListClientUsersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListClientUsersResponseBodyData() = default ;
    ListClientUsersResponseBodyData(const ListClientUsersResponseBodyData &) = default ;
    ListClientUsersResponseBodyData(ListClientUsersResponseBodyData &&) = default ;
    ListClientUsersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClientUsersResponseBodyData() = default ;
    ListClientUsersResponseBodyData& operator=(const ListClientUsersResponseBodyData &) = default ;
    ListClientUsersResponseBodyData& operator=(ListClientUsersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataList_ == nullptr
        && return this->totalNum_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<Models::ListClientUsersResponseBodyDataDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<Models::ListClientUsersResponseBodyDataDataList>) };
    inline vector<Models::ListClientUsersResponseBodyDataDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<Models::ListClientUsersResponseBodyDataDataList>) };
    inline ListClientUsersResponseBodyData& setDataList(const vector<Models::ListClientUsersResponseBodyDataDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline ListClientUsersResponseBodyData& setDataList(vector<Models::ListClientUsersResponseBodyDataDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline ListClientUsersResponseBodyData& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    std::shared_ptr<vector<Models::ListClientUsersResponseBodyDataDataList>> dataList_ = nullptr;
    std::shared_ptr<int64_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
