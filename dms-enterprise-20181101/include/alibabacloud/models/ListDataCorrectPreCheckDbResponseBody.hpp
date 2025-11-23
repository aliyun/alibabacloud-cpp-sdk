// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACORRECTPRECHECKDBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACORRECTPRECHECKDBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataCorrectPreCheckDBResponseBodyPreCheckDBList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDataCorrectPreCheckDBResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCorrectPreCheckDBResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PreCheckDBList, preCheckDBList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCorrectPreCheckDBResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PreCheckDBList, preCheckDBList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataCorrectPreCheckDBResponseBody() = default ;
    ListDataCorrectPreCheckDBResponseBody(const ListDataCorrectPreCheckDBResponseBody &) = default ;
    ListDataCorrectPreCheckDBResponseBody(ListDataCorrectPreCheckDBResponseBody &&) = default ;
    ListDataCorrectPreCheckDBResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCorrectPreCheckDBResponseBody() = default ;
    ListDataCorrectPreCheckDBResponseBody& operator=(const ListDataCorrectPreCheckDBResponseBody &) = default ;
    ListDataCorrectPreCheckDBResponseBody& operator=(ListDataCorrectPreCheckDBResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->preCheckDBList_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDataCorrectPreCheckDBResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDataCorrectPreCheckDBResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // preCheckDBList Field Functions 
    bool hasPreCheckDBList() const { return this->preCheckDBList_ != nullptr;};
    void deletePreCheckDBList() { this->preCheckDBList_ = nullptr;};
    inline const vector<ListDataCorrectPreCheckDBResponseBodyPreCheckDBList> & preCheckDBList() const { DARABONBA_PTR_GET_CONST(preCheckDBList_, vector<ListDataCorrectPreCheckDBResponseBodyPreCheckDBList>) };
    inline vector<ListDataCorrectPreCheckDBResponseBodyPreCheckDBList> preCheckDBList() { DARABONBA_PTR_GET(preCheckDBList_, vector<ListDataCorrectPreCheckDBResponseBodyPreCheckDBList>) };
    inline ListDataCorrectPreCheckDBResponseBody& setPreCheckDBList(const vector<ListDataCorrectPreCheckDBResponseBodyPreCheckDBList> & preCheckDBList) { DARABONBA_PTR_SET_VALUE(preCheckDBList_, preCheckDBList) };
    inline ListDataCorrectPreCheckDBResponseBody& setPreCheckDBList(vector<ListDataCorrectPreCheckDBResponseBodyPreCheckDBList> && preCheckDBList) { DARABONBA_PTR_SET_RVALUE(preCheckDBList_, preCheckDBList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataCorrectPreCheckDBResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataCorrectPreCheckDBResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The information about the databases that are involved in the precheck.
    std::shared_ptr<vector<ListDataCorrectPreCheckDBResponseBodyPreCheckDBList>> preCheckDBList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
