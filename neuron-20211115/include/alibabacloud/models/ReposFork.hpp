// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPOSFORK_HPP_
#define ALIBABACLOUD_MODELS_REPOSFORK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RepoItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ReposFork : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReposFork& obj) { 
      DARABONBA_PTR_TO_JSON(gitGroup, gitGroup_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isOrigin, isOrigin_);
      DARABONBA_PTR_TO_JSON(pbcRepoItems, pbcRepoItems_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, ReposFork& obj) { 
      DARABONBA_PTR_FROM_JSON(gitGroup, gitGroup_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isOrigin, isOrigin_);
      DARABONBA_PTR_FROM_JSON(pbcRepoItems, pbcRepoItems_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    ReposFork() = default ;
    ReposFork(const ReposFork &) = default ;
    ReposFork(ReposFork &&) = default ;
    ReposFork(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReposFork() = default ;
    ReposFork& operator=(const ReposFork &) = default ;
    ReposFork& operator=(ReposFork &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gitGroup_ == nullptr
        && this->gmtCreate_ == nullptr && this->id_ == nullptr && this->isOrigin_ == nullptr && this->pbcRepoItems_ == nullptr && this->requestId_ == nullptr
        && this->usage_ == nullptr; };
    // gitGroup Field Functions 
    bool hasGitGroup() const { return this->gitGroup_ != nullptr;};
    void deleteGitGroup() { this->gitGroup_ = nullptr;};
    inline string getGitGroup() const { DARABONBA_PTR_GET_DEFAULT(gitGroup_, "") };
    inline ReposFork& setGitGroup(string gitGroup) { DARABONBA_PTR_SET_VALUE(gitGroup_, gitGroup) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ReposFork& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ReposFork& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isOrigin Field Functions 
    bool hasIsOrigin() const { return this->isOrigin_ != nullptr;};
    void deleteIsOrigin() { this->isOrigin_ = nullptr;};
    inline bool getIsOrigin() const { DARABONBA_PTR_GET_DEFAULT(isOrigin_, false) };
    inline ReposFork& setIsOrigin(bool isOrigin) { DARABONBA_PTR_SET_VALUE(isOrigin_, isOrigin) };


    // pbcRepoItems Field Functions 
    bool hasPbcRepoItems() const { return this->pbcRepoItems_ != nullptr;};
    void deletePbcRepoItems() { this->pbcRepoItems_ = nullptr;};
    inline const vector<RepoItem> & getPbcRepoItems() const { DARABONBA_PTR_GET_CONST(pbcRepoItems_, vector<RepoItem>) };
    inline vector<RepoItem> getPbcRepoItems() { DARABONBA_PTR_GET(pbcRepoItems_, vector<RepoItem>) };
    inline ReposFork& setPbcRepoItems(const vector<RepoItem> & pbcRepoItems) { DARABONBA_PTR_SET_VALUE(pbcRepoItems_, pbcRepoItems) };
    inline ReposFork& setPbcRepoItems(vector<RepoItem> && pbcRepoItems) { DARABONBA_PTR_SET_RVALUE(pbcRepoItems_, pbcRepoItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReposFork& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline ReposFork& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    shared_ptr<string> gitGroup_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<bool> isOrigin_ {};
    shared_ptr<vector<RepoItem>> pbcRepoItems_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> usage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
