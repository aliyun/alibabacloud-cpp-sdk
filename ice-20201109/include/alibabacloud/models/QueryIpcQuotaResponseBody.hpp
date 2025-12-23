// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYIPCQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYIPCQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryIpcQuotaResponseBodyIpcQuotaInfos.hpp>
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
    virtual bool empty() const override { return this->ipcQuotaInfos_ == nullptr
        && return this->requestId_ == nullptr && return this->total_ == nullptr; };
    // ipcQuotaInfos Field Functions 
    bool hasIpcQuotaInfos() const { return this->ipcQuotaInfos_ != nullptr;};
    void deleteIpcQuotaInfos() { this->ipcQuotaInfos_ = nullptr;};
    inline const vector<QueryIpcQuotaResponseBodyIpcQuotaInfos> & ipcQuotaInfos() const { DARABONBA_PTR_GET_CONST(ipcQuotaInfos_, vector<QueryIpcQuotaResponseBodyIpcQuotaInfos>) };
    inline vector<QueryIpcQuotaResponseBodyIpcQuotaInfos> ipcQuotaInfos() { DARABONBA_PTR_GET(ipcQuotaInfos_, vector<QueryIpcQuotaResponseBodyIpcQuotaInfos>) };
    inline QueryIpcQuotaResponseBody& setIpcQuotaInfos(const vector<QueryIpcQuotaResponseBodyIpcQuotaInfos> & ipcQuotaInfos) { DARABONBA_PTR_SET_VALUE(ipcQuotaInfos_, ipcQuotaInfos) };
    inline QueryIpcQuotaResponseBody& setIpcQuotaInfos(vector<QueryIpcQuotaResponseBodyIpcQuotaInfos> && ipcQuotaInfos) { DARABONBA_PTR_SET_RVALUE(ipcQuotaInfos_, ipcQuotaInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryIpcQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string total() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline QueryIpcQuotaResponseBody& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<QueryIpcQuotaResponseBodyIpcQuotaInfos>> ipcQuotaInfos_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
