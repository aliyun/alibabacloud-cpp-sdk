// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTENABLEFWSWITCHRESPONSEBODYABNORMALRESOURCESTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_PUTENABLEFWSWITCHRESPONSEBODYABNORMALRESOURCESTATUSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class PutEnableFwSwitchResponseBodyAbnormalResourceStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEnableFwSwitchResponseBodyAbnormalResourceStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, PutEnableFwSwitchResponseBodyAbnormalResourceStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    PutEnableFwSwitchResponseBodyAbnormalResourceStatusList() = default ;
    PutEnableFwSwitchResponseBodyAbnormalResourceStatusList(const PutEnableFwSwitchResponseBodyAbnormalResourceStatusList &) = default ;
    PutEnableFwSwitchResponseBodyAbnormalResourceStatusList(PutEnableFwSwitchResponseBodyAbnormalResourceStatusList &&) = default ;
    PutEnableFwSwitchResponseBodyAbnormalResourceStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEnableFwSwitchResponseBodyAbnormalResourceStatusList() = default ;
    PutEnableFwSwitchResponseBodyAbnormalResourceStatusList& operator=(const PutEnableFwSwitchResponseBodyAbnormalResourceStatusList &) = default ;
    PutEnableFwSwitchResponseBodyAbnormalResourceStatusList& operator=(PutEnableFwSwitchResponseBodyAbnormalResourceStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->msg_ != nullptr
        && this->resource_ != nullptr && this->status_ != nullptr; };
    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline PutEnableFwSwitchResponseBodyAbnormalResourceStatusList& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline PutEnableFwSwitchResponseBodyAbnormalResourceStatusList& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PutEnableFwSwitchResponseBodyAbnormalResourceStatusList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The message displayed when the asset is not synchronized to Cloud Firewall. Valid values:
    // 
    // *   cloudfirewall do not sync this ip address: This IP address is not synchronized to Cloud Firewall.
    std::shared_ptr<string> msg_ = nullptr;
    // The IP address of the asset.
    std::shared_ptr<string> resource_ = nullptr;
    // The status of the asset when it is not synchronized to Cloud Firewall. Valid values:
    // 
    // *   ip_not_sync: The asset is not synchronized.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
