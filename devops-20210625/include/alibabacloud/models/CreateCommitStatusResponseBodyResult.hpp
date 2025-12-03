// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMMITSTATUSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMMITSTATUSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateCommitStatusResponseBodyResultCreator.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateCommitStatusResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCommitStatusResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(context, context_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(sha, sha_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(targetUrl, targetUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCommitStatusResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(context, context_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(sha, sha_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(targetUrl, targetUrl_);
    };
    CreateCommitStatusResponseBodyResult() = default ;
    CreateCommitStatusResponseBodyResult(const CreateCommitStatusResponseBodyResult &) = default ;
    CreateCommitStatusResponseBodyResult(CreateCommitStatusResponseBodyResult &&) = default ;
    CreateCommitStatusResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCommitStatusResponseBodyResult() = default ;
    CreateCommitStatusResponseBodyResult& operator=(const CreateCommitStatusResponseBodyResult &) = default ;
    CreateCommitStatusResponseBodyResult& operator=(CreateCommitStatusResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->context_ == nullptr
        && return this->creator_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr && return this->sha_ == nullptr && return this->state_ == nullptr
        && return this->targetUrl_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string context() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline CreateCommitStatusResponseBodyResult& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline const Models::CreateCommitStatusResponseBodyResultCreator & creator() const { DARABONBA_PTR_GET_CONST(creator_, Models::CreateCommitStatusResponseBodyResultCreator) };
    inline Models::CreateCommitStatusResponseBodyResultCreator creator() { DARABONBA_PTR_GET(creator_, Models::CreateCommitStatusResponseBodyResultCreator) };
    inline CreateCommitStatusResponseBodyResult& setCreator(const Models::CreateCommitStatusResponseBodyResultCreator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
    inline CreateCommitStatusResponseBodyResult& setCreator(Models::CreateCommitStatusResponseBodyResultCreator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCommitStatusResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateCommitStatusResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // sha Field Functions 
    bool hasSha() const { return this->sha_ != nullptr;};
    void deleteSha() { this->sha_ = nullptr;};
    inline string sha() const { DARABONBA_PTR_GET_DEFAULT(sha_, "") };
    inline CreateCommitStatusResponseBodyResult& setSha(string sha) { DARABONBA_PTR_SET_VALUE(sha_, sha) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateCommitStatusResponseBodyResult& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // targetUrl Field Functions 
    bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
    void deleteTargetUrl() { this->targetUrl_ = nullptr;};
    inline string targetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
    inline CreateCommitStatusResponseBodyResult& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


  protected:
    std::shared_ptr<string> context_ = nullptr;
    std::shared_ptr<Models::CreateCommitStatusResponseBodyResultCreator> creator_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> sha_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> targetUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
