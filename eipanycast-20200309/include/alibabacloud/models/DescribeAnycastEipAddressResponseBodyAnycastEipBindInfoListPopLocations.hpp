// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANYCASTEIPADDRESSRESPONSEBODYANYCASTEIPBINDINFOLISTPOPLOCATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANYCASTEIPADDRESSRESPONSEBODYANYCASTEIPBINDINFOLISTPOPLOCATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations& obj) { 
      DARABONBA_PTR_TO_JSON(PopLocation, popLocation_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations& obj) { 
      DARABONBA_PTR_FROM_JSON(PopLocation, popLocation_);
    };
    DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations() = default ;
    DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations(const DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations &) = default ;
    DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations(DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations &&) = default ;
    DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations() = default ;
    DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations& operator=(const DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations &) = default ;
    DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations& operator=(DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->popLocation_ == nullptr; };
    // popLocation Field Functions 
    bool hasPopLocation() const { return this->popLocation_ != nullptr;};
    void deletePopLocation() { this->popLocation_ = nullptr;};
    inline string popLocation() const { DARABONBA_PTR_GET_DEFAULT(popLocation_, "") };
    inline DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations& setPopLocation(string popLocation) { DARABONBA_PTR_SET_VALUE(popLocation_, popLocation) };


  protected:
    // The information about the access points in associated access areas when you associate an Anycast EIP with a cloud resource.
    // 
    // If this is your first time associating an Anycast EIP with an endpoint, the system returns information about access points in all access areas.
    std::shared_ptr<string> popLocation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
