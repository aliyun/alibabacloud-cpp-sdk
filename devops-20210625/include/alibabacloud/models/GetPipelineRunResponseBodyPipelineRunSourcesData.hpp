// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINERUNRESPONSEBODYPIPELINERUNSOURCESDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINERUNRESPONSEBODYPIPELINERUNSOURCESDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetPipelineRunResponseBodyPipelineRunSourcesData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineRunResponseBodyPipelineRunSourcesData& obj) { 
      DARABONBA_PTR_TO_JSON(branch, branch_);
      DARABONBA_PTR_TO_JSON(commint, commint_);
      DARABONBA_PTR_TO_JSON(repo, repo_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineRunResponseBodyPipelineRunSourcesData& obj) { 
      DARABONBA_PTR_FROM_JSON(branch, branch_);
      DARABONBA_PTR_FROM_JSON(commint, commint_);
      DARABONBA_PTR_FROM_JSON(repo, repo_);
    };
    GetPipelineRunResponseBodyPipelineRunSourcesData() = default ;
    GetPipelineRunResponseBodyPipelineRunSourcesData(const GetPipelineRunResponseBodyPipelineRunSourcesData &) = default ;
    GetPipelineRunResponseBodyPipelineRunSourcesData(GetPipelineRunResponseBodyPipelineRunSourcesData &&) = default ;
    GetPipelineRunResponseBodyPipelineRunSourcesData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineRunResponseBodyPipelineRunSourcesData() = default ;
    GetPipelineRunResponseBodyPipelineRunSourcesData& operator=(const GetPipelineRunResponseBodyPipelineRunSourcesData &) = default ;
    GetPipelineRunResponseBodyPipelineRunSourcesData& operator=(GetPipelineRunResponseBodyPipelineRunSourcesData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->branch_ == nullptr
        && return this->commint_ == nullptr && return this->repo_ == nullptr; };
    // branch Field Functions 
    bool hasBranch() const { return this->branch_ != nullptr;};
    void deleteBranch() { this->branch_ = nullptr;};
    inline string branch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
    inline GetPipelineRunResponseBodyPipelineRunSourcesData& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


    // commint Field Functions 
    bool hasCommint() const { return this->commint_ != nullptr;};
    void deleteCommint() { this->commint_ = nullptr;};
    inline string commint() const { DARABONBA_PTR_GET_DEFAULT(commint_, "") };
    inline GetPipelineRunResponseBodyPipelineRunSourcesData& setCommint(string commint) { DARABONBA_PTR_SET_VALUE(commint_, commint) };


    // repo Field Functions 
    bool hasRepo() const { return this->repo_ != nullptr;};
    void deleteRepo() { this->repo_ = nullptr;};
    inline string repo() const { DARABONBA_PTR_GET_DEFAULT(repo_, "") };
    inline GetPipelineRunResponseBodyPipelineRunSourcesData& setRepo(string repo) { DARABONBA_PTR_SET_VALUE(repo_, repo) };


  protected:
    std::shared_ptr<string> branch_ = nullptr;
    std::shared_ptr<string> commint_ = nullptr;
    std::shared_ptr<string> repo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
