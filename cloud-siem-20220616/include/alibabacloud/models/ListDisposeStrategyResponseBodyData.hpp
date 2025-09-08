// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISPOSESTRATEGYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDISPOSESTRATEGYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDisposeStrategyResponseBodyDataPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListDisposeStrategyResponseBodyDataResponseData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListDisposeStrategyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDisposeStrategyResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(ResponseData, responseData_);
    };
    friend void from_json(const Darabonba::Json& j, ListDisposeStrategyResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(ResponseData, responseData_);
    };
    ListDisposeStrategyResponseBodyData() = default ;
    ListDisposeStrategyResponseBodyData(const ListDisposeStrategyResponseBodyData &) = default ;
    ListDisposeStrategyResponseBodyData(ListDisposeStrategyResponseBodyData &&) = default ;
    ListDisposeStrategyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDisposeStrategyResponseBodyData() = default ;
    ListDisposeStrategyResponseBodyData& operator=(const ListDisposeStrategyResponseBodyData &) = default ;
    ListDisposeStrategyResponseBodyData& operator=(ListDisposeStrategyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->responseData_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const Models::ListDisposeStrategyResponseBodyDataPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Models::ListDisposeStrategyResponseBodyDataPageInfo) };
    inline Models::ListDisposeStrategyResponseBodyDataPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, Models::ListDisposeStrategyResponseBodyDataPageInfo) };
    inline ListDisposeStrategyResponseBodyData& setPageInfo(const Models::ListDisposeStrategyResponseBodyDataPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListDisposeStrategyResponseBodyData& setPageInfo(Models::ListDisposeStrategyResponseBodyDataPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // responseData Field Functions 
    bool hasResponseData() const { return this->responseData_ != nullptr;};
    void deleteResponseData() { this->responseData_ = nullptr;};
    inline const vector<Models::ListDisposeStrategyResponseBodyDataResponseData> & responseData() const { DARABONBA_PTR_GET_CONST(responseData_, vector<Models::ListDisposeStrategyResponseBodyDataResponseData>) };
    inline vector<Models::ListDisposeStrategyResponseBodyDataResponseData> responseData() { DARABONBA_PTR_GET(responseData_, vector<Models::ListDisposeStrategyResponseBodyDataResponseData>) };
    inline ListDisposeStrategyResponseBodyData& setResponseData(const vector<Models::ListDisposeStrategyResponseBodyDataResponseData> & responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };
    inline ListDisposeStrategyResponseBodyData& setResponseData(vector<Models::ListDisposeStrategyResponseBodyDataResponseData> && responseData) { DARABONBA_PTR_SET_RVALUE(responseData_, responseData) };


  protected:
    // The pagination information.
    std::shared_ptr<Models::ListDisposeStrategyResponseBodyDataPageInfo> pageInfo_ = nullptr;
    // The detailed data.
    std::shared_ptr<vector<Models::ListDisposeStrategyResponseBodyDataResponseData>> responseData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
