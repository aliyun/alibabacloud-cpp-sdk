// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPGATEWAYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPGATEWAYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeEipGatewayInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipGatewayInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EipInfos, eipInfos_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipGatewayInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EipInfos, eipInfos_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEipGatewayInfoResponseBody() = default ;
    DescribeEipGatewayInfoResponseBody(const DescribeEipGatewayInfoResponseBody &) = default ;
    DescribeEipGatewayInfoResponseBody(DescribeEipGatewayInfoResponseBody &&) = default ;
    DescribeEipGatewayInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEipGatewayInfoResponseBody() = default ;
    DescribeEipGatewayInfoResponseBody& operator=(const DescribeEipGatewayInfoResponseBody &) = default ;
    DescribeEipGatewayInfoResponseBody& operator=(DescribeEipGatewayInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EipInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EipInfos& obj) { 
        DARABONBA_PTR_TO_JSON(EipInfo, eipInfo_);
      };
      friend void from_json(const Darabonba::Json& j, EipInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(EipInfo, eipInfo_);
      };
      EipInfos() = default ;
      EipInfos(const EipInfos &) = default ;
      EipInfos(EipInfos &&) = default ;
      EipInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EipInfos() = default ;
      EipInfos& operator=(const EipInfos &) = default ;
      EipInfos& operator=(EipInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EipInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EipInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(IpGw, ipGw_);
          DARABONBA_PTR_TO_JSON(IpMask, ipMask_);
        };
        friend void from_json(const Darabonba::Json& j, EipInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(IpGw, ipGw_);
          DARABONBA_PTR_FROM_JSON(IpMask, ipMask_);
        };
        EipInfo() = default ;
        EipInfo(const EipInfo &) = default ;
        EipInfo(EipInfo &&) = default ;
        EipInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EipInfo() = default ;
        EipInfo& operator=(const EipInfo &) = default ;
        EipInfo& operator=(EipInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ip_ == nullptr
        && this->ipGw_ == nullptr && this->ipMask_ == nullptr; };
        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline EipInfo& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // ipGw Field Functions 
        bool hasIpGw() const { return this->ipGw_ != nullptr;};
        void deleteIpGw() { this->ipGw_ = nullptr;};
        inline string getIpGw() const { DARABONBA_PTR_GET_DEFAULT(ipGw_, "") };
        inline EipInfo& setIpGw(string ipGw) { DARABONBA_PTR_SET_VALUE(ipGw_, ipGw) };


        // ipMask Field Functions 
        bool hasIpMask() const { return this->ipMask_ != nullptr;};
        void deleteIpMask() { this->ipMask_ = nullptr;};
        inline string getIpMask() const { DARABONBA_PTR_GET_DEFAULT(ipMask_, "") };
        inline EipInfo& setIpMask(string ipMask) { DARABONBA_PTR_SET_VALUE(ipMask_, ipMask) };


      protected:
        // The IP address of the EIP.
        shared_ptr<string> ip_ {};
        // The IP address of the gateway that is associated with the EIP.
        shared_ptr<string> ipGw_ {};
        // The subnet mask of the EIP.
        shared_ptr<string> ipMask_ {};
      };

      virtual bool empty() const override { return this->eipInfo_ == nullptr; };
      // eipInfo Field Functions 
      bool hasEipInfo() const { return this->eipInfo_ != nullptr;};
      void deleteEipInfo() { this->eipInfo_ = nullptr;};
      inline const vector<EipInfos::EipInfo> & getEipInfo() const { DARABONBA_PTR_GET_CONST(eipInfo_, vector<EipInfos::EipInfo>) };
      inline vector<EipInfos::EipInfo> getEipInfo() { DARABONBA_PTR_GET(eipInfo_, vector<EipInfos::EipInfo>) };
      inline EipInfos& setEipInfo(const vector<EipInfos::EipInfo> & eipInfo) { DARABONBA_PTR_SET_VALUE(eipInfo_, eipInfo) };
      inline EipInfos& setEipInfo(vector<EipInfos::EipInfo> && eipInfo) { DARABONBA_PTR_SET_RVALUE(eipInfo_, eipInfo) };


    protected:
      shared_ptr<vector<EipInfos::EipInfo>> eipInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->eipInfos_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeEipGatewayInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // eipInfos Field Functions 
    bool hasEipInfos() const { return this->eipInfos_ != nullptr;};
    void deleteEipInfos() { this->eipInfos_ = nullptr;};
    inline const DescribeEipGatewayInfoResponseBody::EipInfos & getEipInfos() const { DARABONBA_PTR_GET_CONST(eipInfos_, DescribeEipGatewayInfoResponseBody::EipInfos) };
    inline DescribeEipGatewayInfoResponseBody::EipInfos getEipInfos() { DARABONBA_PTR_GET(eipInfos_, DescribeEipGatewayInfoResponseBody::EipInfos) };
    inline DescribeEipGatewayInfoResponseBody& setEipInfos(const DescribeEipGatewayInfoResponseBody::EipInfos & eipInfos) { DARABONBA_PTR_SET_VALUE(eipInfos_, eipInfos) };
    inline DescribeEipGatewayInfoResponseBody& setEipInfos(DescribeEipGatewayInfoResponseBody::EipInfos && eipInfos) { DARABONBA_PTR_SET_RVALUE(eipInfos_, eipInfos) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeEipGatewayInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEipGatewayInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code of the operation.
    shared_ptr<string> code_ {};
    // The detailed information about the EIP.
    shared_ptr<DescribeEipGatewayInfoResponseBody::EipInfos> eipInfos_ {};
    // The result of the operation.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
