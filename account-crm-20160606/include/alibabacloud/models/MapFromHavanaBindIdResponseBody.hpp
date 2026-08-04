// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MAPFROMHAVANABINDIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MAPFROMHAVANABINDIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class MapFromHavanaBindIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MapFromHavanaBindIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, MapFromHavanaBindIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    MapFromHavanaBindIdResponseBody() = default ;
    MapFromHavanaBindIdResponseBody(const MapFromHavanaBindIdResponseBody &) = default ;
    MapFromHavanaBindIdResponseBody(MapFromHavanaBindIdResponseBody &&) = default ;
    MapFromHavanaBindIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MapFromHavanaBindIdResponseBody() = default ;
    MapFromHavanaBindIdResponseBody& operator=(const MapFromHavanaBindIdResponseBody &) = default ;
    MapFromHavanaBindIdResponseBody& operator=(MapFromHavanaBindIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BindHid, bindHid_);
        DARABONBA_PTR_TO_JSON(HavanaBindId, havanaBindId_);
        DARABONBA_PTR_TO_JSON(HavanaBindStation, havanaBindStation_);
        DARABONBA_PTR_TO_JSON(Pk, pk_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BindHid, bindHid_);
        DARABONBA_PTR_FROM_JSON(HavanaBindId, havanaBindId_);
        DARABONBA_PTR_FROM_JSON(HavanaBindStation, havanaBindStation_);
        DARABONBA_PTR_FROM_JSON(Pk, pk_);
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
      virtual bool empty() const override { return this->bindHid_ == nullptr
        && this->havanaBindId_ == nullptr && this->havanaBindStation_ == nullptr && this->pk_ == nullptr; };
      // bindHid Field Functions 
      bool hasBindHid() const { return this->bindHid_ != nullptr;};
      void deleteBindHid() { this->bindHid_ = nullptr;};
      inline string getBindHid() const { DARABONBA_PTR_GET_DEFAULT(bindHid_, "") };
      inline Data& setBindHid(string bindHid) { DARABONBA_PTR_SET_VALUE(bindHid_, bindHid) };


      // havanaBindId Field Functions 
      bool hasHavanaBindId() const { return this->havanaBindId_ != nullptr;};
      void deleteHavanaBindId() { this->havanaBindId_ = nullptr;};
      inline string getHavanaBindId() const { DARABONBA_PTR_GET_DEFAULT(havanaBindId_, "") };
      inline Data& setHavanaBindId(string havanaBindId) { DARABONBA_PTR_SET_VALUE(havanaBindId_, havanaBindId) };


      // havanaBindStation Field Functions 
      bool hasHavanaBindStation() const { return this->havanaBindStation_ != nullptr;};
      void deleteHavanaBindStation() { this->havanaBindStation_ = nullptr;};
      inline string getHavanaBindStation() const { DARABONBA_PTR_GET_DEFAULT(havanaBindStation_, "") };
      inline Data& setHavanaBindStation(string havanaBindStation) { DARABONBA_PTR_SET_VALUE(havanaBindStation_, havanaBindStation) };


      // pk Field Functions 
      bool hasPk() const { return this->pk_ != nullptr;};
      void deletePk() { this->pk_ = nullptr;};
      inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
      inline Data& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    protected:
      shared_ptr<string> bindHid_ {};
      shared_ptr<string> havanaBindId_ {};
      shared_ptr<string> havanaBindStation_ {};
      shared_ptr<string> pk_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MapFromHavanaBindIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<MapFromHavanaBindIdResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<MapFromHavanaBindIdResponseBody::Data>) };
    inline vector<MapFromHavanaBindIdResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<MapFromHavanaBindIdResponseBody::Data>) };
    inline MapFromHavanaBindIdResponseBody& setData(const vector<MapFromHavanaBindIdResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MapFromHavanaBindIdResponseBody& setData(vector<MapFromHavanaBindIdResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline MapFromHavanaBindIdResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MapFromHavanaBindIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MapFromHavanaBindIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline MapFromHavanaBindIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<MapFromHavanaBindIdResponseBody::Data>> data_ {};
    shared_ptr<string> httpCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
