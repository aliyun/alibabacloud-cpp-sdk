// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class ListGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListGatewayResponseBody() = default ;
    ListGatewayResponseBody(const ListGatewayResponseBody &) = default ;
    ListGatewayResponseBody(ListGatewayResponseBody &&) = default ;
    ListGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayResponseBody() = default ;
    ListGatewayResponseBody& operator=(const ListGatewayResponseBody &) = default ;
    ListGatewayResponseBody& operator=(ListGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EnablePublicNet, enablePublicNet_);
        DARABONBA_PTR_TO_JSON(FeNodeNumber, feNodeNumber_);
        DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(GatewayName, gatewayName_);
        DARABONBA_PTR_TO_JSON(GatewayType, gatewayType_);
        DARABONBA_PTR_TO_JSON(InternalDomain, internalDomain_);
        DARABONBA_PTR_TO_JSON(InternalSlbId, internalSlbId_);
        DARABONBA_PTR_TO_JSON(PrivatezoneId, privatezoneId_);
        DARABONBA_PTR_TO_JSON(PublicDomain, publicDomain_);
        DARABONBA_PTR_TO_JSON(PublicSlbAclId, publicSlbAclId_);
        DARABONBA_PTR_TO_JSON(PublicSlbId, publicSlbId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EnablePublicNet, enablePublicNet_);
        DARABONBA_PTR_FROM_JSON(FeNodeNumber, feNodeNumber_);
        DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(GatewayName, gatewayName_);
        DARABONBA_PTR_FROM_JSON(GatewayType, gatewayType_);
        DARABONBA_PTR_FROM_JSON(InternalDomain, internalDomain_);
        DARABONBA_PTR_FROM_JSON(InternalSlbId, internalSlbId_);
        DARABONBA_PTR_FROM_JSON(PrivatezoneId, privatezoneId_);
        DARABONBA_PTR_FROM_JSON(PublicDomain, publicDomain_);
        DARABONBA_PTR_FROM_JSON(PublicSlbAclId, publicSlbAclId_);
        DARABONBA_PTR_FROM_JSON(PublicSlbId, publicSlbId_);
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
      virtual bool empty() const override { return this->enablePublicNet_ == nullptr
        && this->feNodeNumber_ == nullptr && this->gatewayId_ == nullptr && this->gatewayName_ == nullptr && this->gatewayType_ == nullptr && this->internalDomain_ == nullptr
        && this->internalSlbId_ == nullptr && this->privatezoneId_ == nullptr && this->publicDomain_ == nullptr && this->publicSlbAclId_ == nullptr && this->publicSlbId_ == nullptr; };
      // enablePublicNet Field Functions 
      bool hasEnablePublicNet() const { return this->enablePublicNet_ != nullptr;};
      void deleteEnablePublicNet() { this->enablePublicNet_ = nullptr;};
      inline bool getEnablePublicNet() const { DARABONBA_PTR_GET_DEFAULT(enablePublicNet_, false) };
      inline Data& setEnablePublicNet(bool enablePublicNet) { DARABONBA_PTR_SET_VALUE(enablePublicNet_, enablePublicNet) };


      // feNodeNumber Field Functions 
      bool hasFeNodeNumber() const { return this->feNodeNumber_ != nullptr;};
      void deleteFeNodeNumber() { this->feNodeNumber_ = nullptr;};
      inline int32_t getFeNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(feNodeNumber_, 0) };
      inline Data& setFeNodeNumber(int32_t feNodeNumber) { DARABONBA_PTR_SET_VALUE(feNodeNumber_, feNodeNumber) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Data& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // gatewayName Field Functions 
      bool hasGatewayName() const { return this->gatewayName_ != nullptr;};
      void deleteGatewayName() { this->gatewayName_ = nullptr;};
      inline string getGatewayName() const { DARABONBA_PTR_GET_DEFAULT(gatewayName_, "") };
      inline Data& setGatewayName(string gatewayName) { DARABONBA_PTR_SET_VALUE(gatewayName_, gatewayName) };


      // gatewayType Field Functions 
      bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
      void deleteGatewayType() { this->gatewayType_ = nullptr;};
      inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
      inline Data& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


      // internalDomain Field Functions 
      bool hasInternalDomain() const { return this->internalDomain_ != nullptr;};
      void deleteInternalDomain() { this->internalDomain_ = nullptr;};
      inline string getInternalDomain() const { DARABONBA_PTR_GET_DEFAULT(internalDomain_, "") };
      inline Data& setInternalDomain(string internalDomain) { DARABONBA_PTR_SET_VALUE(internalDomain_, internalDomain) };


      // internalSlbId Field Functions 
      bool hasInternalSlbId() const { return this->internalSlbId_ != nullptr;};
      void deleteInternalSlbId() { this->internalSlbId_ = nullptr;};
      inline string getInternalSlbId() const { DARABONBA_PTR_GET_DEFAULT(internalSlbId_, "") };
      inline Data& setInternalSlbId(string internalSlbId) { DARABONBA_PTR_SET_VALUE(internalSlbId_, internalSlbId) };


      // privatezoneId Field Functions 
      bool hasPrivatezoneId() const { return this->privatezoneId_ != nullptr;};
      void deletePrivatezoneId() { this->privatezoneId_ = nullptr;};
      inline string getPrivatezoneId() const { DARABONBA_PTR_GET_DEFAULT(privatezoneId_, "") };
      inline Data& setPrivatezoneId(string privatezoneId) { DARABONBA_PTR_SET_VALUE(privatezoneId_, privatezoneId) };


      // publicDomain Field Functions 
      bool hasPublicDomain() const { return this->publicDomain_ != nullptr;};
      void deletePublicDomain() { this->publicDomain_ = nullptr;};
      inline string getPublicDomain() const { DARABONBA_PTR_GET_DEFAULT(publicDomain_, "") };
      inline Data& setPublicDomain(string publicDomain) { DARABONBA_PTR_SET_VALUE(publicDomain_, publicDomain) };


      // publicSlbAclId Field Functions 
      bool hasPublicSlbAclId() const { return this->publicSlbAclId_ != nullptr;};
      void deletePublicSlbAclId() { this->publicSlbAclId_ = nullptr;};
      inline string getPublicSlbAclId() const { DARABONBA_PTR_GET_DEFAULT(publicSlbAclId_, "") };
      inline Data& setPublicSlbAclId(string publicSlbAclId) { DARABONBA_PTR_SET_VALUE(publicSlbAclId_, publicSlbAclId) };


      // publicSlbId Field Functions 
      bool hasPublicSlbId() const { return this->publicSlbId_ != nullptr;};
      void deletePublicSlbId() { this->publicSlbId_ = nullptr;};
      inline string getPublicSlbId() const { DARABONBA_PTR_GET_DEFAULT(publicSlbId_, "") };
      inline Data& setPublicSlbId(string publicSlbId) { DARABONBA_PTR_SET_VALUE(publicSlbId_, publicSlbId) };


    protected:
      shared_ptr<bool> enablePublicNet_ {};
      shared_ptr<int32_t> feNodeNumber_ {};
      shared_ptr<string> gatewayId_ {};
      shared_ptr<string> gatewayName_ {};
      shared_ptr<string> gatewayType_ {};
      shared_ptr<string> internalDomain_ {};
      shared_ptr<string> internalSlbId_ {};
      // PrivatezoneId
      shared_ptr<string> privatezoneId_ {};
      shared_ptr<string> publicDomain_ {};
      shared_ptr<string> publicSlbAclId_ {};
      shared_ptr<string> publicSlbId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListGatewayResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListGatewayResponseBody::Data>) };
    inline vector<ListGatewayResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListGatewayResponseBody::Data>) };
    inline ListGatewayResponseBody& setData(const vector<ListGatewayResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGatewayResponseBody& setData(vector<ListGatewayResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ListGatewayResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ListGatewayResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListGatewayResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListGatewayResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<ListGatewayResponseBody::Data>> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
