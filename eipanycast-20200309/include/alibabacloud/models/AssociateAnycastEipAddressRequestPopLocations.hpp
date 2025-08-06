// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEANYCASTEIPADDRESSREQUESTPOPLOCATIONS_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEANYCASTEIPADDRESSREQUESTPOPLOCATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class AssociateAnycastEipAddressRequestPopLocations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateAnycastEipAddressRequestPopLocations& obj) { 
      DARABONBA_PTR_TO_JSON(PopLocation, popLocation_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateAnycastEipAddressRequestPopLocations& obj) { 
      DARABONBA_PTR_FROM_JSON(PopLocation, popLocation_);
    };
    AssociateAnycastEipAddressRequestPopLocations() = default ;
    AssociateAnycastEipAddressRequestPopLocations(const AssociateAnycastEipAddressRequestPopLocations &) = default ;
    AssociateAnycastEipAddressRequestPopLocations(AssociateAnycastEipAddressRequestPopLocations &&) = default ;
    AssociateAnycastEipAddressRequestPopLocations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateAnycastEipAddressRequestPopLocations() = default ;
    AssociateAnycastEipAddressRequestPopLocations& operator=(const AssociateAnycastEipAddressRequestPopLocations &) = default ;
    AssociateAnycastEipAddressRequestPopLocations& operator=(AssociateAnycastEipAddressRequestPopLocations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->popLocation_ != nullptr; };
    // popLocation Field Functions 
    bool hasPopLocation() const { return this->popLocation_ != nullptr;};
    void deletePopLocation() { this->popLocation_ = nullptr;};
    inline string popLocation() const { DARABONBA_PTR_GET_DEFAULT(popLocation_, "") };
    inline AssociateAnycastEipAddressRequestPopLocations& setPopLocation(string popLocation) { DARABONBA_PTR_SET_VALUE(popLocation_, popLocation) };


  protected:
    // The information about the access points in associated access areas when you associate an Anycast EIP with an endpoint.
    // 
    // If this is your first time to associate an Anycast EIP with an endpoint, ignore this parameter. The system automatically associates all access areas.
    // 
    // You can call the [DescribeAnycastPopLocations](https://help.aliyun.com/document_detail/171938.html) operation to query information about access points in supported access areas.
    std::shared_ptr<string> popLocation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
