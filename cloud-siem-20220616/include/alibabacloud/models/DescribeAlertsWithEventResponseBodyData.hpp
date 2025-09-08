// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTSWITHEVENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTSWITHEVENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAlertsWithEventResponseBodyDataPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAlertsWithEventResponseBodyDataResponseData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAlertsWithEventResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertsWithEventResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(ResponseData, responseData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertsWithEventResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(ResponseData, responseData_);
    };
    DescribeAlertsWithEventResponseBodyData() = default ;
    DescribeAlertsWithEventResponseBodyData(const DescribeAlertsWithEventResponseBodyData &) = default ;
    DescribeAlertsWithEventResponseBodyData(DescribeAlertsWithEventResponseBodyData &&) = default ;
    DescribeAlertsWithEventResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertsWithEventResponseBodyData() = default ;
    DescribeAlertsWithEventResponseBodyData& operator=(const DescribeAlertsWithEventResponseBodyData &) = default ;
    DescribeAlertsWithEventResponseBodyData& operator=(DescribeAlertsWithEventResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->responseData_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const Models::DescribeAlertsWithEventResponseBodyDataPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Models::DescribeAlertsWithEventResponseBodyDataPageInfo) };
    inline Models::DescribeAlertsWithEventResponseBodyDataPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, Models::DescribeAlertsWithEventResponseBodyDataPageInfo) };
    inline DescribeAlertsWithEventResponseBodyData& setPageInfo(const Models::DescribeAlertsWithEventResponseBodyDataPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeAlertsWithEventResponseBodyData& setPageInfo(Models::DescribeAlertsWithEventResponseBodyDataPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // responseData Field Functions 
    bool hasResponseData() const { return this->responseData_ != nullptr;};
    void deleteResponseData() { this->responseData_ = nullptr;};
    inline const vector<Models::DescribeAlertsWithEventResponseBodyDataResponseData> & responseData() const { DARABONBA_PTR_GET_CONST(responseData_, vector<Models::DescribeAlertsWithEventResponseBodyDataResponseData>) };
    inline vector<Models::DescribeAlertsWithEventResponseBodyDataResponseData> responseData() { DARABONBA_PTR_GET(responseData_, vector<Models::DescribeAlertsWithEventResponseBodyDataResponseData>) };
    inline DescribeAlertsWithEventResponseBodyData& setResponseData(const vector<Models::DescribeAlertsWithEventResponseBodyDataResponseData> & responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };
    inline DescribeAlertsWithEventResponseBodyData& setResponseData(vector<Models::DescribeAlertsWithEventResponseBodyDataResponseData> && responseData) { DARABONBA_PTR_SET_RVALUE(responseData_, responseData) };


  protected:
    // The pagination information.
    std::shared_ptr<Models::DescribeAlertsWithEventResponseBodyDataPageInfo> pageInfo_ = nullptr;
    // The detailed data.
    std::shared_ptr<vector<Models::DescribeAlertsWithEventResponseBodyDataResponseData>> responseData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
