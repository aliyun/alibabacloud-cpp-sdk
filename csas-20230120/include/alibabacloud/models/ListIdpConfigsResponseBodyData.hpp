// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIDPCONFIGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTIDPCONFIGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIdpConfigsResponseBodyDataDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListIdpConfigsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIdpConfigsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListIdpConfigsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListIdpConfigsResponseBodyData() = default ;
    ListIdpConfigsResponseBodyData(const ListIdpConfigsResponseBodyData &) = default ;
    ListIdpConfigsResponseBodyData(ListIdpConfigsResponseBodyData &&) = default ;
    ListIdpConfigsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIdpConfigsResponseBodyData() = default ;
    ListIdpConfigsResponseBodyData& operator=(const ListIdpConfigsResponseBodyData &) = default ;
    ListIdpConfigsResponseBodyData& operator=(ListIdpConfigsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataList_ != nullptr
        && this->totalNum_ != nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<Models::ListIdpConfigsResponseBodyDataDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<Models::ListIdpConfigsResponseBodyDataDataList>) };
    inline vector<Models::ListIdpConfigsResponseBodyDataDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<Models::ListIdpConfigsResponseBodyDataDataList>) };
    inline ListIdpConfigsResponseBodyData& setDataList(const vector<Models::ListIdpConfigsResponseBodyDataDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline ListIdpConfigsResponseBodyData& setDataList(vector<Models::ListIdpConfigsResponseBodyDataDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline ListIdpConfigsResponseBodyData& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    std::shared_ptr<vector<Models::ListIdpConfigsResponseBodyDataDataList>> dataList_ = nullptr;
    std::shared_ptr<int64_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
