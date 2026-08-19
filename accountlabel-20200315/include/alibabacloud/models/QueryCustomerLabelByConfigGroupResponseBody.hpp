// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCUSTOMERLABELBYCONFIGGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCUSTOMERLABELBYCONFIGGROUPRESPONSEBODY_HPP_
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
  class QueryCustomerLabelByConfigGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCustomerLabelByConfigGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCustomerLabelByConfigGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryCustomerLabelByConfigGroupResponseBody() = default ;
    QueryCustomerLabelByConfigGroupResponseBody(const QueryCustomerLabelByConfigGroupResponseBody &) = default ;
    QueryCustomerLabelByConfigGroupResponseBody(QueryCustomerLabelByConfigGroupResponseBody &&) = default ;
    QueryCustomerLabelByConfigGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCustomerLabelByConfigGroupResponseBody() = default ;
    QueryCustomerLabelByConfigGroupResponseBody& operator=(const QueryCustomerLabelByConfigGroupResponseBody &) = default ;
    QueryCustomerLabelByConfigGroupResponseBody& operator=(QueryCustomerLabelByConfigGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(LabelSeries, labelSeries_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Label, label_);
        DARABONBA_PTR_FROM_JSON(LabelSeries, labelSeries_);
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
      virtual bool empty() const override { return this->label_ == nullptr
        && this->labelSeries_ == nullptr; };
      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline Data& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // labelSeries Field Functions 
      bool hasLabelSeries() const { return this->labelSeries_ != nullptr;};
      void deleteLabelSeries() { this->labelSeries_ = nullptr;};
      inline string getLabelSeries() const { DARABONBA_PTR_GET_DEFAULT(labelSeries_, "") };
      inline Data& setLabelSeries(string labelSeries) { DARABONBA_PTR_SET_VALUE(labelSeries_, labelSeries) };


    protected:
      shared_ptr<string> label_ {};
      shared_ptr<string> labelSeries_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryCustomerLabelByConfigGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryCustomerLabelByConfigGroupResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryCustomerLabelByConfigGroupResponseBody::Data>) };
    inline vector<QueryCustomerLabelByConfigGroupResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryCustomerLabelByConfigGroupResponseBody::Data>) };
    inline QueryCustomerLabelByConfigGroupResponseBody& setData(const vector<QueryCustomerLabelByConfigGroupResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryCustomerLabelByConfigGroupResponseBody& setData(vector<QueryCustomerLabelByConfigGroupResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryCustomerLabelByConfigGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCustomerLabelByConfigGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryCustomerLabelByConfigGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<QueryCustomerLabelByConfigGroupResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountLabel20200315
#endif
