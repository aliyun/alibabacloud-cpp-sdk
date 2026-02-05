// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEOUTBOUNDCALLNUMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEOUTBOUNDCALLNUMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DeleteOutboundCallNumberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOutboundCallNumberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OutboundCallNumberId, outboundCallNumberId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOutboundCallNumberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OutboundCallNumberId, outboundCallNumberId_);
    };
    DeleteOutboundCallNumberRequest() = default ;
    DeleteOutboundCallNumberRequest(const DeleteOutboundCallNumberRequest &) = default ;
    DeleteOutboundCallNumberRequest(DeleteOutboundCallNumberRequest &&) = default ;
    DeleteOutboundCallNumberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOutboundCallNumberRequest() = default ;
    DeleteOutboundCallNumberRequest& operator=(const DeleteOutboundCallNumberRequest &) = default ;
    DeleteOutboundCallNumberRequest& operator=(DeleteOutboundCallNumberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->outboundCallNumberId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteOutboundCallNumberRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // outboundCallNumberId Field Functions 
    bool hasOutboundCallNumberId() const { return this->outboundCallNumberId_ != nullptr;};
    void deleteOutboundCallNumberId() { this->outboundCallNumberId_ = nullptr;};
    inline string getOutboundCallNumberId() const { DARABONBA_PTR_GET_DEFAULT(outboundCallNumberId_, "") };
    inline DeleteOutboundCallNumberRequest& setOutboundCallNumberId(string outboundCallNumberId) { DARABONBA_PTR_SET_VALUE(outboundCallNumberId_, outboundCallNumberId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> outboundCallNumberId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
