// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTANDARDGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTANDARDGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateStandardGroupResponseBodyStandardGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateStandardGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStandardGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StandardGroup, standardGroup_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStandardGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StandardGroup, standardGroup_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateStandardGroupResponseBody() = default ;
    UpdateStandardGroupResponseBody(const UpdateStandardGroupResponseBody &) = default ;
    UpdateStandardGroupResponseBody(UpdateStandardGroupResponseBody &&) = default ;
    UpdateStandardGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStandardGroupResponseBody() = default ;
    UpdateStandardGroupResponseBody& operator=(const UpdateStandardGroupResponseBody &) = default ;
    UpdateStandardGroupResponseBody& operator=(UpdateStandardGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->standardGroup_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline UpdateStandardGroupResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline UpdateStandardGroupResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateStandardGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // standardGroup Field Functions 
    bool hasStandardGroup() const { return this->standardGroup_ != nullptr;};
    void deleteStandardGroup() { this->standardGroup_ = nullptr;};
    inline const UpdateStandardGroupResponseBodyStandardGroup & standardGroup() const { DARABONBA_PTR_GET_CONST(standardGroup_, UpdateStandardGroupResponseBodyStandardGroup) };
    inline UpdateStandardGroupResponseBodyStandardGroup standardGroup() { DARABONBA_PTR_GET(standardGroup_, UpdateStandardGroupResponseBodyStandardGroup) };
    inline UpdateStandardGroupResponseBody& setStandardGroup(const UpdateStandardGroupResponseBodyStandardGroup & standardGroup) { DARABONBA_PTR_SET_VALUE(standardGroup_, standardGroup) };
    inline UpdateStandardGroupResponseBody& setStandardGroup(UpdateStandardGroupResponseBodyStandardGroup && standardGroup) { DARABONBA_PTR_SET_RVALUE(standardGroup_, standardGroup) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateStandardGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The request ID. You can use the request ID to locate logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the security rule set.
    std::shared_ptr<UpdateStandardGroupResponseBodyStandardGroup> standardGroup_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
