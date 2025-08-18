// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEQUOTASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEQUOTASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceQuotasResponseBodyQuotas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListInstanceQuotasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceQuotasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Quotas, quotas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceQuotasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Quotas, quotas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListInstanceQuotasResponseBody() = default ;
    ListInstanceQuotasResponseBody(const ListInstanceQuotasResponseBody &) = default ;
    ListInstanceQuotasResponseBody(ListInstanceQuotasResponseBody &&) = default ;
    ListInstanceQuotasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceQuotasResponseBody() = default ;
    ListInstanceQuotasResponseBody& operator=(const ListInstanceQuotasResponseBody &) = default ;
    ListInstanceQuotasResponseBody& operator=(ListInstanceQuotasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->quotas_ != nullptr && this->requestId_ != nullptr && this->status_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceQuotasResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // quotas Field Functions 
    bool hasQuotas() const { return this->quotas_ != nullptr;};
    void deleteQuotas() { this->quotas_ = nullptr;};
    inline const vector<ListInstanceQuotasResponseBodyQuotas> & quotas() const { DARABONBA_PTR_GET_CONST(quotas_, vector<ListInstanceQuotasResponseBodyQuotas>) };
    inline vector<ListInstanceQuotasResponseBodyQuotas> quotas() { DARABONBA_PTR_GET(quotas_, vector<ListInstanceQuotasResponseBodyQuotas>) };
    inline ListInstanceQuotasResponseBody& setQuotas(const vector<ListInstanceQuotasResponseBodyQuotas> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
    inline ListInstanceQuotasResponseBody& setQuotas(vector<ListInstanceQuotasResponseBodyQuotas> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceQuotasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstanceQuotasResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The plan ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The quotas in the plan.
    std::shared_ptr<vector<ListInstanceQuotasResponseBodyQuotas>> quotas_ = nullptr;
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
