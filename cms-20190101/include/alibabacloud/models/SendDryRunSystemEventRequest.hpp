// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDDRYRUNSYSTEMEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDDRYRUNSYSTEMEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class SendDryRunSystemEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendDryRunSystemEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventContent, eventContent_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SendDryRunSystemEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventContent, eventContent_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SendDryRunSystemEventRequest() = default ;
    SendDryRunSystemEventRequest(const SendDryRunSystemEventRequest &) = default ;
    SendDryRunSystemEventRequest(SendDryRunSystemEventRequest &&) = default ;
    SendDryRunSystemEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendDryRunSystemEventRequest() = default ;
    SendDryRunSystemEventRequest& operator=(const SendDryRunSystemEventRequest &) = default ;
    SendDryRunSystemEventRequest& operator=(SendDryRunSystemEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventContent_ == nullptr
        && return this->eventName_ == nullptr && return this->groupId_ == nullptr && return this->product_ == nullptr && return this->regionId_ == nullptr; };
    // eventContent Field Functions 
    bool hasEventContent() const { return this->eventContent_ != nullptr;};
    void deleteEventContent() { this->eventContent_ = nullptr;};
    inline string eventContent() const { DARABONBA_PTR_GET_DEFAULT(eventContent_, "") };
    inline SendDryRunSystemEventRequest& setEventContent(string eventContent) { DARABONBA_PTR_SET_VALUE(eventContent_, eventContent) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline SendDryRunSystemEventRequest& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline SendDryRunSystemEventRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline SendDryRunSystemEventRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SendDryRunSystemEventRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The content of the system event.
    // 
    // >  The value of this parameter is a JSON object. We recommend that you include the `product`, `resourceId`, and `regionId` fields in the JSON object.
    std::shared_ptr<string> eventContent_ = nullptr;
    // The name of the system event.
    // 
    // >  For more information, see [DescribeSystemEventMetaList](https://help.aliyun.com/document_detail/114972.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> eventName_ = nullptr;
    // The ID of the application group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the cloud service.
    // 
    // >  For information about the Alibaba Cloud services that are supported by CloudMonitor, see [Supported cloud services and their system events](https://help.aliyun.com/document_detail/167388.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> product_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
