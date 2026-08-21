// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASEDIRECTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASEDIRECTORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListKnowledgeBaseDirectoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKnowledgeBaseDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(directories, directories_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListKnowledgeBaseDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(directories, directories_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListKnowledgeBaseDirectoriesResponseBody() = default ;
    ListKnowledgeBaseDirectoriesResponseBody(const ListKnowledgeBaseDirectoriesResponseBody &) = default ;
    ListKnowledgeBaseDirectoriesResponseBody(ListKnowledgeBaseDirectoriesResponseBody &&) = default ;
    ListKnowledgeBaseDirectoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKnowledgeBaseDirectoriesResponseBody() = default ;
    ListKnowledgeBaseDirectoriesResponseBody& operator=(const ListKnowledgeBaseDirectoriesResponseBody &) = default ;
    ListKnowledgeBaseDirectoriesResponseBody& operator=(ListKnowledgeBaseDirectoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->directories_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListKnowledgeBaseDirectoriesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // directories Field Functions 
    bool hasDirectories() const { return this->directories_ != nullptr;};
    void deleteDirectories() { this->directories_ = nullptr;};
    inline const vector<Darabonba::Json> & getDirectories() const { DARABONBA_PTR_GET_CONST(directories_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getDirectories() { DARABONBA_PTR_GET(directories_, vector<Darabonba::Json>) };
    inline ListKnowledgeBaseDirectoriesResponseBody& setDirectories(const vector<Darabonba::Json> & directories) { DARABONBA_PTR_SET_VALUE(directories_, directories) };
    inline ListKnowledgeBaseDirectoriesResponseBody& setDirectories(vector<Darabonba::Json> && directories) { DARABONBA_PTR_SET_RVALUE(directories_, directories) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListKnowledgeBaseDirectoriesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKnowledgeBaseDirectoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListKnowledgeBaseDirectoriesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The directory titles.
    shared_ptr<vector<Darabonba::Json>> directories_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of results.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
