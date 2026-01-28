// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFAILINGREASONLISTFORQUALIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYFAILINGREASONLISTFORQUALIFICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryFailingReasonListForQualificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFailingReasonListForQualificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFailingReasonListForQualificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryFailingReasonListForQualificationResponseBody() = default ;
    QueryFailingReasonListForQualificationResponseBody(const QueryFailingReasonListForQualificationResponseBody &) = default ;
    QueryFailingReasonListForQualificationResponseBody(QueryFailingReasonListForQualificationResponseBody &&) = default ;
    QueryFailingReasonListForQualificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFailingReasonListForQualificationResponseBody() = default ;
    QueryFailingReasonListForQualificationResponseBody& operator=(const QueryFailingReasonListForQualificationResponseBody &) = default ;
    QueryFailingReasonListForQualificationResponseBody& operator=(QueryFailingReasonListForQualificationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Date, date_);
        DARABONBA_PTR_TO_JSON(FailReason, failReason_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Date, date_);
        DARABONBA_PTR_FROM_JSON(FailReason, failReason_);
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
      virtual bool empty() const override { return this->date_ == nullptr
        && this->failReason_ == nullptr; };
      // date Field Functions 
      bool hasDate() const { return this->date_ != nullptr;};
      void deleteDate() { this->date_ = nullptr;};
      inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
      inline Data& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


      // failReason Field Functions 
      bool hasFailReason() const { return this->failReason_ != nullptr;};
      void deleteFailReason() { this->failReason_ = nullptr;};
      inline string getFailReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
      inline Data& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


    protected:
      shared_ptr<string> date_ {};
      shared_ptr<string> failReason_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryFailingReasonListForQualificationResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryFailingReasonListForQualificationResponseBody::Data>) };
    inline vector<QueryFailingReasonListForQualificationResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryFailingReasonListForQualificationResponseBody::Data>) };
    inline QueryFailingReasonListForQualificationResponseBody& setData(const vector<QueryFailingReasonListForQualificationResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryFailingReasonListForQualificationResponseBody& setData(vector<QueryFailingReasonListForQualificationResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryFailingReasonListForQualificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<QueryFailingReasonListForQualificationResponseBody::Data>> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
