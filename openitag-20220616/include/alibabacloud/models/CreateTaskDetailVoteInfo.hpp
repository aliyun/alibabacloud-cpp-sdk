// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKDETAILVOTEINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKDETAILVOTEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class CreateTaskDetailVoteInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskDetailVoteInfo& obj) { 
      DARABONBA_PTR_TO_JSON(MinVote, minVote_);
      DARABONBA_PTR_TO_JSON(VoteNum, voteNum_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskDetailVoteInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(MinVote, minVote_);
      DARABONBA_PTR_FROM_JSON(VoteNum, voteNum_);
    };
    CreateTaskDetailVoteInfo() = default ;
    CreateTaskDetailVoteInfo(const CreateTaskDetailVoteInfo &) = default ;
    CreateTaskDetailVoteInfo(CreateTaskDetailVoteInfo &&) = default ;
    CreateTaskDetailVoteInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskDetailVoteInfo() = default ;
    CreateTaskDetailVoteInfo& operator=(const CreateTaskDetailVoteInfo &) = default ;
    CreateTaskDetailVoteInfo& operator=(CreateTaskDetailVoteInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->minVote_ == nullptr
        && this->voteNum_ == nullptr; };
    // minVote Field Functions 
    bool hasMinVote() const { return this->minVote_ != nullptr;};
    void deleteMinVote() { this->minVote_ = nullptr;};
    inline int64_t getMinVote() const { DARABONBA_PTR_GET_DEFAULT(minVote_, 0L) };
    inline CreateTaskDetailVoteInfo& setMinVote(int64_t minVote) { DARABONBA_PTR_SET_VALUE(minVote_, minVote) };


    // voteNum Field Functions 
    bool hasVoteNum() const { return this->voteNum_ != nullptr;};
    void deleteVoteNum() { this->voteNum_ = nullptr;};
    inline int64_t getVoteNum() const { DARABONBA_PTR_GET_DEFAULT(voteNum_, 0L) };
    inline CreateTaskDetailVoteInfo& setVoteNum(int64_t voteNum) { DARABONBA_PTR_SET_VALUE(voteNum_, voteNum) };


  protected:
    shared_ptr<int64_t> minVote_ {};
    shared_ptr<int64_t> voteNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
