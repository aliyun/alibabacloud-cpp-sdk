// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTCONFSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTCONFSTRATEGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClientConfStrategyResponseBodyTargetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClientConfStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientConfStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TargetList, targetList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientConfStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TargetList, targetList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeClientConfStrategyResponseBody() = default ;
    DescribeClientConfStrategyResponseBody(const DescribeClientConfStrategyResponseBody &) = default ;
    DescribeClientConfStrategyResponseBody(DescribeClientConfStrategyResponseBody &&) = default ;
    DescribeClientConfStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientConfStrategyResponseBody() = default ;
    DescribeClientConfStrategyResponseBody& operator=(const DescribeClientConfStrategyResponseBody &) = default ;
    DescribeClientConfStrategyResponseBody& operator=(DescribeClientConfStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->targetList_ == nullptr && return this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClientConfStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // targetList Field Functions 
    bool hasTargetList() const { return this->targetList_ != nullptr;};
    void deleteTargetList() { this->targetList_ = nullptr;};
    inline const vector<DescribeClientConfStrategyResponseBodyTargetList> & targetList() const { DARABONBA_PTR_GET_CONST(targetList_, vector<DescribeClientConfStrategyResponseBodyTargetList>) };
    inline vector<DescribeClientConfStrategyResponseBodyTargetList> targetList() { DARABONBA_PTR_GET(targetList_, vector<DescribeClientConfStrategyResponseBodyTargetList>) };
    inline DescribeClientConfStrategyResponseBody& setTargetList(const vector<DescribeClientConfStrategyResponseBodyTargetList> & targetList) { DARABONBA_PTR_SET_VALUE(targetList_, targetList) };
    inline DescribeClientConfStrategyResponseBody& setTargetList(vector<DescribeClientConfStrategyResponseBodyTargetList> && targetList) { DARABONBA_PTR_SET_RVALUE(targetList_, targetList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeClientConfStrategyResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the configurations.
    std::shared_ptr<vector<DescribeClientConfStrategyResponseBodyTargetList>> targetList_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
