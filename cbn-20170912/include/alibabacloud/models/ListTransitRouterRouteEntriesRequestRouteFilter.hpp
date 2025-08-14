// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTEENTRIESREQUESTROUTEFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTEENTRIESREQUESTROUTEFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterRouteEntriesRequestRouteFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterRouteEntriesRequestRouteFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterRouteEntriesRequestRouteFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListTransitRouterRouteEntriesRequestRouteFilter() = default ;
    ListTransitRouterRouteEntriesRequestRouteFilter(const ListTransitRouterRouteEntriesRequestRouteFilter &) = default ;
    ListTransitRouterRouteEntriesRequestRouteFilter(ListTransitRouterRouteEntriesRequestRouteFilter &&) = default ;
    ListTransitRouterRouteEntriesRequestRouteFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterRouteEntriesRequestRouteFilter() = default ;
    ListTransitRouterRouteEntriesRequestRouteFilter& operator=(const ListTransitRouterRouteEntriesRequestRouteFilter &) = default ;
    ListTransitRouterRouteEntriesRequestRouteFilter& operator=(ListTransitRouterRouteEntriesRequestRouteFilter &&) = default ;
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
    inline ListTransitRouterRouteEntriesRequestRouteFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline ListTransitRouterRouteEntriesRequestRouteFilter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline ListTransitRouterRouteEntriesRequestRouteFilter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The match pattern for filtering CIDR blocks. Valid values:
    // 
    // *   **PrefixExactMatchCidrs**: exact matching.
    // *   **LongestPrefixMatchCidrs**: longest prefix matching. You can specify IP addresses and CIDR blocks.
    // *   **SubnetOfMatchCidrs**: subnet matching. The subnets of the specified CIDR blocks, including the CIDR block, are matches against the match conditions.
    // *   **SupernetOfMatchCidrs**: supernet matching. The supernets of the CIDR block, including the CIDR block, are matched against the match conditions.
    // 
    // By default, the logical operator among filter conditions is **AND**. Information about a route entry is returned only if the route entry matches all filter conditions. Filter conditions must be unique.
    std::shared_ptr<string> key_ = nullptr;
    // The filter value.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
