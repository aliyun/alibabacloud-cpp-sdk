// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMSMETADATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSMSMETADATARESPONSEBODY_HPP_
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
  class ListSmsMetadataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmsMetadataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmsMetadataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSmsMetadataResponseBody() = default ;
    ListSmsMetadataResponseBody(const ListSmsMetadataResponseBody &) = default ;
    ListSmsMetadataResponseBody(ListSmsMetadataResponseBody &&) = default ;
    ListSmsMetadataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmsMetadataResponseBody() = default ;
    ListSmsMetadataResponseBody& operator=(const ListSmsMetadataResponseBody &) = default ;
    ListSmsMetadataResponseBody& operator=(ListSmsMetadataResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Scenario, scenario_);
          DARABONBA_PTR_TO_JSON(SignName, signName_);
          DARABONBA_PTR_TO_JSON(SmsMetadataId, smsMetadataId_);
          DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
          DARABONBA_PTR_FROM_JSON(SignName, signName_);
          DARABONBA_PTR_FROM_JSON(SmsMetadataId, smsMetadataId_);
          DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
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
        && this->description_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr && this->scenario_ == nullptr && this->signName_ == nullptr
        && this->smsMetadataId_ == nullptr && this->templateCode_ == nullptr; };
        // aliyunUid Field Functions 
        bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
        void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
        inline int64_t getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, 0L) };
        inline List& setAliyunUid(int64_t aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline List& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline List& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // scenario Field Functions 
        bool hasScenario() const { return this->scenario_ != nullptr;};
        void deleteScenario() { this->scenario_ = nullptr;};
        inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
        inline List& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


        // signName Field Functions 
        bool hasSignName() const { return this->signName_ != nullptr;};
        void deleteSignName() { this->signName_ = nullptr;};
        inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
        inline List& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


        // smsMetadataId Field Functions 
        bool hasSmsMetadataId() const { return this->smsMetadataId_ != nullptr;};
        void deleteSmsMetadataId() { this->smsMetadataId_ = nullptr;};
        inline string getSmsMetadataId() const { DARABONBA_PTR_GET_DEFAULT(smsMetadataId_, "") };
        inline List& setSmsMetadataId(string smsMetadataId) { DARABONBA_PTR_SET_VALUE(smsMetadataId_, smsMetadataId) };


        // templateCode Field Functions 
        bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
        void deleteTemplateCode() { this->templateCode_ = nullptr;};
        inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
        inline List& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


      protected:
        shared_ptr<int64_t> aliyunUid_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> scenario_ {};
        shared_ptr<string> signName_ {};
        shared_ptr<string> smsMetadataId_ {};
        shared_ptr<string> templateCode_ {};
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
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSmsMetadataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSmsMetadataResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListSmsMetadataResponseBody::Data) };
    inline ListSmsMetadataResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListSmsMetadataResponseBody::Data) };
    inline ListSmsMetadataResponseBody& setData(const ListSmsMetadataResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSmsMetadataResponseBody& setData(ListSmsMetadataResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListSmsMetadataResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSmsMetadataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline ListSmsMetadataResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListSmsMetadataResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSmsMetadataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListSmsMetadataResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
