// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOUNTEDCLIENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOUNTEDCLIENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeMountedClientsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMountedClientsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Clients, clients_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMountedClientsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Clients, clients_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeMountedClientsResponseBody() = default ;
    DescribeMountedClientsResponseBody(const DescribeMountedClientsResponseBody &) = default ;
    DescribeMountedClientsResponseBody(DescribeMountedClientsResponseBody &&) = default ;
    DescribeMountedClientsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMountedClientsResponseBody() = default ;
    DescribeMountedClientsResponseBody& operator=(const DescribeMountedClientsResponseBody &) = default ;
    DescribeMountedClientsResponseBody& operator=(DescribeMountedClientsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Clients : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Clients& obj) { 
        DARABONBA_PTR_TO_JSON(Client, client_);
      };
      friend void from_json(const Darabonba::Json& j, Clients& obj) { 
        DARABONBA_PTR_FROM_JSON(Client, client_);
      };
      Clients() = default ;
      Clients(const Clients &) = default ;
      Clients(Clients &&) = default ;
      Clients(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Clients() = default ;
      Clients& operator=(const Clients &) = default ;
      Clients& operator=(Clients &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Client : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Client& obj) { 
          DARABONBA_PTR_TO_JSON(ClientIP, clientIP_);
        };
        friend void from_json(const Darabonba::Json& j, Client& obj) { 
          DARABONBA_PTR_FROM_JSON(ClientIP, clientIP_);
        };
        Client() = default ;
        Client(const Client &) = default ;
        Client(Client &&) = default ;
        Client(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Client() = default ;
        Client& operator=(const Client &) = default ;
        Client& operator=(Client &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clientIP_ == nullptr; };
        // clientIP Field Functions 
        bool hasClientIP() const { return this->clientIP_ != nullptr;};
        void deleteClientIP() { this->clientIP_ = nullptr;};
        inline string getClientIP() const { DARABONBA_PTR_GET_DEFAULT(clientIP_, "") };
        inline Client& setClientIP(string clientIP) { DARABONBA_PTR_SET_VALUE(clientIP_, clientIP) };


      protected:
        // The IP address of the client.
        shared_ptr<string> clientIP_ {};
      };

      virtual bool empty() const override { return this->client_ == nullptr; };
      // client Field Functions 
      bool hasClient() const { return this->client_ != nullptr;};
      void deleteClient() { this->client_ = nullptr;};
      inline const vector<Clients::Client> & getClient() const { DARABONBA_PTR_GET_CONST(client_, vector<Clients::Client>) };
      inline vector<Clients::Client> getClient() { DARABONBA_PTR_GET(client_, vector<Clients::Client>) };
      inline Clients& setClient(const vector<Clients::Client> & client) { DARABONBA_PTR_SET_VALUE(client_, client) };
      inline Clients& setClient(vector<Clients::Client> && client) { DARABONBA_PTR_SET_RVALUE(client_, client) };


    protected:
      shared_ptr<vector<Clients::Client>> client_ {};
    };

    virtual bool empty() const override { return this->clients_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // clients Field Functions 
    bool hasClients() const { return this->clients_ != nullptr;};
    void deleteClients() { this->clients_ = nullptr;};
    inline const DescribeMountedClientsResponseBody::Clients & getClients() const { DARABONBA_PTR_GET_CONST(clients_, DescribeMountedClientsResponseBody::Clients) };
    inline DescribeMountedClientsResponseBody::Clients getClients() { DARABONBA_PTR_GET(clients_, DescribeMountedClientsResponseBody::Clients) };
    inline DescribeMountedClientsResponseBody& setClients(const DescribeMountedClientsResponseBody::Clients & clients) { DARABONBA_PTR_SET_VALUE(clients_, clients) };
    inline DescribeMountedClientsResponseBody& setClients(DescribeMountedClientsResponseBody::Clients && clients) { DARABONBA_PTR_SET_RVALUE(clients_, clients) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeMountedClientsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMountedClientsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMountedClientsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeMountedClientsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried clients.
    shared_ptr<DescribeMountedClientsResponseBody::Clients> clients_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of IP addresses returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of IP addresses.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
