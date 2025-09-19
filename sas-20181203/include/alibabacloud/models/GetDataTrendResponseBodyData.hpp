// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATATRENDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDATATRENDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataTrendResponseBodyDataItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetDataTrendResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataTrendResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DateList, dateList_);
      DARABONBA_PTR_TO_JSON(DateStrList, dateStrList_);
      DARABONBA_PTR_TO_JSON(ItemList, itemList_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataTrendResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DateList, dateList_);
      DARABONBA_PTR_FROM_JSON(DateStrList, dateStrList_);
      DARABONBA_PTR_FROM_JSON(ItemList, itemList_);
    };
    GetDataTrendResponseBodyData() = default ;
    GetDataTrendResponseBodyData(const GetDataTrendResponseBodyData &) = default ;
    GetDataTrendResponseBodyData(GetDataTrendResponseBodyData &&) = default ;
    GetDataTrendResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataTrendResponseBodyData() = default ;
    GetDataTrendResponseBodyData& operator=(const GetDataTrendResponseBodyData &) = default ;
    GetDataTrendResponseBodyData& operator=(GetDataTrendResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dateList_ != nullptr
        && this->dateStrList_ != nullptr && this->itemList_ != nullptr; };
    // dateList Field Functions 
    bool hasDateList() const { return this->dateList_ != nullptr;};
    void deleteDateList() { this->dateList_ = nullptr;};
    inline const vector<int32_t> & dateList() const { DARABONBA_PTR_GET_CONST(dateList_, vector<int32_t>) };
    inline vector<int32_t> dateList() { DARABONBA_PTR_GET(dateList_, vector<int32_t>) };
    inline GetDataTrendResponseBodyData& setDateList(const vector<int32_t> & dateList) { DARABONBA_PTR_SET_VALUE(dateList_, dateList) };
    inline GetDataTrendResponseBodyData& setDateList(vector<int32_t> && dateList) { DARABONBA_PTR_SET_RVALUE(dateList_, dateList) };


    // dateStrList Field Functions 
    bool hasDateStrList() const { return this->dateStrList_ != nullptr;};
    void deleteDateStrList() { this->dateStrList_ = nullptr;};
    inline const vector<string> & dateStrList() const { DARABONBA_PTR_GET_CONST(dateStrList_, vector<string>) };
    inline vector<string> dateStrList() { DARABONBA_PTR_GET(dateStrList_, vector<string>) };
    inline GetDataTrendResponseBodyData& setDateStrList(const vector<string> & dateStrList) { DARABONBA_PTR_SET_VALUE(dateStrList_, dateStrList) };
    inline GetDataTrendResponseBodyData& setDateStrList(vector<string> && dateStrList) { DARABONBA_PTR_SET_RVALUE(dateStrList_, dateStrList) };


    // itemList Field Functions 
    bool hasItemList() const { return this->itemList_ != nullptr;};
    void deleteItemList() { this->itemList_ = nullptr;};
    inline const vector<Models::GetDataTrendResponseBodyDataItemList> & itemList() const { DARABONBA_PTR_GET_CONST(itemList_, vector<Models::GetDataTrendResponseBodyDataItemList>) };
    inline vector<Models::GetDataTrendResponseBodyDataItemList> itemList() { DARABONBA_PTR_GET(itemList_, vector<Models::GetDataTrendResponseBodyDataItemList>) };
    inline GetDataTrendResponseBodyData& setItemList(const vector<Models::GetDataTrendResponseBodyDataItemList> & itemList) { DARABONBA_PTR_SET_VALUE(itemList_, itemList) };
    inline GetDataTrendResponseBodyData& setItemList(vector<Models::GetDataTrendResponseBodyDataItemList> && itemList) { DARABONBA_PTR_SET_RVALUE(itemList_, itemList) };


  protected:
    // The statistical timestamps of the trend data.
    std::shared_ptr<vector<int32_t>> dateList_ = nullptr;
    // The statistical dates and time for the trend data.
    std::shared_ptr<vector<string>> dateStrList_ = nullptr;
    // The returned data.
    std::shared_ptr<vector<Models::GetDataTrendResponseBodyDataItemList>> itemList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
