// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORITYTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORITYTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAuthorityTemplateResponseBodyAuthorityTemplateViewList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListAuthorityTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorityTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorityTemplateViewList, authorityTemplateViewList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorityTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorityTemplateViewList, authorityTemplateViewList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAuthorityTemplateResponseBody() = default ;
    ListAuthorityTemplateResponseBody(const ListAuthorityTemplateResponseBody &) = default ;
    ListAuthorityTemplateResponseBody(ListAuthorityTemplateResponseBody &&) = default ;
    ListAuthorityTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorityTemplateResponseBody() = default ;
    ListAuthorityTemplateResponseBody& operator=(const ListAuthorityTemplateResponseBody &) = default ;
    ListAuthorityTemplateResponseBody& operator=(ListAuthorityTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorityTemplateViewList_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->tid_ != nullptr
        && this->totalCount_ != nullptr; };
    // authorityTemplateViewList Field Functions 
    bool hasAuthorityTemplateViewList() const { return this->authorityTemplateViewList_ != nullptr;};
    void deleteAuthorityTemplateViewList() { this->authorityTemplateViewList_ = nullptr;};
    inline const ListAuthorityTemplateResponseBodyAuthorityTemplateViewList & authorityTemplateViewList() const { DARABONBA_PTR_GET_CONST(authorityTemplateViewList_, ListAuthorityTemplateResponseBodyAuthorityTemplateViewList) };
    inline ListAuthorityTemplateResponseBodyAuthorityTemplateViewList authorityTemplateViewList() { DARABONBA_PTR_GET(authorityTemplateViewList_, ListAuthorityTemplateResponseBodyAuthorityTemplateViewList) };
    inline ListAuthorityTemplateResponseBody& setAuthorityTemplateViewList(const ListAuthorityTemplateResponseBodyAuthorityTemplateViewList & authorityTemplateViewList) { DARABONBA_PTR_SET_VALUE(authorityTemplateViewList_, authorityTemplateViewList) };
    inline ListAuthorityTemplateResponseBody& setAuthorityTemplateViewList(ListAuthorityTemplateResponseBodyAuthorityTemplateViewList && authorityTemplateViewList) { DARABONBA_PTR_SET_RVALUE(authorityTemplateViewList_, authorityTemplateViewList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListAuthorityTemplateResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListAuthorityTemplateResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorityTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAuthorityTemplateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListAuthorityTemplateResponseBody& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAuthorityTemplateResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<ListAuthorityTemplateResponseBodyAuthorityTemplateViewList> authorityTemplateViewList_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
