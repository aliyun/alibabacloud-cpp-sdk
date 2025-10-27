// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMONTARGETCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMONTARGETCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCommonTargetConfigResponseBodyTargetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCommonTargetConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommonTargetConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TargetList, targetList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommonTargetConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TargetList, targetList_);
    };
    DescribeCommonTargetConfigResponseBody() = default ;
    DescribeCommonTargetConfigResponseBody(const DescribeCommonTargetConfigResponseBody &) = default ;
    DescribeCommonTargetConfigResponseBody(DescribeCommonTargetConfigResponseBody &&) = default ;
    DescribeCommonTargetConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommonTargetConfigResponseBody() = default ;
    DescribeCommonTargetConfigResponseBody& operator=(const DescribeCommonTargetConfigResponseBody &) = default ;
    DescribeCommonTargetConfigResponseBody& operator=(DescribeCommonTargetConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->targetList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCommonTargetConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // targetList Field Functions 
    bool hasTargetList() const { return this->targetList_ != nullptr;};
    void deleteTargetList() { this->targetList_ = nullptr;};
    inline const vector<DescribeCommonTargetConfigResponseBodyTargetList> & targetList() const { DARABONBA_PTR_GET_CONST(targetList_, vector<DescribeCommonTargetConfigResponseBodyTargetList>) };
    inline vector<DescribeCommonTargetConfigResponseBodyTargetList> targetList() { DARABONBA_PTR_GET(targetList_, vector<DescribeCommonTargetConfigResponseBodyTargetList>) };
    inline DescribeCommonTargetConfigResponseBody& setTargetList(const vector<DescribeCommonTargetConfigResponseBodyTargetList> & targetList) { DARABONBA_PTR_SET_VALUE(targetList_, targetList) };
    inline DescribeCommonTargetConfigResponseBody& setTargetList(vector<DescribeCommonTargetConfigResponseBodyTargetList> && targetList) { DARABONBA_PTR_SET_RVALUE(targetList_, targetList) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the details of the configuration items.
    std::shared_ptr<vector<DescribeCommonTargetConfigResponseBodyTargetList>> targetList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
