// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAWORKLOADSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAWORKLOADSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/PaiStudio20220112.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListQuotaWorkloadsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaWorkloadsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Workloads, workloads_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotaWorkloadsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Workloads, workloads_);
    };
    ListQuotaWorkloadsResponseBody() = default ;
    ListQuotaWorkloadsResponseBody(const ListQuotaWorkloadsResponseBody &) = default ;
    ListQuotaWorkloadsResponseBody(ListQuotaWorkloadsResponseBody &&) = default ;
    ListQuotaWorkloadsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaWorkloadsResponseBody() = default ;
    ListQuotaWorkloadsResponseBody& operator=(const ListQuotaWorkloadsResponseBody &) = default ;
    ListQuotaWorkloadsResponseBody& operator=(ListQuotaWorkloadsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->totalCount_ != nullptr && this->workloads_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQuotaWorkloadsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListQuotaWorkloadsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // workloads Field Functions 
    bool hasWorkloads() const { return this->workloads_ != nullptr;};
    void deleteWorkloads() { this->workloads_ = nullptr;};
    inline const vector<QueueInfo> & workloads() const { DARABONBA_PTR_GET_CONST(workloads_, vector<QueueInfo>) };
    inline vector<QueueInfo> workloads() { DARABONBA_PTR_GET(workloads_, vector<QueueInfo>) };
    inline ListQuotaWorkloadsResponseBody& setWorkloads(const vector<QueueInfo> & workloads) { DARABONBA_PTR_SET_VALUE(workloads_, workloads) };
    inline ListQuotaWorkloadsResponseBody& setWorkloads(vector<QueueInfo> && workloads) { DARABONBA_PTR_SET_RVALUE(workloads_, workloads) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<vector<QueueInfo>> workloads_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
