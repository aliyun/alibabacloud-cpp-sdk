// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHAININSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHAININSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListChainInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChainInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChainInstances, chainInstances_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListChainInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChainInstances, chainInstances_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListChainInstanceResponseBody() = default ;
    ListChainInstanceResponseBody(const ListChainInstanceResponseBody &) = default ;
    ListChainInstanceResponseBody(ListChainInstanceResponseBody &&) = default ;
    ListChainInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChainInstanceResponseBody() = default ;
    ListChainInstanceResponseBody& operator=(const ListChainInstanceResponseBody &) = default ;
    ListChainInstanceResponseBody& operator=(ListChainInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChainInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChainInstances& obj) { 
        DARABONBA_PTR_TO_JSON(Chain, chain_);
        DARABONBA_PTR_TO_JSON(ChainInstanceId, chainInstanceId_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(RepoName, repoName_);
        DARABONBA_PTR_TO_JSON(RepoNamespaceName, repoNamespaceName_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ChainInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(Chain, chain_);
        DARABONBA_PTR_FROM_JSON(ChainInstanceId, chainInstanceId_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
        DARABONBA_PTR_FROM_JSON(RepoNamespaceName, repoNamespaceName_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ChainInstances() = default ;
      ChainInstances(const ChainInstances &) = default ;
      ChainInstances(ChainInstances &&) = default ;
      ChainInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChainInstances() = default ;
      ChainInstances& operator=(const ChainInstances &) = default ;
      ChainInstances& operator=(ChainInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Chain : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Chain& obj) { 
          DARABONBA_PTR_TO_JSON(ChainId, chainId_);
          DARABONBA_PTR_TO_JSON(ChainName, chainName_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Chain& obj) { 
          DARABONBA_PTR_FROM_JSON(ChainId, chainId_);
          DARABONBA_PTR_FROM_JSON(ChainName, chainName_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        Chain() = default ;
        Chain(const Chain &) = default ;
        Chain(Chain &&) = default ;
        Chain(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Chain() = default ;
        Chain& operator=(const Chain &) = default ;
        Chain& operator=(Chain &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->chainId_ == nullptr
        && this->chainName_ == nullptr && this->version_ == nullptr; };
        // chainId Field Functions 
        bool hasChainId() const { return this->chainId_ != nullptr;};
        void deleteChainId() { this->chainId_ = nullptr;};
        inline string getChainId() const { DARABONBA_PTR_GET_DEFAULT(chainId_, "") };
        inline Chain& setChainId(string chainId) { DARABONBA_PTR_SET_VALUE(chainId_, chainId) };


        // chainName Field Functions 
        bool hasChainName() const { return this->chainName_ != nullptr;};
        void deleteChainName() { this->chainName_ = nullptr;};
        inline string getChainName() const { DARABONBA_PTR_GET_DEFAULT(chainName_, "") };
        inline Chain& setChainName(string chainName) { DARABONBA_PTR_SET_VALUE(chainName_, chainName) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
        inline Chain& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The name of the namespace.
        shared_ptr<string> chainId_ {};
        // The number of entries returned on each page.
        shared_ptr<string> chainName_ {};
        // The ID of the request.
        shared_ptr<int64_t> version_ {};
      };

      virtual bool empty() const override { return this->chain_ == nullptr
        && this->chainInstanceId_ == nullptr && this->endTime_ == nullptr && this->repoName_ == nullptr && this->repoNamespaceName_ == nullptr && this->result_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr; };
      // chain Field Functions 
      bool hasChain() const { return this->chain_ != nullptr;};
      void deleteChain() { this->chain_ = nullptr;};
      inline const ChainInstances::Chain & getChain() const { DARABONBA_PTR_GET_CONST(chain_, ChainInstances::Chain) };
      inline ChainInstances::Chain getChain() { DARABONBA_PTR_GET(chain_, ChainInstances::Chain) };
      inline ChainInstances& setChain(const ChainInstances::Chain & chain) { DARABONBA_PTR_SET_VALUE(chain_, chain) };
      inline ChainInstances& setChain(ChainInstances::Chain && chain) { DARABONBA_PTR_SET_RVALUE(chain_, chain) };


      // chainInstanceId Field Functions 
      bool hasChainInstanceId() const { return this->chainInstanceId_ != nullptr;};
      void deleteChainInstanceId() { this->chainInstanceId_ = nullptr;};
      inline string getChainInstanceId() const { DARABONBA_PTR_GET_DEFAULT(chainInstanceId_, "") };
      inline ChainInstances& setChainInstanceId(string chainInstanceId) { DARABONBA_PTR_SET_VALUE(chainInstanceId_, chainInstanceId) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline ChainInstances& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline ChainInstances& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // repoNamespaceName Field Functions 
      bool hasRepoNamespaceName() const { return this->repoNamespaceName_ != nullptr;};
      void deleteRepoNamespaceName() { this->repoNamespaceName_ = nullptr;};
      inline string getRepoNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(repoNamespaceName_, "") };
      inline ChainInstances& setRepoNamespaceName(string repoNamespaceName) { DARABONBA_PTR_SET_VALUE(repoNamespaceName_, repoNamespaceName) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline ChainInstances& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline ChainInstances& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ChainInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The name of the namespace.
      shared_ptr<ChainInstances::Chain> chain_ {};
      // 1
      shared_ptr<string> chainInstanceId_ {};
      // The ID of the Container Registry instance.
      shared_ptr<int64_t> endTime_ {};
      // The ID of the delivery chain.
      shared_ptr<string> repoName_ {};
      // The execution result of the delivery chain. Valid values:
      // 
      // *   `SUCCESS`
      // *   `FAILED`
      // *   `CANCELED`
      // *   `DENIED`
      shared_ptr<string> repoNamespaceName_ {};
      // The list of the execution records of delivery chains.
      shared_ptr<string> result_ {};
      // test-repo
      shared_ptr<int64_t> startTime_ {};
      // The status of the delivery chain. Valid values:
      // 
      // *   `RUNNING`
      // *   `COMPLETE`
      // *   `CANCELING`
      // *   `CANCELED`
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->chainInstances_ == nullptr
        && this->code_ == nullptr && this->instanceId_ == nullptr && this->isSuccess_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // chainInstances Field Functions 
    bool hasChainInstances() const { return this->chainInstances_ != nullptr;};
    void deleteChainInstances() { this->chainInstances_ = nullptr;};
    inline const vector<ListChainInstanceResponseBody::ChainInstances> & getChainInstances() const { DARABONBA_PTR_GET_CONST(chainInstances_, vector<ListChainInstanceResponseBody::ChainInstances>) };
    inline vector<ListChainInstanceResponseBody::ChainInstances> getChainInstances() { DARABONBA_PTR_GET(chainInstances_, vector<ListChainInstanceResponseBody::ChainInstances>) };
    inline ListChainInstanceResponseBody& setChainInstances(const vector<ListChainInstanceResponseBody::ChainInstances> & chainInstances) { DARABONBA_PTR_SET_VALUE(chainInstances_, chainInstances) };
    inline ListChainInstanceResponseBody& setChainInstances(vector<ListChainInstanceResponseBody::ChainInstances> && chainInstances) { DARABONBA_PTR_SET_RVALUE(chainInstances_, chainInstances) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListChainInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListChainInstanceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListChainInstanceResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListChainInstanceResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChainInstanceResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListChainInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListChainInstanceResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries to return on each page.
    shared_ptr<vector<ListChainInstanceResponseBody::ChainInstances>> chainInstances_ {};
    // The version of the delivery chain.
    shared_ptr<string> code_ {};
    // The page number of the page to return.
    shared_ptr<string> instanceId_ {};
    // The execution record of the delivery chain.
    shared_ptr<bool> isSuccess_ {};
    // 30
    shared_ptr<int32_t> pageNo_ {};
    // Indicates whether the operation is successful.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the Container Registry instance.
    shared_ptr<string> requestId_ {};
    // The name of the repository.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
