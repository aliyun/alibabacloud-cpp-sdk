// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTSWITHENTITYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTSWITHENTITYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAlertsWithEntityResponseBodyDataPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAlertsWithEntityResponseBodyDataResponseData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAlertsWithEntityResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertsWithEntityResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(ResponseData, responseData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertsWithEntityResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(ResponseData, responseData_);
    };
    DescribeAlertsWithEntityResponseBodyData() = default ;
    DescribeAlertsWithEntityResponseBodyData(const DescribeAlertsWithEntityResponseBodyData &) = default ;
    DescribeAlertsWithEntityResponseBodyData(DescribeAlertsWithEntityResponseBodyData &&) = default ;
    DescribeAlertsWithEntityResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertsWithEntityResponseBodyData() = default ;
    DescribeAlertsWithEntityResponseBodyData& operator=(const DescribeAlertsWithEntityResponseBodyData &) = default ;
    DescribeAlertsWithEntityResponseBodyData& operator=(DescribeAlertsWithEntityResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->responseData_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const Models::DescribeAlertsWithEntityResponseBodyDataPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Models::DescribeAlertsWithEntityResponseBodyDataPageInfo) };
    inline Models::DescribeAlertsWithEntityResponseBodyDataPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, Models::DescribeAlertsWithEntityResponseBodyDataPageInfo) };
    inline DescribeAlertsWithEntityResponseBodyData& setPageInfo(const Models::DescribeAlertsWithEntityResponseBodyDataPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeAlertsWithEntityResponseBodyData& setPageInfo(Models::DescribeAlertsWithEntityResponseBodyDataPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // responseData Field Functions 
    bool hasResponseData() const { return this->responseData_ != nullptr;};
    void deleteResponseData() { this->responseData_ = nullptr;};
    inline const vector<Models::DescribeAlertsWithEntityResponseBodyDataResponseData> & responseData() const { DARABONBA_PTR_GET_CONST(responseData_, vector<Models::DescribeAlertsWithEntityResponseBodyDataResponseData>) };
    inline vector<Models::DescribeAlertsWithEntityResponseBodyDataResponseData> responseData() { DARABONBA_PTR_GET(responseData_, vector<Models::DescribeAlertsWithEntityResponseBodyDataResponseData>) };
    inline DescribeAlertsWithEntityResponseBodyData& setResponseData(const vector<Models::DescribeAlertsWithEntityResponseBodyDataResponseData> & responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };
    inline DescribeAlertsWithEntityResponseBodyData& setResponseData(vector<Models::DescribeAlertsWithEntityResponseBodyDataResponseData> && responseData) { DARABONBA_PTR_SET_RVALUE(responseData_, responseData) };


  protected:
    // The pagination information.
    std::shared_ptr<Models::DescribeAlertsWithEntityResponseBodyDataPageInfo> pageInfo_ = nullptr;
    // The detailed data.
    std::shared_ptr<vector<Models::DescribeAlertsWithEntityResponseBodyDataResponseData>> responseData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
