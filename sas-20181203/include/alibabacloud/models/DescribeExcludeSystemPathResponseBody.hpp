// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXCLUDESYSTEMPATHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXCLUDESYSTEMPATHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExcludeSystemPathResponseBodyExcludePaths.hpp>
#include <alibabacloud/models/DescribeExcludeSystemPathResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExcludeSystemPathResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExcludeSystemPathResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExcludePaths, excludePaths_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExcludeSystemPathResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExcludePaths, excludePaths_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeExcludeSystemPathResponseBody() = default ;
    DescribeExcludeSystemPathResponseBody(const DescribeExcludeSystemPathResponseBody &) = default ;
    DescribeExcludeSystemPathResponseBody(DescribeExcludeSystemPathResponseBody &&) = default ;
    DescribeExcludeSystemPathResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExcludeSystemPathResponseBody() = default ;
    DescribeExcludeSystemPathResponseBody& operator=(const DescribeExcludeSystemPathResponseBody &) = default ;
    DescribeExcludeSystemPathResponseBody& operator=(DescribeExcludeSystemPathResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->excludePaths_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // excludePaths Field Functions 
    bool hasExcludePaths() const { return this->excludePaths_ != nullptr;};
    void deleteExcludePaths() { this->excludePaths_ = nullptr;};
    inline const vector<DescribeExcludeSystemPathResponseBodyExcludePaths> & excludePaths() const { DARABONBA_PTR_GET_CONST(excludePaths_, vector<DescribeExcludeSystemPathResponseBodyExcludePaths>) };
    inline vector<DescribeExcludeSystemPathResponseBodyExcludePaths> excludePaths() { DARABONBA_PTR_GET(excludePaths_, vector<DescribeExcludeSystemPathResponseBodyExcludePaths>) };
    inline DescribeExcludeSystemPathResponseBody& setExcludePaths(const vector<DescribeExcludeSystemPathResponseBodyExcludePaths> & excludePaths) { DARABONBA_PTR_SET_VALUE(excludePaths_, excludePaths) };
    inline DescribeExcludeSystemPathResponseBody& setExcludePaths(vector<DescribeExcludeSystemPathResponseBodyExcludePaths> && excludePaths) { DARABONBA_PTR_SET_RVALUE(excludePaths_, excludePaths) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeExcludeSystemPathResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeExcludeSystemPathResponseBodyPageInfo) };
    inline DescribeExcludeSystemPathResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeExcludeSystemPathResponseBodyPageInfo) };
    inline DescribeExcludeSystemPathResponseBody& setPageInfo(const DescribeExcludeSystemPathResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeExcludeSystemPathResponseBody& setPageInfo(DescribeExcludeSystemPathResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExcludeSystemPathResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array consisting of the directories that are excluded.
    std::shared_ptr<vector<DescribeExcludeSystemPathResponseBodyExcludePaths>> excludePaths_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeExcludeSystemPathResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
