// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GITEVENTSNAPSHOT_HPP_
#define ALIBABACLOUD_MODELS_GITEVENTSNAPSHOT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class GitEventSnapshot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GitEventSnapshot& obj) { 
      DARABONBA_PTR_TO_JSON(branch, branch_);
      DARABONBA_PTR_TO_JSON(commitID, commitID_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GitEventSnapshot& obj) { 
      DARABONBA_PTR_FROM_JSON(branch, branch_);
      DARABONBA_PTR_FROM_JSON(commitID, commitID_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
    };
    GitEventSnapshot() = default ;
    GitEventSnapshot(const GitEventSnapshot &) = default ;
    GitEventSnapshot(GitEventSnapshot &&) = default ;
    GitEventSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GitEventSnapshot() = default ;
    GitEventSnapshot& operator=(const GitEventSnapshot &) = default ;
    GitEventSnapshot& operator=(GitEventSnapshot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->branch_ != nullptr
        && this->commitID_ != nullptr && this->tag_ != nullptr; };
    // branch Field Functions 
    bool hasBranch() const { return this->branch_ != nullptr;};
    void deleteBranch() { this->branch_ = nullptr;};
    inline string branch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
    inline GitEventSnapshot& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


    // commitID Field Functions 
    bool hasCommitID() const { return this->commitID_ != nullptr;};
    void deleteCommitID() { this->commitID_ = nullptr;};
    inline string commitID() const { DARABONBA_PTR_GET_DEFAULT(commitID_, "") };
    inline GitEventSnapshot& setCommitID(string commitID) { DARABONBA_PTR_SET_VALUE(commitID_, commitID) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline GitEventSnapshot& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    std::shared_ptr<string> branch_ = nullptr;
    std::shared_ptr<string> commitID_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
