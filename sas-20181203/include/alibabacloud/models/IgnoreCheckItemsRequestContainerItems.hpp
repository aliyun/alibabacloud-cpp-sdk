// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IGNORECHECKITEMSREQUESTCONTAINERITEMS_HPP_
#define ALIBABACLOUD_MODELS_IGNORECHECKITEMSREQUESTCONTAINERITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class IgnoreCheckItemsRequestContainerItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IgnoreCheckItemsRequestContainerItems& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerNames, containerNames_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, IgnoreCheckItemsRequestContainerItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerNames, containerNames_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    IgnoreCheckItemsRequestContainerItems() = default ;
    IgnoreCheckItemsRequestContainerItems(const IgnoreCheckItemsRequestContainerItems &) = default ;
    IgnoreCheckItemsRequestContainerItems(IgnoreCheckItemsRequestContainerItems &&) = default ;
    IgnoreCheckItemsRequestContainerItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IgnoreCheckItemsRequestContainerItems() = default ;
    IgnoreCheckItemsRequestContainerItems& operator=(const IgnoreCheckItemsRequestContainerItems &) = default ;
    IgnoreCheckItemsRequestContainerItems& operator=(IgnoreCheckItemsRequestContainerItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->containerNames_ != nullptr
        && this->uuid_ != nullptr; };
    // containerNames Field Functions 
    bool hasContainerNames() const { return this->containerNames_ != nullptr;};
    void deleteContainerNames() { this->containerNames_ = nullptr;};
    inline string containerNames() const { DARABONBA_PTR_GET_DEFAULT(containerNames_, "") };
    inline IgnoreCheckItemsRequestContainerItems& setContainerNames(string containerNames) { DARABONBA_PTR_SET_VALUE(containerNames_, containerNames) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline IgnoreCheckItemsRequestContainerItems& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The names of the containers that need to be whitelisted for the current asset, separated by English commas.
    std::shared_ptr<string> containerNames_ = nullptr;
    // The UUID of the server.
    // 
    // > You can call the [DescribeCloudCenterInstances](https://help.aliyun.com/document_detail/141932.html) operation to query the UUIDs of servers.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
