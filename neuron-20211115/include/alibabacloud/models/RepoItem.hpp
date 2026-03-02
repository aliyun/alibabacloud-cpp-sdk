// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPOITEM_HPP_
#define ALIBABACLOUD_MODELS_REPOITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class RepoItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RepoItem& obj) { 
      DARABONBA_PTR_TO_JSON(codeLines, codeLines_);
      DARABONBA_PTR_TO_JSON(gitProjectUrl, gitProjectUrl_);
      DARABONBA_PTR_TO_JSON(owner, owner_);
      DARABONBA_PTR_TO_JSON(repoShortUrl, repoShortUrl_);
      DARABONBA_PTR_TO_JSON(repoUrl, repoUrl_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, RepoItem& obj) { 
      DARABONBA_PTR_FROM_JSON(codeLines, codeLines_);
      DARABONBA_PTR_FROM_JSON(gitProjectUrl, gitProjectUrl_);
      DARABONBA_PTR_FROM_JSON(owner, owner_);
      DARABONBA_PTR_FROM_JSON(repoShortUrl, repoShortUrl_);
      DARABONBA_PTR_FROM_JSON(repoUrl, repoUrl_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
    };
    RepoItem() = default ;
    RepoItem(const RepoItem &) = default ;
    RepoItem(RepoItem &&) = default ;
    RepoItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RepoItem() = default ;
    RepoItem& operator=(const RepoItem &) = default ;
    RepoItem& operator=(RepoItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeLines_ == nullptr
        && this->gitProjectUrl_ == nullptr && this->owner_ == nullptr && this->repoShortUrl_ == nullptr && this->repoUrl_ == nullptr && this->summary_ == nullptr; };
    // codeLines Field Functions 
    bool hasCodeLines() const { return this->codeLines_ != nullptr;};
    void deleteCodeLines() { this->codeLines_ = nullptr;};
    inline int64_t getCodeLines() const { DARABONBA_PTR_GET_DEFAULT(codeLines_, 0L) };
    inline RepoItem& setCodeLines(int64_t codeLines) { DARABONBA_PTR_SET_VALUE(codeLines_, codeLines) };


    // gitProjectUrl Field Functions 
    bool hasGitProjectUrl() const { return this->gitProjectUrl_ != nullptr;};
    void deleteGitProjectUrl() { this->gitProjectUrl_ = nullptr;};
    inline string getGitProjectUrl() const { DARABONBA_PTR_GET_DEFAULT(gitProjectUrl_, "") };
    inline RepoItem& setGitProjectUrl(string gitProjectUrl) { DARABONBA_PTR_SET_VALUE(gitProjectUrl_, gitProjectUrl) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline RepoItem& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // repoShortUrl Field Functions 
    bool hasRepoShortUrl() const { return this->repoShortUrl_ != nullptr;};
    void deleteRepoShortUrl() { this->repoShortUrl_ = nullptr;};
    inline string getRepoShortUrl() const { DARABONBA_PTR_GET_DEFAULT(repoShortUrl_, "") };
    inline RepoItem& setRepoShortUrl(string repoShortUrl) { DARABONBA_PTR_SET_VALUE(repoShortUrl_, repoShortUrl) };


    // repoUrl Field Functions 
    bool hasRepoUrl() const { return this->repoUrl_ != nullptr;};
    void deleteRepoUrl() { this->repoUrl_ = nullptr;};
    inline string getRepoUrl() const { DARABONBA_PTR_GET_DEFAULT(repoUrl_, "") };
    inline RepoItem& setRepoUrl(string repoUrl) { DARABONBA_PTR_SET_VALUE(repoUrl_, repoUrl) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline RepoItem& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


  protected:
    shared_ptr<int64_t> codeLines_ {};
    shared_ptr<string> gitProjectUrl_ {};
    shared_ptr<string> owner_ {};
    shared_ptr<string> repoShortUrl_ {};
    shared_ptr<string> repoUrl_ {};
    shared_ptr<string> summary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
