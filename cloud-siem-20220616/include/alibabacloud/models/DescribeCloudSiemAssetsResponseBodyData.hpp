// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMASSETSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMASSETSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCloudSiemAssetsResponseBodyDataPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudSiemAssetsResponseBodyDataResponseData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeCloudSiemAssetsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudSiemAssetsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(ResponseData, responseData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudSiemAssetsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(ResponseData, responseData_);
    };
    DescribeCloudSiemAssetsResponseBodyData() = default ;
    DescribeCloudSiemAssetsResponseBodyData(const DescribeCloudSiemAssetsResponseBodyData &) = default ;
    DescribeCloudSiemAssetsResponseBodyData(DescribeCloudSiemAssetsResponseBodyData &&) = default ;
    DescribeCloudSiemAssetsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudSiemAssetsResponseBodyData() = default ;
    DescribeCloudSiemAssetsResponseBodyData& operator=(const DescribeCloudSiemAssetsResponseBodyData &) = default ;
    DescribeCloudSiemAssetsResponseBodyData& operator=(DescribeCloudSiemAssetsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->responseData_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const Models::DescribeCloudSiemAssetsResponseBodyDataPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Models::DescribeCloudSiemAssetsResponseBodyDataPageInfo) };
    inline Models::DescribeCloudSiemAssetsResponseBodyDataPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, Models::DescribeCloudSiemAssetsResponseBodyDataPageInfo) };
    inline DescribeCloudSiemAssetsResponseBodyData& setPageInfo(const Models::DescribeCloudSiemAssetsResponseBodyDataPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeCloudSiemAssetsResponseBodyData& setPageInfo(Models::DescribeCloudSiemAssetsResponseBodyDataPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // responseData Field Functions 
    bool hasResponseData() const { return this->responseData_ != nullptr;};
    void deleteResponseData() { this->responseData_ = nullptr;};
    inline const vector<Models::DescribeCloudSiemAssetsResponseBodyDataResponseData> & responseData() const { DARABONBA_PTR_GET_CONST(responseData_, vector<Models::DescribeCloudSiemAssetsResponseBodyDataResponseData>) };
    inline vector<Models::DescribeCloudSiemAssetsResponseBodyDataResponseData> responseData() { DARABONBA_PTR_GET(responseData_, vector<Models::DescribeCloudSiemAssetsResponseBodyDataResponseData>) };
    inline DescribeCloudSiemAssetsResponseBodyData& setResponseData(const vector<Models::DescribeCloudSiemAssetsResponseBodyDataResponseData> & responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };
    inline DescribeCloudSiemAssetsResponseBodyData& setResponseData(vector<Models::DescribeCloudSiemAssetsResponseBodyDataResponseData> && responseData) { DARABONBA_PTR_SET_RVALUE(responseData_, responseData) };


  protected:
    // The pagination information.
    std::shared_ptr<Models::DescribeCloudSiemAssetsResponseBodyDataPageInfo> pageInfo_ = nullptr;
    // The detailed data.
    std::shared_ptr<vector<Models::DescribeCloudSiemAssetsResponseBodyDataResponseData>> responseData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
