// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSIPTRUNKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSIPTRUNKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListSipTrunksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSipTrunksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSipTrunksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSipTrunksResponseBody() = default ;
    ListSipTrunksResponseBody(const ListSipTrunksResponseBody &) = default ;
    ListSipTrunksResponseBody(ListSipTrunksResponseBody &&) = default ;
    ListSipTrunksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSipTrunksResponseBody() = default ;
    ListSipTrunksResponseBody& operator=(const ListSipTrunksResponseBody &) = default ;
    ListSipTrunksResponseBody& operator=(ListSipTrunksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(Ips, ips_);
        DARABONBA_PTR_TO_JSON(TrunkId, trunkId_);
        DARABONBA_PTR_TO_JSON(TrunkName, trunkName_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(Ips, ips_);
        DARABONBA_PTR_FROM_JSON(TrunkId, trunkId_);
        DARABONBA_PTR_FROM_JSON(TrunkName, trunkName_);
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
      class Ips : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ips& obj) { 
          DARABONBA_PTR_TO_JSON(Ip, ip_);
        };
        friend void from_json(const Darabonba::Json& j, Ips& obj) { 
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
        };
        Ips() = default ;
        Ips(const Ips &) = default ;
        Ips(Ips &&) = default ;
        Ips(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ips() = default ;
        Ips& operator=(const Ips &) = default ;
        Ips& operator=(Ips &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ip_ == nullptr; };
        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline Ips& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      protected:
        // The IP address of the SIP trunk.
        shared_ptr<string> ip_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->gmtCreate_ == nullptr && this->ips_ == nullptr && this->trunkId_ == nullptr && this->trunkName_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline List& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline List& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // ips Field Functions 
      bool hasIps() const { return this->ips_ != nullptr;};
      void deleteIps() { this->ips_ = nullptr;};
      inline const vector<List::Ips> & getIps() const { DARABONBA_PTR_GET_CONST(ips_, vector<List::Ips>) };
      inline vector<List::Ips> getIps() { DARABONBA_PTR_GET(ips_, vector<List::Ips>) };
      inline List& setIps(const vector<List::Ips> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
      inline List& setIps(vector<List::Ips> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


      // trunkId Field Functions 
      bool hasTrunkId() const { return this->trunkId_ != nullptr;};
      void deleteTrunkId() { this->trunkId_ = nullptr;};
      inline string getTrunkId() const { DARABONBA_PTR_GET_DEFAULT(trunkId_, "") };
      inline List& setTrunkId(string trunkId) { DARABONBA_PTR_SET_VALUE(trunkId_, trunkId) };


      // trunkName Field Functions 
      bool hasTrunkName() const { return this->trunkName_ != nullptr;};
      void deleteTrunkName() { this->trunkName_ = nullptr;};
      inline string getTrunkName() const { DARABONBA_PTR_GET_DEFAULT(trunkName_, "") };
      inline List& setTrunkName(string trunkName) { DARABONBA_PTR_SET_VALUE(trunkName_, trunkName) };


    protected:
      // The description of the SIP trunk.
      shared_ptr<string> description_ {};
      // The creation timestamp, in milliseconds.
      shared_ptr<int64_t> gmtCreate_ {};
      // The list of IP addresses of the SIP trunk.
      shared_ptr<vector<List::Ips>> ips_ {};
      // The unique identifier of the SIP trunk.
      shared_ptr<string> trunkId_ {};
      // The name of the SIP trunk.
      shared_ptr<string> trunkName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->list_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSipTrunksResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListSipTrunksResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListSipTrunksResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ListSipTrunksResponseBody::List>) };
    inline vector<ListSipTrunksResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<ListSipTrunksResponseBody::List>) };
    inline ListSipTrunksResponseBody& setList(const vector<ListSipTrunksResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListSipTrunksResponseBody& setList(vector<ListSipTrunksResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSipTrunksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSipTrunksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSipTrunksResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The list of SIP trunks.
    shared_ptr<vector<ListSipTrunksResponseBody::List>> list_ {};
    // The message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
