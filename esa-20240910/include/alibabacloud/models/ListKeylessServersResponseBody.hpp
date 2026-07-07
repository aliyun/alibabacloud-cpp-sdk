// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKEYLESSSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKEYLESSSERVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListKeylessServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKeylessServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListKeylessServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListKeylessServersResponseBody() = default ;
    ListKeylessServersResponseBody(const ListKeylessServersResponseBody &) = default ;
    ListKeylessServersResponseBody(ListKeylessServersResponseBody &&) = default ;
    ListKeylessServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKeylessServersResponseBody() = default ;
    ListKeylessServersResponseBody& operator=(const ListKeylessServersResponseBody &) = default ;
    ListKeylessServersResponseBody& operator=(ListKeylessServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CaCertificate, caCertificate_);
        DARABONBA_PTR_TO_JSON(ClientCertificate, clientCertificate_);
        DARABONBA_PTR_TO_JSON(ClientPrivateKey, clientPrivateKey_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(Verify, verify_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CaCertificate, caCertificate_);
        DARABONBA_PTR_FROM_JSON(ClientCertificate, clientCertificate_);
        DARABONBA_PTR_FROM_JSON(ClientPrivateKey, clientPrivateKey_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Host, host_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(Verify, verify_);
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
      virtual bool empty() const override { return this->caCertificate_ == nullptr
        && this->clientCertificate_ == nullptr && this->clientPrivateKey_ == nullptr && this->createTime_ == nullptr && this->host_ == nullptr && this->id_ == nullptr
        && this->name_ == nullptr && this->port_ == nullptr && this->updateTime_ == nullptr && this->verify_ == nullptr; };
      // caCertificate Field Functions 
      bool hasCaCertificate() const { return this->caCertificate_ != nullptr;};
      void deleteCaCertificate() { this->caCertificate_ = nullptr;};
      inline string getCaCertificate() const { DARABONBA_PTR_GET_DEFAULT(caCertificate_, "") };
      inline Result& setCaCertificate(string caCertificate) { DARABONBA_PTR_SET_VALUE(caCertificate_, caCertificate) };


      // clientCertificate Field Functions 
      bool hasClientCertificate() const { return this->clientCertificate_ != nullptr;};
      void deleteClientCertificate() { this->clientCertificate_ = nullptr;};
      inline string getClientCertificate() const { DARABONBA_PTR_GET_DEFAULT(clientCertificate_, "") };
      inline Result& setClientCertificate(string clientCertificate) { DARABONBA_PTR_SET_VALUE(clientCertificate_, clientCertificate) };


      // clientPrivateKey Field Functions 
      bool hasClientPrivateKey() const { return this->clientPrivateKey_ != nullptr;};
      void deleteClientPrivateKey() { this->clientPrivateKey_ = nullptr;};
      inline string getClientPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(clientPrivateKey_, "") };
      inline Result& setClientPrivateKey(string clientPrivateKey) { DARABONBA_PTR_SET_VALUE(clientPrivateKey_, clientPrivateKey) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Result& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline Result& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Result& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int64_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
      inline Result& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Result& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // verify Field Functions 
      bool hasVerify() const { return this->verify_ != nullptr;};
      void deleteVerify() { this->verify_ = nullptr;};
      inline bool getVerify() const { DARABONBA_PTR_GET_DEFAULT(verify_, false) };
      inline Result& setVerify(bool verify) { DARABONBA_PTR_SET_VALUE(verify_, verify) };


    protected:
      // The CA certificate used to verify the Keyless server certificate. This parameter takes effect only when Verify is set to true.
      shared_ptr<string> caCertificate_ {};
      // The client certificate. This parameter must be used together with the client private key.
      shared_ptr<string> clientCertificate_ {};
      // The client private key. This parameter must be used together with the client certificate.
      shared_ptr<string> clientPrivateKey_ {};
      // The creation time. The time follows the format YYYY-MM-DDTHH:MM:SS+08:00 in the UTC/GMT time zone.
      shared_ptr<string> createTime_ {};
      // The Keyless server hostname.
      shared_ptr<string> host_ {};
      // Keyless server ID。
      shared_ptr<string> id_ {};
      // The Keyless server name.
      shared_ptr<string> name_ {};
      // The Keyless server port. Valid values: 1 to 65535.
      shared_ptr<int64_t> port_ {};
      // The update time. The time follows the format YYYY-MM-DDTHH:MM:SS+08:00 in the UTC/GMT time zone.
      shared_ptr<string> updateTime_ {};
      // Indicates whether to verify the Keyless server certificate. Default value: false.
      shared_ptr<bool> verify_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->siteId_ == nullptr && this->siteName_ == nullptr
        && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListKeylessServersResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListKeylessServersResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKeylessServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListKeylessServersResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListKeylessServersResponseBody::Result>) };
    inline vector<ListKeylessServersResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListKeylessServersResponseBody::Result>) };
    inline ListKeylessServersResponseBody& setResult(const vector<ListKeylessServersResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListKeylessServersResponseBody& setResult(vector<ListKeylessServersResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListKeylessServersResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline ListKeylessServersResponseBody& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListKeylessServersResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The page size.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The result array.
    shared_ptr<vector<ListKeylessServersResponseBody::Result>> result_ {};
    // The site ID.
    shared_ptr<int64_t> siteId_ {};
    // The site name.
    shared_ptr<string> siteName_ {};
    // The total number of records.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
