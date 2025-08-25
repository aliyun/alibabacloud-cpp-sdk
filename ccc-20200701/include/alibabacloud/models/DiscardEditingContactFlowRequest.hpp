// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISCARDEDITINGCONTACTFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISCARDEDITINGCONTACTFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class DiscardEditingContactFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiscardEditingContactFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_TO_JSON(DraftId, draftId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DiscardEditingContactFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_FROM_JSON(DraftId, draftId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DiscardEditingContactFlowRequest() = default ;
    DiscardEditingContactFlowRequest(const DiscardEditingContactFlowRequest &) = default ;
    DiscardEditingContactFlowRequest(DiscardEditingContactFlowRequest &&) = default ;
    DiscardEditingContactFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiscardEditingContactFlowRequest() = default ;
    DiscardEditingContactFlowRequest& operator=(const DiscardEditingContactFlowRequest &) = default ;
    DiscardEditingContactFlowRequest& operator=(DiscardEditingContactFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactFlowId_ != nullptr
        && this->draftId_ != nullptr && this->instanceId_ != nullptr; };
    // contactFlowId Field Functions 
    bool hasContactFlowId() const { return this->contactFlowId_ != nullptr;};
    void deleteContactFlowId() { this->contactFlowId_ = nullptr;};
    inline string contactFlowId() const { DARABONBA_PTR_GET_DEFAULT(contactFlowId_, "") };
    inline DiscardEditingContactFlowRequest& setContactFlowId(string contactFlowId) { DARABONBA_PTR_SET_VALUE(contactFlowId_, contactFlowId) };


    // draftId Field Functions 
    bool hasDraftId() const { return this->draftId_ != nullptr;};
    void deleteDraftId() { this->draftId_ = nullptr;};
    inline string draftId() const { DARABONBA_PTR_GET_DEFAULT(draftId_, "") };
    inline DiscardEditingContactFlowRequest& setDraftId(string draftId) { DARABONBA_PTR_SET_VALUE(draftId_, draftId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DiscardEditingContactFlowRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> contactFlowId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> draftId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
