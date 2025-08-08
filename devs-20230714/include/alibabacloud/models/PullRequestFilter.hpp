// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PULLREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_PULLREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class PullRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PullRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(sourceBranch, sourceBranch_);
      DARABONBA_PTR_TO_JSON(targetBranch, targetBranch_);
      DARABONBA_PTR_TO_JSON(types, types_);
    };
    friend void from_json(const Darabonba::Json& j, PullRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(sourceBranch, sourceBranch_);
      DARABONBA_PTR_FROM_JSON(targetBranch, targetBranch_);
      DARABONBA_PTR_FROM_JSON(types, types_);
    };
    PullRequestFilter() = default ;
    PullRequestFilter(const PullRequestFilter &) = default ;
    PullRequestFilter(PullRequestFilter &&) = default ;
    PullRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PullRequestFilter() = default ;
    PullRequestFilter& operator=(const PullRequestFilter &) = default ;
    PullRequestFilter& operator=(PullRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceBranch_ != nullptr
        && this->targetBranch_ != nullptr && this->types_ != nullptr; };
    // sourceBranch Field Functions 
    bool hasSourceBranch() const { return this->sourceBranch_ != nullptr;};
    void deleteSourceBranch() { this->sourceBranch_ = nullptr;};
    inline string sourceBranch() const { DARABONBA_PTR_GET_DEFAULT(sourceBranch_, "") };
    inline PullRequestFilter& setSourceBranch(string sourceBranch) { DARABONBA_PTR_SET_VALUE(sourceBranch_, sourceBranch) };


    // targetBranch Field Functions 
    bool hasTargetBranch() const { return this->targetBranch_ != nullptr;};
    void deleteTargetBranch() { this->targetBranch_ = nullptr;};
    inline string targetBranch() const { DARABONBA_PTR_GET_DEFAULT(targetBranch_, "") };
    inline PullRequestFilter& setTargetBranch(string targetBranch) { DARABONBA_PTR_SET_VALUE(targetBranch_, targetBranch) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline const vector<string> & types() const { DARABONBA_PTR_GET_CONST(types_, vector<string>) };
    inline vector<string> types() { DARABONBA_PTR_GET(types_, vector<string>) };
    inline PullRequestFilter& setTypes(const vector<string> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
    inline PullRequestFilter& setTypes(vector<string> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


  protected:
    std::shared_ptr<string> sourceBranch_ = nullptr;
    std::shared_ptr<string> targetBranch_ = nullptr;
    std::shared_ptr<vector<string>> types_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
