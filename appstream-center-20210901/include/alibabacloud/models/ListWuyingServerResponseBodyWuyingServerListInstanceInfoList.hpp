// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWUYINGSERVERRESPONSEBODYWUYINGSERVERLISTINSTANCEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTWUYINGSERVERRESPONSEBODYWUYINGSERVERLISTINSTANCEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListWuyingServerResponseBodyWuyingServerListInstanceInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWuyingServerResponseBodyWuyingServerListInstanceInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWuyingServerResponseBodyWuyingServerListInstanceInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
    };
    ListWuyingServerResponseBodyWuyingServerListInstanceInfoList() = default ;
    ListWuyingServerResponseBodyWuyingServerListInstanceInfoList(const ListWuyingServerResponseBodyWuyingServerListInstanceInfoList &) = default ;
    ListWuyingServerResponseBodyWuyingServerListInstanceInfoList(ListWuyingServerResponseBodyWuyingServerListInstanceInfoList &&) = default ;
    ListWuyingServerResponseBodyWuyingServerListInstanceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWuyingServerResponseBodyWuyingServerListInstanceInfoList() = default ;
    ListWuyingServerResponseBodyWuyingServerListInstanceInfoList& operator=(const ListWuyingServerResponseBodyWuyingServerListInstanceInfoList &) = default ;
    ListWuyingServerResponseBodyWuyingServerListInstanceInfoList& operator=(ListWuyingServerResponseBodyWuyingServerListInstanceInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->networkInterfaceId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListWuyingServerResponseBodyWuyingServerListInstanceInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline ListWuyingServerResponseBodyWuyingServerListInstanceInfoList& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
