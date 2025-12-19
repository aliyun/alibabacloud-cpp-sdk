// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULT4QUERYINSTANCEPRICE4MODIFYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRESULT4QUERYINSTANCEPRICE4MODIFYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetResult4QueryInstancePrice4ModifyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResult4QueryInstancePrice4ModifyResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PriceList, priceList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResult4QueryInstancePrice4ModifyResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PriceList, priceList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetResult4QueryInstancePrice4ModifyResponseBodyData() = default ;
    GetResult4QueryInstancePrice4ModifyResponseBodyData(const GetResult4QueryInstancePrice4ModifyResponseBodyData &) = default ;
    GetResult4QueryInstancePrice4ModifyResponseBodyData(GetResult4QueryInstancePrice4ModifyResponseBodyData &&) = default ;
    GetResult4QueryInstancePrice4ModifyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResult4QueryInstancePrice4ModifyResponseBodyData() = default ;
    GetResult4QueryInstancePrice4ModifyResponseBodyData& operator=(const GetResult4QueryInstancePrice4ModifyResponseBodyData &) = default ;
    GetResult4QueryInstancePrice4ModifyResponseBodyData& operator=(GetResult4QueryInstancePrice4ModifyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->priceList_ == nullptr
        && return this->status_ == nullptr && return this->taskId_ == nullptr; };
    // priceList Field Functions 
    bool hasPriceList() const { return this->priceList_ != nullptr;};
    void deletePriceList() { this->priceList_ = nullptr;};
    inline const vector<Models::GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList> & priceList() const { DARABONBA_PTR_GET_CONST(priceList_, vector<Models::GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList>) };
    inline vector<Models::GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList> priceList() { DARABONBA_PTR_GET(priceList_, vector<Models::GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList>) };
    inline GetResult4QueryInstancePrice4ModifyResponseBodyData& setPriceList(const vector<Models::GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList> & priceList) { DARABONBA_PTR_SET_VALUE(priceList_, priceList) };
    inline GetResult4QueryInstancePrice4ModifyResponseBodyData& setPriceList(vector<Models::GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList> && priceList) { DARABONBA_PTR_SET_RVALUE(priceList_, priceList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetResult4QueryInstancePrice4ModifyResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetResult4QueryInstancePrice4ModifyResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<vector<Models::GetResult4QueryInstancePrice4ModifyResponseBodyDataPriceList>> priceList_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
