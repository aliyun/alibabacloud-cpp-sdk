// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPAREDETAILRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPAREDETAILRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCompareDetailResponseBodyResultCommits.hpp>
#include <alibabacloud/models/GetCompareDetailResponseBodyResultDiffs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetCompareDetailResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCompareDetailResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(commits, commits_);
      DARABONBA_PTR_TO_JSON(diffs, diffs_);
      DARABONBA_PTR_TO_JSON(messages, messages_);
    };
    friend void from_json(const Darabonba::Json& j, GetCompareDetailResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(commits, commits_);
      DARABONBA_PTR_FROM_JSON(diffs, diffs_);
      DARABONBA_PTR_FROM_JSON(messages, messages_);
    };
    GetCompareDetailResponseBodyResult() = default ;
    GetCompareDetailResponseBodyResult(const GetCompareDetailResponseBodyResult &) = default ;
    GetCompareDetailResponseBodyResult(GetCompareDetailResponseBodyResult &&) = default ;
    GetCompareDetailResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCompareDetailResponseBodyResult() = default ;
    GetCompareDetailResponseBodyResult& operator=(const GetCompareDetailResponseBodyResult &) = default ;
    GetCompareDetailResponseBodyResult& operator=(GetCompareDetailResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commits_ == nullptr
        && return this->diffs_ == nullptr && return this->messages_ == nullptr; };
    // commits Field Functions 
    bool hasCommits() const { return this->commits_ != nullptr;};
    void deleteCommits() { this->commits_ = nullptr;};
    inline const vector<Models::GetCompareDetailResponseBodyResultCommits> & commits() const { DARABONBA_PTR_GET_CONST(commits_, vector<Models::GetCompareDetailResponseBodyResultCommits>) };
    inline vector<Models::GetCompareDetailResponseBodyResultCommits> commits() { DARABONBA_PTR_GET(commits_, vector<Models::GetCompareDetailResponseBodyResultCommits>) };
    inline GetCompareDetailResponseBodyResult& setCommits(const vector<Models::GetCompareDetailResponseBodyResultCommits> & commits) { DARABONBA_PTR_SET_VALUE(commits_, commits) };
    inline GetCompareDetailResponseBodyResult& setCommits(vector<Models::GetCompareDetailResponseBodyResultCommits> && commits) { DARABONBA_PTR_SET_RVALUE(commits_, commits) };


    // diffs Field Functions 
    bool hasDiffs() const { return this->diffs_ != nullptr;};
    void deleteDiffs() { this->diffs_ = nullptr;};
    inline const vector<Models::GetCompareDetailResponseBodyResultDiffs> & diffs() const { DARABONBA_PTR_GET_CONST(diffs_, vector<Models::GetCompareDetailResponseBodyResultDiffs>) };
    inline vector<Models::GetCompareDetailResponseBodyResultDiffs> diffs() { DARABONBA_PTR_GET(diffs_, vector<Models::GetCompareDetailResponseBodyResultDiffs>) };
    inline GetCompareDetailResponseBodyResult& setDiffs(const vector<Models::GetCompareDetailResponseBodyResultDiffs> & diffs) { DARABONBA_PTR_SET_VALUE(diffs_, diffs) };
    inline GetCompareDetailResponseBodyResult& setDiffs(vector<Models::GetCompareDetailResponseBodyResultDiffs> && diffs) { DARABONBA_PTR_SET_RVALUE(diffs_, diffs) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<string> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<string>) };
    inline vector<string> messages() { DARABONBA_PTR_GET(messages_, vector<string>) };
    inline GetCompareDetailResponseBodyResult& setMessages(const vector<string> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline GetCompareDetailResponseBodyResult& setMessages(vector<string> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


  protected:
    std::shared_ptr<vector<Models::GetCompareDetailResponseBodyResultCommits>> commits_ = nullptr;
    std::shared_ptr<vector<Models::GetCompareDetailResponseBodyResultDiffs>> diffs_ = nullptr;
    std::shared_ptr<vector<string>> messages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
