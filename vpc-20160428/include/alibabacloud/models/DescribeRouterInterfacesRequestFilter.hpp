// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACESREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACESREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouterInterfacesRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouterInterfacesRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouterInterfacesRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeRouterInterfacesRequestFilter() = default ;
    DescribeRouterInterfacesRequestFilter(const DescribeRouterInterfacesRequestFilter &) = default ;
    DescribeRouterInterfacesRequestFilter(DescribeRouterInterfacesRequestFilter &&) = default ;
    DescribeRouterInterfacesRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouterInterfacesRequestFilter() = default ;
    DescribeRouterInterfacesRequestFilter& operator=(const DescribeRouterInterfacesRequestFilter &) = default ;
    DescribeRouterInterfacesRequestFilter& operator=(DescribeRouterInterfacesRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeRouterInterfacesRequestFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline DescribeRouterInterfacesRequestFilter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline DescribeRouterInterfacesRequestFilter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The filter conditions. You can specify up to five filter conditions. The following filter conditions are supported:
    // 
    // *   **RouterInterfaceId**: the ID of the router interface.
    // *   **RouterId**: the ID of the router.
    // *   **RouterType**: the router type. Valid values: **VRouter** and **VBR**.
    // *   **RouterInterfaceOwnerId**: the ID of the Alibaba Cloud account to which the router interface belongs.
    // *   **OppositeInterfaceId**: the ID of the peer router interface.
    // *   **OppositeRouterType**: the type of the peer router interface. Valid values: **VRouter** and **VBR**.
    // *   **OppositeRouterId**: the ID of the peer router.
    // *   **OppositeInterfaceOwnerId**: the ID of the Alibaba Cloud account to which the peer router interface belongs.
    // *   **Status**: the status of the router interface.
    // *   **Name**: the name of the router interface.
    // 
    // >  The logical operator among multiple values in a filter condition is OR. In this case, the filter condition is met if one of the values is matched. The logical operator among filter conditions is AND. Only routers that meet all the filter conditions are queried.
    std::shared_ptr<string> key_ = nullptr;
    // Specifies the value in the filter condition based on the key. You can specify multiple filter values for one key. The logical operator among filter values is OR. If one filter value is matched, the filter condition is matched.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
