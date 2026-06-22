// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KOPILOTQUERYSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_KOPILOTQUERYSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaKopilot20260414
{
namespace Models
{
  class KopilotQueryStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KopilotQueryStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, KopilotQueryStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    KopilotQueryStatusRequest() = default ;
    KopilotQueryStatusRequest(const KopilotQueryStatusRequest &) = default ;
    KopilotQueryStatusRequest(KopilotQueryStatusRequest &&) = default ;
    KopilotQueryStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KopilotQueryStatusRequest() = default ;
    KopilotQueryStatusRequest& operator=(const KopilotQueryStatusRequest &) = default ;
    KopilotQueryStatusRequest& operator=(KopilotQueryStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->owner_ == nullptr
        && this->regionId_ == nullptr; };
    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline KopilotQueryStatusRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline KopilotQueryStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> owner_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaKopilot20260414
#endif
