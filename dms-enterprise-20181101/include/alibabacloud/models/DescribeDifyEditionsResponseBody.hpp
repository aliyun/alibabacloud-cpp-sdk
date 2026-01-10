// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIFYEDITIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIFYEDITIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DescribeDifyEditionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDifyEditionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDifyEditionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDifyEditionsResponseBody() = default ;
    DescribeDifyEditionsResponseBody(const DescribeDifyEditionsResponseBody &) = default ;
    DescribeDifyEditionsResponseBody(DescribeDifyEditionsResponseBody &&) = default ;
    DescribeDifyEditionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDifyEditionsResponseBody() = default ;
    DescribeDifyEditionsResponseBody& operator=(const DescribeDifyEditionsResponseBody &) = default ;
    DescribeDifyEditionsResponseBody& operator=(DescribeDifyEditionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Community, community_);
        DARABONBA_PTR_TO_JSON(Enterprise, enterprise_);
        DARABONBA_PTR_TO_JSON(OpenCommunity, openCommunity_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Community, community_);
        DARABONBA_PTR_FROM_JSON(Enterprise, enterprise_);
        DARABONBA_PTR_FROM_JSON(OpenCommunity, openCommunity_);
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
      virtual bool empty() const override { return this->community_ == nullptr
        && this->enterprise_ == nullptr && this->openCommunity_ == nullptr; };
      // community Field Functions 
      bool hasCommunity() const { return this->community_ != nullptr;};
      void deleteCommunity() { this->community_ = nullptr;};
      inline const vector<string> & getCommunity() const { DARABONBA_PTR_GET_CONST(community_, vector<string>) };
      inline vector<string> getCommunity() { DARABONBA_PTR_GET(community_, vector<string>) };
      inline Data& setCommunity(const vector<string> & community) { DARABONBA_PTR_SET_VALUE(community_, community) };
      inline Data& setCommunity(vector<string> && community) { DARABONBA_PTR_SET_RVALUE(community_, community) };


      // enterprise Field Functions 
      bool hasEnterprise() const { return this->enterprise_ != nullptr;};
      void deleteEnterprise() { this->enterprise_ = nullptr;};
      inline const vector<string> & getEnterprise() const { DARABONBA_PTR_GET_CONST(enterprise_, vector<string>) };
      inline vector<string> getEnterprise() { DARABONBA_PTR_GET(enterprise_, vector<string>) };
      inline Data& setEnterprise(const vector<string> & enterprise) { DARABONBA_PTR_SET_VALUE(enterprise_, enterprise) };
      inline Data& setEnterprise(vector<string> && enterprise) { DARABONBA_PTR_SET_RVALUE(enterprise_, enterprise) };


      // openCommunity Field Functions 
      bool hasOpenCommunity() const { return this->openCommunity_ != nullptr;};
      void deleteOpenCommunity() { this->openCommunity_ = nullptr;};
      inline const vector<string> & getOpenCommunity() const { DARABONBA_PTR_GET_CONST(openCommunity_, vector<string>) };
      inline vector<string> getOpenCommunity() { DARABONBA_PTR_GET(openCommunity_, vector<string>) };
      inline Data& setOpenCommunity(const vector<string> & openCommunity) { DARABONBA_PTR_SET_VALUE(openCommunity_, openCommunity) };
      inline Data& setOpenCommunity(vector<string> && openCommunity) { DARABONBA_PTR_SET_RVALUE(openCommunity_, openCommunity) };


    protected:
      shared_ptr<vector<string>> community_ {};
      shared_ptr<vector<string>> enterprise_ {};
      shared_ptr<vector<string>> openCommunity_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeDifyEditionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDifyEditionsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDifyEditionsResponseBody::Data) };
    inline DescribeDifyEditionsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDifyEditionsResponseBody::Data) };
    inline DescribeDifyEditionsResponseBody& setData(const DescribeDifyEditionsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDifyEditionsResponseBody& setData(DescribeDifyEditionsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeDifyEditionsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeDifyEditionsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDifyEditionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDifyEditionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDifyEditionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<DescribeDifyEditionsResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
