// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSPORTLAYERAPPLICATIONSRESPONSEBODYAPPLICATIONSSTATICIPV4LIST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSPORTLAYERAPPLICATIONSRESPONSEBODYAPPLICATIONSSTATICIPV4LIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListTransportLayerApplicationsResponseBodyApplicationsStaticIpV4List : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransportLayerApplicationsResponseBodyApplicationsStaticIpV4List& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransportLayerApplicationsResponseBodyApplicationsStaticIpV4List& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListTransportLayerApplicationsResponseBodyApplicationsStaticIpV4List() = default ;
    ListTransportLayerApplicationsResponseBodyApplicationsStaticIpV4List(const ListTransportLayerApplicationsResponseBodyApplicationsStaticIpV4List &) = default ;
    ListTransportLayerApplicationsResponseBodyApplicationsStaticIpV4List(ListTransportLayerApplicationsResponseBodyApplicationsStaticIpV4List &&) = default ;
    ListTransportLayerApplicationsResponseBodyApplicationsStaticIpV4List(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransportLayerApplicationsResponseBodyApplicationsStaticIpV4List() = default ;
    ListTransportLayerApplicationsResponseBodyApplicationsStaticIpV4List& operator=(const ListTransportLayerApplicationsResponseBodyApplicationsStaticIpV4List &) = default ;
    ListTransportLayerApplicationsResponseBodyApplicationsStaticIpV4List& operator=(ListTransportLayerApplicationsResponseBodyApplicationsStaticIpV4List &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->status_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ListTransportLayerApplicationsResponseBodyApplicationsStaticIpV4List& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTransportLayerApplicationsResponseBodyApplicationsStaticIpV4List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
