// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCENCHILDINSTANCEROUTEENTRIESTOATTACHMENTREQUESTROUTEFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTCENCHILDINSTANCEROUTEENTRIESTOATTACHMENTREQUESTROUTEFILTER_HPP_
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
  class ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter() = default ;
    ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter(const ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter &) = default ;
    ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter(ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter &&) = default ;
    ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter() = default ;
    ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter& operator=(const ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter &) = default ;
    ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter& operator=(ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter &&) = default ;
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
    inline ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The match mode of the route.
    // 
    // *   **prefix-exact-match**: exact match.
    std::shared_ptr<string> key_ = nullptr;
    // The destination CIDR blocks.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
