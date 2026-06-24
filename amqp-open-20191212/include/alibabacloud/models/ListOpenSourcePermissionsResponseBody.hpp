// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPENSOURCEPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPENSOURCEPERMISSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListOpenSourcePermissionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOpenSourcePermissionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListOpenSourcePermissionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListOpenSourcePermissionsResponseBody() = default ;
    ListOpenSourcePermissionsResponseBody(const ListOpenSourcePermissionsResponseBody &) = default ;
    ListOpenSourcePermissionsResponseBody(ListOpenSourcePermissionsResponseBody &&) = default ;
    ListOpenSourcePermissionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOpenSourcePermissionsResponseBody() = default ;
    ListOpenSourcePermissionsResponseBody& operator=(const ListOpenSourcePermissionsResponseBody &) = default ;
    ListOpenSourcePermissionsResponseBody& operator=(ListOpenSourcePermissionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunUserId, aliyunUserId_);
        DARABONBA_PTR_TO_JSON(CInstanceId, CInstanceId_);
        DARABONBA_PTR_TO_JSON(Configure, configure_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Read, read_);
        DARABONBA_PTR_TO_JSON(Vhost, vhost_);
        DARABONBA_PTR_TO_JSON(Write, write_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunUserId, aliyunUserId_);
        DARABONBA_PTR_FROM_JSON(CInstanceId, CInstanceId_);
        DARABONBA_PTR_FROM_JSON(Configure, configure_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Read, read_);
        DARABONBA_PTR_FROM_JSON(Vhost, vhost_);
        DARABONBA_PTR_FROM_JSON(Write, write_);
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
      virtual bool empty() const override { return this->aliyunUserId_ == nullptr
        && this->CInstanceId_ == nullptr && this->configure_ == nullptr && this->name_ == nullptr && this->read_ == nullptr && this->vhost_ == nullptr
        && this->write_ == nullptr; };
      // aliyunUserId Field Functions 
      bool hasAliyunUserId() const { return this->aliyunUserId_ != nullptr;};
      void deleteAliyunUserId() { this->aliyunUserId_ = nullptr;};
      inline int64_t getAliyunUserId() const { DARABONBA_PTR_GET_DEFAULT(aliyunUserId_, 0L) };
      inline Data& setAliyunUserId(int64_t aliyunUserId) { DARABONBA_PTR_SET_VALUE(aliyunUserId_, aliyunUserId) };


      // CInstanceId Field Functions 
      bool hasCInstanceId() const { return this->CInstanceId_ != nullptr;};
      void deleteCInstanceId() { this->CInstanceId_ = nullptr;};
      inline string getCInstanceId() const { DARABONBA_PTR_GET_DEFAULT(CInstanceId_, "") };
      inline Data& setCInstanceId(string CInstanceId) { DARABONBA_PTR_SET_VALUE(CInstanceId_, CInstanceId) };


      // configure Field Functions 
      bool hasConfigure() const { return this->configure_ != nullptr;};
      void deleteConfigure() { this->configure_ = nullptr;};
      inline string getConfigure() const { DARABONBA_PTR_GET_DEFAULT(configure_, "") };
      inline Data& setConfigure(string configure) { DARABONBA_PTR_SET_VALUE(configure_, configure) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // read Field Functions 
      bool hasRead() const { return this->read_ != nullptr;};
      void deleteRead() { this->read_ = nullptr;};
      inline string getRead() const { DARABONBA_PTR_GET_DEFAULT(read_, "") };
      inline Data& setRead(string read) { DARABONBA_PTR_SET_VALUE(read_, read) };


      // vhost Field Functions 
      bool hasVhost() const { return this->vhost_ != nullptr;};
      void deleteVhost() { this->vhost_ = nullptr;};
      inline string getVhost() const { DARABONBA_PTR_GET_DEFAULT(vhost_, "") };
      inline Data& setVhost(string vhost) { DARABONBA_PTR_SET_VALUE(vhost_, vhost) };


      // write Field Functions 
      bool hasWrite() const { return this->write_ != nullptr;};
      void deleteWrite() { this->write_ = nullptr;};
      inline string getWrite() const { DARABONBA_PTR_GET_DEFAULT(write_, "") };
      inline Data& setWrite(string write) { DARABONBA_PTR_SET_VALUE(write_, write) };


    protected:
      // The Alibaba Cloud UID.
      shared_ptr<int64_t> aliyunUserId_ {};
      // The instance ID.
      shared_ptr<string> CInstanceId_ {};
      // The regular expression for configure permissions.
      shared_ptr<string> configure_ {};
      // The username.
      shared_ptr<string> name_ {};
      // The regular expression for read permissions.
      shared_ptr<string> read_ {};
      // The vhost name.
      shared_ptr<string> vhost_ {};
      // The regular expression for write permissions.
      shared_ptr<string> write_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListOpenSourcePermissionsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListOpenSourcePermissionsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListOpenSourcePermissionsResponseBody::Data>) };
    inline vector<ListOpenSourcePermissionsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListOpenSourcePermissionsResponseBody::Data>) };
    inline ListOpenSourcePermissionsResponseBody& setData(const vector<ListOpenSourcePermissionsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListOpenSourcePermissionsResponseBody& setData(vector<ListOpenSourcePermissionsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListOpenSourcePermissionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListOpenSourcePermissionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOpenSourcePermissionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOpenSourcePermissionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListOpenSourcePermissionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The return code. A value of 200 indicates success.
    shared_ptr<int32_t> code_ {};
    // The returned data.
    shared_ptr<vector<ListOpenSourcePermissionsResponseBody::Data>> data_ {};
    // The maximum number of results to return.
    shared_ptr<int32_t> maxResults_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The token for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
