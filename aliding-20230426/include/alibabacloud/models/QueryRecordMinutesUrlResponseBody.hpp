// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECORDMINUTESURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECORDMINUTESURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryRecordMinutesUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRecordMinutesUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(recordMinutesUrls, recordMinutesUrls_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRecordMinutesUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(recordMinutesUrls, recordMinutesUrls_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    QueryRecordMinutesUrlResponseBody() = default ;
    QueryRecordMinutesUrlResponseBody(const QueryRecordMinutesUrlResponseBody &) = default ;
    QueryRecordMinutesUrlResponseBody(QueryRecordMinutesUrlResponseBody &&) = default ;
    QueryRecordMinutesUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRecordMinutesUrlResponseBody() = default ;
    QueryRecordMinutesUrlResponseBody& operator=(const QueryRecordMinutesUrlResponseBody &) = default ;
    QueryRecordMinutesUrlResponseBody& operator=(QueryRecordMinutesUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecordMinutesUrls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordMinutesUrls& obj) { 
        DARABONBA_PTR_TO_JSON(RecordMinutesUrl, recordMinutesUrl_);
      };
      friend void from_json(const Darabonba::Json& j, RecordMinutesUrls& obj) { 
        DARABONBA_PTR_FROM_JSON(RecordMinutesUrl, recordMinutesUrl_);
      };
      RecordMinutesUrls() = default ;
      RecordMinutesUrls(const RecordMinutesUrls &) = default ;
      RecordMinutesUrls(RecordMinutesUrls &&) = default ;
      RecordMinutesUrls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordMinutesUrls() = default ;
      RecordMinutesUrls& operator=(const RecordMinutesUrls &) = default ;
      RecordMinutesUrls& operator=(RecordMinutesUrls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->recordMinutesUrl_ == nullptr; };
      // recordMinutesUrl Field Functions 
      bool hasRecordMinutesUrl() const { return this->recordMinutesUrl_ != nullptr;};
      void deleteRecordMinutesUrl() { this->recordMinutesUrl_ = nullptr;};
      inline string getRecordMinutesUrl() const { DARABONBA_PTR_GET_DEFAULT(recordMinutesUrl_, "") };
      inline RecordMinutesUrls& setRecordMinutesUrl(string recordMinutesUrl) { DARABONBA_PTR_SET_VALUE(recordMinutesUrl_, recordMinutesUrl) };


    protected:
      shared_ptr<string> recordMinutesUrl_ {};
    };

    virtual bool empty() const override { return this->recordMinutesUrls_ == nullptr
        && this->requestId_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // recordMinutesUrls Field Functions 
    bool hasRecordMinutesUrls() const { return this->recordMinutesUrls_ != nullptr;};
    void deleteRecordMinutesUrls() { this->recordMinutesUrls_ = nullptr;};
    inline const vector<QueryRecordMinutesUrlResponseBody::RecordMinutesUrls> & getRecordMinutesUrls() const { DARABONBA_PTR_GET_CONST(recordMinutesUrls_, vector<QueryRecordMinutesUrlResponseBody::RecordMinutesUrls>) };
    inline vector<QueryRecordMinutesUrlResponseBody::RecordMinutesUrls> getRecordMinutesUrls() { DARABONBA_PTR_GET(recordMinutesUrls_, vector<QueryRecordMinutesUrlResponseBody::RecordMinutesUrls>) };
    inline QueryRecordMinutesUrlResponseBody& setRecordMinutesUrls(const vector<QueryRecordMinutesUrlResponseBody::RecordMinutesUrls> & recordMinutesUrls) { DARABONBA_PTR_SET_VALUE(recordMinutesUrls_, recordMinutesUrls) };
    inline QueryRecordMinutesUrlResponseBody& setRecordMinutesUrls(vector<QueryRecordMinutesUrlResponseBody::RecordMinutesUrls> && recordMinutesUrls) { DARABONBA_PTR_SET_RVALUE(recordMinutesUrls_, recordMinutesUrls) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRecordMinutesUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline QueryRecordMinutesUrlResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline QueryRecordMinutesUrlResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<vector<QueryRecordMinutesUrlResponseBody::RecordMinutesUrls>> recordMinutesUrls_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
