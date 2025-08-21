// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALTERNATIVESNAPSHOTREPOSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTALTERNATIVESNAPSHOTREPOSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListAlternativeSnapshotReposResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlternativeSnapshotReposResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(repoPath, repoPath_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlternativeSnapshotReposResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(repoPath, repoPath_);
    };
    ListAlternativeSnapshotReposResponseBodyResult() = default ;
    ListAlternativeSnapshotReposResponseBodyResult(const ListAlternativeSnapshotReposResponseBodyResult &) = default ;
    ListAlternativeSnapshotReposResponseBodyResult(ListAlternativeSnapshotReposResponseBodyResult &&) = default ;
    ListAlternativeSnapshotReposResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlternativeSnapshotReposResponseBodyResult() = default ;
    ListAlternativeSnapshotReposResponseBodyResult& operator=(const ListAlternativeSnapshotReposResponseBodyResult &) = default ;
    ListAlternativeSnapshotReposResponseBodyResult& operator=(ListAlternativeSnapshotReposResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->repoPath_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAlternativeSnapshotReposResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // repoPath Field Functions 
    bool hasRepoPath() const { return this->repoPath_ != nullptr;};
    void deleteRepoPath() { this->repoPath_ = nullptr;};
    inline string repoPath() const { DARABONBA_PTR_GET_DEFAULT(repoPath_, "") };
    inline ListAlternativeSnapshotReposResponseBodyResult& setRepoPath(string repoPath) { DARABONBA_PTR_SET_VALUE(repoPath_, repoPath) };


  protected:
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The address of the repository.
    std::shared_ptr<string> repoPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
