// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPOMETRIC_HPP_
#define ALIBABACLOUD_MODELS_REPOMETRIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class RepoMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RepoMetric& obj) { 
      DARABONBA_PTR_TO_JSON(codeLines, codeLines_);
      DARABONBA_PTR_TO_JSON(commitCnt, commitCnt_);
      DARABONBA_PTR_TO_JSON(developerCnt, developerCnt_);
      DARABONBA_PTR_TO_JSON(refreshDate, refreshDate_);
      DARABONBA_PTR_TO_JSON(repoShortUrl, repoShortUrl_);
      DARABONBA_PTR_TO_JSON(repoUrl, repoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, RepoMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(codeLines, codeLines_);
      DARABONBA_PTR_FROM_JSON(commitCnt, commitCnt_);
      DARABONBA_PTR_FROM_JSON(developerCnt, developerCnt_);
      DARABONBA_PTR_FROM_JSON(refreshDate, refreshDate_);
      DARABONBA_PTR_FROM_JSON(repoShortUrl, repoShortUrl_);
      DARABONBA_PTR_FROM_JSON(repoUrl, repoUrl_);
    };
    RepoMetric() = default ;
    RepoMetric(const RepoMetric &) = default ;
    RepoMetric(RepoMetric &&) = default ;
    RepoMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RepoMetric() = default ;
    RepoMetric& operator=(const RepoMetric &) = default ;
    RepoMetric& operator=(RepoMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeLines_ == nullptr
        && this->commitCnt_ == nullptr && this->developerCnt_ == nullptr && this->refreshDate_ == nullptr && this->repoShortUrl_ == nullptr && this->repoUrl_ == nullptr; };
    // codeLines Field Functions 
    bool hasCodeLines() const { return this->codeLines_ != nullptr;};
    void deleteCodeLines() { this->codeLines_ = nullptr;};
    inline int64_t getCodeLines() const { DARABONBA_PTR_GET_DEFAULT(codeLines_, 0L) };
    inline RepoMetric& setCodeLines(int64_t codeLines) { DARABONBA_PTR_SET_VALUE(codeLines_, codeLines) };


    // commitCnt Field Functions 
    bool hasCommitCnt() const { return this->commitCnt_ != nullptr;};
    void deleteCommitCnt() { this->commitCnt_ = nullptr;};
    inline int64_t getCommitCnt() const { DARABONBA_PTR_GET_DEFAULT(commitCnt_, 0L) };
    inline RepoMetric& setCommitCnt(int64_t commitCnt) { DARABONBA_PTR_SET_VALUE(commitCnt_, commitCnt) };


    // developerCnt Field Functions 
    bool hasDeveloperCnt() const { return this->developerCnt_ != nullptr;};
    void deleteDeveloperCnt() { this->developerCnt_ = nullptr;};
    inline int64_t getDeveloperCnt() const { DARABONBA_PTR_GET_DEFAULT(developerCnt_, 0L) };
    inline RepoMetric& setDeveloperCnt(int64_t developerCnt) { DARABONBA_PTR_SET_VALUE(developerCnt_, developerCnt) };


    // refreshDate Field Functions 
    bool hasRefreshDate() const { return this->refreshDate_ != nullptr;};
    void deleteRefreshDate() { this->refreshDate_ = nullptr;};
    inline string getRefreshDate() const { DARABONBA_PTR_GET_DEFAULT(refreshDate_, "") };
    inline RepoMetric& setRefreshDate(string refreshDate) { DARABONBA_PTR_SET_VALUE(refreshDate_, refreshDate) };


    // repoShortUrl Field Functions 
    bool hasRepoShortUrl() const { return this->repoShortUrl_ != nullptr;};
    void deleteRepoShortUrl() { this->repoShortUrl_ = nullptr;};
    inline string getRepoShortUrl() const { DARABONBA_PTR_GET_DEFAULT(repoShortUrl_, "") };
    inline RepoMetric& setRepoShortUrl(string repoShortUrl) { DARABONBA_PTR_SET_VALUE(repoShortUrl_, repoShortUrl) };


    // repoUrl Field Functions 
    bool hasRepoUrl() const { return this->repoUrl_ != nullptr;};
    void deleteRepoUrl() { this->repoUrl_ = nullptr;};
    inline string getRepoUrl() const { DARABONBA_PTR_GET_DEFAULT(repoUrl_, "") };
    inline RepoMetric& setRepoUrl(string repoUrl) { DARABONBA_PTR_SET_VALUE(repoUrl_, repoUrl) };


  protected:
    shared_ptr<int64_t> codeLines_ {};
    shared_ptr<int64_t> commitCnt_ {};
    shared_ptr<int64_t> developerCnt_ {};
    shared_ptr<string> refreshDate_ {};
    shared_ptr<string> repoShortUrl_ {};
    // This parameter is required.
    shared_ptr<string> repoUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
