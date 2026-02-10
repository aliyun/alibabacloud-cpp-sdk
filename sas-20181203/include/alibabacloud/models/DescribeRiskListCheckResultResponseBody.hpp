// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKLISTCHECKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKLISTCHECKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskListCheckResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskListCheckResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskListCheckResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRiskListCheckResultResponseBody() = default ;
    DescribeRiskListCheckResultResponseBody(const DescribeRiskListCheckResultResponseBody &) = default ;
    DescribeRiskListCheckResultResponseBody(DescribeRiskListCheckResultResponseBody &&) = default ;
    DescribeRiskListCheckResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskListCheckResultResponseBody() = default ;
    DescribeRiskListCheckResultResponseBody& operator=(const DescribeRiskListCheckResultResponseBody &) = default ;
    DescribeRiskListCheckResultResponseBody& operator=(DescribeRiskListCheckResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(riskCount, riskCount_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(riskCount, riskCount_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->riskCount_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // riskCount Field Functions 
      bool hasRiskCount() const { return this->riskCount_ != nullptr;};
      void deleteRiskCount() { this->riskCount_ = nullptr;};
      inline int64_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0L) };
      inline List& setRiskCount(int64_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


    protected:
      // The instance ID of the cloud service.
      shared_ptr<string> instanceId_ {};
      // The total number of risk items detected in the current cloud service.
      shared_ptr<int64_t> riskCount_ {};
    };

    virtual bool empty() const override { return this->list_ == nullptr
        && this->requestId_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<DescribeRiskListCheckResultResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<DescribeRiskListCheckResultResponseBody::List>) };
    inline vector<DescribeRiskListCheckResultResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<DescribeRiskListCheckResultResponseBody::List>) };
    inline DescribeRiskListCheckResultResponseBody& setList(const vector<DescribeRiskListCheckResultResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeRiskListCheckResultResponseBody& setList(vector<DescribeRiskListCheckResultResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskListCheckResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of risk items for each cloud service.
    shared_ptr<vector<DescribeRiskListCheckResultResponseBody::List>> list_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
