// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONMETASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONMETASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListFunctionMetasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionMetasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunctionMetasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFunctionMetasResponseBody() = default ;
    ListFunctionMetasResponseBody(const ListFunctionMetasResponseBody &) = default ;
    ListFunctionMetasResponseBody(ListFunctionMetasResponseBody &&) = default ;
    ListFunctionMetasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionMetasResponseBody() = default ;
    ListFunctionMetasResponseBody& operator=(const ListFunctionMetasResponseBody &) = default ;
    ListFunctionMetasResponseBody& operator=(ListFunctionMetasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FailoverRegion, failoverRegion_);
          DARABONBA_PTR_TO_JSON(FailoverRegionWeight, failoverRegionWeight_);
          DARABONBA_PTR_TO_JSON(FunctionMetaId, functionMetaId_);
          DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
          DARABONBA_PTR_TO_JSON(HttpTriggerUrl, httpTriggerUrl_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(Service, service_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FailoverRegion, failoverRegion_);
          DARABONBA_PTR_FROM_JSON(FailoverRegionWeight, failoverRegionWeight_);
          DARABONBA_PTR_FROM_JSON(FunctionMetaId, functionMetaId_);
          DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
          DARABONBA_PTR_FROM_JSON(HttpTriggerUrl, httpTriggerUrl_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(Service, service_);
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
        virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && this->description_ == nullptr && this->failoverRegion_ == nullptr && this->failoverRegionWeight_ == nullptr && this->functionMetaId_ == nullptr && this->functionName_ == nullptr
        && this->httpTriggerUrl_ == nullptr && this->instanceId_ == nullptr && this->region_ == nullptr && this->role_ == nullptr && this->service_ == nullptr; };
        // aliyunUid Field Functions 
        bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
        void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
        inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
        inline List& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline List& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // failoverRegion Field Functions 
        bool hasFailoverRegion() const { return this->failoverRegion_ != nullptr;};
        void deleteFailoverRegion() { this->failoverRegion_ = nullptr;};
        inline string getFailoverRegion() const { DARABONBA_PTR_GET_DEFAULT(failoverRegion_, "") };
        inline List& setFailoverRegion(string failoverRegion) { DARABONBA_PTR_SET_VALUE(failoverRegion_, failoverRegion) };


        // failoverRegionWeight Field Functions 
        bool hasFailoverRegionWeight() const { return this->failoverRegionWeight_ != nullptr;};
        void deleteFailoverRegionWeight() { this->failoverRegionWeight_ = nullptr;};
        inline double getFailoverRegionWeight() const { DARABONBA_PTR_GET_DEFAULT(failoverRegionWeight_, 0.0) };
        inline List& setFailoverRegionWeight(double failoverRegionWeight) { DARABONBA_PTR_SET_VALUE(failoverRegionWeight_, failoverRegionWeight) };


        // functionMetaId Field Functions 
        bool hasFunctionMetaId() const { return this->functionMetaId_ != nullptr;};
        void deleteFunctionMetaId() { this->functionMetaId_ = nullptr;};
        inline string getFunctionMetaId() const { DARABONBA_PTR_GET_DEFAULT(functionMetaId_, "") };
        inline List& setFunctionMetaId(string functionMetaId) { DARABONBA_PTR_SET_VALUE(functionMetaId_, functionMetaId) };


        // functionName Field Functions 
        bool hasFunctionName() const { return this->functionName_ != nullptr;};
        void deleteFunctionName() { this->functionName_ = nullptr;};
        inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
        inline List& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


        // httpTriggerUrl Field Functions 
        bool hasHttpTriggerUrl() const { return this->httpTriggerUrl_ != nullptr;};
        void deleteHttpTriggerUrl() { this->httpTriggerUrl_ = nullptr;};
        inline string getHttpTriggerUrl() const { DARABONBA_PTR_GET_DEFAULT(httpTriggerUrl_, "") };
        inline List& setHttpTriggerUrl(string httpTriggerUrl) { DARABONBA_PTR_SET_VALUE(httpTriggerUrl_, httpTriggerUrl) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline int32_t getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, 0) };
        inline List& setRegion(int32_t region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline List& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // service Field Functions 
        bool hasService() const { return this->service_ != nullptr;};
        void deleteService() { this->service_ = nullptr;};
        inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
        inline List& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


      protected:
        shared_ptr<string> aliyunUid_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> failoverRegion_ {};
        shared_ptr<double> failoverRegionWeight_ {};
        shared_ptr<string> functionMetaId_ {};
        shared_ptr<string> functionName_ {};
        shared_ptr<string> httpTriggerUrl_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<int32_t> region_ {};
        shared_ptr<string> role_ {};
        shared_ptr<string> service_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListFunctionMetasResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListFunctionMetasResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListFunctionMetasResponseBody::Data) };
    inline ListFunctionMetasResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListFunctionMetasResponseBody::Data) };
    inline ListFunctionMetasResponseBody& setData(const ListFunctionMetasResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListFunctionMetasResponseBody& setData(ListFunctionMetasResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListFunctionMetasResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListFunctionMetasResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFunctionMetasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListFunctionMetasResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
