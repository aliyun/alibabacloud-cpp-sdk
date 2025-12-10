// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSWITHAUTHDETAILSREQUESTRESOURCETYPES_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSWITHAUTHDETAILSREQUESTRESOURCETYPES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListResourceGroupsWithAuthDetailsRequestResourceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsWithAuthDetailsRequestResourceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceTypeCode, resourceTypeCode_);
      DARABONBA_PTR_TO_JSON(Service, service_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsWithAuthDetailsRequestResourceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceTypeCode, resourceTypeCode_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
    };
    ListResourceGroupsWithAuthDetailsRequestResourceTypes() = default ;
    ListResourceGroupsWithAuthDetailsRequestResourceTypes(const ListResourceGroupsWithAuthDetailsRequestResourceTypes &) = default ;
    ListResourceGroupsWithAuthDetailsRequestResourceTypes(ListResourceGroupsWithAuthDetailsRequestResourceTypes &&) = default ;
    ListResourceGroupsWithAuthDetailsRequestResourceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupsWithAuthDetailsRequestResourceTypes() = default ;
    ListResourceGroupsWithAuthDetailsRequestResourceTypes& operator=(const ListResourceGroupsWithAuthDetailsRequestResourceTypes &) = default ;
    ListResourceGroupsWithAuthDetailsRequestResourceTypes& operator=(ListResourceGroupsWithAuthDetailsRequestResourceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceTypeCode_ == nullptr
        && return this->service_ == nullptr; };
    // resourceTypeCode Field Functions 
    bool hasResourceTypeCode() const { return this->resourceTypeCode_ != nullptr;};
    void deleteResourceTypeCode() { this->resourceTypeCode_ = nullptr;};
    inline string resourceTypeCode() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeCode_, "") };
    inline ListResourceGroupsWithAuthDetailsRequestResourceTypes& setResourceTypeCode(string resourceTypeCode) { DARABONBA_PTR_SET_VALUE(resourceTypeCode_, resourceTypeCode) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline ListResourceGroupsWithAuthDetailsRequestResourceTypes& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


  protected:
    std::shared_ptr<string> resourceTypeCode_ = nullptr;
    std::shared_ptr<string> service_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
