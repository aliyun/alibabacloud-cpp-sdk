// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGITBRANCHRESPONSEBODYCOMMIT_HPP_
#define ALIBABACLOUD_MODELS_GETGITBRANCHRESPONSEBODYCOMMIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetGitBranchResponseBodyCommit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGitBranchResponseBodyCommit& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Sha, sha_);
    };
    friend void from_json(const Darabonba::Json& j, GetGitBranchResponseBodyCommit& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Sha, sha_);
    };
    GetGitBranchResponseBodyCommit() = default ;
    GetGitBranchResponseBodyCommit(const GetGitBranchResponseBodyCommit &) = default ;
    GetGitBranchResponseBodyCommit(GetGitBranchResponseBodyCommit &&) = default ;
    GetGitBranchResponseBodyCommit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGitBranchResponseBodyCommit() = default ;
    GetGitBranchResponseBodyCommit& operator=(const GetGitBranchResponseBodyCommit &) = default ;
    GetGitBranchResponseBodyCommit& operator=(GetGitBranchResponseBodyCommit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && return this->sha_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGitBranchResponseBodyCommit& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // sha Field Functions 
    bool hasSha() const { return this->sha_ != nullptr;};
    void deleteSha() { this->sha_ = nullptr;};
    inline string sha() const { DARABONBA_PTR_GET_DEFAULT(sha_, "") };
    inline GetGitBranchResponseBodyCommit& setSha(string sha) { DARABONBA_PTR_SET_VALUE(sha_, sha) };


  protected:
    // git commit message
    std::shared_ptr<string> message_ = nullptr;
    // git commit hash
    std::shared_ptr<string> sha_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
