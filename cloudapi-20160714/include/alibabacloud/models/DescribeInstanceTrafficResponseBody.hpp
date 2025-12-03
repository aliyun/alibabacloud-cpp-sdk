// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETRAFFICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETRAFFICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceTrafficResponseBodyInstanceTraffic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceTrafficResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTrafficResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceTraffic, instanceTraffic_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTrafficResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceTraffic, instanceTraffic_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceTrafficResponseBody() = default ;
    DescribeInstanceTrafficResponseBody(const DescribeInstanceTrafficResponseBody &) = default ;
    DescribeInstanceTrafficResponseBody(DescribeInstanceTrafficResponseBody &&) = default ;
    DescribeInstanceTrafficResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTrafficResponseBody() = default ;
    DescribeInstanceTrafficResponseBody& operator=(const DescribeInstanceTrafficResponseBody &) = default ;
    DescribeInstanceTrafficResponseBody& operator=(DescribeInstanceTrafficResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceTraffic_ == nullptr
        && return this->requestId_ == nullptr; };
    // instanceTraffic Field Functions 
    bool hasInstanceTraffic() const { return this->instanceTraffic_ != nullptr;};
    void deleteInstanceTraffic() { this->instanceTraffic_ = nullptr;};
    inline const DescribeInstanceTrafficResponseBodyInstanceTraffic & instanceTraffic() const { DARABONBA_PTR_GET_CONST(instanceTraffic_, DescribeInstanceTrafficResponseBodyInstanceTraffic) };
    inline DescribeInstanceTrafficResponseBodyInstanceTraffic instanceTraffic() { DARABONBA_PTR_GET(instanceTraffic_, DescribeInstanceTrafficResponseBodyInstanceTraffic) };
    inline DescribeInstanceTrafficResponseBody& setInstanceTraffic(const DescribeInstanceTrafficResponseBodyInstanceTraffic & instanceTraffic) { DARABONBA_PTR_SET_VALUE(instanceTraffic_, instanceTraffic) };
    inline DescribeInstanceTrafficResponseBody& setInstanceTraffic(DescribeInstanceTrafficResponseBodyInstanceTraffic && instanceTraffic) { DARABONBA_PTR_SET_RVALUE(instanceTraffic_, instanceTraffic) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceTrafficResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The traffic consumed by the requests and responses in the instance.
    std::shared_ptr<DescribeInstanceTrafficResponseBodyInstanceTraffic> instanceTraffic_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
