// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINFRAREDREMOTECONTROLLERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINFRAREDREMOTECONTROLLERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListInfraredRemoteControllersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInfraredRemoteControllersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListInfraredRemoteControllersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    ListInfraredRemoteControllersResponseBody() = default ;
    ListInfraredRemoteControllersResponseBody(const ListInfraredRemoteControllersResponseBody &) = default ;
    ListInfraredRemoteControllersResponseBody(ListInfraredRemoteControllersResponseBody &&) = default ;
    ListInfraredRemoteControllersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInfraredRemoteControllersResponseBody() = default ;
    ListInfraredRemoteControllersResponseBody& operator=(const ListInfraredRemoteControllersResponseBody &) = default ;
    ListInfraredRemoteControllersResponseBody& operator=(ListInfraredRemoteControllersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(Rid, rid_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(Rid, rid_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->index_ == nullptr
        && this->rid_ == nullptr && this->version_ == nullptr; };
      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
      inline Result& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // rid Field Functions 
      bool hasRid() const { return this->rid_ != nullptr;};
      void deleteRid() { this->rid_ = nullptr;};
      inline int64_t getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
      inline Result& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Result& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<int32_t> index_ {};
      shared_ptr<int64_t> rid_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->message_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr && this->statusCode_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListInfraredRemoteControllersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInfraredRemoteControllersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListInfraredRemoteControllersResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListInfraredRemoteControllersResponseBody::Result>) };
    inline vector<ListInfraredRemoteControllersResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListInfraredRemoteControllersResponseBody::Result>) };
    inline ListInfraredRemoteControllersResponseBody& setResult(const vector<ListInfraredRemoteControllersResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListInfraredRemoteControllersResponseBody& setResult(vector<ListInfraredRemoteControllersResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListInfraredRemoteControllersResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListInfraredRemoteControllersResponseBody::Result>> result_ {};
    shared_ptr<int32_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
