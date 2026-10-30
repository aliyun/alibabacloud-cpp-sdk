// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPENETRATIONTESTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPENETRATIONTESTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class QueryPenetrationTestDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPenetrationTestDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPenetrationTestDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryPenetrationTestDetailResponseBody() = default ;
    QueryPenetrationTestDetailResponseBody(const QueryPenetrationTestDetailResponseBody &) = default ;
    QueryPenetrationTestDetailResponseBody(QueryPenetrationTestDetailResponseBody &&) = default ;
    QueryPenetrationTestDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPenetrationTestDetailResponseBody() = default ;
    QueryPenetrationTestDetailResponseBody& operator=(const QueryPenetrationTestDetailResponseBody &) = default ;
    QueryPenetrationTestDetailResponseBody& operator=(QueryPenetrationTestDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApplyTime, applyTime_);
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(IsThirdpartyTest, isThirdpartyTest_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TestContent, testContent_);
        DARABONBA_PTR_TO_JSON(TestEndDate, testEndDate_);
        DARABONBA_PTR_TO_JSON(TestSourceIps, testSourceIps_);
        DARABONBA_PTR_TO_JSON(TestStartDate, testStartDate_);
        DARABONBA_PTR_TO_JSON(TestSteps, testSteps_);
        DARABONBA_PTR_TO_JSON(ThirdpartyEmail, thirdpartyEmail_);
        DARABONBA_PTR_TO_JSON(ThirdpartyMobile, thirdpartyMobile_);
        DARABONBA_PTR_TO_JSON(ThirdpartyTester, thirdpartyTester_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplyTime, applyTime_);
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(IsThirdpartyTest, isThirdpartyTest_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TestContent, testContent_);
        DARABONBA_PTR_FROM_JSON(TestEndDate, testEndDate_);
        DARABONBA_PTR_FROM_JSON(TestSourceIps, testSourceIps_);
        DARABONBA_PTR_FROM_JSON(TestStartDate, testStartDate_);
        DARABONBA_PTR_FROM_JSON(TestSteps, testSteps_);
        DARABONBA_PTR_FROM_JSON(ThirdpartyEmail, thirdpartyEmail_);
        DARABONBA_PTR_FROM_JSON(ThirdpartyMobile, thirdpartyMobile_);
        DARABONBA_PTR_FROM_JSON(ThirdpartyTester, thirdpartyTester_);
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
      virtual bool empty() const override { return this->applyTime_ == nullptr
        && this->assetType_ == nullptr && this->id_ == nullptr && this->ip_ == nullptr && this->isThirdpartyTest_ == nullptr && this->status_ == nullptr
        && this->testContent_ == nullptr && this->testEndDate_ == nullptr && this->testSourceIps_ == nullptr && this->testStartDate_ == nullptr && this->testSteps_ == nullptr
        && this->thirdpartyEmail_ == nullptr && this->thirdpartyMobile_ == nullptr && this->thirdpartyTester_ == nullptr; };
      // applyTime Field Functions 
      bool hasApplyTime() const { return this->applyTime_ != nullptr;};
      void deleteApplyTime() { this->applyTime_ = nullptr;};
      inline int64_t getApplyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, 0L) };
      inline Data& setApplyTime(int64_t applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
      inline Data& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Data& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // isThirdpartyTest Field Functions 
      bool hasIsThirdpartyTest() const { return this->isThirdpartyTest_ != nullptr;};
      void deleteIsThirdpartyTest() { this->isThirdpartyTest_ = nullptr;};
      inline bool getIsThirdpartyTest() const { DARABONBA_PTR_GET_DEFAULT(isThirdpartyTest_, false) };
      inline Data& setIsThirdpartyTest(bool isThirdpartyTest) { DARABONBA_PTR_SET_VALUE(isThirdpartyTest_, isThirdpartyTest) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // testContent Field Functions 
      bool hasTestContent() const { return this->testContent_ != nullptr;};
      void deleteTestContent() { this->testContent_ = nullptr;};
      inline string getTestContent() const { DARABONBA_PTR_GET_DEFAULT(testContent_, "") };
      inline Data& setTestContent(string testContent) { DARABONBA_PTR_SET_VALUE(testContent_, testContent) };


      // testEndDate Field Functions 
      bool hasTestEndDate() const { return this->testEndDate_ != nullptr;};
      void deleteTestEndDate() { this->testEndDate_ = nullptr;};
      inline int64_t getTestEndDate() const { DARABONBA_PTR_GET_DEFAULT(testEndDate_, 0L) };
      inline Data& setTestEndDate(int64_t testEndDate) { DARABONBA_PTR_SET_VALUE(testEndDate_, testEndDate) };


      // testSourceIps Field Functions 
      bool hasTestSourceIps() const { return this->testSourceIps_ != nullptr;};
      void deleteTestSourceIps() { this->testSourceIps_ = nullptr;};
      inline string getTestSourceIps() const { DARABONBA_PTR_GET_DEFAULT(testSourceIps_, "") };
      inline Data& setTestSourceIps(string testSourceIps) { DARABONBA_PTR_SET_VALUE(testSourceIps_, testSourceIps) };


      // testStartDate Field Functions 
      bool hasTestStartDate() const { return this->testStartDate_ != nullptr;};
      void deleteTestStartDate() { this->testStartDate_ = nullptr;};
      inline int64_t getTestStartDate() const { DARABONBA_PTR_GET_DEFAULT(testStartDate_, 0L) };
      inline Data& setTestStartDate(int64_t testStartDate) { DARABONBA_PTR_SET_VALUE(testStartDate_, testStartDate) };


      // testSteps Field Functions 
      bool hasTestSteps() const { return this->testSteps_ != nullptr;};
      void deleteTestSteps() { this->testSteps_ = nullptr;};
      inline string getTestSteps() const { DARABONBA_PTR_GET_DEFAULT(testSteps_, "") };
      inline Data& setTestSteps(string testSteps) { DARABONBA_PTR_SET_VALUE(testSteps_, testSteps) };


      // thirdpartyEmail Field Functions 
      bool hasThirdpartyEmail() const { return this->thirdpartyEmail_ != nullptr;};
      void deleteThirdpartyEmail() { this->thirdpartyEmail_ = nullptr;};
      inline string getThirdpartyEmail() const { DARABONBA_PTR_GET_DEFAULT(thirdpartyEmail_, "") };
      inline Data& setThirdpartyEmail(string thirdpartyEmail) { DARABONBA_PTR_SET_VALUE(thirdpartyEmail_, thirdpartyEmail) };


      // thirdpartyMobile Field Functions 
      bool hasThirdpartyMobile() const { return this->thirdpartyMobile_ != nullptr;};
      void deleteThirdpartyMobile() { this->thirdpartyMobile_ = nullptr;};
      inline string getThirdpartyMobile() const { DARABONBA_PTR_GET_DEFAULT(thirdpartyMobile_, "") };
      inline Data& setThirdpartyMobile(string thirdpartyMobile) { DARABONBA_PTR_SET_VALUE(thirdpartyMobile_, thirdpartyMobile) };


      // thirdpartyTester Field Functions 
      bool hasThirdpartyTester() const { return this->thirdpartyTester_ != nullptr;};
      void deleteThirdpartyTester() { this->thirdpartyTester_ = nullptr;};
      inline string getThirdpartyTester() const { DARABONBA_PTR_GET_DEFAULT(thirdpartyTester_, "") };
      inline Data& setThirdpartyTester(string thirdpartyTester) { DARABONBA_PTR_SET_VALUE(thirdpartyTester_, thirdpartyTester) };


    protected:
      // The application time.
      shared_ptr<int64_t> applyTime_ {};
      // The type of the asset. Valid values:
      // 
      // - **EIP**: public IP address in a VPC.
      // - **SLB**: load balancing.
      // - **ECS**: public IP address in the classic network.
      shared_ptr<string> assetType_ {};
      // The unique identity of the application record.
      // 
      // > This field is of the Long type. Precision loss may occur during the procedure to serialize or deserialize the numeric sequence. Ensure that the value does not exceed 9007199254740991.
      shared_ptr<int64_t> id_ {};
      // IP
      shared_ptr<string> ip_ {};
      // Indicates whether the test is performed by a third-party service provider. Valid values:
      // 
      // - true: Yes.
      // 
      // - false: No.
      shared_ptr<bool> isThirdpartyTest_ {};
      // The task status. Valid values:
      // 
      // - **early_end**: The user applied for early termination.
      // - **expired**: The authorization has expired.
      // - **auditing**: Under review.
      // - **approved**: Approved.
      // - **rejected**: Rejected.
      shared_ptr<string> status_ {};
      // The test content.
      // 
      // > - Maximum 500 characters. Provide detailed information to increase the chance of passing the review.
      shared_ptr<string> testContent_ {};
      // The test end time.
      shared_ptr<int64_t> testEndDate_ {};
      // The source IP addresses used for the test.
      // 
      // > A maximum of 50 IP addresses are supported. Separate multiple IP addresses with line breaks or commas (,). Specify 0.0.0.0 to allow all IP addresses. CIDR blocks are not supported, such as 140.168.0.0/16.
      shared_ptr<string> testSourceIps_ {};
      // The test start date.
      shared_ptr<int64_t> testStartDate_ {};
      // The test steps.
      // 
      // > Maximum 500 characters. Provide detailed information to increase the chance of passing the review.
      shared_ptr<string> testSteps_ {};
      // The email address of the third-party tester.
      shared_ptr<string> thirdpartyEmail_ {};
      // The mobile phone number of the third-party tester.
      shared_ptr<string> thirdpartyMobile_ {};
      // The third-party tester.
      shared_ptr<string> thirdpartyTester_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryPenetrationTestDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryPenetrationTestDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryPenetrationTestDetailResponseBody::Data) };
    inline QueryPenetrationTestDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryPenetrationTestDetailResponseBody::Data) };
    inline QueryPenetrationTestDetailResponseBody& setData(const QueryPenetrationTestDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryPenetrationTestDetailResponseBody& setData(QueryPenetrationTestDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryPenetrationTestDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPenetrationTestDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryPenetrationTestDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    // 
    // - **200**: Success.
    // - **Other values (400 and 500)**: Failure.
    shared_ptr<string> code_ {};
    // The response content.
    shared_ptr<QueryPenetrationTestDetailResponseBody::Data> data_ {};
    // The message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // 
    // - **true**: The call is successful.                               
    // - **false**: The call fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
