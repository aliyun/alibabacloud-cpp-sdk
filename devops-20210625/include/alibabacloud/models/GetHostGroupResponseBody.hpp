// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOSTGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOSTGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetHostGroupResponseBodyHostGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetHostGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHostGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(hostGroup, hostGroup_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetHostGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(hostGroup, hostGroup_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetHostGroupResponseBody() = default ;
    GetHostGroupResponseBody(const GetHostGroupResponseBody &) = default ;
    GetHostGroupResponseBody(GetHostGroupResponseBody &&) = default ;
    GetHostGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHostGroupResponseBody() = default ;
    GetHostGroupResponseBody& operator=(const GetHostGroupResponseBody &) = default ;
    GetHostGroupResponseBody& operator=(GetHostGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->hostGroup_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetHostGroupResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetHostGroupResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // hostGroup Field Functions 
    bool hasHostGroup() const { return this->hostGroup_ != nullptr;};
    void deleteHostGroup() { this->hostGroup_ = nullptr;};
    inline const GetHostGroupResponseBodyHostGroup & hostGroup() const { DARABONBA_PTR_GET_CONST(hostGroup_, GetHostGroupResponseBodyHostGroup) };
    inline GetHostGroupResponseBodyHostGroup hostGroup() { DARABONBA_PTR_GET(hostGroup_, GetHostGroupResponseBodyHostGroup) };
    inline GetHostGroupResponseBody& setHostGroup(const GetHostGroupResponseBodyHostGroup & hostGroup) { DARABONBA_PTR_SET_VALUE(hostGroup_, hostGroup) };
    inline GetHostGroupResponseBody& setHostGroup(GetHostGroupResponseBodyHostGroup && hostGroup) { DARABONBA_PTR_SET_RVALUE(hostGroup_, hostGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHostGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetHostGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<GetHostGroupResponseBodyHostGroup> hostGroup_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
