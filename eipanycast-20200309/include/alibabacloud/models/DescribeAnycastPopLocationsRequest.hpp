// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANYCASTPOPLOCATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANYCASTPOPLOCATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class DescribeAnycastPopLocationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAnycastPopLocationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceLocation, serviceLocation_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAnycastPopLocationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceLocation, serviceLocation_);
    };
    DescribeAnycastPopLocationsRequest() = default ;
    DescribeAnycastPopLocationsRequest(const DescribeAnycastPopLocationsRequest &) = default ;
    DescribeAnycastPopLocationsRequest(DescribeAnycastPopLocationsRequest &&) = default ;
    DescribeAnycastPopLocationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAnycastPopLocationsRequest() = default ;
    DescribeAnycastPopLocationsRequest& operator=(const DescribeAnycastPopLocationsRequest &) = default ;
    DescribeAnycastPopLocationsRequest& operator=(DescribeAnycastPopLocationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceLocation_ == nullptr; };
    // serviceLocation Field Functions 
    bool hasServiceLocation() const { return this->serviceLocation_ != nullptr;};
    void deleteServiceLocation() { this->serviceLocation_ = nullptr;};
    inline string serviceLocation() const { DARABONBA_PTR_GET_DEFAULT(serviceLocation_, "") };
    inline DescribeAnycastPopLocationsRequest& setServiceLocation(string serviceLocation) { DARABONBA_PTR_SET_VALUE(serviceLocation_, serviceLocation) };


  protected:
    // The access area of the Anycast elastic IP address (EIP).
    // 
    // Set the value to **international**, which specifies the areas outside the Chinese mainland.
    std::shared_ptr<string> serviceLocation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
