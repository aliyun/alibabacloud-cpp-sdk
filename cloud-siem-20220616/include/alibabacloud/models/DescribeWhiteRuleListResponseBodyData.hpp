// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITERULELISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITERULELISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeWhiteRuleListResponseBodyDataPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWhiteRuleListResponseBodyDataResponseData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeWhiteRuleListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteRuleListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(ResponseData, responseData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteRuleListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(ResponseData, responseData_);
    };
    DescribeWhiteRuleListResponseBodyData() = default ;
    DescribeWhiteRuleListResponseBodyData(const DescribeWhiteRuleListResponseBodyData &) = default ;
    DescribeWhiteRuleListResponseBodyData(DescribeWhiteRuleListResponseBodyData &&) = default ;
    DescribeWhiteRuleListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteRuleListResponseBodyData() = default ;
    DescribeWhiteRuleListResponseBodyData& operator=(const DescribeWhiteRuleListResponseBodyData &) = default ;
    DescribeWhiteRuleListResponseBodyData& operator=(DescribeWhiteRuleListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->responseData_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const Models::DescribeWhiteRuleListResponseBodyDataPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Models::DescribeWhiteRuleListResponseBodyDataPageInfo) };
    inline Models::DescribeWhiteRuleListResponseBodyDataPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, Models::DescribeWhiteRuleListResponseBodyDataPageInfo) };
    inline DescribeWhiteRuleListResponseBodyData& setPageInfo(const Models::DescribeWhiteRuleListResponseBodyDataPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeWhiteRuleListResponseBodyData& setPageInfo(Models::DescribeWhiteRuleListResponseBodyDataPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // responseData Field Functions 
    bool hasResponseData() const { return this->responseData_ != nullptr;};
    void deleteResponseData() { this->responseData_ = nullptr;};
    inline const vector<Models::DescribeWhiteRuleListResponseBodyDataResponseData> & responseData() const { DARABONBA_PTR_GET_CONST(responseData_, vector<Models::DescribeWhiteRuleListResponseBodyDataResponseData>) };
    inline vector<Models::DescribeWhiteRuleListResponseBodyDataResponseData> responseData() { DARABONBA_PTR_GET(responseData_, vector<Models::DescribeWhiteRuleListResponseBodyDataResponseData>) };
    inline DescribeWhiteRuleListResponseBodyData& setResponseData(const vector<Models::DescribeWhiteRuleListResponseBodyDataResponseData> & responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };
    inline DescribeWhiteRuleListResponseBodyData& setResponseData(vector<Models::DescribeWhiteRuleListResponseBodyDataResponseData> && responseData) { DARABONBA_PTR_SET_RVALUE(responseData_, responseData) };


  protected:
    // The pagination information.
    std::shared_ptr<Models::DescribeWhiteRuleListResponseBodyDataPageInfo> pageInfo_ = nullptr;
    // The detailed data.
    std::shared_ptr<vector<Models::DescribeWhiteRuleListResponseBodyDataResponseData>> responseData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
