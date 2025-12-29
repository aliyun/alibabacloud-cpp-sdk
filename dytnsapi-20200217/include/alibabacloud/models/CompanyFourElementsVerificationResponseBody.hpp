// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPANYFOURELEMENTSVERIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COMPANYFOURELEMENTSVERIFICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class CompanyFourElementsVerificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompanyFourElementsVerificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CompanyFourElementsVerificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CompanyFourElementsVerificationResponseBody() = default ;
    CompanyFourElementsVerificationResponseBody(const CompanyFourElementsVerificationResponseBody &) = default ;
    CompanyFourElementsVerificationResponseBody(CompanyFourElementsVerificationResponseBody &&) = default ;
    CompanyFourElementsVerificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompanyFourElementsVerificationResponseBody() = default ;
    CompanyFourElementsVerificationResponseBody& operator=(const CompanyFourElementsVerificationResponseBody &) = default ;
    CompanyFourElementsVerificationResponseBody& operator=(CompanyFourElementsVerificationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DetailInfo, detailInfo_);
        DARABONBA_PTR_TO_JSON(InconsistentData, inconsistentData_);
        DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
        DARABONBA_PTR_TO_JSON(VerifyResult, verifyResult_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DetailInfo, detailInfo_);
        DARABONBA_PTR_FROM_JSON(InconsistentData, inconsistentData_);
        DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
        DARABONBA_PTR_FROM_JSON(VerifyResult, verifyResult_);
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
      class DetailInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DetailInfo& obj) { 
          DARABONBA_PTR_TO_JSON(EnterpriseStatus, enterpriseStatus_);
          DARABONBA_PTR_TO_JSON(OpenTime, openTime_);
        };
        friend void from_json(const Darabonba::Json& j, DetailInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(EnterpriseStatus, enterpriseStatus_);
          DARABONBA_PTR_FROM_JSON(OpenTime, openTime_);
        };
        DetailInfo() = default ;
        DetailInfo(const DetailInfo &) = default ;
        DetailInfo(DetailInfo &&) = default ;
        DetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DetailInfo() = default ;
        DetailInfo& operator=(const DetailInfo &) = default ;
        DetailInfo& operator=(DetailInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enterpriseStatus_ == nullptr
        && this->openTime_ == nullptr; };
        // enterpriseStatus Field Functions 
        bool hasEnterpriseStatus() const { return this->enterpriseStatus_ != nullptr;};
        void deleteEnterpriseStatus() { this->enterpriseStatus_ = nullptr;};
        inline string getEnterpriseStatus() const { DARABONBA_PTR_GET_DEFAULT(enterpriseStatus_, "") };
        inline DetailInfo& setEnterpriseStatus(string enterpriseStatus) { DARABONBA_PTR_SET_VALUE(enterpriseStatus_, enterpriseStatus) };


        // openTime Field Functions 
        bool hasOpenTime() const { return this->openTime_ != nullptr;};
        void deleteOpenTime() { this->openTime_ = nullptr;};
        inline string getOpenTime() const { DARABONBA_PTR_GET_DEFAULT(openTime_, "") };
        inline DetailInfo& setOpenTime(string openTime) { DARABONBA_PTR_SET_VALUE(openTime_, openTime) };


      protected:
        // The business status of the enterprise.
        shared_ptr<string> enterpriseStatus_ {};
        // The business term of the enterprise.
        shared_ptr<string> openTime_ {};
      };

      virtual bool empty() const override { return this->detailInfo_ == nullptr
        && this->inconsistentData_ == nullptr && this->reasonCode_ == nullptr && this->verifyResult_ == nullptr; };
      // detailInfo Field Functions 
      bool hasDetailInfo() const { return this->detailInfo_ != nullptr;};
      void deleteDetailInfo() { this->detailInfo_ = nullptr;};
      inline const Data::DetailInfo & getDetailInfo() const { DARABONBA_PTR_GET_CONST(detailInfo_, Data::DetailInfo) };
      inline Data::DetailInfo getDetailInfo() { DARABONBA_PTR_GET(detailInfo_, Data::DetailInfo) };
      inline Data& setDetailInfo(const Data::DetailInfo & detailInfo) { DARABONBA_PTR_SET_VALUE(detailInfo_, detailInfo) };
      inline Data& setDetailInfo(Data::DetailInfo && detailInfo) { DARABONBA_PTR_SET_RVALUE(detailInfo_, detailInfo) };


      // inconsistentData Field Functions 
      bool hasInconsistentData() const { return this->inconsistentData_ != nullptr;};
      void deleteInconsistentData() { this->inconsistentData_ = nullptr;};
      inline const vector<string> & getInconsistentData() const { DARABONBA_PTR_GET_CONST(inconsistentData_, vector<string>) };
      inline vector<string> getInconsistentData() { DARABONBA_PTR_GET(inconsistentData_, vector<string>) };
      inline Data& setInconsistentData(const vector<string> & inconsistentData) { DARABONBA_PTR_SET_VALUE(inconsistentData_, inconsistentData) };
      inline Data& setInconsistentData(vector<string> && inconsistentData) { DARABONBA_PTR_SET_RVALUE(inconsistentData_, inconsistentData) };


      // reasonCode Field Functions 
      bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
      void deleteReasonCode() { this->reasonCode_ = nullptr;};
      inline int64_t getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, 0L) };
      inline Data& setReasonCode(int64_t reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


      // verifyResult Field Functions 
      bool hasVerifyResult() const { return this->verifyResult_ != nullptr;};
      void deleteVerifyResult() { this->verifyResult_ = nullptr;};
      inline string getVerifyResult() const { DARABONBA_PTR_GET_DEFAULT(verifyResult_, "") };
      inline Data& setVerifyResult(string verifyResult) { DARABONBA_PTR_SET_VALUE(verifyResult_, verifyResult) };


    protected:
      // The information about the enterprise.
      shared_ptr<Data::DetailInfo> detailInfo_ {};
      // The fields to be verified.
      shared_ptr<vector<string>> inconsistentData_ {};
      // The code of the verification result. Valid values:
      // 
      // *   0: The four elements belong to the same enterprise.
      // *   1: The four elements belong to the same enterprise, but the business status of the enterprise is abnormal.
      // *   2: The legal representative information cannot match the enterprise information.
      // *   3: The four elements do not belong to the same enterprise.
      // *   4: No information about the enterprise is found.
      // *   5: No information about the legal representative is found.
      shared_ptr<int64_t> reasonCode_ {};
      // The verification result. Valid values:
      // 
      // *   true: The four elements belong to the same enterprise and the business status of the enterprise is Active.
      // *   false: The four elements do not belong to the same enterprise.
      shared_ptr<string> verifyResult_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CompanyFourElementsVerificationResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CompanyFourElementsVerificationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CompanyFourElementsVerificationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CompanyFourElementsVerificationResponseBody::Data) };
    inline CompanyFourElementsVerificationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CompanyFourElementsVerificationResponseBody::Data) };
    inline CompanyFourElementsVerificationResponseBody& setData(const CompanyFourElementsVerificationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CompanyFourElementsVerificationResponseBody& setData(CompanyFourElementsVerificationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CompanyFourElementsVerificationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CompanyFourElementsVerificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response code.
    shared_ptr<string> code_ {};
    // The response parameters.
    shared_ptr<CompanyFourElementsVerificationResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The unique request ID. It is a common parameter and can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
