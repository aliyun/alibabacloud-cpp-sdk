// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHOTLINENUMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHOTLINENUMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class DeleteHotlineNumberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHotlineNumberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotlineNumber, hotlineNumber_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHotlineNumberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotlineNumber, hotlineNumber_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DeleteHotlineNumberRequest() = default ;
    DeleteHotlineNumberRequest(const DeleteHotlineNumberRequest &) = default ;
    DeleteHotlineNumberRequest(DeleteHotlineNumberRequest &&) = default ;
    DeleteHotlineNumberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHotlineNumberRequest() = default ;
    DeleteHotlineNumberRequest& operator=(const DeleteHotlineNumberRequest &) = default ;
    DeleteHotlineNumberRequest& operator=(DeleteHotlineNumberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotlineNumber_ == nullptr
        && this->instanceId_ == nullptr; };
    // hotlineNumber Field Functions 
    bool hasHotlineNumber() const { return this->hotlineNumber_ != nullptr;};
    void deleteHotlineNumber() { this->hotlineNumber_ = nullptr;};
    inline string getHotlineNumber() const { DARABONBA_PTR_GET_DEFAULT(hotlineNumber_, "") };
    inline DeleteHotlineNumberRequest& setHotlineNumber(string hotlineNumber) { DARABONBA_PTR_SET_VALUE(hotlineNumber_, hotlineNumber) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteHotlineNumberRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotlineNumber_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
