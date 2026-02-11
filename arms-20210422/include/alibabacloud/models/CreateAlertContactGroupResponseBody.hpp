// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTCONTACTGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTCONTACTGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class CreateAlertContactGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertContactGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroupId, contactGroupId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertContactGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroupId, contactGroupId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAlertContactGroupResponseBody() = default ;
    CreateAlertContactGroupResponseBody(const CreateAlertContactGroupResponseBody &) = default ;
    CreateAlertContactGroupResponseBody(CreateAlertContactGroupResponseBody &&) = default ;
    CreateAlertContactGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertContactGroupResponseBody() = default ;
    CreateAlertContactGroupResponseBody& operator=(const CreateAlertContactGroupResponseBody &) = default ;
    CreateAlertContactGroupResponseBody& operator=(CreateAlertContactGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroupId_ == nullptr
        && this->requestId_ == nullptr; };
    // contactGroupId Field Functions 
    bool hasContactGroupId() const { return this->contactGroupId_ != nullptr;};
    void deleteContactGroupId() { this->contactGroupId_ = nullptr;};
    inline string getContactGroupId() const { DARABONBA_PTR_GET_DEFAULT(contactGroupId_, "") };
    inline CreateAlertContactGroupResponseBody& setContactGroupId(string contactGroupId) { DARABONBA_PTR_SET_VALUE(contactGroupId_, contactGroupId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAlertContactGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> contactGroupId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
