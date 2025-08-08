// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDAGVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDAGVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDAGVersionsResponseBodyDagVersionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDAGVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDAGVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DagVersionList, dagVersionList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDAGVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DagVersionList, dagVersionList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDAGVersionsResponseBody() = default ;
    ListDAGVersionsResponseBody(const ListDAGVersionsResponseBody &) = default ;
    ListDAGVersionsResponseBody(ListDAGVersionsResponseBody &&) = default ;
    ListDAGVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDAGVersionsResponseBody() = default ;
    ListDAGVersionsResponseBody& operator=(const ListDAGVersionsResponseBody &) = default ;
    ListDAGVersionsResponseBody& operator=(ListDAGVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dagVersionList_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->totalCount_ != nullptr; };
    // dagVersionList Field Functions 
    bool hasDagVersionList() const { return this->dagVersionList_ != nullptr;};
    void deleteDagVersionList() { this->dagVersionList_ = nullptr;};
    inline const ListDAGVersionsResponseBodyDagVersionList & dagVersionList() const { DARABONBA_PTR_GET_CONST(dagVersionList_, ListDAGVersionsResponseBodyDagVersionList) };
    inline ListDAGVersionsResponseBodyDagVersionList dagVersionList() { DARABONBA_PTR_GET(dagVersionList_, ListDAGVersionsResponseBodyDagVersionList) };
    inline ListDAGVersionsResponseBody& setDagVersionList(const ListDAGVersionsResponseBodyDagVersionList & dagVersionList) { DARABONBA_PTR_SET_VALUE(dagVersionList_, dagVersionList) };
    inline ListDAGVersionsResponseBody& setDagVersionList(ListDAGVersionsResponseBodyDagVersionList && dagVersionList) { DARABONBA_PTR_SET_RVALUE(dagVersionList_, dagVersionList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDAGVersionsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDAGVersionsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDAGVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDAGVersionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDAGVersionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the published versions.
    std::shared_ptr<ListDAGVersionsResponseBodyDagVersionList> dagVersionList_ = nullptr;
    // The error code returned if the request fails.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request fails.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
