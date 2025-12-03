// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPOSITORYTAGRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETREPOSITORYTAGRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRepositoryTagResponseBodyResultCommit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetRepositoryTagResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRepositoryTagResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(commit, commit_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetRepositoryTagResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(commit, commit_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    GetRepositoryTagResponseBodyResult() = default ;
    GetRepositoryTagResponseBodyResult(const GetRepositoryTagResponseBodyResult &) = default ;
    GetRepositoryTagResponseBodyResult(GetRepositoryTagResponseBodyResult &&) = default ;
    GetRepositoryTagResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRepositoryTagResponseBodyResult() = default ;
    GetRepositoryTagResponseBodyResult& operator=(const GetRepositoryTagResponseBodyResult &) = default ;
    GetRepositoryTagResponseBodyResult& operator=(GetRepositoryTagResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commit_ == nullptr
        && return this->id_ == nullptr && return this->message_ == nullptr && return this->name_ == nullptr; };
    // commit Field Functions 
    bool hasCommit() const { return this->commit_ != nullptr;};
    void deleteCommit() { this->commit_ = nullptr;};
    inline const Models::GetRepositoryTagResponseBodyResultCommit & commit() const { DARABONBA_PTR_GET_CONST(commit_, Models::GetRepositoryTagResponseBodyResultCommit) };
    inline Models::GetRepositoryTagResponseBodyResultCommit commit() { DARABONBA_PTR_GET(commit_, Models::GetRepositoryTagResponseBodyResultCommit) };
    inline GetRepositoryTagResponseBodyResult& setCommit(const Models::GetRepositoryTagResponseBodyResultCommit & commit) { DARABONBA_PTR_SET_VALUE(commit_, commit) };
    inline GetRepositoryTagResponseBodyResult& setCommit(Models::GetRepositoryTagResponseBodyResultCommit && commit) { DARABONBA_PTR_SET_RVALUE(commit_, commit) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetRepositoryTagResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRepositoryTagResponseBodyResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetRepositoryTagResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<Models::GetRepositoryTagResponseBodyResultCommit> commit_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
