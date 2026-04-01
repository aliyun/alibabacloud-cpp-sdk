// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLWHITELISTTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLWHITELISTTEMPLATERESPONSEBODY_HPP_
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
  class DescribeAllWhitelistTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllWhitelistTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllWhitelistTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAllWhitelistTemplateResponseBody() = default ;
    DescribeAllWhitelistTemplateResponseBody(const DescribeAllWhitelistTemplateResponseBody &) = default ;
    DescribeAllWhitelistTemplateResponseBody(DescribeAllWhitelistTemplateResponseBody &&) = default ;
    DescribeAllWhitelistTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllWhitelistTemplateResponseBody() = default ;
    DescribeAllWhitelistTemplateResponseBody& operator=(const DescribeAllWhitelistTemplateResponseBody &) = default ;
    DescribeAllWhitelistTemplateResponseBody& operator=(DescribeAllWhitelistTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrPageNumbers, currPageNumbers_);
        DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
        DARABONBA_PTR_TO_JSON(HasPrev, hasPrev_);
        DARABONBA_PTR_TO_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
        DARABONBA_PTR_TO_JSON(Templates, templates_);
        DARABONBA_PTR_TO_JSON(TotalPageNumbers, totalPageNumbers_);
        DARABONBA_PTR_TO_JSON(TotalRecords, totalRecords_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrPageNumbers, currPageNumbers_);
        DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
        DARABONBA_PTR_FROM_JSON(HasPrev, hasPrev_);
        DARABONBA_PTR_FROM_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
        DARABONBA_PTR_FROM_JSON(Templates, templates_);
        DARABONBA_PTR_FROM_JSON(TotalPageNumbers, totalPageNumbers_);
        DARABONBA_PTR_FROM_JSON(TotalRecords, totalRecords_);
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
      class Templates : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Templates& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Ips, ips_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
          DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Templates& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Ips, ips_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
          DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        Templates() = default ;
        Templates(const Templates &) = default ;
        Templates(Templates &&) = default ;
        Templates(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Templates() = default ;
        Templates& operator=(const Templates &) = default ;
        Templates& operator=(Templates &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->ips_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr && this->userId_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
        inline Templates& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // ips Field Functions 
        bool hasIps() const { return this->ips_ != nullptr;};
        void deleteIps() { this->ips_ = nullptr;};
        inline string getIps() const { DARABONBA_PTR_GET_DEFAULT(ips_, "") };
        inline Templates& setIps(string ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline int32_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0) };
        inline Templates& setTemplateId(int32_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline Templates& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline int32_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0) };
        inline Templates& setUserId(int32_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The primary key of the data table.
        shared_ptr<int32_t> id_ {};
        // The IP addresses.
        shared_ptr<string> ips_ {};
        // The ID of the whitelist template.
        shared_ptr<int32_t> templateId_ {};
        // The name of the whitelist template.
        shared_ptr<string> templateName_ {};
        // The user ID.
        shared_ptr<int32_t> userId_ {};
      };

      virtual bool empty() const override { return this->currPageNumbers_ == nullptr
        && this->hasNext_ == nullptr && this->hasPrev_ == nullptr && this->maxRecordsPerPage_ == nullptr && this->templates_ == nullptr && this->totalPageNumbers_ == nullptr
        && this->totalRecords_ == nullptr; };
      // currPageNumbers Field Functions 
      bool hasCurrPageNumbers() const { return this->currPageNumbers_ != nullptr;};
      void deleteCurrPageNumbers() { this->currPageNumbers_ = nullptr;};
      inline int32_t getCurrPageNumbers() const { DARABONBA_PTR_GET_DEFAULT(currPageNumbers_, 0) };
      inline Data& setCurrPageNumbers(int32_t currPageNumbers) { DARABONBA_PTR_SET_VALUE(currPageNumbers_, currPageNumbers) };


      // hasNext Field Functions 
      bool hasHasNext() const { return this->hasNext_ != nullptr;};
      void deleteHasNext() { this->hasNext_ = nullptr;};
      inline bool getHasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
      inline Data& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


      // hasPrev Field Functions 
      bool hasHasPrev() const { return this->hasPrev_ != nullptr;};
      void deleteHasPrev() { this->hasPrev_ = nullptr;};
      inline bool getHasPrev() const { DARABONBA_PTR_GET_DEFAULT(hasPrev_, false) };
      inline Data& setHasPrev(bool hasPrev) { DARABONBA_PTR_SET_VALUE(hasPrev_, hasPrev) };


      // maxRecordsPerPage Field Functions 
      bool hasMaxRecordsPerPage() const { return this->maxRecordsPerPage_ != nullptr;};
      void deleteMaxRecordsPerPage() { this->maxRecordsPerPage_ = nullptr;};
      inline int32_t getMaxRecordsPerPage() const { DARABONBA_PTR_GET_DEFAULT(maxRecordsPerPage_, 0) };
      inline Data& setMaxRecordsPerPage(int32_t maxRecordsPerPage) { DARABONBA_PTR_SET_VALUE(maxRecordsPerPage_, maxRecordsPerPage) };


      // templates Field Functions 
      bool hasTemplates() const { return this->templates_ != nullptr;};
      void deleteTemplates() { this->templates_ = nullptr;};
      inline const vector<Data::Templates> & getTemplates() const { DARABONBA_PTR_GET_CONST(templates_, vector<Data::Templates>) };
      inline vector<Data::Templates> getTemplates() { DARABONBA_PTR_GET(templates_, vector<Data::Templates>) };
      inline Data& setTemplates(const vector<Data::Templates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
      inline Data& setTemplates(vector<Data::Templates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


      // totalPageNumbers Field Functions 
      bool hasTotalPageNumbers() const { return this->totalPageNumbers_ != nullptr;};
      void deleteTotalPageNumbers() { this->totalPageNumbers_ = nullptr;};
      inline int32_t getTotalPageNumbers() const { DARABONBA_PTR_GET_DEFAULT(totalPageNumbers_, 0) };
      inline Data& setTotalPageNumbers(int32_t totalPageNumbers) { DARABONBA_PTR_SET_VALUE(totalPageNumbers_, totalPageNumbers) };


      // totalRecords Field Functions 
      bool hasTotalRecords() const { return this->totalRecords_ != nullptr;};
      void deleteTotalRecords() { this->totalRecords_ = nullptr;};
      inline int32_t getTotalRecords() const { DARABONBA_PTR_GET_DEFAULT(totalRecords_, 0) };
      inline Data& setTotalRecords(int32_t totalRecords) { DARABONBA_PTR_SET_VALUE(totalRecords_, totalRecords) };


    protected:
      // The page number.
      shared_ptr<int32_t> currPageNumbers_ {};
      // Indicates whether the data that meets the conditions is displayed on the next page. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> hasNext_ {};
      // Indicates whether the data that meets the conditions is displayed on the previous page. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> hasPrev_ {};
      // The number of entries to return on each page.
      shared_ptr<int32_t> maxRecordsPerPage_ {};
      // The information about whitelist templates that are returned by page.
      shared_ptr<vector<Data::Templates>> templates_ {};
      // The total number of pages returned.
      shared_ptr<int32_t> totalPageNumbers_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalRecords_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAllWhitelistTemplateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAllWhitelistTemplateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeAllWhitelistTemplateResponseBody::Data) };
    inline DescribeAllWhitelistTemplateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeAllWhitelistTemplateResponseBody::Data) };
    inline DescribeAllWhitelistTemplateResponseBody& setData(const DescribeAllWhitelistTemplateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAllWhitelistTemplateResponseBody& setData(DescribeAllWhitelistTemplateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeAllWhitelistTemplateResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAllWhitelistTemplateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAllWhitelistTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAllWhitelistTemplateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code returned. Valid values:
    // 
    // *   **200**: success
    // *   **400**: client error
    // *   **401**: identity authentication failed
    // *   **404**: request page not found
    // *   **500**: server error
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<DescribeAllWhitelistTemplateResponseBody::Data> data_ {};
    // The HTTP status code returned. Valid values:
    // 
    // *   **200**: success
    // *   **400**: client error
    // *   **500**: server error
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response parameters.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
