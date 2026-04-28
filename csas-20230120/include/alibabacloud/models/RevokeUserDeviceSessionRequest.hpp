// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEUSERDEVICESESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEUSERDEVICESESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class RevokeUserDeviceSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeUserDeviceSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DevTag, devTag_);
      DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeUserDeviceSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
      DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
    };
    RevokeUserDeviceSessionRequest() = default ;
    RevokeUserDeviceSessionRequest(const RevokeUserDeviceSessionRequest &) = default ;
    RevokeUserDeviceSessionRequest(RevokeUserDeviceSessionRequest &&) = default ;
    RevokeUserDeviceSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeUserDeviceSessionRequest() = default ;
    RevokeUserDeviceSessionRequest& operator=(const RevokeUserDeviceSessionRequest &) = default ;
    RevokeUserDeviceSessionRequest& operator=(RevokeUserDeviceSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->devTag_ == nullptr
        && this->saseUserId_ == nullptr; };
    // devTag Field Functions 
    bool hasDevTag() const { return this->devTag_ != nullptr;};
    void deleteDevTag() { this->devTag_ = nullptr;};
    inline string getDevTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
    inline RevokeUserDeviceSessionRequest& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


    // saseUserId Field Functions 
    bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
    void deleteSaseUserId() { this->saseUserId_ = nullptr;};
    inline string getSaseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
    inline RevokeUserDeviceSessionRequest& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


  protected:
    // This parameter is required.
    shared_ptr<string> devTag_ {};
    // This parameter is required.
    shared_ptr<string> saseUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
