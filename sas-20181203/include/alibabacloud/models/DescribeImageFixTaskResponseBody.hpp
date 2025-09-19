// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEFIXTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEFIXTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageFixTaskResponseBodyBuildTasks.hpp>
#include <alibabacloud/models/DescribeImageFixTaskResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageFixTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageFixTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BuildTasks, buildTasks_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageFixTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildTasks, buildTasks_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageFixTaskResponseBody() = default ;
    DescribeImageFixTaskResponseBody(const DescribeImageFixTaskResponseBody &) = default ;
    DescribeImageFixTaskResponseBody(DescribeImageFixTaskResponseBody &&) = default ;
    DescribeImageFixTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageFixTaskResponseBody() = default ;
    DescribeImageFixTaskResponseBody& operator=(const DescribeImageFixTaskResponseBody &) = default ;
    DescribeImageFixTaskResponseBody& operator=(DescribeImageFixTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildTasks_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // buildTasks Field Functions 
    bool hasBuildTasks() const { return this->buildTasks_ != nullptr;};
    void deleteBuildTasks() { this->buildTasks_ = nullptr;};
    inline const vector<DescribeImageFixTaskResponseBodyBuildTasks> & buildTasks() const { DARABONBA_PTR_GET_CONST(buildTasks_, vector<DescribeImageFixTaskResponseBodyBuildTasks>) };
    inline vector<DescribeImageFixTaskResponseBodyBuildTasks> buildTasks() { DARABONBA_PTR_GET(buildTasks_, vector<DescribeImageFixTaskResponseBodyBuildTasks>) };
    inline DescribeImageFixTaskResponseBody& setBuildTasks(const vector<DescribeImageFixTaskResponseBodyBuildTasks> & buildTasks) { DARABONBA_PTR_SET_VALUE(buildTasks_, buildTasks) };
    inline DescribeImageFixTaskResponseBody& setBuildTasks(vector<DescribeImageFixTaskResponseBodyBuildTasks> && buildTasks) { DARABONBA_PTR_SET_RVALUE(buildTasks_, buildTasks) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeImageFixTaskResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeImageFixTaskResponseBodyPageInfo) };
    inline DescribeImageFixTaskResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeImageFixTaskResponseBodyPageInfo) };
    inline DescribeImageFixTaskResponseBody& setPageInfo(const DescribeImageFixTaskResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageFixTaskResponseBody& setPageInfo(DescribeImageFixTaskResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageFixTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The tasks returned.
    std::shared_ptr<vector<DescribeImageFixTaskResponseBodyBuildTasks>> buildTasks_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeImageFixTaskResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
