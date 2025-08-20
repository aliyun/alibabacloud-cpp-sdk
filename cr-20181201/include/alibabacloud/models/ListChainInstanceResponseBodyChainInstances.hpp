// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHAININSTANCERESPONSEBODYCHAININSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTCHAININSTANCERESPONSEBODYCHAININSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListChainInstanceResponseBodyChainInstancesChain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListChainInstanceResponseBodyChainInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChainInstanceResponseBodyChainInstances& obj) { 
      DARABONBA_PTR_TO_JSON(Chain, chain_);
      DARABONBA_PTR_TO_JSON(ChainInstanceId, chainInstanceId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespaceName, repoNamespaceName_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListChainInstanceResponseBodyChainInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(Chain, chain_);
      DARABONBA_PTR_FROM_JSON(ChainInstanceId, chainInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespaceName, repoNamespaceName_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListChainInstanceResponseBodyChainInstances() = default ;
    ListChainInstanceResponseBodyChainInstances(const ListChainInstanceResponseBodyChainInstances &) = default ;
    ListChainInstanceResponseBodyChainInstances(ListChainInstanceResponseBodyChainInstances &&) = default ;
    ListChainInstanceResponseBodyChainInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChainInstanceResponseBodyChainInstances() = default ;
    ListChainInstanceResponseBodyChainInstances& operator=(const ListChainInstanceResponseBodyChainInstances &) = default ;
    ListChainInstanceResponseBodyChainInstances& operator=(ListChainInstanceResponseBodyChainInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chain_ != nullptr
        && this->chainInstanceId_ != nullptr && this->endTime_ != nullptr && this->repoName_ != nullptr && this->repoNamespaceName_ != nullptr && this->result_ != nullptr
        && this->startTime_ != nullptr && this->status_ != nullptr; };
    // chain Field Functions 
    bool hasChain() const { return this->chain_ != nullptr;};
    void deleteChain() { this->chain_ = nullptr;};
    inline const Models::ListChainInstanceResponseBodyChainInstancesChain & chain() const { DARABONBA_PTR_GET_CONST(chain_, Models::ListChainInstanceResponseBodyChainInstancesChain) };
    inline Models::ListChainInstanceResponseBodyChainInstancesChain chain() { DARABONBA_PTR_GET(chain_, Models::ListChainInstanceResponseBodyChainInstancesChain) };
    inline ListChainInstanceResponseBodyChainInstances& setChain(const Models::ListChainInstanceResponseBodyChainInstancesChain & chain) { DARABONBA_PTR_SET_VALUE(chain_, chain) };
    inline ListChainInstanceResponseBodyChainInstances& setChain(Models::ListChainInstanceResponseBodyChainInstancesChain && chain) { DARABONBA_PTR_SET_RVALUE(chain_, chain) };


    // chainInstanceId Field Functions 
    bool hasChainInstanceId() const { return this->chainInstanceId_ != nullptr;};
    void deleteChainInstanceId() { this->chainInstanceId_ = nullptr;};
    inline string chainInstanceId() const { DARABONBA_PTR_GET_DEFAULT(chainInstanceId_, "") };
    inline ListChainInstanceResponseBodyChainInstances& setChainInstanceId(string chainInstanceId) { DARABONBA_PTR_SET_VALUE(chainInstanceId_, chainInstanceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListChainInstanceResponseBodyChainInstances& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline ListChainInstanceResponseBodyChainInstances& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespaceName Field Functions 
    bool hasRepoNamespaceName() const { return this->repoNamespaceName_ != nullptr;};
    void deleteRepoNamespaceName() { this->repoNamespaceName_ = nullptr;};
    inline string repoNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(repoNamespaceName_, "") };
    inline ListChainInstanceResponseBodyChainInstances& setRepoNamespaceName(string repoNamespaceName) { DARABONBA_PTR_SET_VALUE(repoNamespaceName_, repoNamespaceName) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline ListChainInstanceResponseBodyChainInstances& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListChainInstanceResponseBodyChainInstances& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListChainInstanceResponseBodyChainInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name of the namespace.
    std::shared_ptr<Models::ListChainInstanceResponseBodyChainInstancesChain> chain_ = nullptr;
    // 1
    std::shared_ptr<string> chainInstanceId_ = nullptr;
    // The ID of the Container Registry instance.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The ID of the delivery chain.
    std::shared_ptr<string> repoName_ = nullptr;
    // The execution result of the delivery chain. Valid values:
    // 
    // *   `SUCCESS`
    // *   `FAILED`
    // *   `CANCELED`
    // *   `DENIED`
    std::shared_ptr<string> repoNamespaceName_ = nullptr;
    // The list of the execution records of delivery chains.
    std::shared_ptr<string> result_ = nullptr;
    // test-repo
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the delivery chain. Valid values:
    // 
    // *   `RUNNING`
    // *   `COMPLETE`
    // *   `CANCELING`
    // *   `CANCELED`
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
