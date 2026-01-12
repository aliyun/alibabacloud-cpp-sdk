// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATADOWNLOADURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATADOWNLOADURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDataDownloadURLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataDownloadURLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataDownloadURLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDataDownloadURLResponseBody() = default ;
    DescribeDataDownloadURLResponseBody(const DescribeDataDownloadURLResponseBody &) = default ;
    DescribeDataDownloadURLResponseBody(DescribeDataDownloadURLResponseBody &&) = default ;
    DescribeDataDownloadURLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataDownloadURLResponseBody() = default ;
    DescribeDataDownloadURLResponseBody& operator=(const DescribeDataDownloadURLResponseBody &) = default ;
    DescribeDataDownloadURLResponseBody& operator=(DescribeDataDownloadURLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(ServerList, serverList_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(ServerList, serverList_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
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
      class ServerList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServerList& obj) { 
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, ServerList& obj) { 
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        ServerList() = default ;
        ServerList(const ServerList &) = default ;
        ServerList(ServerList &&) = default ;
        ServerList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ServerList() = default ;
        ServerList& operator=(const ServerList &) = default ;
        ServerList& operator=(ServerList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->host_ == nullptr
        && this->regionId_ == nullptr; };
        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline ServerList& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ServerList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The host address of the file server.
        shared_ptr<string> host_ {};
        // The ID of the Edge Node Service (ENS) node.
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->expireTime_ == nullptr
        && this->serverList_ == nullptr && this->url_ == nullptr; };
      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Data& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // serverList Field Functions 
      bool hasServerList() const { return this->serverList_ != nullptr;};
      void deleteServerList() { this->serverList_ = nullptr;};
      inline const vector<Data::ServerList> & getServerList() const { DARABONBA_PTR_GET_CONST(serverList_, vector<Data::ServerList>) };
      inline vector<Data::ServerList> getServerList() { DARABONBA_PTR_GET(serverList_, vector<Data::ServerList>) };
      inline Data& setServerList(const vector<Data::ServerList> & serverList) { DARABONBA_PTR_SET_VALUE(serverList_, serverList) };
      inline Data& setServerList(vector<Data::ServerList> && serverList) { DARABONBA_PTR_SET_RVALUE(serverList_, serverList) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Data& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The time when the data file expires. The time is displayed in UTC.
      shared_ptr<string> expireTime_ {};
      // The file servers.
      shared_ptr<vector<Data::ServerList>> serverList_ {};
      // The download URL of the data file.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline DescribeDataDownloadURLResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDataDownloadURLResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDataDownloadURLResponseBody::Data) };
    inline DescribeDataDownloadURLResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDataDownloadURLResponseBody::Data) };
    inline DescribeDataDownloadURLResponseBody& setData(const DescribeDataDownloadURLResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDataDownloadURLResponseBody& setData(DescribeDataDownloadURLResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDataDownloadURLResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataDownloadURLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code.
    shared_ptr<int64_t> code_ {};
    // The download URLs of data files.
    shared_ptr<DescribeDataDownloadURLResponseBody::Data> data_ {};
    // The response message. Success is returned for a successful request.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
