// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELAKEHOUSESPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELAKEHOUSESPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateLakeHouseSpaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLakeHouseSpaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLakeHouseSpaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateLakeHouseSpaceResponseBody() = default ;
    CreateLakeHouseSpaceResponseBody(const CreateLakeHouseSpaceResponseBody &) = default ;
    CreateLakeHouseSpaceResponseBody(CreateLakeHouseSpaceResponseBody &&) = default ;
    CreateLakeHouseSpaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLakeHouseSpaceResponseBody() = default ;
    CreateLakeHouseSpaceResponseBody& operator=(const CreateLakeHouseSpaceResponseBody &) = default ;
    CreateLakeHouseSpaceResponseBody& operator=(CreateLakeHouseSpaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->spaceId_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateLakeHouseSpaceResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CreateLakeHouseSpaceResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLakeHouseSpaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline int64_t spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, 0L) };
    inline CreateLakeHouseSpaceResponseBody& setSpaceId(int64_t spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateLakeHouseSpaceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request fails.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request fails.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the workspace.
    std::shared_ptr<int64_t> spaceId_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
