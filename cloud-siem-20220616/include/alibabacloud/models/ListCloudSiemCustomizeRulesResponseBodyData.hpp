// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDSIEMCUSTOMIZERULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDSIEMCUSTOMIZERULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCloudSiemCustomizeRulesResponseBodyDataPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudSiemCustomizeRulesResponseBodyDataResponseData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListCloudSiemCustomizeRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudSiemCustomizeRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(ResponseData, responseData_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudSiemCustomizeRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(ResponseData, responseData_);
    };
    ListCloudSiemCustomizeRulesResponseBodyData() = default ;
    ListCloudSiemCustomizeRulesResponseBodyData(const ListCloudSiemCustomizeRulesResponseBodyData &) = default ;
    ListCloudSiemCustomizeRulesResponseBodyData(ListCloudSiemCustomizeRulesResponseBodyData &&) = default ;
    ListCloudSiemCustomizeRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudSiemCustomizeRulesResponseBodyData() = default ;
    ListCloudSiemCustomizeRulesResponseBodyData& operator=(const ListCloudSiemCustomizeRulesResponseBodyData &) = default ;
    ListCloudSiemCustomizeRulesResponseBodyData& operator=(ListCloudSiemCustomizeRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->responseData_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const Models::ListCloudSiemCustomizeRulesResponseBodyDataPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Models::ListCloudSiemCustomizeRulesResponseBodyDataPageInfo) };
    inline Models::ListCloudSiemCustomizeRulesResponseBodyDataPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, Models::ListCloudSiemCustomizeRulesResponseBodyDataPageInfo) };
    inline ListCloudSiemCustomizeRulesResponseBodyData& setPageInfo(const Models::ListCloudSiemCustomizeRulesResponseBodyDataPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCloudSiemCustomizeRulesResponseBodyData& setPageInfo(Models::ListCloudSiemCustomizeRulesResponseBodyDataPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // responseData Field Functions 
    bool hasResponseData() const { return this->responseData_ != nullptr;};
    void deleteResponseData() { this->responseData_ = nullptr;};
    inline const vector<Models::ListCloudSiemCustomizeRulesResponseBodyDataResponseData> & responseData() const { DARABONBA_PTR_GET_CONST(responseData_, vector<Models::ListCloudSiemCustomizeRulesResponseBodyDataResponseData>) };
    inline vector<Models::ListCloudSiemCustomizeRulesResponseBodyDataResponseData> responseData() { DARABONBA_PTR_GET(responseData_, vector<Models::ListCloudSiemCustomizeRulesResponseBodyDataResponseData>) };
    inline ListCloudSiemCustomizeRulesResponseBodyData& setResponseData(const vector<Models::ListCloudSiemCustomizeRulesResponseBodyDataResponseData> & responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };
    inline ListCloudSiemCustomizeRulesResponseBodyData& setResponseData(vector<Models::ListCloudSiemCustomizeRulesResponseBodyDataResponseData> && responseData) { DARABONBA_PTR_SET_RVALUE(responseData_, responseData) };


  protected:
    // The pagination information.
    std::shared_ptr<Models::ListCloudSiemCustomizeRulesResponseBodyDataPageInfo> pageInfo_ = nullptr;
    // The detailed data.
    std::shared_ptr<vector<Models::ListCloudSiemCustomizeRulesResponseBodyDataResponseData>> responseData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
