// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGECONTACTDELETIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGECONTACTDELETIONSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMessageContactDeletionStatusResponseBodyContactDeletionStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetMessageContactDeletionStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageContactDeletionStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContactDeletionStatus, contactDeletionStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageContactDeletionStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactDeletionStatus, contactDeletionStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMessageContactDeletionStatusResponseBody() = default ;
    GetMessageContactDeletionStatusResponseBody(const GetMessageContactDeletionStatusResponseBody &) = default ;
    GetMessageContactDeletionStatusResponseBody(GetMessageContactDeletionStatusResponseBody &&) = default ;
    GetMessageContactDeletionStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageContactDeletionStatusResponseBody() = default ;
    GetMessageContactDeletionStatusResponseBody& operator=(const GetMessageContactDeletionStatusResponseBody &) = default ;
    GetMessageContactDeletionStatusResponseBody& operator=(GetMessageContactDeletionStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactDeletionStatus_ != nullptr
        && this->requestId_ != nullptr; };
    // contactDeletionStatus Field Functions 
    bool hasContactDeletionStatus() const { return this->contactDeletionStatus_ != nullptr;};
    void deleteContactDeletionStatus() { this->contactDeletionStatus_ = nullptr;};
    inline const GetMessageContactDeletionStatusResponseBodyContactDeletionStatus & contactDeletionStatus() const { DARABONBA_PTR_GET_CONST(contactDeletionStatus_, GetMessageContactDeletionStatusResponseBodyContactDeletionStatus) };
    inline GetMessageContactDeletionStatusResponseBodyContactDeletionStatus contactDeletionStatus() { DARABONBA_PTR_GET(contactDeletionStatus_, GetMessageContactDeletionStatusResponseBodyContactDeletionStatus) };
    inline GetMessageContactDeletionStatusResponseBody& setContactDeletionStatus(const GetMessageContactDeletionStatusResponseBodyContactDeletionStatus & contactDeletionStatus) { DARABONBA_PTR_SET_VALUE(contactDeletionStatus_, contactDeletionStatus) };
    inline GetMessageContactDeletionStatusResponseBody& setContactDeletionStatus(GetMessageContactDeletionStatusResponseBodyContactDeletionStatus && contactDeletionStatus) { DARABONBA_PTR_SET_RVALUE(contactDeletionStatus_, contactDeletionStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMessageContactDeletionStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The deletion information of the contact.
    std::shared_ptr<GetMessageContactDeletionStatusResponseBodyContactDeletionStatus> contactDeletionStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
