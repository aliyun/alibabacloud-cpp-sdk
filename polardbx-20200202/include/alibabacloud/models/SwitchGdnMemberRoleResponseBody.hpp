// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHGDNMEMBERROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SWITCHGDNMEMBERROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SwitchGdnMemberRoleResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class SwitchGdnMemberRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchGdnMemberRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchGdnMemberRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SwitchGdnMemberRoleResponseBody() = default ;
    SwitchGdnMemberRoleResponseBody(const SwitchGdnMemberRoleResponseBody &) = default ;
    SwitchGdnMemberRoleResponseBody(SwitchGdnMemberRoleResponseBody &&) = default ;
    SwitchGdnMemberRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchGdnMemberRoleResponseBody() = default ;
    SwitchGdnMemberRoleResponseBody& operator=(const SwitchGdnMemberRoleResponseBody &) = default ;
    SwitchGdnMemberRoleResponseBody& operator=(SwitchGdnMemberRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SwitchGdnMemberRoleResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, SwitchGdnMemberRoleResponseBodyData) };
    inline SwitchGdnMemberRoleResponseBodyData data() { DARABONBA_PTR_GET(data_, SwitchGdnMemberRoleResponseBodyData) };
    inline SwitchGdnMemberRoleResponseBody& setData(const SwitchGdnMemberRoleResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SwitchGdnMemberRoleResponseBody& setData(SwitchGdnMemberRoleResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SwitchGdnMemberRoleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SwitchGdnMemberRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SwitchGdnMemberRoleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<SwitchGdnMemberRoleResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
