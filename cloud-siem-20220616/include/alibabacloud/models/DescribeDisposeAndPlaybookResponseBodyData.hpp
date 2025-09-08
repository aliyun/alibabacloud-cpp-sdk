// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISPOSEANDPLAYBOOKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISPOSEANDPLAYBOOKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDisposeAndPlaybookResponseBodyDataPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDisposeAndPlaybookResponseBodyDataResponseData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeDisposeAndPlaybookResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisposeAndPlaybookResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(ResponseData, responseData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisposeAndPlaybookResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(ResponseData, responseData_);
    };
    DescribeDisposeAndPlaybookResponseBodyData() = default ;
    DescribeDisposeAndPlaybookResponseBodyData(const DescribeDisposeAndPlaybookResponseBodyData &) = default ;
    DescribeDisposeAndPlaybookResponseBodyData(DescribeDisposeAndPlaybookResponseBodyData &&) = default ;
    DescribeDisposeAndPlaybookResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisposeAndPlaybookResponseBodyData() = default ;
    DescribeDisposeAndPlaybookResponseBodyData& operator=(const DescribeDisposeAndPlaybookResponseBodyData &) = default ;
    DescribeDisposeAndPlaybookResponseBodyData& operator=(DescribeDisposeAndPlaybookResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->responseData_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const Models::DescribeDisposeAndPlaybookResponseBodyDataPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Models::DescribeDisposeAndPlaybookResponseBodyDataPageInfo) };
    inline Models::DescribeDisposeAndPlaybookResponseBodyDataPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, Models::DescribeDisposeAndPlaybookResponseBodyDataPageInfo) };
    inline DescribeDisposeAndPlaybookResponseBodyData& setPageInfo(const Models::DescribeDisposeAndPlaybookResponseBodyDataPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeDisposeAndPlaybookResponseBodyData& setPageInfo(Models::DescribeDisposeAndPlaybookResponseBodyDataPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // responseData Field Functions 
    bool hasResponseData() const { return this->responseData_ != nullptr;};
    void deleteResponseData() { this->responseData_ = nullptr;};
    inline const vector<Models::DescribeDisposeAndPlaybookResponseBodyDataResponseData> & responseData() const { DARABONBA_PTR_GET_CONST(responseData_, vector<Models::DescribeDisposeAndPlaybookResponseBodyDataResponseData>) };
    inline vector<Models::DescribeDisposeAndPlaybookResponseBodyDataResponseData> responseData() { DARABONBA_PTR_GET(responseData_, vector<Models::DescribeDisposeAndPlaybookResponseBodyDataResponseData>) };
    inline DescribeDisposeAndPlaybookResponseBodyData& setResponseData(const vector<Models::DescribeDisposeAndPlaybookResponseBodyDataResponseData> & responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };
    inline DescribeDisposeAndPlaybookResponseBodyData& setResponseData(vector<Models::DescribeDisposeAndPlaybookResponseBodyDataResponseData> && responseData) { DARABONBA_PTR_SET_RVALUE(responseData_, responseData) };


  protected:
    // The pagination information.
    std::shared_ptr<Models::DescribeDisposeAndPlaybookResponseBodyDataPageInfo> pageInfo_ = nullptr;
    // The detailed data.
    std::shared_ptr<vector<Models::DescribeDisposeAndPlaybookResponseBodyDataResponseData>> responseData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
