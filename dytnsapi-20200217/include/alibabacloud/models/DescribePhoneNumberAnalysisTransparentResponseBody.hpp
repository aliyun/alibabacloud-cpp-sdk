// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHONENUMBERANALYSISTRANSPARENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHONENUMBERANALYSISTRANSPARENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class DescribePhoneNumberAnalysisTransparentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhoneNumberAnalysisTransparentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhoneNumberAnalysisTransparentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePhoneNumberAnalysisTransparentResponseBody() = default ;
    DescribePhoneNumberAnalysisTransparentResponseBody(const DescribePhoneNumberAnalysisTransparentResponseBody &) = default ;
    DescribePhoneNumberAnalysisTransparentResponseBody(DescribePhoneNumberAnalysisTransparentResponseBody &&) = default ;
    DescribePhoneNumberAnalysisTransparentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhoneNumberAnalysisTransparentResponseBody() = default ;
    DescribePhoneNumberAnalysisTransparentResponseBody& operator=(const DescribePhoneNumberAnalysisTransparentResponseBody &) = default ;
    DescribePhoneNumberAnalysisTransparentResponseBody& operator=(DescribePhoneNumberAnalysisTransparentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Device_risk, deviceRisk_);
        DARABONBA_PTR_TO_JSON(Ip_risk, ipRisk_);
        DARABONBA_PTR_TO_JSON(Score1, score1_);
        DARABONBA_PTR_TO_JSON(Score2, score2_);
        DARABONBA_PTR_TO_JSON(Score3, score3_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Device_risk, deviceRisk_);
        DARABONBA_PTR_FROM_JSON(Ip_risk, ipRisk_);
        DARABONBA_PTR_FROM_JSON(Score1, score1_);
        DARABONBA_PTR_FROM_JSON(Score2, score2_);
        DARABONBA_PTR_FROM_JSON(Score3, score3_);
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
      virtual bool empty() const override { return this->deviceRisk_ == nullptr
        && this->ipRisk_ == nullptr && this->score1_ == nullptr && this->score2_ == nullptr && this->score3_ == nullptr; };
      // deviceRisk Field Functions 
      bool hasDeviceRisk() const { return this->deviceRisk_ != nullptr;};
      void deleteDeviceRisk() { this->deviceRisk_ = nullptr;};
      inline string getDeviceRisk() const { DARABONBA_PTR_GET_DEFAULT(deviceRisk_, "") };
      inline Data& setDeviceRisk(string deviceRisk) { DARABONBA_PTR_SET_VALUE(deviceRisk_, deviceRisk) };


      // ipRisk Field Functions 
      bool hasIpRisk() const { return this->ipRisk_ != nullptr;};
      void deleteIpRisk() { this->ipRisk_ = nullptr;};
      inline string getIpRisk() const { DARABONBA_PTR_GET_DEFAULT(ipRisk_, "") };
      inline Data& setIpRisk(string ipRisk) { DARABONBA_PTR_SET_VALUE(ipRisk_, ipRisk) };


      // score1 Field Functions 
      bool hasScore1() const { return this->score1_ != nullptr;};
      void deleteScore1() { this->score1_ = nullptr;};
      inline string getScore1() const { DARABONBA_PTR_GET_DEFAULT(score1_, "") };
      inline Data& setScore1(string score1) { DARABONBA_PTR_SET_VALUE(score1_, score1) };


      // score2 Field Functions 
      bool hasScore2() const { return this->score2_ != nullptr;};
      void deleteScore2() { this->score2_ = nullptr;};
      inline string getScore2() const { DARABONBA_PTR_GET_DEFAULT(score2_, "") };
      inline Data& setScore2(string score2) { DARABONBA_PTR_SET_VALUE(score2_, score2) };


      // score3 Field Functions 
      bool hasScore3() const { return this->score3_ != nullptr;};
      void deleteScore3() { this->score3_ = nullptr;};
      inline string getScore3() const { DARABONBA_PTR_GET_DEFAULT(score3_, "") };
      inline Data& setScore3(string score3) { DARABONBA_PTR_SET_VALUE(score3_, score3) };


    protected:
      shared_ptr<string> deviceRisk_ {};
      shared_ptr<string> ipRisk_ {};
      shared_ptr<string> score1_ {};
      shared_ptr<string> score2_ {};
      shared_ptr<string> score3_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribePhoneNumberAnalysisTransparentResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePhoneNumberAnalysisTransparentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribePhoneNumberAnalysisTransparentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribePhoneNumberAnalysisTransparentResponseBody::Data) };
    inline DescribePhoneNumberAnalysisTransparentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribePhoneNumberAnalysisTransparentResponseBody::Data) };
    inline DescribePhoneNumberAnalysisTransparentResponseBody& setData(const DescribePhoneNumberAnalysisTransparentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribePhoneNumberAnalysisTransparentResponseBody& setData(DescribePhoneNumberAnalysisTransparentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePhoneNumberAnalysisTransparentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePhoneNumberAnalysisTransparentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<DescribePhoneNumberAnalysisTransparentResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
