// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESPECSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESPECSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceSpecsResponseBodyInstanceSpecs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeInstanceSpecsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSpecsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceSpecs, instanceSpecs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSpecsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceSpecs, instanceSpecs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceSpecsResponseBody() = default ;
    DescribeInstanceSpecsResponseBody(const DescribeInstanceSpecsResponseBody &) = default ;
    DescribeInstanceSpecsResponseBody(DescribeInstanceSpecsResponseBody &&) = default ;
    DescribeInstanceSpecsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSpecsResponseBody() = default ;
    DescribeInstanceSpecsResponseBody& operator=(const DescribeInstanceSpecsResponseBody &) = default ;
    DescribeInstanceSpecsResponseBody& operator=(DescribeInstanceSpecsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceSpecs_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceSpecs Field Functions 
    bool hasInstanceSpecs() const { return this->instanceSpecs_ != nullptr;};
    void deleteInstanceSpecs() { this->instanceSpecs_ = nullptr;};
    inline const vector<DescribeInstanceSpecsResponseBodyInstanceSpecs> & instanceSpecs() const { DARABONBA_PTR_GET_CONST(instanceSpecs_, vector<DescribeInstanceSpecsResponseBodyInstanceSpecs>) };
    inline vector<DescribeInstanceSpecsResponseBodyInstanceSpecs> instanceSpecs() { DARABONBA_PTR_GET(instanceSpecs_, vector<DescribeInstanceSpecsResponseBodyInstanceSpecs>) };
    inline DescribeInstanceSpecsResponseBody& setInstanceSpecs(const vector<DescribeInstanceSpecsResponseBodyInstanceSpecs> & instanceSpecs) { DARABONBA_PTR_SET_VALUE(instanceSpecs_, instanceSpecs) };
    inline DescribeInstanceSpecsResponseBody& setInstanceSpecs(vector<DescribeInstanceSpecsResponseBodyInstanceSpecs> && instanceSpecs) { DARABONBA_PTR_SET_RVALUE(instanceSpecs_, instanceSpecs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceSpecsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the specifications of the instance.
    std::shared_ptr<vector<DescribeInstanceSpecsResponseBodyInstanceSpecs>> instanceSpecs_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
