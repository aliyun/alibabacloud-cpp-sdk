// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGITBRANCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGITBRANCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetGitBranchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGitBranchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Commit, commit_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGitBranchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Commit, commit_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetGitBranchResponseBody() = default ;
    GetGitBranchResponseBody(const GetGitBranchResponseBody &) = default ;
    GetGitBranchResponseBody(GetGitBranchResponseBody &&) = default ;
    GetGitBranchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGitBranchResponseBody() = default ;
    GetGitBranchResponseBody& operator=(const GetGitBranchResponseBody &) = default ;
    GetGitBranchResponseBody& operator=(GetGitBranchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Commit : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Commit& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Sha, sha_);
      };
      friend void from_json(const Darabonba::Json& j, Commit& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Sha, sha_);
      };
      Commit() = default ;
      Commit(const Commit &) = default ;
      Commit(Commit &&) = default ;
      Commit(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Commit() = default ;
      Commit& operator=(const Commit &) = default ;
      Commit& operator=(Commit &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr
        && this->sha_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Commit& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // sha Field Functions 
      bool hasSha() const { return this->sha_ != nullptr;};
      void deleteSha() { this->sha_ = nullptr;};
      inline string getSha() const { DARABONBA_PTR_GET_DEFAULT(sha_, "") };
      inline Commit& setSha(string sha) { DARABONBA_PTR_SET_VALUE(sha_, sha) };


    protected:
      // git commit message
      shared_ptr<string> message_ {};
      // git commit hash
      shared_ptr<string> sha_ {};
    };

    virtual bool empty() const override { return this->commit_ == nullptr
        && this->requestId_ == nullptr; };
    // commit Field Functions 
    bool hasCommit() const { return this->commit_ != nullptr;};
    void deleteCommit() { this->commit_ = nullptr;};
    inline const GetGitBranchResponseBody::Commit & getCommit() const { DARABONBA_PTR_GET_CONST(commit_, GetGitBranchResponseBody::Commit) };
    inline GetGitBranchResponseBody::Commit getCommit() { DARABONBA_PTR_GET(commit_, GetGitBranchResponseBody::Commit) };
    inline GetGitBranchResponseBody& setCommit(const GetGitBranchResponseBody::Commit & commit) { DARABONBA_PTR_SET_VALUE(commit_, commit) };
    inline GetGitBranchResponseBody& setCommit(GetGitBranchResponseBody::Commit && commit) { DARABONBA_PTR_SET_RVALUE(commit_, commit) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGitBranchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetGitBranchResponseBody::Commit> commit_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
