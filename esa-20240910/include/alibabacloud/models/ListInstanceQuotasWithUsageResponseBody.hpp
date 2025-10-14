// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEQUOTASWITHUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEQUOTASWITHUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceQuotasWithUsageResponseBodyQuotas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListInstanceQuotasWithUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceQuotasWithUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Quotas, quotas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceQuotasWithUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Quotas, quotas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListInstanceQuotasWithUsageResponseBody() = default ;
    ListInstanceQuotasWithUsageResponseBody(const ListInstanceQuotasWithUsageResponseBody &) = default ;
    ListInstanceQuotasWithUsageResponseBody(ListInstanceQuotasWithUsageResponseBody &&) = default ;
    ListInstanceQuotasWithUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceQuotasWithUsageResponseBody() = default ;
    ListInstanceQuotasWithUsageResponseBody& operator=(const ListInstanceQuotasWithUsageResponseBody &) = default ;
    ListInstanceQuotasWithUsageResponseBody& operator=(ListInstanceQuotasWithUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->quotas_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceQuotasWithUsageResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // quotas Field Functions 
    bool hasQuotas() const { return this->quotas_ != nullptr;};
    void deleteQuotas() { this->quotas_ = nullptr;};
    inline const vector<ListInstanceQuotasWithUsageResponseBodyQuotas> & quotas() const { DARABONBA_PTR_GET_CONST(quotas_, vector<ListInstanceQuotasWithUsageResponseBodyQuotas>) };
    inline vector<ListInstanceQuotasWithUsageResponseBodyQuotas> quotas() { DARABONBA_PTR_GET(quotas_, vector<ListInstanceQuotasWithUsageResponseBodyQuotas>) };
    inline ListInstanceQuotasWithUsageResponseBody& setQuotas(const vector<ListInstanceQuotasWithUsageResponseBodyQuotas> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
    inline ListInstanceQuotasWithUsageResponseBody& setQuotas(vector<ListInstanceQuotasWithUsageResponseBodyQuotas> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceQuotasWithUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstanceQuotasWithUsageResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The plan ID.[](~~2850189~~)
    std::shared_ptr<string> instanceId_ = nullptr;
    // The quotas and their actual usage in the plan.
    std::shared_ptr<vector<ListInstanceQuotasWithUsageResponseBodyQuotas>> quotas_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The plan status. Valid values:
    // 
    // *   online: The plan is in service.
    // *   offline: The plan has expired within an allowable period. In this state, the plan is unavailable.
    // *   disable: The plan is released.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
