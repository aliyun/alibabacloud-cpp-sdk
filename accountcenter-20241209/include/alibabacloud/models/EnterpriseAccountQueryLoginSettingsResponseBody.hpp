// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTQUERYLOGINSETTINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTQUERYLOGINSETTINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseAccountQueryLoginSettingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseAccountQueryLoginSettingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseAccountQueryLoginSettingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    EnterpriseAccountQueryLoginSettingsResponseBody() = default ;
    EnterpriseAccountQueryLoginSettingsResponseBody(const EnterpriseAccountQueryLoginSettingsResponseBody &) = default ;
    EnterpriseAccountQueryLoginSettingsResponseBody(EnterpriseAccountQueryLoginSettingsResponseBody &&) = default ;
    EnterpriseAccountQueryLoginSettingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseAccountQueryLoginSettingsResponseBody() = default ;
    EnterpriseAccountQueryLoginSettingsResponseBody& operator=(const EnterpriseAccountQueryLoginSettingsResponseBody &) = default ;
    EnterpriseAccountQueryLoginSettingsResponseBody& operator=(EnterpriseAccountQueryLoginSettingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(IpMaskDto, ipMaskDto_);
        DARABONBA_PTR_TO_JSON(MfaBindStatus, mfaBindStatus_);
        DARABONBA_PTR_TO_JSON(RiskControlDto, riskControlDto_);
        DARABONBA_PTR_TO_JSON(SecurityMobileLoginStatus, securityMobileLoginStatus_);
        DARABONBA_PTR_TO_JSON(SessionExpireTime, sessionExpireTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(IpMaskDto, ipMaskDto_);
        DARABONBA_PTR_FROM_JSON(MfaBindStatus, mfaBindStatus_);
        DARABONBA_PTR_FROM_JSON(RiskControlDto, riskControlDto_);
        DARABONBA_PTR_FROM_JSON(SecurityMobileLoginStatus, securityMobileLoginStatus_);
        DARABONBA_PTR_FROM_JSON(SessionExpireTime, sessionExpireTime_);
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
      class RiskControlDto : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RiskControlDto& obj) { 
          DARABONBA_PTR_TO_JSON(ProtectLevel, protectLevel_);
          DARABONBA_PTR_TO_JSON(RiskControlEnabled, riskControlEnabled_);
          DARABONBA_PTR_TO_JSON(VerifyDetail, verifyDetail_);
          DARABONBA_PTR_TO_JSON(VerifyType, verifyType_);
        };
        friend void from_json(const Darabonba::Json& j, RiskControlDto& obj) { 
          DARABONBA_PTR_FROM_JSON(ProtectLevel, protectLevel_);
          DARABONBA_PTR_FROM_JSON(RiskControlEnabled, riskControlEnabled_);
          DARABONBA_PTR_FROM_JSON(VerifyDetail, verifyDetail_);
          DARABONBA_PTR_FROM_JSON(VerifyType, verifyType_);
        };
        RiskControlDto() = default ;
        RiskControlDto(const RiskControlDto &) = default ;
        RiskControlDto(RiskControlDto &&) = default ;
        RiskControlDto(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RiskControlDto() = default ;
        RiskControlDto& operator=(const RiskControlDto &) = default ;
        RiskControlDto& operator=(RiskControlDto &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->protectLevel_ == nullptr
        && this->riskControlEnabled_ == nullptr && this->verifyDetail_ == nullptr && this->verifyType_ == nullptr; };
        // protectLevel Field Functions 
        bool hasProtectLevel() const { return this->protectLevel_ != nullptr;};
        void deleteProtectLevel() { this->protectLevel_ = nullptr;};
        inline string getProtectLevel() const { DARABONBA_PTR_GET_DEFAULT(protectLevel_, "") };
        inline RiskControlDto& setProtectLevel(string protectLevel) { DARABONBA_PTR_SET_VALUE(protectLevel_, protectLevel) };


        // riskControlEnabled Field Functions 
        bool hasRiskControlEnabled() const { return this->riskControlEnabled_ != nullptr;};
        void deleteRiskControlEnabled() { this->riskControlEnabled_ = nullptr;};
        inline bool getRiskControlEnabled() const { DARABONBA_PTR_GET_DEFAULT(riskControlEnabled_, false) };
        inline RiskControlDto& setRiskControlEnabled(bool riskControlEnabled) { DARABONBA_PTR_SET_VALUE(riskControlEnabled_, riskControlEnabled) };


        // verifyDetail Field Functions 
        bool hasVerifyDetail() const { return this->verifyDetail_ != nullptr;};
        void deleteVerifyDetail() { this->verifyDetail_ = nullptr;};
        inline string getVerifyDetail() const { DARABONBA_PTR_GET_DEFAULT(verifyDetail_, "") };
        inline RiskControlDto& setVerifyDetail(string verifyDetail) { DARABONBA_PTR_SET_VALUE(verifyDetail_, verifyDetail) };


        // verifyType Field Functions 
        bool hasVerifyType() const { return this->verifyType_ != nullptr;};
        void deleteVerifyType() { this->verifyType_ = nullptr;};
        inline string getVerifyType() const { DARABONBA_PTR_GET_DEFAULT(verifyType_, "") };
        inline RiskControlDto& setVerifyType(string verifyType) { DARABONBA_PTR_SET_VALUE(verifyType_, verifyType) };


      protected:
        shared_ptr<string> protectLevel_ {};
        shared_ptr<bool> riskControlEnabled_ {};
        shared_ptr<string> verifyDetail_ {};
        shared_ptr<string> verifyType_ {};
      };

      class IpMaskDto : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpMaskDto& obj) { 
          DARABONBA_PTR_TO_JSON(IpMaskEnabledStatus, ipMaskEnabledStatus_);
          DARABONBA_PTR_TO_JSON(IpMasks, ipMasks_);
        };
        friend void from_json(const Darabonba::Json& j, IpMaskDto& obj) { 
          DARABONBA_PTR_FROM_JSON(IpMaskEnabledStatus, ipMaskEnabledStatus_);
          DARABONBA_PTR_FROM_JSON(IpMasks, ipMasks_);
        };
        IpMaskDto() = default ;
        IpMaskDto(const IpMaskDto &) = default ;
        IpMaskDto(IpMaskDto &&) = default ;
        IpMaskDto(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpMaskDto() = default ;
        IpMaskDto& operator=(const IpMaskDto &) = default ;
        IpMaskDto& operator=(IpMaskDto &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ipMaskEnabledStatus_ == nullptr
        && this->ipMasks_ == nullptr; };
        // ipMaskEnabledStatus Field Functions 
        bool hasIpMaskEnabledStatus() const { return this->ipMaskEnabledStatus_ != nullptr;};
        void deleteIpMaskEnabledStatus() { this->ipMaskEnabledStatus_ = nullptr;};
        inline string getIpMaskEnabledStatus() const { DARABONBA_PTR_GET_DEFAULT(ipMaskEnabledStatus_, "") };
        inline IpMaskDto& setIpMaskEnabledStatus(string ipMaskEnabledStatus) { DARABONBA_PTR_SET_VALUE(ipMaskEnabledStatus_, ipMaskEnabledStatus) };


        // ipMasks Field Functions 
        bool hasIpMasks() const { return this->ipMasks_ != nullptr;};
        void deleteIpMasks() { this->ipMasks_ = nullptr;};
        inline const vector<string> & getIpMasks() const { DARABONBA_PTR_GET_CONST(ipMasks_, vector<string>) };
        inline vector<string> getIpMasks() { DARABONBA_PTR_GET(ipMasks_, vector<string>) };
        inline IpMaskDto& setIpMasks(const vector<string> & ipMasks) { DARABONBA_PTR_SET_VALUE(ipMasks_, ipMasks) };
        inline IpMaskDto& setIpMasks(vector<string> && ipMasks) { DARABONBA_PTR_SET_RVALUE(ipMasks_, ipMasks) };


      protected:
        shared_ptr<string> ipMaskEnabledStatus_ {};
        shared_ptr<vector<string>> ipMasks_ {};
      };

      virtual bool empty() const override { return this->ipMaskDto_ == nullptr
        && this->mfaBindStatus_ == nullptr && this->riskControlDto_ == nullptr && this->securityMobileLoginStatus_ == nullptr && this->sessionExpireTime_ == nullptr; };
      // ipMaskDto Field Functions 
      bool hasIpMaskDto() const { return this->ipMaskDto_ != nullptr;};
      void deleteIpMaskDto() { this->ipMaskDto_ = nullptr;};
      inline const Data::IpMaskDto & getIpMaskDto() const { DARABONBA_PTR_GET_CONST(ipMaskDto_, Data::IpMaskDto) };
      inline Data::IpMaskDto getIpMaskDto() { DARABONBA_PTR_GET(ipMaskDto_, Data::IpMaskDto) };
      inline Data& setIpMaskDto(const Data::IpMaskDto & ipMaskDto) { DARABONBA_PTR_SET_VALUE(ipMaskDto_, ipMaskDto) };
      inline Data& setIpMaskDto(Data::IpMaskDto && ipMaskDto) { DARABONBA_PTR_SET_RVALUE(ipMaskDto_, ipMaskDto) };


      // mfaBindStatus Field Functions 
      bool hasMfaBindStatus() const { return this->mfaBindStatus_ != nullptr;};
      void deleteMfaBindStatus() { this->mfaBindStatus_ = nullptr;};
      inline string getMfaBindStatus() const { DARABONBA_PTR_GET_DEFAULT(mfaBindStatus_, "") };
      inline Data& setMfaBindStatus(string mfaBindStatus) { DARABONBA_PTR_SET_VALUE(mfaBindStatus_, mfaBindStatus) };


      // riskControlDto Field Functions 
      bool hasRiskControlDto() const { return this->riskControlDto_ != nullptr;};
      void deleteRiskControlDto() { this->riskControlDto_ = nullptr;};
      inline const Data::RiskControlDto & getRiskControlDto() const { DARABONBA_PTR_GET_CONST(riskControlDto_, Data::RiskControlDto) };
      inline Data::RiskControlDto getRiskControlDto() { DARABONBA_PTR_GET(riskControlDto_, Data::RiskControlDto) };
      inline Data& setRiskControlDto(const Data::RiskControlDto & riskControlDto) { DARABONBA_PTR_SET_VALUE(riskControlDto_, riskControlDto) };
      inline Data& setRiskControlDto(Data::RiskControlDto && riskControlDto) { DARABONBA_PTR_SET_RVALUE(riskControlDto_, riskControlDto) };


      // securityMobileLoginStatus Field Functions 
      bool hasSecurityMobileLoginStatus() const { return this->securityMobileLoginStatus_ != nullptr;};
      void deleteSecurityMobileLoginStatus() { this->securityMobileLoginStatus_ = nullptr;};
      inline string getSecurityMobileLoginStatus() const { DARABONBA_PTR_GET_DEFAULT(securityMobileLoginStatus_, "") };
      inline Data& setSecurityMobileLoginStatus(string securityMobileLoginStatus) { DARABONBA_PTR_SET_VALUE(securityMobileLoginStatus_, securityMobileLoginStatus) };


      // sessionExpireTime Field Functions 
      bool hasSessionExpireTime() const { return this->sessionExpireTime_ != nullptr;};
      void deleteSessionExpireTime() { this->sessionExpireTime_ = nullptr;};
      inline int32_t getSessionExpireTime() const { DARABONBA_PTR_GET_DEFAULT(sessionExpireTime_, 0) };
      inline Data& setSessionExpireTime(int32_t sessionExpireTime) { DARABONBA_PTR_SET_VALUE(sessionExpireTime_, sessionExpireTime) };


    protected:
      shared_ptr<Data::IpMaskDto> ipMaskDto_ {};
      shared_ptr<string> mfaBindStatus_ {};
      shared_ptr<Data::RiskControlDto> riskControlDto_ {};
      shared_ptr<string> securityMobileLoginStatus_ {};
      shared_ptr<int32_t> sessionExpireTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EnterpriseAccountQueryLoginSettingsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const EnterpriseAccountQueryLoginSettingsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, EnterpriseAccountQueryLoginSettingsResponseBody::Data) };
    inline EnterpriseAccountQueryLoginSettingsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, EnterpriseAccountQueryLoginSettingsResponseBody::Data) };
    inline EnterpriseAccountQueryLoginSettingsResponseBody& setData(const EnterpriseAccountQueryLoginSettingsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline EnterpriseAccountQueryLoginSettingsResponseBody& setData(EnterpriseAccountQueryLoginSettingsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EnterpriseAccountQueryLoginSettingsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnterpriseAccountQueryLoginSettingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EnterpriseAccountQueryLoginSettingsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<EnterpriseAccountQueryLoginSettingsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
