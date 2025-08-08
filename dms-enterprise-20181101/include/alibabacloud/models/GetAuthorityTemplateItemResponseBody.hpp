// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHORITYTEMPLATEITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHORITYTEMPLATEITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetAuthorityTemplateItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthorityTemplateItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorityTemplateItemList, authorityTemplateItemList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthorityTemplateItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorityTemplateItemList, authorityTemplateItemList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetAuthorityTemplateItemResponseBody() = default ;
    GetAuthorityTemplateItemResponseBody(const GetAuthorityTemplateItemResponseBody &) = default ;
    GetAuthorityTemplateItemResponseBody(GetAuthorityTemplateItemResponseBody &&) = default ;
    GetAuthorityTemplateItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthorityTemplateItemResponseBody() = default ;
    GetAuthorityTemplateItemResponseBody& operator=(const GetAuthorityTemplateItemResponseBody &) = default ;
    GetAuthorityTemplateItemResponseBody& operator=(GetAuthorityTemplateItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorityTemplateItemList_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->tid_ != nullptr; };
    // authorityTemplateItemList Field Functions 
    bool hasAuthorityTemplateItemList() const { return this->authorityTemplateItemList_ != nullptr;};
    void deleteAuthorityTemplateItemList() { this->authorityTemplateItemList_ = nullptr;};
    inline const GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList & authorityTemplateItemList() const { DARABONBA_PTR_GET_CONST(authorityTemplateItemList_, GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList) };
    inline GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList authorityTemplateItemList() { DARABONBA_PTR_GET(authorityTemplateItemList_, GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList) };
    inline GetAuthorityTemplateItemResponseBody& setAuthorityTemplateItemList(const GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList & authorityTemplateItemList) { DARABONBA_PTR_SET_VALUE(authorityTemplateItemList_, authorityTemplateItemList) };
    inline GetAuthorityTemplateItemResponseBody& setAuthorityTemplateItemList(GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList && authorityTemplateItemList) { DARABONBA_PTR_SET_RVALUE(authorityTemplateItemList_, authorityTemplateItemList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetAuthorityTemplateItemResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetAuthorityTemplateItemResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuthorityTemplateItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAuthorityTemplateItemResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetAuthorityTemplateItemResponseBody& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The permission templates.
    std::shared_ptr<GetAuthorityTemplateItemResponseBodyAuthorityTemplateItemList> authorityTemplateItemList_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The ID of the tenant.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
