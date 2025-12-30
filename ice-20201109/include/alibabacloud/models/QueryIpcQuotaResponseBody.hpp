// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYIPCQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYIPCQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryIpcQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryIpcQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IpcQuotaInfos, ipcQuotaInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, QueryIpcQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IpcQuotaInfos, ipcQuotaInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    QueryIpcQuotaResponseBody() = default ;
    QueryIpcQuotaResponseBody(const QueryIpcQuotaResponseBody &) = default ;
    QueryIpcQuotaResponseBody(QueryIpcQuotaResponseBody &&) = default ;
    QueryIpcQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryIpcQuotaResponseBody() = default ;
    QueryIpcQuotaResponseBody& operator=(const QueryIpcQuotaResponseBody &) = default ;
    QueryIpcQuotaResponseBody& operator=(QueryIpcQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpcQuotaInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpcQuotaInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Capability, capability_);
        DARABONBA_PTR_TO_JSON(ConsumedQuota, consumedQuota_);
        DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
        DARABONBA_PTR_TO_JSON(MaxQuota, maxQuota_);
      };
      friend void from_json(const Darabonba::Json& j, IpcQuotaInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Capability, capability_);
        DARABONBA_PTR_FROM_JSON(ConsumedQuota, consumedQuota_);
        DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
        DARABONBA_PTR_FROM_JSON(MaxQuota, maxQuota_);
      };
      IpcQuotaInfos() = default ;
      IpcQuotaInfos(const IpcQuotaInfos &) = default ;
      IpcQuotaInfos(IpcQuotaInfos &&) = default ;
      IpcQuotaInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpcQuotaInfos() = default ;
      IpcQuotaInfos& operator=(const IpcQuotaInfos &) = default ;
      IpcQuotaInfos& operator=(IpcQuotaInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->capability_ == nullptr
        && this->consumedQuota_ == nullptr && this->dateTime_ == nullptr && this->maxQuota_ == nullptr; };
      // capability Field Functions 
      bool hasCapability() const { return this->capability_ != nullptr;};
      void deleteCapability() { this->capability_ = nullptr;};
      inline string getCapability() const { DARABONBA_PTR_GET_DEFAULT(capability_, "") };
      inline IpcQuotaInfos& setCapability(string capability) { DARABONBA_PTR_SET_VALUE(capability_, capability) };


      // consumedQuota Field Functions 
      bool hasConsumedQuota() const { return this->consumedQuota_ != nullptr;};
      void deleteConsumedQuota() { this->consumedQuota_ = nullptr;};
      inline int64_t getConsumedQuota() const { DARABONBA_PTR_GET_DEFAULT(consumedQuota_, 0L) };
      inline IpcQuotaInfos& setConsumedQuota(int64_t consumedQuota) { DARABONBA_PTR_SET_VALUE(consumedQuota_, consumedQuota) };


      // dateTime Field Functions 
      bool hasDateTime() const { return this->dateTime_ != nullptr;};
      void deleteDateTime() { this->dateTime_ = nullptr;};
      inline string getDateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
      inline IpcQuotaInfos& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


      // maxQuota Field Functions 
      bool hasMaxQuota() const { return this->maxQuota_ != nullptr;};
      void deleteMaxQuota() { this->maxQuota_ = nullptr;};
      inline int64_t getMaxQuota() const { DARABONBA_PTR_GET_DEFAULT(maxQuota_, 0L) };
      inline IpcQuotaInfos& setMaxQuota(int64_t maxQuota) { DARABONBA_PTR_SET_VALUE(maxQuota_, maxQuota) };


    protected:
      shared_ptr<string> capability_ {};
      shared_ptr<int64_t> consumedQuota_ {};
      shared_ptr<string> dateTime_ {};
      shared_ptr<int64_t> maxQuota_ {};
    };

    virtual bool empty() const override { return this->ipcQuotaInfos_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // ipcQuotaInfos Field Functions 
    bool hasIpcQuotaInfos() const { return this->ipcQuotaInfos_ != nullptr;};
    void deleteIpcQuotaInfos() { this->ipcQuotaInfos_ = nullptr;};
    inline const vector<QueryIpcQuotaResponseBody::IpcQuotaInfos> & getIpcQuotaInfos() const { DARABONBA_PTR_GET_CONST(ipcQuotaInfos_, vector<QueryIpcQuotaResponseBody::IpcQuotaInfos>) };
    inline vector<QueryIpcQuotaResponseBody::IpcQuotaInfos> getIpcQuotaInfos() { DARABONBA_PTR_GET(ipcQuotaInfos_, vector<QueryIpcQuotaResponseBody::IpcQuotaInfos>) };
    inline QueryIpcQuotaResponseBody& setIpcQuotaInfos(const vector<QueryIpcQuotaResponseBody::IpcQuotaInfos> & ipcQuotaInfos) { DARABONBA_PTR_SET_VALUE(ipcQuotaInfos_, ipcQuotaInfos) };
    inline QueryIpcQuotaResponseBody& setIpcQuotaInfos(vector<QueryIpcQuotaResponseBody::IpcQuotaInfos> && ipcQuotaInfos) { DARABONBA_PTR_SET_RVALUE(ipcQuotaInfos_, ipcQuotaInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryIpcQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline QueryIpcQuotaResponseBody& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<QueryIpcQuotaResponseBody::IpcQuotaInfos>> ipcQuotaInfos_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
