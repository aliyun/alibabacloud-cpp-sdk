// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATEREMEDIATIONEXECUTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATEREMEDIATIONEXECUTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAggregateRemediationExecutionsResponseBodyRemediationExecutionData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateRemediationExecutionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateRemediationExecutionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RemediationExecutionData, remediationExecutionData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateRemediationExecutionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RemediationExecutionData, remediationExecutionData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAggregateRemediationExecutionsResponseBody() = default ;
    ListAggregateRemediationExecutionsResponseBody(const ListAggregateRemediationExecutionsResponseBody &) = default ;
    ListAggregateRemediationExecutionsResponseBody(ListAggregateRemediationExecutionsResponseBody &&) = default ;
    ListAggregateRemediationExecutionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateRemediationExecutionsResponseBody() = default ;
    ListAggregateRemediationExecutionsResponseBody& operator=(const ListAggregateRemediationExecutionsResponseBody &) = default ;
    ListAggregateRemediationExecutionsResponseBody& operator=(ListAggregateRemediationExecutionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remediationExecutionData_ == nullptr
        && return this->requestId_ == nullptr; };
    // remediationExecutionData Field Functions 
    bool hasRemediationExecutionData() const { return this->remediationExecutionData_ != nullptr;};
    void deleteRemediationExecutionData() { this->remediationExecutionData_ = nullptr;};
    inline const ListAggregateRemediationExecutionsResponseBodyRemediationExecutionData & remediationExecutionData() const { DARABONBA_PTR_GET_CONST(remediationExecutionData_, ListAggregateRemediationExecutionsResponseBodyRemediationExecutionData) };
    inline ListAggregateRemediationExecutionsResponseBodyRemediationExecutionData remediationExecutionData() { DARABONBA_PTR_GET(remediationExecutionData_, ListAggregateRemediationExecutionsResponseBodyRemediationExecutionData) };
    inline ListAggregateRemediationExecutionsResponseBody& setRemediationExecutionData(const ListAggregateRemediationExecutionsResponseBodyRemediationExecutionData & remediationExecutionData) { DARABONBA_PTR_SET_VALUE(remediationExecutionData_, remediationExecutionData) };
    inline ListAggregateRemediationExecutionsResponseBody& setRemediationExecutionData(ListAggregateRemediationExecutionsResponseBodyRemediationExecutionData && remediationExecutionData) { DARABONBA_PTR_SET_RVALUE(remediationExecutionData_, remediationExecutionData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAggregateRemediationExecutionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried remediation records.
    std::shared_ptr<ListAggregateRemediationExecutionsResponseBodyRemediationExecutionData> remediationExecutionData_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
