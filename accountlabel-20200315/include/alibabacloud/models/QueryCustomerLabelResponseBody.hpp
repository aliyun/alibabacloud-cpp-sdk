// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCUSTOMERLABELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCUSTOMERLABELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountLabel20200315
{
namespace Models
{
  class QueryCustomerLabelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCustomerLabelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCustomerLabelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryCustomerLabelResponseBody() = default ;
    QueryCustomerLabelResponseBody(const QueryCustomerLabelResponseBody &) = default ;
    QueryCustomerLabelResponseBody(QueryCustomerLabelResponseBody &&) = default ;
    QueryCustomerLabelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCustomerLabelResponseBody() = default ;
    QueryCustomerLabelResponseBody& operator=(const QueryCustomerLabelResponseBody &) = default ;
    QueryCustomerLabelResponseBody& operator=(QueryCustomerLabelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CustomerLabel, customerLabel_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomerLabel, customerLabel_);
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
      class CustomerLabel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomerLabel& obj) { 
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(EndTimeStr, endTimeStr_);
          DARABONBA_PTR_TO_JSON(GmtCreatedStr, gmtCreatedStr_);
          DARABONBA_PTR_TO_JSON(GmtModifiedStr, gmtModifiedStr_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(LabelSeries, labelSeries_);
          DARABONBA_PTR_TO_JSON(StartTimeStr, startTimeStr_);
        };
        friend void from_json(const Darabonba::Json& j, CustomerLabel& obj) { 
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(EndTimeStr, endTimeStr_);
          DARABONBA_PTR_FROM_JSON(GmtCreatedStr, gmtCreatedStr_);
          DARABONBA_PTR_FROM_JSON(GmtModifiedStr, gmtModifiedStr_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(LabelSeries, labelSeries_);
          DARABONBA_PTR_FROM_JSON(StartTimeStr, startTimeStr_);
        };
        CustomerLabel() = default ;
        CustomerLabel(const CustomerLabel &) = default ;
        CustomerLabel(CustomerLabel &&) = default ;
        CustomerLabel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomerLabel() = default ;
        CustomerLabel& operator=(const CustomerLabel &) = default ;
        CustomerLabel& operator=(CustomerLabel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creator_ == nullptr
        && this->endTimeStr_ == nullptr && this->gmtCreatedStr_ == nullptr && this->gmtModifiedStr_ == nullptr && this->id_ == nullptr && this->label_ == nullptr
        && this->labelSeries_ == nullptr && this->startTimeStr_ == nullptr; };
        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline CustomerLabel& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // endTimeStr Field Functions 
        bool hasEndTimeStr() const { return this->endTimeStr_ != nullptr;};
        void deleteEndTimeStr() { this->endTimeStr_ = nullptr;};
        inline string getEndTimeStr() const { DARABONBA_PTR_GET_DEFAULT(endTimeStr_, "") };
        inline CustomerLabel& setEndTimeStr(string endTimeStr) { DARABONBA_PTR_SET_VALUE(endTimeStr_, endTimeStr) };


        // gmtCreatedStr Field Functions 
        bool hasGmtCreatedStr() const { return this->gmtCreatedStr_ != nullptr;};
        void deleteGmtCreatedStr() { this->gmtCreatedStr_ = nullptr;};
        inline string getGmtCreatedStr() const { DARABONBA_PTR_GET_DEFAULT(gmtCreatedStr_, "") };
        inline CustomerLabel& setGmtCreatedStr(string gmtCreatedStr) { DARABONBA_PTR_SET_VALUE(gmtCreatedStr_, gmtCreatedStr) };


        // gmtModifiedStr Field Functions 
        bool hasGmtModifiedStr() const { return this->gmtModifiedStr_ != nullptr;};
        void deleteGmtModifiedStr() { this->gmtModifiedStr_ = nullptr;};
        inline string getGmtModifiedStr() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedStr_, "") };
        inline CustomerLabel& setGmtModifiedStr(string gmtModifiedStr) { DARABONBA_PTR_SET_VALUE(gmtModifiedStr_, gmtModifiedStr) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline CustomerLabel& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline CustomerLabel& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // labelSeries Field Functions 
        bool hasLabelSeries() const { return this->labelSeries_ != nullptr;};
        void deleteLabelSeries() { this->labelSeries_ = nullptr;};
        inline string getLabelSeries() const { DARABONBA_PTR_GET_DEFAULT(labelSeries_, "") };
        inline CustomerLabel& setLabelSeries(string labelSeries) { DARABONBA_PTR_SET_VALUE(labelSeries_, labelSeries) };


        // startTimeStr Field Functions 
        bool hasStartTimeStr() const { return this->startTimeStr_ != nullptr;};
        void deleteStartTimeStr() { this->startTimeStr_ = nullptr;};
        inline string getStartTimeStr() const { DARABONBA_PTR_GET_DEFAULT(startTimeStr_, "") };
        inline CustomerLabel& setStartTimeStr(string startTimeStr) { DARABONBA_PTR_SET_VALUE(startTimeStr_, startTimeStr) };


      protected:
        shared_ptr<string> creator_ {};
        shared_ptr<string> endTimeStr_ {};
        shared_ptr<string> gmtCreatedStr_ {};
        shared_ptr<string> gmtModifiedStr_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> label_ {};
        shared_ptr<string> labelSeries_ {};
        shared_ptr<string> startTimeStr_ {};
      };

      virtual bool empty() const override { return this->customerLabel_ == nullptr; };
      // customerLabel Field Functions 
      bool hasCustomerLabel() const { return this->customerLabel_ != nullptr;};
      void deleteCustomerLabel() { this->customerLabel_ = nullptr;};
      inline const vector<Data::CustomerLabel> & getCustomerLabel() const { DARABONBA_PTR_GET_CONST(customerLabel_, vector<Data::CustomerLabel>) };
      inline vector<Data::CustomerLabel> getCustomerLabel() { DARABONBA_PTR_GET(customerLabel_, vector<Data::CustomerLabel>) };
      inline Data& setCustomerLabel(const vector<Data::CustomerLabel> & customerLabel) { DARABONBA_PTR_SET_VALUE(customerLabel_, customerLabel) };
      inline Data& setCustomerLabel(vector<Data::CustomerLabel> && customerLabel) { DARABONBA_PTR_SET_RVALUE(customerLabel_, customerLabel) };


    protected:
      shared_ptr<vector<Data::CustomerLabel>> customerLabel_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryCustomerLabelResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryCustomerLabelResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryCustomerLabelResponseBody::Data) };
    inline QueryCustomerLabelResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryCustomerLabelResponseBody::Data) };
    inline QueryCustomerLabelResponseBody& setData(const QueryCustomerLabelResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryCustomerLabelResponseBody& setData(QueryCustomerLabelResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryCustomerLabelResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCustomerLabelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryCustomerLabelResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryCustomerLabelResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountLabel20200315
#endif
