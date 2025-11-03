// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROUTEITEM_HPP_
#define ALIBABACLOUD_MODELS_ROUTEITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class RouteItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RouteItem& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(InstanceDomain, instanceDomain_);
      DARABONBA_PTR_TO_JSON(StorageDomain, storageDomain_);
    };
    friend void from_json(const Darabonba::Json& j, RouteItem& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(InstanceDomain, instanceDomain_);
      DARABONBA_PTR_FROM_JSON(StorageDomain, storageDomain_);
    };
    RouteItem() = default ;
    RouteItem(const RouteItem &) = default ;
    RouteItem(RouteItem &&) = default ;
    RouteItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RouteItem() = default ;
    RouteItem& operator=(const RouteItem &) = default ;
    RouteItem& operator=(RouteItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpointType_ == nullptr
        && return this->instanceDomain_ == nullptr && return this->storageDomain_ == nullptr; };
    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string endpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline RouteItem& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // instanceDomain Field Functions 
    bool hasInstanceDomain() const { return this->instanceDomain_ != nullptr;};
    void deleteInstanceDomain() { this->instanceDomain_ = nullptr;};
    inline string instanceDomain() const { DARABONBA_PTR_GET_DEFAULT(instanceDomain_, "") };
    inline RouteItem& setInstanceDomain(string instanceDomain) { DARABONBA_PTR_SET_VALUE(instanceDomain_, instanceDomain) };


    // storageDomain Field Functions 
    bool hasStorageDomain() const { return this->storageDomain_ != nullptr;};
    void deleteStorageDomain() { this->storageDomain_ = nullptr;};
    inline string storageDomain() const { DARABONBA_PTR_GET_DEFAULT(storageDomain_, "") };
    inline RouteItem& setStorageDomain(string storageDomain) { DARABONBA_PTR_SET_VALUE(storageDomain_, storageDomain) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> endpointType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceDomain_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> storageDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
