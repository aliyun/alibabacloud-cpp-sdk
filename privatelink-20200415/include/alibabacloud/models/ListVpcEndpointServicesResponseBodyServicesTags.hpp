// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICESRESPONSEBODYSERVICESTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICESRESPONSEBODYSERVICESTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointServicesResponseBodyServicesTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointServicesResponseBodyServicesTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointServicesResponseBodyServicesTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListVpcEndpointServicesResponseBodyServicesTags() = default ;
    ListVpcEndpointServicesResponseBodyServicesTags(const ListVpcEndpointServicesResponseBodyServicesTags &) = default ;
    ListVpcEndpointServicesResponseBodyServicesTags(ListVpcEndpointServicesResponseBodyServicesTags &&) = default ;
    ListVpcEndpointServicesResponseBodyServicesTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointServicesResponseBodyServicesTags() = default ;
    ListVpcEndpointServicesResponseBodyServicesTags& operator=(const ListVpcEndpointServicesResponseBodyServicesTags &) = default ;
    ListVpcEndpointServicesResponseBodyServicesTags& operator=(ListVpcEndpointServicesResponseBodyServicesTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListVpcEndpointServicesResponseBodyServicesTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListVpcEndpointServicesResponseBodyServicesTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the tag added to the resource.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the tag added to the resource.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
