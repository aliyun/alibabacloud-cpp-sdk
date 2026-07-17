// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSIGNALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSIGNALSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ListSignalsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSignalsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Signals, signals_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSignalsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Signals, signals_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSignalsResponseBody() = default ;
    ListSignalsResponseBody(const ListSignalsResponseBody &) = default ;
    ListSignalsResponseBody(ListSignalsResponseBody &&) = default ;
    ListSignalsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSignalsResponseBody() = default ;
    ListSignalsResponseBody& operator=(const ListSignalsResponseBody &) = default ;
    ListSignalsResponseBody& operator=(ListSignalsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Signals : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Signals& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(PodNames, podNames_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Roles, roles_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
        DARABONBA_PTR_TO_JSON(Signal, signal_);
        DARABONBA_PTR_TO_JSON(SignalId, signalId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Signals& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(PodNames, podNames_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Roles, roles_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
        DARABONBA_PTR_FROM_JSON(Signal, signal_);
        DARABONBA_PTR_FROM_JSON(SignalId, signalId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Signals() = default ;
      Signals(const Signals &) = default ;
      Signals(Signals &&) = default ;
      Signals(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Signals() = default ;
      Signals& operator=(const Signals &) = default ;
      Signals& operator=(Signals &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gmtCreated_ == nullptr
        && this->gmtModified_ == nullptr && this->message_ == nullptr && this->podNames_ == nullptr && this->reason_ == nullptr && this->roles_ == nullptr
        && this->scope_ == nullptr && this->signal_ == nullptr && this->signalId_ == nullptr && this->status_ == nullptr; };
      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline Signals& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Signals& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Signals& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // podNames Field Functions 
      bool hasPodNames() const { return this->podNames_ != nullptr;};
      void deletePodNames() { this->podNames_ = nullptr;};
      inline const vector<string> & getPodNames() const { DARABONBA_PTR_GET_CONST(podNames_, vector<string>) };
      inline vector<string> getPodNames() { DARABONBA_PTR_GET(podNames_, vector<string>) };
      inline Signals& setPodNames(const vector<string> & podNames) { DARABONBA_PTR_SET_VALUE(podNames_, podNames) };
      inline Signals& setPodNames(vector<string> && podNames) { DARABONBA_PTR_SET_RVALUE(podNames_, podNames) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Signals& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // roles Field Functions 
      bool hasRoles() const { return this->roles_ != nullptr;};
      void deleteRoles() { this->roles_ = nullptr;};
      inline const vector<string> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<string>) };
      inline vector<string> getRoles() { DARABONBA_PTR_GET(roles_, vector<string>) };
      inline Signals& setRoles(const vector<string> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
      inline Signals& setRoles(vector<string> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline Signals& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // signal Field Functions 
      bool hasSignal() const { return this->signal_ != nullptr;};
      void deleteSignal() { this->signal_ = nullptr;};
      inline string getSignal() const { DARABONBA_PTR_GET_DEFAULT(signal_, "") };
      inline Signals& setSignal(string signal) { DARABONBA_PTR_SET_VALUE(signal_, signal) };


      // signalId Field Functions 
      bool hasSignalId() const { return this->signalId_ != nullptr;};
      void deleteSignalId() { this->signalId_ = nullptr;};
      inline string getSignalId() const { DARABONBA_PTR_GET_DEFAULT(signalId_, "") };
      inline Signals& setSignalId(string signalId) { DARABONBA_PTR_SET_VALUE(signalId_, signalId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Signals& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> gmtCreated_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> message_ {};
      shared_ptr<vector<string>> podNames_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<vector<string>> roles_ {};
      shared_ptr<string> scope_ {};
      shared_ptr<string> signal_ {};
      shared_ptr<string> signalId_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->jobId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->signals_ == nullptr && this->totalCount_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListSignalsResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListSignalsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListSignalsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSignalsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signals Field Functions 
    bool hasSignals() const { return this->signals_ != nullptr;};
    void deleteSignals() { this->signals_ = nullptr;};
    inline const vector<ListSignalsResponseBody::Signals> & getSignals() const { DARABONBA_PTR_GET_CONST(signals_, vector<ListSignalsResponseBody::Signals>) };
    inline vector<ListSignalsResponseBody::Signals> getSignals() { DARABONBA_PTR_GET(signals_, vector<ListSignalsResponseBody::Signals>) };
    inline ListSignalsResponseBody& setSignals(const vector<ListSignalsResponseBody::Signals> & signals) { DARABONBA_PTR_SET_VALUE(signals_, signals) };
    inline ListSignalsResponseBody& setSignals(vector<ListSignalsResponseBody::Signals> && signals) { DARABONBA_PTR_SET_RVALUE(signals_, signals) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSignalsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> jobId_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListSignalsResponseBody::Signals>> signals_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
