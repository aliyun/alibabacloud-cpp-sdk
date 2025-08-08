// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLHSPACEBYNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLHSPACEBYNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLhSpaceByNameResponseBodyLakehouseSpace.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetLhSpaceByNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLhSpaceByNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(LakehouseSpace, lakehouseSpace_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetLhSpaceByNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(LakehouseSpace, lakehouseSpace_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetLhSpaceByNameResponseBody() = default ;
    GetLhSpaceByNameResponseBody(const GetLhSpaceByNameResponseBody &) = default ;
    GetLhSpaceByNameResponseBody(GetLhSpaceByNameResponseBody &&) = default ;
    GetLhSpaceByNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLhSpaceByNameResponseBody() = default ;
    GetLhSpaceByNameResponseBody& operator=(const GetLhSpaceByNameResponseBody &) = default ;
    GetLhSpaceByNameResponseBody& operator=(GetLhSpaceByNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->lakehouseSpace_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetLhSpaceByNameResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetLhSpaceByNameResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // lakehouseSpace Field Functions 
    bool hasLakehouseSpace() const { return this->lakehouseSpace_ != nullptr;};
    void deleteLakehouseSpace() { this->lakehouseSpace_ = nullptr;};
    inline const GetLhSpaceByNameResponseBodyLakehouseSpace & lakehouseSpace() const { DARABONBA_PTR_GET_CONST(lakehouseSpace_, GetLhSpaceByNameResponseBodyLakehouseSpace) };
    inline GetLhSpaceByNameResponseBodyLakehouseSpace lakehouseSpace() { DARABONBA_PTR_GET(lakehouseSpace_, GetLhSpaceByNameResponseBodyLakehouseSpace) };
    inline GetLhSpaceByNameResponseBody& setLakehouseSpace(const GetLhSpaceByNameResponseBodyLakehouseSpace & lakehouseSpace) { DARABONBA_PTR_SET_VALUE(lakehouseSpace_, lakehouseSpace) };
    inline GetLhSpaceByNameResponseBody& setLakehouseSpace(GetLhSpaceByNameResponseBodyLakehouseSpace && lakehouseSpace) { DARABONBA_PTR_SET_RVALUE(lakehouseSpace_, lakehouseSpace) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLhSpaceByNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetLhSpaceByNameResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request fails.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request fails.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The workspace for data warehouse development.
    std::shared_ptr<GetLhSpaceByNameResponseBodyLakehouseSpace> lakehouseSpace_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
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
