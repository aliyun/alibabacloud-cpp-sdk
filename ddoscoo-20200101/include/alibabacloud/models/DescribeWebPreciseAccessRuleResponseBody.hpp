// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBPRECISEACCESSRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBPRECISEACCESSRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebPreciseAccessRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebPreciseAccessRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PreciseAccessConfigList, preciseAccessConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebPreciseAccessRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PreciseAccessConfigList, preciseAccessConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeWebPreciseAccessRuleResponseBody() = default ;
    DescribeWebPreciseAccessRuleResponseBody(const DescribeWebPreciseAccessRuleResponseBody &) = default ;
    DescribeWebPreciseAccessRuleResponseBody(DescribeWebPreciseAccessRuleResponseBody &&) = default ;
    DescribeWebPreciseAccessRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebPreciseAccessRuleResponseBody() = default ;
    DescribeWebPreciseAccessRuleResponseBody& operator=(const DescribeWebPreciseAccessRuleResponseBody &) = default ;
    DescribeWebPreciseAccessRuleResponseBody& operator=(DescribeWebPreciseAccessRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->preciseAccessConfigList_ == nullptr
        && return this->requestId_ == nullptr; };
    // preciseAccessConfigList Field Functions 
    bool hasPreciseAccessConfigList() const { return this->preciseAccessConfigList_ != nullptr;};
    void deletePreciseAccessConfigList() { this->preciseAccessConfigList_ = nullptr;};
    inline const vector<DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList> & preciseAccessConfigList() const { DARABONBA_PTR_GET_CONST(preciseAccessConfigList_, vector<DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList>) };
    inline vector<DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList> preciseAccessConfigList() { DARABONBA_PTR_GET(preciseAccessConfigList_, vector<DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList>) };
    inline DescribeWebPreciseAccessRuleResponseBody& setPreciseAccessConfigList(const vector<DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList> & preciseAccessConfigList) { DARABONBA_PTR_SET_VALUE(preciseAccessConfigList_, preciseAccessConfigList) };
    inline DescribeWebPreciseAccessRuleResponseBody& setPreciseAccessConfigList(vector<DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList> && preciseAccessConfigList) { DARABONBA_PTR_SET_RVALUE(preciseAccessConfigList_, preciseAccessConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebPreciseAccessRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration of the accurate access control rule that is created for the website.
    std::shared_ptr<vector<DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigList>> preciseAccessConfigList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
