// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYNCMCPSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYNCMCPSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListSyncMCPServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSyncMCPServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSyncMCPServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListSyncMCPServerResponseBody() = default ;
    ListSyncMCPServerResponseBody(const ListSyncMCPServerResponseBody &) = default ;
    ListSyncMCPServerResponseBody(ListSyncMCPServerResponseBody &&) = default ;
    ListSyncMCPServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSyncMCPServerResponseBody() = default ;
    ListSyncMCPServerResponseBody& operator=(const ListSyncMCPServerResponseBody &) = default ;
    ListSyncMCPServerResponseBody& operator=(ListSyncMCPServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(domainIds, domainIds_);
        DARABONBA_PTR_TO_JSON(mcpServers, mcpServers_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(domainIds, domainIds_);
        DARABONBA_PTR_FROM_JSON(mcpServers, mcpServers_);
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
      virtual bool empty() const override { return this->domainIds_ == nullptr
        && this->mcpServers_ == nullptr; };
      // domainIds Field Functions 
      bool hasDomainIds() const { return this->domainIds_ != nullptr;};
      void deleteDomainIds() { this->domainIds_ = nullptr;};
      inline const vector<string> & getDomainIds() const { DARABONBA_PTR_GET_CONST(domainIds_, vector<string>) };
      inline vector<string> getDomainIds() { DARABONBA_PTR_GET(domainIds_, vector<string>) };
      inline Data& setDomainIds(const vector<string> & domainIds) { DARABONBA_PTR_SET_VALUE(domainIds_, domainIds) };
      inline Data& setDomainIds(vector<string> && domainIds) { DARABONBA_PTR_SET_RVALUE(domainIds_, domainIds) };


      // mcpServers Field Functions 
      bool hasMcpServers() const { return this->mcpServers_ != nullptr;};
      void deleteMcpServers() { this->mcpServers_ = nullptr;};
      inline const vector<string> & getMcpServers() const { DARABONBA_PTR_GET_CONST(mcpServers_, vector<string>) };
      inline vector<string> getMcpServers() { DARABONBA_PTR_GET(mcpServers_, vector<string>) };
      inline Data& setMcpServers(const vector<string> & mcpServers) { DARABONBA_PTR_SET_VALUE(mcpServers_, mcpServers) };
      inline Data& setMcpServers(vector<string> && mcpServers) { DARABONBA_PTR_SET_RVALUE(mcpServers_, mcpServers) };


    protected:
      shared_ptr<vector<string>> domainIds_ {};
      shared_ptr<vector<string>> mcpServers_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSyncMCPServerResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSyncMCPServerResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListSyncMCPServerResponseBody::Data) };
    inline ListSyncMCPServerResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListSyncMCPServerResponseBody::Data) };
    inline ListSyncMCPServerResponseBody& setData(const ListSyncMCPServerResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSyncMCPServerResponseBody& setData(ListSyncMCPServerResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSyncMCPServerResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSyncMCPServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListSyncMCPServerResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
