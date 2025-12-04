// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVMSREALNUMBERCALLCONNECTIONRATEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYVMSREALNUMBERCALLCONNECTIONRATEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryVmsRealNumberCallConnectionRateInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVmsRealNumberCallConnectionRateInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RealNumber, realNumber_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TimePeriod, timePeriod_);
      DARABONBA_PTR_TO_JSON(VirtualNumber, virtualNumber_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVmsRealNumberCallConnectionRateInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RealNumber, realNumber_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TimePeriod, timePeriod_);
      DARABONBA_PTR_FROM_JSON(VirtualNumber, virtualNumber_);
    };
    QueryVmsRealNumberCallConnectionRateInfoRequest() = default ;
    QueryVmsRealNumberCallConnectionRateInfoRequest(const QueryVmsRealNumberCallConnectionRateInfoRequest &) = default ;
    QueryVmsRealNumberCallConnectionRateInfoRequest(QueryVmsRealNumberCallConnectionRateInfoRequest &&) = default ;
    QueryVmsRealNumberCallConnectionRateInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVmsRealNumberCallConnectionRateInfoRequest() = default ;
    QueryVmsRealNumberCallConnectionRateInfoRequest& operator=(const QueryVmsRealNumberCallConnectionRateInfoRequest &) = default ;
    QueryVmsRealNumberCallConnectionRateInfoRequest& operator=(QueryVmsRealNumberCallConnectionRateInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && return this->realNumber_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->timePeriod_ == nullptr && return this->virtualNumber_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryVmsRealNumberCallConnectionRateInfoRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // realNumber Field Functions 
    bool hasRealNumber() const { return this->realNumber_ != nullptr;};
    void deleteRealNumber() { this->realNumber_ = nullptr;};
    inline string realNumber() const { DARABONBA_PTR_GET_DEFAULT(realNumber_, "") };
    inline QueryVmsRealNumberCallConnectionRateInfoRequest& setRealNumber(string realNumber) { DARABONBA_PTR_SET_VALUE(realNumber_, realNumber) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryVmsRealNumberCallConnectionRateInfoRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryVmsRealNumberCallConnectionRateInfoRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // timePeriod Field Functions 
    bool hasTimePeriod() const { return this->timePeriod_ != nullptr;};
    void deleteTimePeriod() { this->timePeriod_ = nullptr;};
    inline string timePeriod() const { DARABONBA_PTR_GET_DEFAULT(timePeriod_, "") };
    inline QueryVmsRealNumberCallConnectionRateInfoRequest& setTimePeriod(string timePeriod) { DARABONBA_PTR_SET_VALUE(timePeriod_, timePeriod) };


    // virtualNumber Field Functions 
    bool hasVirtualNumber() const { return this->virtualNumber_ != nullptr;};
    void deleteVirtualNumber() { this->virtualNumber_ = nullptr;};
    inline string virtualNumber() const { DARABONBA_PTR_GET_DEFAULT(virtualNumber_, "") };
    inline QueryVmsRealNumberCallConnectionRateInfoRequest& setVirtualNumber(string virtualNumber) { DARABONBA_PTR_SET_VALUE(virtualNumber_, virtualNumber) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // 真实号码
    std::shared_ptr<string> realNumber_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // 时间段
    std::shared_ptr<string> timePeriod_ = nullptr;
    // 虚拟号码
    std::shared_ptr<string> virtualNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
