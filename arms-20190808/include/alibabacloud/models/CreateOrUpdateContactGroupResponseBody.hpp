// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATECONTACTGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATECONTACTGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateContactGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateContactGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertContactGroup, alertContactGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateContactGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertContactGroup, alertContactGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateOrUpdateContactGroupResponseBody() = default ;
    CreateOrUpdateContactGroupResponseBody(const CreateOrUpdateContactGroupResponseBody &) = default ;
    CreateOrUpdateContactGroupResponseBody(CreateOrUpdateContactGroupResponseBody &&) = default ;
    CreateOrUpdateContactGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateContactGroupResponseBody() = default ;
    CreateOrUpdateContactGroupResponseBody& operator=(const CreateOrUpdateContactGroupResponseBody &) = default ;
    CreateOrUpdateContactGroupResponseBody& operator=(CreateOrUpdateContactGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlertContactGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertContactGroup& obj) { 
        DARABONBA_PTR_TO_JSON(ContactGroupId, contactGroupId_);
        DARABONBA_PTR_TO_JSON(ContactGroupName, contactGroupName_);
        DARABONBA_PTR_TO_JSON(ContactIds, contactIds_);
      };
      friend void from_json(const Darabonba::Json& j, AlertContactGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactGroupId, contactGroupId_);
        DARABONBA_PTR_FROM_JSON(ContactGroupName, contactGroupName_);
        DARABONBA_PTR_FROM_JSON(ContactIds, contactIds_);
      };
      AlertContactGroup() = default ;
      AlertContactGroup(const AlertContactGroup &) = default ;
      AlertContactGroup(AlertContactGroup &&) = default ;
      AlertContactGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertContactGroup() = default ;
      AlertContactGroup& operator=(const AlertContactGroup &) = default ;
      AlertContactGroup& operator=(AlertContactGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contactGroupId_ == nullptr
        && this->contactGroupName_ == nullptr && this->contactIds_ == nullptr; };
      // contactGroupId Field Functions 
      bool hasContactGroupId() const { return this->contactGroupId_ != nullptr;};
      void deleteContactGroupId() { this->contactGroupId_ = nullptr;};
      inline float getContactGroupId() const { DARABONBA_PTR_GET_DEFAULT(contactGroupId_, 0.0) };
      inline AlertContactGroup& setContactGroupId(float contactGroupId) { DARABONBA_PTR_SET_VALUE(contactGroupId_, contactGroupId) };


      // contactGroupName Field Functions 
      bool hasContactGroupName() const { return this->contactGroupName_ != nullptr;};
      void deleteContactGroupName() { this->contactGroupName_ = nullptr;};
      inline string getContactGroupName() const { DARABONBA_PTR_GET_DEFAULT(contactGroupName_, "") };
      inline AlertContactGroup& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


      // contactIds Field Functions 
      bool hasContactIds() const { return this->contactIds_ != nullptr;};
      void deleteContactIds() { this->contactIds_ = nullptr;};
      inline string getContactIds() const { DARABONBA_PTR_GET_DEFAULT(contactIds_, "") };
      inline AlertContactGroup& setContactIds(string contactIds) { DARABONBA_PTR_SET_VALUE(contactIds_, contactIds) };


    protected:
      // The ID of the alert contact group.
      shared_ptr<float> contactGroupId_ {};
      // The name of the alert contact group.
      shared_ptr<string> contactGroupName_ {};
      // The IDs of the contacts that are included in the alert contact group.
      shared_ptr<string> contactIds_ {};
    };

    virtual bool empty() const override { return this->alertContactGroup_ == nullptr
        && this->requestId_ == nullptr; };
    // alertContactGroup Field Functions 
    bool hasAlertContactGroup() const { return this->alertContactGroup_ != nullptr;};
    void deleteAlertContactGroup() { this->alertContactGroup_ = nullptr;};
    inline const CreateOrUpdateContactGroupResponseBody::AlertContactGroup & getAlertContactGroup() const { DARABONBA_PTR_GET_CONST(alertContactGroup_, CreateOrUpdateContactGroupResponseBody::AlertContactGroup) };
    inline CreateOrUpdateContactGroupResponseBody::AlertContactGroup getAlertContactGroup() { DARABONBA_PTR_GET(alertContactGroup_, CreateOrUpdateContactGroupResponseBody::AlertContactGroup) };
    inline CreateOrUpdateContactGroupResponseBody& setAlertContactGroup(const CreateOrUpdateContactGroupResponseBody::AlertContactGroup & alertContactGroup) { DARABONBA_PTR_SET_VALUE(alertContactGroup_, alertContactGroup) };
    inline CreateOrUpdateContactGroupResponseBody& setAlertContactGroup(CreateOrUpdateContactGroupResponseBody::AlertContactGroup && alertContactGroup) { DARABONBA_PTR_SET_RVALUE(alertContactGroup_, alertContactGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrUpdateContactGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the alert contact group.
    shared_ptr<CreateOrUpdateContactGroupResponseBody::AlertContactGroup> alertContactGroup_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
