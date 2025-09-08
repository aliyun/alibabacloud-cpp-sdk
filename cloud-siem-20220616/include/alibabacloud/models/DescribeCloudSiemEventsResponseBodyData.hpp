// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMEVENTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMEVENTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCloudSiemEventsResponseBodyDataPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudSiemEventsResponseBodyDataResponseData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeCloudSiemEventsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudSiemEventsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(ResponseData, responseData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudSiemEventsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(ResponseData, responseData_);
    };
    DescribeCloudSiemEventsResponseBodyData() = default ;
    DescribeCloudSiemEventsResponseBodyData(const DescribeCloudSiemEventsResponseBodyData &) = default ;
    DescribeCloudSiemEventsResponseBodyData(DescribeCloudSiemEventsResponseBodyData &&) = default ;
    DescribeCloudSiemEventsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudSiemEventsResponseBodyData() = default ;
    DescribeCloudSiemEventsResponseBodyData& operator=(const DescribeCloudSiemEventsResponseBodyData &) = default ;
    DescribeCloudSiemEventsResponseBodyData& operator=(DescribeCloudSiemEventsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->responseData_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const Models::DescribeCloudSiemEventsResponseBodyDataPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Models::DescribeCloudSiemEventsResponseBodyDataPageInfo) };
    inline Models::DescribeCloudSiemEventsResponseBodyDataPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, Models::DescribeCloudSiemEventsResponseBodyDataPageInfo) };
    inline DescribeCloudSiemEventsResponseBodyData& setPageInfo(const Models::DescribeCloudSiemEventsResponseBodyDataPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeCloudSiemEventsResponseBodyData& setPageInfo(Models::DescribeCloudSiemEventsResponseBodyDataPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // responseData Field Functions 
    bool hasResponseData() const { return this->responseData_ != nullptr;};
    void deleteResponseData() { this->responseData_ = nullptr;};
    inline const vector<Models::DescribeCloudSiemEventsResponseBodyDataResponseData> & responseData() const { DARABONBA_PTR_GET_CONST(responseData_, vector<Models::DescribeCloudSiemEventsResponseBodyDataResponseData>) };
    inline vector<Models::DescribeCloudSiemEventsResponseBodyDataResponseData> responseData() { DARABONBA_PTR_GET(responseData_, vector<Models::DescribeCloudSiemEventsResponseBodyDataResponseData>) };
    inline DescribeCloudSiemEventsResponseBodyData& setResponseData(const vector<Models::DescribeCloudSiemEventsResponseBodyDataResponseData> & responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };
    inline DescribeCloudSiemEventsResponseBodyData& setResponseData(vector<Models::DescribeCloudSiemEventsResponseBodyDataResponseData> && responseData) { DARABONBA_PTR_SET_RVALUE(responseData_, responseData) };


  protected:
    // The pagination information.
    std::shared_ptr<Models::DescribeCloudSiemEventsResponseBodyDataPageInfo> pageInfo_ = nullptr;
    // The detailed data.
    std::shared_ptr<vector<Models::DescribeCloudSiemEventsResponseBodyDataResponseData>> responseData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
