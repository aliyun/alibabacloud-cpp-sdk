// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCDSFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCDSFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCdsFilesResponseBodyFileModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListCdsFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCdsFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(FileModels, fileModels_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCdsFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(FileModels, fileModels_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCdsFilesResponseBody() = default ;
    ListCdsFilesResponseBody(const ListCdsFilesResponseBody &) = default ;
    ListCdsFilesResponseBody(ListCdsFilesResponseBody &&) = default ;
    ListCdsFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCdsFilesResponseBody() = default ;
    ListCdsFilesResponseBody& operator=(const ListCdsFilesResponseBody &) = default ;
    ListCdsFilesResponseBody& operator=(ListCdsFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->count_ == nullptr && return this->fileModels_ == nullptr && return this->message_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCdsFilesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline ListCdsFilesResponseBody& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // fileModels Field Functions 
    bool hasFileModels() const { return this->fileModels_ != nullptr;};
    void deleteFileModels() { this->fileModels_ = nullptr;};
    inline const vector<ListCdsFilesResponseBodyFileModels> & fileModels() const { DARABONBA_PTR_GET_CONST(fileModels_, vector<ListCdsFilesResponseBodyFileModels>) };
    inline vector<ListCdsFilesResponseBodyFileModels> fileModels() { DARABONBA_PTR_GET(fileModels_, vector<ListCdsFilesResponseBodyFileModels>) };
    inline ListCdsFilesResponseBody& setFileModels(const vector<ListCdsFilesResponseBodyFileModels> & fileModels) { DARABONBA_PTR_SET_VALUE(fileModels_, fileModels) };
    inline ListCdsFilesResponseBody& setFileModels(vector<ListCdsFilesResponseBodyFileModels> && fileModels) { DARABONBA_PTR_SET_RVALUE(fileModels_, fileModels) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCdsFilesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCdsFilesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCdsFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCdsFilesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The result of the operation. A value of success indicates that the operation is successful. If the operation failed, an error message is returned.
    std::shared_ptr<string> code_ = nullptr;
    // The total number of entries.
    std::shared_ptr<string> count_ = nullptr;
    // The files.
    std::shared_ptr<vector<ListCdsFilesResponseBodyFileModels>> fileModels_ = nullptr;
    // The error message returned if the request failed. This parameter is empty if the value of Code is success.
    std::shared_ptr<string> message_ = nullptr;
    // The token used for the next query. If this parameter is empty, all results have been returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID. An ID is the unique identifier of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   <!-- -->
    // 
    //     false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
