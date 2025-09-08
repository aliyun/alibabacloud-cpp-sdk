// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMIZERULETESTRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMIZERULETESTRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCustomizeRuleTestResultResponseBodyDataPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListCustomizeRuleTestResultResponseBodyDataResponseData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListCustomizeRuleTestResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomizeRuleTestResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(ResponseData, responseData_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomizeRuleTestResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(ResponseData, responseData_);
    };
    ListCustomizeRuleTestResultResponseBodyData() = default ;
    ListCustomizeRuleTestResultResponseBodyData(const ListCustomizeRuleTestResultResponseBodyData &) = default ;
    ListCustomizeRuleTestResultResponseBodyData(ListCustomizeRuleTestResultResponseBodyData &&) = default ;
    ListCustomizeRuleTestResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomizeRuleTestResultResponseBodyData() = default ;
    ListCustomizeRuleTestResultResponseBodyData& operator=(const ListCustomizeRuleTestResultResponseBodyData &) = default ;
    ListCustomizeRuleTestResultResponseBodyData& operator=(ListCustomizeRuleTestResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->responseData_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const Models::ListCustomizeRuleTestResultResponseBodyDataPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Models::ListCustomizeRuleTestResultResponseBodyDataPageInfo) };
    inline Models::ListCustomizeRuleTestResultResponseBodyDataPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, Models::ListCustomizeRuleTestResultResponseBodyDataPageInfo) };
    inline ListCustomizeRuleTestResultResponseBodyData& setPageInfo(const Models::ListCustomizeRuleTestResultResponseBodyDataPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCustomizeRuleTestResultResponseBodyData& setPageInfo(Models::ListCustomizeRuleTestResultResponseBodyDataPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // responseData Field Functions 
    bool hasResponseData() const { return this->responseData_ != nullptr;};
    void deleteResponseData() { this->responseData_ = nullptr;};
    inline const vector<Models::ListCustomizeRuleTestResultResponseBodyDataResponseData> & responseData() const { DARABONBA_PTR_GET_CONST(responseData_, vector<Models::ListCustomizeRuleTestResultResponseBodyDataResponseData>) };
    inline vector<Models::ListCustomizeRuleTestResultResponseBodyDataResponseData> responseData() { DARABONBA_PTR_GET(responseData_, vector<Models::ListCustomizeRuleTestResultResponseBodyDataResponseData>) };
    inline ListCustomizeRuleTestResultResponseBodyData& setResponseData(const vector<Models::ListCustomizeRuleTestResultResponseBodyDataResponseData> & responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };
    inline ListCustomizeRuleTestResultResponseBodyData& setResponseData(vector<Models::ListCustomizeRuleTestResultResponseBodyDataResponseData> && responseData) { DARABONBA_PTR_SET_RVALUE(responseData_, responseData) };


  protected:
    // The pagination information.
    std::shared_ptr<Models::ListCustomizeRuleTestResultResponseBodyDataPageInfo> pageInfo_ = nullptr;
    // The detailed data.
    std::shared_ptr<vector<Models::ListCustomizeRuleTestResultResponseBodyDataResponseData>> responseData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
