// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPNATTACHMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPNATTACHMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateVpnAttachmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpnAttachmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(VpnConnectionId, vpnConnectionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpnAttachmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(VpnConnectionId, vpnConnectionId_);
    };
    CreateVpnAttachmentResponseBody() = default ;
    CreateVpnAttachmentResponseBody(const CreateVpnAttachmentResponseBody &) = default ;
    CreateVpnAttachmentResponseBody(CreateVpnAttachmentResponseBody &&) = default ;
    CreateVpnAttachmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpnAttachmentResponseBody() = default ;
    CreateVpnAttachmentResponseBody& operator=(const CreateVpnAttachmentResponseBody &) = default ;
    CreateVpnAttachmentResponseBody& operator=(CreateVpnAttachmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->createTime_ != nullptr && this->message_ != nullptr && this->name_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr
        && this->vpnConnectionId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateVpnAttachmentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline CreateVpnAttachmentResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateVpnAttachmentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateVpnAttachmentResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVpnAttachmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateVpnAttachmentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // vpnConnectionId Field Functions 
    bool hasVpnConnectionId() const { return this->vpnConnectionId_ != nullptr;};
    void deleteVpnConnectionId() { this->vpnConnectionId_ = nullptr;};
    inline string vpnConnectionId() const { DARABONBA_PTR_GET_DEFAULT(vpnConnectionId_, "") };
    inline CreateVpnAttachmentResponseBody& setVpnConnectionId(string vpnConnectionId) { DARABONBA_PTR_SET_VALUE(vpnConnectionId_, vpnConnectionId) };


  protected:
    // The status code returned by the current operation. **200** indicates that the operation is successful.
    std::shared_ptr<string> code_ = nullptr;
    // The timestamp generated when the IPsec-VPN connection was established. Unit: milliseconds.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The information returned by the current operation.
    std::shared_ptr<string> message_ = nullptr;
    // The name of the IPsec-VPN connection.
    std::shared_ptr<string> name_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the current operation is successful.
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
    // The ID of the IPsec-VPN connection.
    std::shared_ptr<string> vpnConnectionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
