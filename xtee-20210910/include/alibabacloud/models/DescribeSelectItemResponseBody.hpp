// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESELECTITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESELECTITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSelectItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSelectItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSelectItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeSelectItemResponseBody() = default ;
    DescribeSelectItemResponseBody(const DescribeSelectItemResponseBody &) = default ;
    DescribeSelectItemResponseBody(DescribeSelectItemResponseBody &&) = default ;
    DescribeSelectItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSelectItemResponseBody() = default ;
    DescribeSelectItemResponseBody& operator=(const DescribeSelectItemResponseBody &) = default ;
    DescribeSelectItemResponseBody& operator=(DescribeSelectItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(monitorStatusList, monitorStatusList_);
        DARABONBA_PTR_TO_JSON(taskIdList, taskIdList_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(monitorStatusList, monitorStatusList_);
        DARABONBA_PTR_FROM_JSON(taskIdList, taskIdList_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->monitorStatusList_ == nullptr
        && this->taskIdList_ == nullptr; };
      // monitorStatusList Field Functions 
      bool hasMonitorStatusList() const { return this->monitorStatusList_ != nullptr;};
      void deleteMonitorStatusList() { this->monitorStatusList_ = nullptr;};
      inline const vector<string> & getMonitorStatusList() const { DARABONBA_PTR_GET_CONST(monitorStatusList_, vector<string>) };
      inline vector<string> getMonitorStatusList() { DARABONBA_PTR_GET(monitorStatusList_, vector<string>) };
      inline ResultObject& setMonitorStatusList(const vector<string> & monitorStatusList) { DARABONBA_PTR_SET_VALUE(monitorStatusList_, monitorStatusList) };
      inline ResultObject& setMonitorStatusList(vector<string> && monitorStatusList) { DARABONBA_PTR_SET_RVALUE(monitorStatusList_, monitorStatusList) };


      // taskIdList Field Functions 
      bool hasTaskIdList() const { return this->taskIdList_ != nullptr;};
      void deleteTaskIdList() { this->taskIdList_ = nullptr;};
      inline const vector<string> & getTaskIdList() const { DARABONBA_PTR_GET_CONST(taskIdList_, vector<string>) };
      inline vector<string> getTaskIdList() { DARABONBA_PTR_GET(taskIdList_, vector<string>) };
      inline ResultObject& setTaskIdList(const vector<string> & taskIdList) { DARABONBA_PTR_SET_VALUE(taskIdList_, taskIdList) };
      inline ResultObject& setTaskIdList(vector<string> && taskIdList) { DARABONBA_PTR_SET_RVALUE(taskIdList_, taskIdList) };


    protected:
      // Monitoring status list.
      shared_ptr<vector<string>> monitorStatusList_ {};
      // Task ID list.
      shared_ptr<vector<string>> taskIdList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSelectItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeSelectItemResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeSelectItemResponseBody::ResultObject) };
    inline DescribeSelectItemResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeSelectItemResponseBody::ResultObject) };
    inline DescribeSelectItemResponseBody& setResultObject(const DescribeSelectItemResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeSelectItemResponseBody& setResultObject(DescribeSelectItemResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return object
    shared_ptr<DescribeSelectItemResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
