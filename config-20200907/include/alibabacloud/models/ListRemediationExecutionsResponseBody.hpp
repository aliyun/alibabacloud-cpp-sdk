// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMEDIATIONEXECUTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREMEDIATIONEXECUTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRemediationExecutionsResponseBodyRemediationExecutionData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListRemediationExecutionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemediationExecutionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RemediationExecutionData, remediationExecutionData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemediationExecutionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RemediationExecutionData, remediationExecutionData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRemediationExecutionsResponseBody() = default ;
    ListRemediationExecutionsResponseBody(const ListRemediationExecutionsResponseBody &) = default ;
    ListRemediationExecutionsResponseBody(ListRemediationExecutionsResponseBody &&) = default ;
    ListRemediationExecutionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemediationExecutionsResponseBody() = default ;
    ListRemediationExecutionsResponseBody& operator=(const ListRemediationExecutionsResponseBody &) = default ;
    ListRemediationExecutionsResponseBody& operator=(ListRemediationExecutionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remediationExecutionData_ == nullptr
        && return this->requestId_ == nullptr; };
    // remediationExecutionData Field Functions 
    bool hasRemediationExecutionData() const { return this->remediationExecutionData_ != nullptr;};
    void deleteRemediationExecutionData() { this->remediationExecutionData_ = nullptr;};
    inline const ListRemediationExecutionsResponseBodyRemediationExecutionData & remediationExecutionData() const { DARABONBA_PTR_GET_CONST(remediationExecutionData_, ListRemediationExecutionsResponseBodyRemediationExecutionData) };
    inline ListRemediationExecutionsResponseBodyRemediationExecutionData remediationExecutionData() { DARABONBA_PTR_GET(remediationExecutionData_, ListRemediationExecutionsResponseBodyRemediationExecutionData) };
    inline ListRemediationExecutionsResponseBody& setRemediationExecutionData(const ListRemediationExecutionsResponseBodyRemediationExecutionData & remediationExecutionData) { DARABONBA_PTR_SET_VALUE(remediationExecutionData_, remediationExecutionData) };
    inline ListRemediationExecutionsResponseBody& setRemediationExecutionData(ListRemediationExecutionsResponseBodyRemediationExecutionData && remediationExecutionData) { DARABONBA_PTR_SET_RVALUE(remediationExecutionData_, remediationExecutionData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRemediationExecutionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried remediation records.
    std::shared_ptr<ListRemediationExecutionsResponseBodyRemediationExecutionData> remediationExecutionData_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
