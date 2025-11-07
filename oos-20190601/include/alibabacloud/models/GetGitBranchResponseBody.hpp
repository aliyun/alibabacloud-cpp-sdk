// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGITBRANCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGITBRANCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetGitBranchResponseBodyCommit.hpp>
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
    virtual bool empty() const override { return this->commit_ == nullptr
        && return this->requestId_ == nullptr; };
    // commit Field Functions 
    bool hasCommit() const { return this->commit_ != nullptr;};
    void deleteCommit() { this->commit_ = nullptr;};
    inline const GetGitBranchResponseBodyCommit & commit() const { DARABONBA_PTR_GET_CONST(commit_, GetGitBranchResponseBodyCommit) };
    inline GetGitBranchResponseBodyCommit commit() { DARABONBA_PTR_GET(commit_, GetGitBranchResponseBodyCommit) };
    inline GetGitBranchResponseBody& setCommit(const GetGitBranchResponseBodyCommit & commit) { DARABONBA_PTR_SET_VALUE(commit_, commit) };
    inline GetGitBranchResponseBody& setCommit(GetGitBranchResponseBodyCommit && commit) { DARABONBA_PTR_SET_RVALUE(commit_, commit) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGitBranchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetGitBranchResponseBodyCommit> commit_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
