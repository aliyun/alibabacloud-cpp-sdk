// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEIDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEIDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceIdsResponseBodyInstanceIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeInstanceIdsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceIdsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceIdsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceIdsResponseBody() = default ;
    DescribeInstanceIdsResponseBody(const DescribeInstanceIdsResponseBody &) = default ;
    DescribeInstanceIdsResponseBody(DescribeInstanceIdsResponseBody &&) = default ;
    DescribeInstanceIdsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceIdsResponseBody() = default ;
    DescribeInstanceIdsResponseBody& operator=(const DescribeInstanceIdsResponseBody &) = default ;
    DescribeInstanceIdsResponseBody& operator=(DescribeInstanceIdsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceIds_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<DescribeInstanceIdsResponseBodyInstanceIds> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<DescribeInstanceIdsResponseBodyInstanceIds>) };
    inline vector<DescribeInstanceIdsResponseBodyInstanceIds> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<DescribeInstanceIdsResponseBodyInstanceIds>) };
    inline DescribeInstanceIdsResponseBody& setInstanceIds(const vector<DescribeInstanceIdsResponseBodyInstanceIds> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeInstanceIdsResponseBody& setInstanceIds(vector<DescribeInstanceIdsResponseBodyInstanceIds> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceIdsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID, type, description, and IP version of the instance.
    std::shared_ptr<vector<DescribeInstanceIdsResponseBodyInstanceIds>> instanceIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
