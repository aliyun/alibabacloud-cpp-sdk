// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANYCASTSERVERREGIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANYCASTSERVERREGIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class DescribeAnycastServerRegionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAnycastServerRegionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceLocation, serviceLocation_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAnycastServerRegionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceLocation, serviceLocation_);
    };
    DescribeAnycastServerRegionsRequest() = default ;
    DescribeAnycastServerRegionsRequest(const DescribeAnycastServerRegionsRequest &) = default ;
    DescribeAnycastServerRegionsRequest(DescribeAnycastServerRegionsRequest &&) = default ;
    DescribeAnycastServerRegionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAnycastServerRegionsRequest() = default ;
    DescribeAnycastServerRegionsRequest& operator=(const DescribeAnycastServerRegionsRequest &) = default ;
    DescribeAnycastServerRegionsRequest& operator=(DescribeAnycastServerRegionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serviceLocation_ != nullptr; };
    // serviceLocation Field Functions 
    bool hasServiceLocation() const { return this->serviceLocation_ != nullptr;};
    void deleteServiceLocation() { this->serviceLocation_ = nullptr;};
    inline string serviceLocation() const { DARABONBA_PTR_GET_DEFAULT(serviceLocation_, "") };
    inline DescribeAnycastServerRegionsRequest& setServiceLocation(string serviceLocation) { DARABONBA_PTR_SET_VALUE(serviceLocation_, serviceLocation) };


  protected:
    // The access area from which you use the Anycast EIP to communicate with the Internet.
    // 
    // Set the value to **international**, which specifies the areas outside the Chinese mainland.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceLocation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
