// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListInstanceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListInstanceInfoResponseBody() = default ;
    ListInstanceInfoResponseBody(const ListInstanceInfoResponseBody &) = default ;
    ListInstanceInfoResponseBody(ListInstanceInfoResponseBody &&) = default ;
    ListInstanceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceInfoResponseBody() = default ;
    ListInstanceInfoResponseBody& operator=(const ListInstanceInfoResponseBody &) = default ;
    ListInstanceInfoResponseBody& operator=(ListInstanceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(infoKey, infoKey_);
        DARABONBA_PTR_TO_JSON(infoType, infoType_);
        DARABONBA_PTR_TO_JSON(infoValue, infoValue_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(infoKey, infoKey_);
        DARABONBA_PTR_FROM_JSON(infoType, infoType_);
        DARABONBA_PTR_FROM_JSON(infoValue, infoValue_);
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
      virtual bool empty() const override { return this->infoKey_ == nullptr
        && this->infoType_ == nullptr && this->infoValue_ == nullptr; };
      // infoKey Field Functions 
      bool hasInfoKey() const { return this->infoKey_ != nullptr;};
      void deleteInfoKey() { this->infoKey_ = nullptr;};
      inline string getInfoKey() const { DARABONBA_PTR_GET_DEFAULT(infoKey_, "") };
      inline Data& setInfoKey(string infoKey) { DARABONBA_PTR_SET_VALUE(infoKey_, infoKey) };


      // infoType Field Functions 
      bool hasInfoType() const { return this->infoType_ != nullptr;};
      void deleteInfoType() { this->infoType_ = nullptr;};
      inline string getInfoType() const { DARABONBA_PTR_GET_DEFAULT(infoType_, "") };
      inline Data& setInfoType(string infoType) { DARABONBA_PTR_SET_VALUE(infoType_, infoType) };


      // infoValue Field Functions 
      bool hasInfoValue() const { return this->infoValue_ != nullptr;};
      void deleteInfoValue() { this->infoValue_ = nullptr;};
      inline string getInfoValue() const { DARABONBA_PTR_GET_DEFAULT(infoValue_, "") };
      inline Data& setInfoValue(string infoValue) { DARABONBA_PTR_SET_VALUE(infoValue_, infoValue) };


    protected:
      shared_ptr<string> infoKey_ {};
      shared_ptr<string> infoType_ {};
      shared_ptr<string> infoValue_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListInstanceInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListInstanceInfoResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListInstanceInfoResponseBody::Data>) };
    inline vector<ListInstanceInfoResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListInstanceInfoResponseBody::Data>) };
    inline ListInstanceInfoResponseBody& setData(const vector<ListInstanceInfoResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListInstanceInfoResponseBody& setData(vector<ListInstanceInfoResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListInstanceInfoResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListInstanceInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListInstanceInfoResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListInstanceInfoResponseBody::Data>> data_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
