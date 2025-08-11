// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHALBSERVERGROUPSREQUESTALBSERVERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DETACHALBSERVERGROUPSREQUESTALBSERVERGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DetachAlbServerGroupsRequestAlbServerGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachAlbServerGroupsRequestAlbServerGroups& obj) { 
      DARABONBA_PTR_TO_JSON(AlbServerGroupId, albServerGroupId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, DetachAlbServerGroupsRequestAlbServerGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbServerGroupId, albServerGroupId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    DetachAlbServerGroupsRequestAlbServerGroups() = default ;
    DetachAlbServerGroupsRequestAlbServerGroups(const DetachAlbServerGroupsRequestAlbServerGroups &) = default ;
    DetachAlbServerGroupsRequestAlbServerGroups(DetachAlbServerGroupsRequestAlbServerGroups &&) = default ;
    DetachAlbServerGroupsRequestAlbServerGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachAlbServerGroupsRequestAlbServerGroups() = default ;
    DetachAlbServerGroupsRequestAlbServerGroups& operator=(const DetachAlbServerGroupsRequestAlbServerGroups &) = default ;
    DetachAlbServerGroupsRequestAlbServerGroups& operator=(DetachAlbServerGroupsRequestAlbServerGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->albServerGroupId_ != nullptr
        && this->port_ != nullptr; };
    // albServerGroupId Field Functions 
    bool hasAlbServerGroupId() const { return this->albServerGroupId_ != nullptr;};
    void deleteAlbServerGroupId() { this->albServerGroupId_ = nullptr;};
    inline string albServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(albServerGroupId_, "") };
    inline DetachAlbServerGroupsRequestAlbServerGroups& setAlbServerGroupId(string albServerGroupId) { DARABONBA_PTR_SET_VALUE(albServerGroupId_, albServerGroupId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DetachAlbServerGroupsRequestAlbServerGroups& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    // The ID of the ALB server group.
    // 
    // This parameter is required.
    std::shared_ptr<string> albServerGroupId_ = nullptr;
    // The port number used by the ECS instances in the ALB server group.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
