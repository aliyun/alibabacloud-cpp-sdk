// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNAPPLICATIONACTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNAPPLICATIONACTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunApplicationActionResponseBodyAbnInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class RunApplicationActionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunApplicationActionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AbnInstances, abnInstances_);
      DARABONBA_PTR_TO_JSON(OperationId, operationId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunApplicationActionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnInstances, abnInstances_);
      DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunApplicationActionResponseBody() = default ;
    RunApplicationActionResponseBody(const RunApplicationActionResponseBody &) = default ;
    RunApplicationActionResponseBody(RunApplicationActionResponseBody &&) = default ;
    RunApplicationActionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunApplicationActionResponseBody() = default ;
    RunApplicationActionResponseBody& operator=(const RunApplicationActionResponseBody &) = default ;
    RunApplicationActionResponseBody& operator=(RunApplicationActionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->abnInstances_ != nullptr
        && this->operationId_ != nullptr && this->requestId_ != nullptr; };
    // abnInstances Field Functions 
    bool hasAbnInstances() const { return this->abnInstances_ != nullptr;};
    void deleteAbnInstances() { this->abnInstances_ = nullptr;};
    inline const vector<RunApplicationActionResponseBodyAbnInstances> & abnInstances() const { DARABONBA_PTR_GET_CONST(abnInstances_, vector<RunApplicationActionResponseBodyAbnInstances>) };
    inline vector<RunApplicationActionResponseBodyAbnInstances> abnInstances() { DARABONBA_PTR_GET(abnInstances_, vector<RunApplicationActionResponseBodyAbnInstances>) };
    inline RunApplicationActionResponseBody& setAbnInstances(const vector<RunApplicationActionResponseBodyAbnInstances> & abnInstances) { DARABONBA_PTR_SET_VALUE(abnInstances_, abnInstances) };
    inline RunApplicationActionResponseBody& setAbnInstances(vector<RunApplicationActionResponseBodyAbnInstances> && abnInstances) { DARABONBA_PTR_SET_RVALUE(abnInstances_, abnInstances) };


    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string operationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline RunApplicationActionResponseBody& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunApplicationActionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The abnormal nodes.
    std::shared_ptr<vector<RunApplicationActionResponseBodyAbnInstances>> abnInstances_ = nullptr;
    // The operation ID.
    std::shared_ptr<string> operationId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
