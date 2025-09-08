// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDSIEMPREDEFINEDRULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDSIEMPREDEFINEDRULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCloudSiemPredefinedRulesResponseBodyDataPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudSiemPredefinedRulesResponseBodyDataResponseData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListCloudSiemPredefinedRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudSiemPredefinedRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(ResponseData, responseData_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudSiemPredefinedRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(ResponseData, responseData_);
    };
    ListCloudSiemPredefinedRulesResponseBodyData() = default ;
    ListCloudSiemPredefinedRulesResponseBodyData(const ListCloudSiemPredefinedRulesResponseBodyData &) = default ;
    ListCloudSiemPredefinedRulesResponseBodyData(ListCloudSiemPredefinedRulesResponseBodyData &&) = default ;
    ListCloudSiemPredefinedRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudSiemPredefinedRulesResponseBodyData() = default ;
    ListCloudSiemPredefinedRulesResponseBodyData& operator=(const ListCloudSiemPredefinedRulesResponseBodyData &) = default ;
    ListCloudSiemPredefinedRulesResponseBodyData& operator=(ListCloudSiemPredefinedRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->responseData_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const Models::ListCloudSiemPredefinedRulesResponseBodyDataPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Models::ListCloudSiemPredefinedRulesResponseBodyDataPageInfo) };
    inline Models::ListCloudSiemPredefinedRulesResponseBodyDataPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, Models::ListCloudSiemPredefinedRulesResponseBodyDataPageInfo) };
    inline ListCloudSiemPredefinedRulesResponseBodyData& setPageInfo(const Models::ListCloudSiemPredefinedRulesResponseBodyDataPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCloudSiemPredefinedRulesResponseBodyData& setPageInfo(Models::ListCloudSiemPredefinedRulesResponseBodyDataPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // responseData Field Functions 
    bool hasResponseData() const { return this->responseData_ != nullptr;};
    void deleteResponseData() { this->responseData_ = nullptr;};
    inline const vector<Models::ListCloudSiemPredefinedRulesResponseBodyDataResponseData> & responseData() const { DARABONBA_PTR_GET_CONST(responseData_, vector<Models::ListCloudSiemPredefinedRulesResponseBodyDataResponseData>) };
    inline vector<Models::ListCloudSiemPredefinedRulesResponseBodyDataResponseData> responseData() { DARABONBA_PTR_GET(responseData_, vector<Models::ListCloudSiemPredefinedRulesResponseBodyDataResponseData>) };
    inline ListCloudSiemPredefinedRulesResponseBodyData& setResponseData(const vector<Models::ListCloudSiemPredefinedRulesResponseBodyDataResponseData> & responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };
    inline ListCloudSiemPredefinedRulesResponseBodyData& setResponseData(vector<Models::ListCloudSiemPredefinedRulesResponseBodyDataResponseData> && responseData) { DARABONBA_PTR_SET_RVALUE(responseData_, responseData) };


  protected:
    // The pagination information.
    std::shared_ptr<Models::ListCloudSiemPredefinedRulesResponseBodyDataPageInfo> pageInfo_ = nullptr;
    // The detailed data.
    std::shared_ptr<vector<Models::ListCloudSiemPredefinedRulesResponseBodyDataResponseData>> responseData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
