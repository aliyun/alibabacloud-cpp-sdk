// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVERCINSTANCESFROMDEPLOYMENTSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVERCINSTANCESFROMDEPLOYMENTSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class RemoveRCInstancesFromDeploymentSetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveRCInstancesFromDeploymentSetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveRCInstancesFromDeploymentSetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    RemoveRCInstancesFromDeploymentSetResponseBody() = default ;
    RemoveRCInstancesFromDeploymentSetResponseBody(const RemoveRCInstancesFromDeploymentSetResponseBody &) = default ;
    RemoveRCInstancesFromDeploymentSetResponseBody(RemoveRCInstancesFromDeploymentSetResponseBody &&) = default ;
    RemoveRCInstancesFromDeploymentSetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveRCInstancesFromDeploymentSetResponseBody() = default ;
    RemoveRCInstancesFromDeploymentSetResponseBody& operator=(const RemoveRCInstancesFromDeploymentSetResponseBody &) = default ;
    RemoveRCInstancesFromDeploymentSetResponseBody& operator=(RemoveRCInstancesFromDeploymentSetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(RCInstanceId, RCInstanceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(RCInstanceId, RCInstanceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->RCInstanceId_ == nullptr
        && this->status_ == nullptr; };
      // RCInstanceId Field Functions 
      bool hasRCInstanceId() const { return this->RCInstanceId_ != nullptr;};
      void deleteRCInstanceId() { this->RCInstanceId_ = nullptr;};
      inline string getRCInstanceId() const { DARABONBA_PTR_GET_DEFAULT(RCInstanceId_, "") };
      inline Results& setRCInstanceId(string RCInstanceId) { DARABONBA_PTR_SET_VALUE(RCInstanceId_, RCInstanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Results& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The instance ID.
      shared_ptr<string> RCInstanceId_ {};
      // The node status. Valid values:
      // * **Success**: Succeeded.
      // * **Failed**: Failed.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveRCInstancesFromDeploymentSetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<RemoveRCInstancesFromDeploymentSetResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<RemoveRCInstancesFromDeploymentSetResponseBody::Results>) };
    inline vector<RemoveRCInstancesFromDeploymentSetResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<RemoveRCInstancesFromDeploymentSetResponseBody::Results>) };
    inline RemoveRCInstancesFromDeploymentSetResponseBody& setResults(const vector<RemoveRCInstancesFromDeploymentSetResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline RemoveRCInstancesFromDeploymentSetResponseBody& setResults(vector<RemoveRCInstancesFromDeploymentSetResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The call results of the operation.
    shared_ptr<vector<RemoveRCInstancesFromDeploymentSetResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
