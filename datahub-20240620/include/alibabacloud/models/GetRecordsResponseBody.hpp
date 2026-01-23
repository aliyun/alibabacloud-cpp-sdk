// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class GetRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRecordsResponseBody() = default ;
    GetRecordsResponseBody(const GetRecordsResponseBody &) = default ;
    GetRecordsResponseBody(GetRecordsResponseBody &&) = default ;
    GetRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRecordsResponseBody() = default ;
    GetRecordsResponseBody& operator=(const GetRecordsResponseBody &) = default ;
    GetRecordsResponseBody& operator=(GetRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(Attributes, attributes_);
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(SystemTime, systemTime_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(SystemTime, systemTime_);
      };
      Records() = default ;
      Records(const Records &) = default ;
      Records(Records &&) = default ;
      Records(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Records() = default ;
      Records& operator=(const Records &) = default ;
      Records& operator=(Records &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attributes_ == nullptr
        && this->data_ == nullptr && this->systemTime_ == nullptr; };
      // attributes Field Functions 
      bool hasAttributes() const { return this->attributes_ != nullptr;};
      void deleteAttributes() { this->attributes_ = nullptr;};
      inline const map<string, string> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, map<string, string>) };
      inline map<string, string> getAttributes() { DARABONBA_PTR_GET(attributes_, map<string, string>) };
      inline Records& setAttributes(const map<string, string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
      inline Records& setAttributes(map<string, string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<string> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<string>) };
      inline vector<string> getData() { DARABONBA_PTR_GET(data_, vector<string>) };
      inline Records& setData(const vector<string> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Records& setData(vector<string> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // systemTime Field Functions 
      bool hasSystemTime() const { return this->systemTime_ != nullptr;};
      void deleteSystemTime() { this->systemTime_ = nullptr;};
      inline int64_t getSystemTime() const { DARABONBA_PTR_GET_DEFAULT(systemTime_, 0L) };
      inline Records& setSystemTime(int64_t systemTime) { DARABONBA_PTR_SET_VALUE(systemTime_, systemTime) };


    protected:
      shared_ptr<map<string, string>> attributes_ {};
      shared_ptr<vector<string>> data_ {};
      shared_ptr<int64_t> systemTime_ {};
    };

    virtual bool empty() const override { return this->records_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<GetRecordsResponseBody::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<GetRecordsResponseBody::Records>) };
    inline vector<GetRecordsResponseBody::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<GetRecordsResponseBody::Records>) };
    inline GetRecordsResponseBody& setRecords(const vector<GetRecordsResponseBody::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline GetRecordsResponseBody& setRecords(vector<GetRecordsResponseBody::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRecordsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<GetRecordsResponseBody::Records>> records_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
