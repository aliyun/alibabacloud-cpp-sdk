// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRELEASESTAGEPIPELINERUNRESPONSEBODYPIPELINERUNSOURCESDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRELEASESTAGEPIPELINERUNRESPONSEBODYPIPELINERUNSOURCESDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData& obj) { 
      DARABONBA_PTR_TO_JSON(branch, branch_);
      DARABONBA_PTR_TO_JSON(commit, commit_);
      DARABONBA_PTR_TO_JSON(repo, repo_);
    };
    friend void from_json(const Darabonba::Json& j, GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData& obj) { 
      DARABONBA_PTR_FROM_JSON(branch, branch_);
      DARABONBA_PTR_FROM_JSON(commit, commit_);
      DARABONBA_PTR_FROM_JSON(repo, repo_);
    };
    GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData() = default ;
    GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData(const GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData &) = default ;
    GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData(GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData &&) = default ;
    GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData() = default ;
    GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData& operator=(const GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData &) = default ;
    GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData& operator=(GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->branch_ == nullptr
        && return this->commit_ == nullptr && return this->repo_ == nullptr; };
    // branch Field Functions 
    bool hasBranch() const { return this->branch_ != nullptr;};
    void deleteBranch() { this->branch_ = nullptr;};
    inline string branch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


    // commit Field Functions 
    bool hasCommit() const { return this->commit_ != nullptr;};
    void deleteCommit() { this->commit_ = nullptr;};
    inline string commit() const { DARABONBA_PTR_GET_DEFAULT(commit_, "") };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData& setCommit(string commit) { DARABONBA_PTR_SET_VALUE(commit_, commit) };


    // repo Field Functions 
    bool hasRepo() const { return this->repo_ != nullptr;};
    void deleteRepo() { this->repo_ = nullptr;};
    inline string repo() const { DARABONBA_PTR_GET_DEFAULT(repo_, "") };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRunSourcesData& setRepo(string repo) { DARABONBA_PTR_SET_VALUE(repo_, repo) };


  protected:
    std::shared_ptr<string> branch_ = nullptr;
    std::shared_ptr<string> commit_ = nullptr;
    std::shared_ptr<string> repo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
