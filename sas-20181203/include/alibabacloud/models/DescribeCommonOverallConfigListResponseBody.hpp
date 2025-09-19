// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMONOVERALLCONFIGLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMONOVERALLCONFIGLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCommonOverallConfigListResponseBodyOverallList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCommonOverallConfigListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommonOverallConfigListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OverallList, overallList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommonOverallConfigListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OverallList, overallList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCommonOverallConfigListResponseBody() = default ;
    DescribeCommonOverallConfigListResponseBody(const DescribeCommonOverallConfigListResponseBody &) = default ;
    DescribeCommonOverallConfigListResponseBody(DescribeCommonOverallConfigListResponseBody &&) = default ;
    DescribeCommonOverallConfigListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommonOverallConfigListResponseBody() = default ;
    DescribeCommonOverallConfigListResponseBody& operator=(const DescribeCommonOverallConfigListResponseBody &) = default ;
    DescribeCommonOverallConfigListResponseBody& operator=(DescribeCommonOverallConfigListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->overallList_ != nullptr
        && this->requestId_ != nullptr; };
    // overallList Field Functions 
    bool hasOverallList() const { return this->overallList_ != nullptr;};
    void deleteOverallList() { this->overallList_ = nullptr;};
    inline const vector<DescribeCommonOverallConfigListResponseBodyOverallList> & overallList() const { DARABONBA_PTR_GET_CONST(overallList_, vector<DescribeCommonOverallConfigListResponseBodyOverallList>) };
    inline vector<DescribeCommonOverallConfigListResponseBodyOverallList> overallList() { DARABONBA_PTR_GET(overallList_, vector<DescribeCommonOverallConfigListResponseBodyOverallList>) };
    inline DescribeCommonOverallConfigListResponseBody& setOverallList(const vector<DescribeCommonOverallConfigListResponseBodyOverallList> & overallList) { DARABONBA_PTR_SET_VALUE(overallList_, overallList) };
    inline DescribeCommonOverallConfigListResponseBody& setOverallList(vector<DescribeCommonOverallConfigListResponseBodyOverallList> && overallList) { DARABONBA_PTR_SET_RVALUE(overallList_, overallList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCommonOverallConfigListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the configuration items.
    std::shared_ptr<vector<DescribeCommonOverallConfigListResponseBodyOverallList>> overallList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
