// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEBOOTCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEBOOTCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceBootConfigurationResponseBodyInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceBootConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceBootConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceBootConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceBootConfigurationResponseBody() = default ;
    DescribeInstanceBootConfigurationResponseBody(const DescribeInstanceBootConfigurationResponseBody &) = default ;
    DescribeInstanceBootConfigurationResponseBody(DescribeInstanceBootConfigurationResponseBody &&) = default ;
    DescribeInstanceBootConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceBootConfigurationResponseBody() = default ;
    DescribeInstanceBootConfigurationResponseBody& operator=(const DescribeInstanceBootConfigurationResponseBody &) = default ;
    DescribeInstanceBootConfigurationResponseBody& operator=(DescribeInstanceBootConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instances_ != nullptr
        && this->requestId_ != nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const DescribeInstanceBootConfigurationResponseBodyInstances & instances() const { DARABONBA_PTR_GET_CONST(instances_, DescribeInstanceBootConfigurationResponseBodyInstances) };
    inline DescribeInstanceBootConfigurationResponseBodyInstances instances() { DARABONBA_PTR_GET(instances_, DescribeInstanceBootConfigurationResponseBodyInstances) };
    inline DescribeInstanceBootConfigurationResponseBody& setInstances(const DescribeInstanceBootConfigurationResponseBodyInstances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeInstanceBootConfigurationResponseBody& setInstances(DescribeInstanceBootConfigurationResponseBodyInstances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceBootConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Schema of Response
    std::shared_ptr<DescribeInstanceBootConfigurationResponseBodyInstances> instances_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
