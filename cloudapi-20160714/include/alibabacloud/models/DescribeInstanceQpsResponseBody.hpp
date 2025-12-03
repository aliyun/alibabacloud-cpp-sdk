// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEQPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEQPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceQpsResponseBodyInstanceQps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceQpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceQpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceQps, instanceQps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceQpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceQps, instanceQps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceQpsResponseBody() = default ;
    DescribeInstanceQpsResponseBody(const DescribeInstanceQpsResponseBody &) = default ;
    DescribeInstanceQpsResponseBody(DescribeInstanceQpsResponseBody &&) = default ;
    DescribeInstanceQpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceQpsResponseBody() = default ;
    DescribeInstanceQpsResponseBody& operator=(const DescribeInstanceQpsResponseBody &) = default ;
    DescribeInstanceQpsResponseBody& operator=(DescribeInstanceQpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceQps_ == nullptr
        && return this->requestId_ == nullptr; };
    // instanceQps Field Functions 
    bool hasInstanceQps() const { return this->instanceQps_ != nullptr;};
    void deleteInstanceQps() { this->instanceQps_ = nullptr;};
    inline const DescribeInstanceQpsResponseBodyInstanceQps & instanceQps() const { DARABONBA_PTR_GET_CONST(instanceQps_, DescribeInstanceQpsResponseBodyInstanceQps) };
    inline DescribeInstanceQpsResponseBodyInstanceQps instanceQps() { DARABONBA_PTR_GET(instanceQps_, DescribeInstanceQpsResponseBodyInstanceQps) };
    inline DescribeInstanceQpsResponseBody& setInstanceQps(const DescribeInstanceQpsResponseBodyInstanceQps & instanceQps) { DARABONBA_PTR_SET_VALUE(instanceQps_, instanceQps) };
    inline DescribeInstanceQpsResponseBody& setInstanceQps(DescribeInstanceQpsResponseBodyInstanceQps && instanceQps) { DARABONBA_PTR_SET_RVALUE(instanceQps_, instanceQps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceQpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of requests sent to the APIs in the instance.
    std::shared_ptr<DescribeInstanceQpsResponseBodyInstanceQps> instanceQps_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
