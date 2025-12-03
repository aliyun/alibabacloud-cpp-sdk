// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILELASTCOMMITRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETFILELASTCOMMITRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFileLastCommitResponseBodyResultSignature.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetFileLastCommitResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileLastCommitResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(authorDate, authorDate_);
      DARABONBA_PTR_TO_JSON(authorEmail, authorEmail_);
      DARABONBA_PTR_TO_JSON(authorName, authorName_);
      DARABONBA_PTR_TO_JSON(committedDate, committedDate_);
      DARABONBA_PTR_TO_JSON(committerEmail, committerEmail_);
      DARABONBA_PTR_TO_JSON(committerName, committerName_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(parentIds, parentIds_);
      DARABONBA_PTR_TO_JSON(shortId, shortId_);
      DARABONBA_PTR_TO_JSON(signature, signature_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileLastCommitResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(authorDate, authorDate_);
      DARABONBA_PTR_FROM_JSON(authorEmail, authorEmail_);
      DARABONBA_PTR_FROM_JSON(authorName, authorName_);
      DARABONBA_PTR_FROM_JSON(committedDate, committedDate_);
      DARABONBA_PTR_FROM_JSON(committerEmail, committerEmail_);
      DARABONBA_PTR_FROM_JSON(committerName, committerName_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(parentIds, parentIds_);
      DARABONBA_PTR_FROM_JSON(shortId, shortId_);
      DARABONBA_PTR_FROM_JSON(signature, signature_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    GetFileLastCommitResponseBodyResult() = default ;
    GetFileLastCommitResponseBodyResult(const GetFileLastCommitResponseBodyResult &) = default ;
    GetFileLastCommitResponseBodyResult(GetFileLastCommitResponseBodyResult &&) = default ;
    GetFileLastCommitResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileLastCommitResponseBodyResult() = default ;
    GetFileLastCommitResponseBodyResult& operator=(const GetFileLastCommitResponseBodyResult &) = default ;
    GetFileLastCommitResponseBodyResult& operator=(GetFileLastCommitResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorDate_ == nullptr
        && return this->authorEmail_ == nullptr && return this->authorName_ == nullptr && return this->committedDate_ == nullptr && return this->committerEmail_ == nullptr && return this->committerName_ == nullptr
        && return this->createdAt_ == nullptr && return this->id_ == nullptr && return this->message_ == nullptr && return this->parentIds_ == nullptr && return this->shortId_ == nullptr
        && return this->signature_ == nullptr && return this->title_ == nullptr; };
    // authorDate Field Functions 
    bool hasAuthorDate() const { return this->authorDate_ != nullptr;};
    void deleteAuthorDate() { this->authorDate_ = nullptr;};
    inline string authorDate() const { DARABONBA_PTR_GET_DEFAULT(authorDate_, "") };
    inline GetFileLastCommitResponseBodyResult& setAuthorDate(string authorDate) { DARABONBA_PTR_SET_VALUE(authorDate_, authorDate) };


    // authorEmail Field Functions 
    bool hasAuthorEmail() const { return this->authorEmail_ != nullptr;};
    void deleteAuthorEmail() { this->authorEmail_ = nullptr;};
    inline string authorEmail() const { DARABONBA_PTR_GET_DEFAULT(authorEmail_, "") };
    inline GetFileLastCommitResponseBodyResult& setAuthorEmail(string authorEmail) { DARABONBA_PTR_SET_VALUE(authorEmail_, authorEmail) };


    // authorName Field Functions 
    bool hasAuthorName() const { return this->authorName_ != nullptr;};
    void deleteAuthorName() { this->authorName_ = nullptr;};
    inline string authorName() const { DARABONBA_PTR_GET_DEFAULT(authorName_, "") };
    inline GetFileLastCommitResponseBodyResult& setAuthorName(string authorName) { DARABONBA_PTR_SET_VALUE(authorName_, authorName) };


    // committedDate Field Functions 
    bool hasCommittedDate() const { return this->committedDate_ != nullptr;};
    void deleteCommittedDate() { this->committedDate_ = nullptr;};
    inline string committedDate() const { DARABONBA_PTR_GET_DEFAULT(committedDate_, "") };
    inline GetFileLastCommitResponseBodyResult& setCommittedDate(string committedDate) { DARABONBA_PTR_SET_VALUE(committedDate_, committedDate) };


    // committerEmail Field Functions 
    bool hasCommitterEmail() const { return this->committerEmail_ != nullptr;};
    void deleteCommitterEmail() { this->committerEmail_ = nullptr;};
    inline string committerEmail() const { DARABONBA_PTR_GET_DEFAULT(committerEmail_, "") };
    inline GetFileLastCommitResponseBodyResult& setCommitterEmail(string committerEmail) { DARABONBA_PTR_SET_VALUE(committerEmail_, committerEmail) };


    // committerName Field Functions 
    bool hasCommitterName() const { return this->committerName_ != nullptr;};
    void deleteCommitterName() { this->committerName_ = nullptr;};
    inline string committerName() const { DARABONBA_PTR_GET_DEFAULT(committerName_, "") };
    inline GetFileLastCommitResponseBodyResult& setCommitterName(string committerName) { DARABONBA_PTR_SET_VALUE(committerName_, committerName) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline GetFileLastCommitResponseBodyResult& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetFileLastCommitResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetFileLastCommitResponseBodyResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // parentIds Field Functions 
    bool hasParentIds() const { return this->parentIds_ != nullptr;};
    void deleteParentIds() { this->parentIds_ = nullptr;};
    inline const vector<string> & parentIds() const { DARABONBA_PTR_GET_CONST(parentIds_, vector<string>) };
    inline vector<string> parentIds() { DARABONBA_PTR_GET(parentIds_, vector<string>) };
    inline GetFileLastCommitResponseBodyResult& setParentIds(const vector<string> & parentIds) { DARABONBA_PTR_SET_VALUE(parentIds_, parentIds) };
    inline GetFileLastCommitResponseBodyResult& setParentIds(vector<string> && parentIds) { DARABONBA_PTR_SET_RVALUE(parentIds_, parentIds) };


    // shortId Field Functions 
    bool hasShortId() const { return this->shortId_ != nullptr;};
    void deleteShortId() { this->shortId_ = nullptr;};
    inline string shortId() const { DARABONBA_PTR_GET_DEFAULT(shortId_, "") };
    inline GetFileLastCommitResponseBodyResult& setShortId(string shortId) { DARABONBA_PTR_SET_VALUE(shortId_, shortId) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline const Models::GetFileLastCommitResponseBodyResultSignature & signature() const { DARABONBA_PTR_GET_CONST(signature_, Models::GetFileLastCommitResponseBodyResultSignature) };
    inline Models::GetFileLastCommitResponseBodyResultSignature signature() { DARABONBA_PTR_GET(signature_, Models::GetFileLastCommitResponseBodyResultSignature) };
    inline GetFileLastCommitResponseBodyResult& setSignature(const Models::GetFileLastCommitResponseBodyResultSignature & signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };
    inline GetFileLastCommitResponseBodyResult& setSignature(Models::GetFileLastCommitResponseBodyResultSignature && signature) { DARABONBA_PTR_SET_RVALUE(signature_, signature) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetFileLastCommitResponseBodyResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> authorDate_ = nullptr;
    std::shared_ptr<string> authorEmail_ = nullptr;
    std::shared_ptr<string> authorName_ = nullptr;
    std::shared_ptr<string> committedDate_ = nullptr;
    std::shared_ptr<string> committerEmail_ = nullptr;
    std::shared_ptr<string> committerName_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<vector<string>> parentIds_ = nullptr;
    std::shared_ptr<string> shortId_ = nullptr;
    std::shared_ptr<Models::GetFileLastCommitResponseBodyResultSignature> signature_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
