// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSFERABLENODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSFERABLENODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetTransferableNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTransferableNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetTransferableNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetTransferableNodesResponseBody() = default ;
    GetTransferableNodesResponseBody(const GetTransferableNodesResponseBody &) = default ;
    GetTransferableNodesResponseBody(GetTransferableNodesResponseBody &&) = default ;
    GetTransferableNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTransferableNodesResponseBody() = default ;
    GetTransferableNodesResponseBody& operator=(const GetTransferableNodesResponseBody &) = default ;
    GetTransferableNodesResponseBody& operator=(GetTransferableNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(host, host_);
        DARABONBA_PTR_TO_JSON(port, port_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(host, host_);
        DARABONBA_PTR_FROM_JSON(port, port_);
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
      virtual bool empty() const override { return this->host_ == nullptr
        && this->port_ == nullptr; };
      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline Result& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Result& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    protected:
      // The IP address of the node.
      shared_ptr<string> host_ {};
      // The access port of the node.
      shared_ptr<int32_t> port_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTransferableNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<GetTransferableNodesResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<GetTransferableNodesResponseBody::Result>) };
    inline vector<GetTransferableNodesResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<GetTransferableNodesResponseBody::Result>) };
    inline GetTransferableNodesResponseBody& setResult(const vector<GetTransferableNodesResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetTransferableNodesResponseBody& setResult(vector<GetTransferableNodesResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The return results.
    shared_ptr<vector<GetTransferableNodesResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
