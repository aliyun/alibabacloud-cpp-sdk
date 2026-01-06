// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOVERABLEOTSINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOVERABLEOTSINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeRecoverableOtsInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecoverableOtsInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OtsInstances, otsInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecoverableOtsInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OtsInstances, otsInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeRecoverableOtsInstancesResponseBody() = default ;
    DescribeRecoverableOtsInstancesResponseBody(const DescribeRecoverableOtsInstancesResponseBody &) = default ;
    DescribeRecoverableOtsInstancesResponseBody(DescribeRecoverableOtsInstancesResponseBody &&) = default ;
    DescribeRecoverableOtsInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecoverableOtsInstancesResponseBody() = default ;
    DescribeRecoverableOtsInstancesResponseBody& operator=(const DescribeRecoverableOtsInstancesResponseBody &) = default ;
    DescribeRecoverableOtsInstancesResponseBody& operator=(DescribeRecoverableOtsInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OtsInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OtsInstances& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
      };
      friend void from_json(const Darabonba::Json& j, OtsInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
      };
      OtsInstances() = default ;
      OtsInstances(const OtsInstances &) = default ;
      OtsInstances(OtsInstances &&) = default ;
      OtsInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OtsInstances() = default ;
      OtsInstances& operator=(const OtsInstances &) = default ;
      OtsInstances& operator=(OtsInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceName_ == nullptr
        && this->tableNames_ == nullptr; };
      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline OtsInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // tableNames Field Functions 
      bool hasTableNames() const { return this->tableNames_ != nullptr;};
      void deleteTableNames() { this->tableNames_ = nullptr;};
      inline const vector<string> & getTableNames() const { DARABONBA_PTR_GET_CONST(tableNames_, vector<string>) };
      inline vector<string> getTableNames() { DARABONBA_PTR_GET(tableNames_, vector<string>) };
      inline OtsInstances& setTableNames(const vector<string> & tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };
      inline OtsInstances& setTableNames(vector<string> && tableNames) { DARABONBA_PTR_SET_RVALUE(tableNames_, tableNames) };


    protected:
      // The name of the Tablestore instance that can be restored.
      shared_ptr<string> instanceName_ {};
      // The names of the tables in the Tablestore instance.
      shared_ptr<vector<string>> tableNames_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->otsInstances_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeRecoverableOtsInstancesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeRecoverableOtsInstancesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // otsInstances Field Functions 
    bool hasOtsInstances() const { return this->otsInstances_ != nullptr;};
    void deleteOtsInstances() { this->otsInstances_ = nullptr;};
    inline const vector<DescribeRecoverableOtsInstancesResponseBody::OtsInstances> & getOtsInstances() const { DARABONBA_PTR_GET_CONST(otsInstances_, vector<DescribeRecoverableOtsInstancesResponseBody::OtsInstances>) };
    inline vector<DescribeRecoverableOtsInstancesResponseBody::OtsInstances> getOtsInstances() { DARABONBA_PTR_GET(otsInstances_, vector<DescribeRecoverableOtsInstancesResponseBody::OtsInstances>) };
    inline DescribeRecoverableOtsInstancesResponseBody& setOtsInstances(const vector<DescribeRecoverableOtsInstancesResponseBody::OtsInstances> & otsInstances) { DARABONBA_PTR_SET_VALUE(otsInstances_, otsInstances) };
    inline DescribeRecoverableOtsInstancesResponseBody& setOtsInstances(vector<DescribeRecoverableOtsInstancesResponseBody::OtsInstances> && otsInstances) { DARABONBA_PTR_SET_RVALUE(otsInstances_, otsInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRecoverableOtsInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeRecoverableOtsInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The returned message. If the request was successful, "successful" is returned. If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The list of Tablestore instances that can be restored and the tables in the instances.
    shared_ptr<vector<DescribeRecoverableOtsInstancesResponseBody::OtsInstances>> otsInstances_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
