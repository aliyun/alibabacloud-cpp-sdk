// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEEXTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEEXTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceExtResponseBodyInstanceExtSpecs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeInstanceExtResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceExtResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceExtSpecs, instanceExtSpecs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceExtResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceExtSpecs, instanceExtSpecs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstanceExtResponseBody() = default ;
    DescribeInstanceExtResponseBody(const DescribeInstanceExtResponseBody &) = default ;
    DescribeInstanceExtResponseBody(DescribeInstanceExtResponseBody &&) = default ;
    DescribeInstanceExtResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceExtResponseBody() = default ;
    DescribeInstanceExtResponseBody& operator=(const DescribeInstanceExtResponseBody &) = default ;
    DescribeInstanceExtResponseBody& operator=(DescribeInstanceExtResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceExtSpecs_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // instanceExtSpecs Field Functions 
    bool hasInstanceExtSpecs() const { return this->instanceExtSpecs_ != nullptr;};
    void deleteInstanceExtSpecs() { this->instanceExtSpecs_ = nullptr;};
    inline const vector<DescribeInstanceExtResponseBodyInstanceExtSpecs> & instanceExtSpecs() const { DARABONBA_PTR_GET_CONST(instanceExtSpecs_, vector<DescribeInstanceExtResponseBodyInstanceExtSpecs>) };
    inline vector<DescribeInstanceExtResponseBodyInstanceExtSpecs> instanceExtSpecs() { DARABONBA_PTR_GET(instanceExtSpecs_, vector<DescribeInstanceExtResponseBodyInstanceExtSpecs>) };
    inline DescribeInstanceExtResponseBody& setInstanceExtSpecs(const vector<DescribeInstanceExtResponseBodyInstanceExtSpecs> & instanceExtSpecs) { DARABONBA_PTR_SET_VALUE(instanceExtSpecs_, instanceExtSpecs) };
    inline DescribeInstanceExtResponseBody& setInstanceExtSpecs(vector<DescribeInstanceExtResponseBodyInstanceExtSpecs> && instanceExtSpecs) { DARABONBA_PTR_SET_RVALUE(instanceExtSpecs_, instanceExtSpecs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceExtResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeInstanceExtResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The extended information about the Anti-DDoS Proxy instance.
    std::shared_ptr<vector<DescribeInstanceExtResponseBodyInstanceExtSpecs>> instanceExtSpecs_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of queried instances.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
