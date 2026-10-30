// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPENETRATIONTESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPENETRATIONTESTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class SubmitPenetrationTestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitPenetrationTestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetList, assetList_);
      DARABONBA_PTR_TO_JSON(IsThirdpartyTest, isThirdpartyTest_);
      DARABONBA_PTR_TO_JSON(TestContent, testContent_);
      DARABONBA_PTR_TO_JSON(TestEndDate, testEndDate_);
      DARABONBA_PTR_TO_JSON(TestSourceIps, testSourceIps_);
      DARABONBA_PTR_TO_JSON(TestStartDate, testStartDate_);
      DARABONBA_PTR_TO_JSON(TestSteps, testSteps_);
      DARABONBA_PTR_TO_JSON(ThirdpartyEmail, thirdpartyEmail_);
      DARABONBA_PTR_TO_JSON(ThirdpartyMobile, thirdpartyMobile_);
      DARABONBA_PTR_TO_JSON(ThirdpartyTester, thirdpartyTester_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitPenetrationTestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetList, assetList_);
      DARABONBA_PTR_FROM_JSON(IsThirdpartyTest, isThirdpartyTest_);
      DARABONBA_PTR_FROM_JSON(TestContent, testContent_);
      DARABONBA_PTR_FROM_JSON(TestEndDate, testEndDate_);
      DARABONBA_PTR_FROM_JSON(TestSourceIps, testSourceIps_);
      DARABONBA_PTR_FROM_JSON(TestStartDate, testStartDate_);
      DARABONBA_PTR_FROM_JSON(TestSteps, testSteps_);
      DARABONBA_PTR_FROM_JSON(ThirdpartyEmail, thirdpartyEmail_);
      DARABONBA_PTR_FROM_JSON(ThirdpartyMobile, thirdpartyMobile_);
      DARABONBA_PTR_FROM_JSON(ThirdpartyTester, thirdpartyTester_);
    };
    SubmitPenetrationTestRequest() = default ;
    SubmitPenetrationTestRequest(const SubmitPenetrationTestRequest &) = default ;
    SubmitPenetrationTestRequest(SubmitPenetrationTestRequest &&) = default ;
    SubmitPenetrationTestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitPenetrationTestRequest() = default ;
    SubmitPenetrationTestRequest& operator=(const SubmitPenetrationTestRequest &) = default ;
    SubmitPenetrationTestRequest& operator=(SubmitPenetrationTestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetList_ == nullptr
        && this->isThirdpartyTest_ == nullptr && this->testContent_ == nullptr && this->testEndDate_ == nullptr && this->testSourceIps_ == nullptr && this->testStartDate_ == nullptr
        && this->testSteps_ == nullptr && this->thirdpartyEmail_ == nullptr && this->thirdpartyMobile_ == nullptr && this->thirdpartyTester_ == nullptr; };
    // assetList Field Functions 
    bool hasAssetList() const { return this->assetList_ != nullptr;};
    void deleteAssetList() { this->assetList_ = nullptr;};
    inline string getAssetList() const { DARABONBA_PTR_GET_DEFAULT(assetList_, "") };
    inline SubmitPenetrationTestRequest& setAssetList(string assetList) { DARABONBA_PTR_SET_VALUE(assetList_, assetList) };


    // isThirdpartyTest Field Functions 
    bool hasIsThirdpartyTest() const { return this->isThirdpartyTest_ != nullptr;};
    void deleteIsThirdpartyTest() { this->isThirdpartyTest_ = nullptr;};
    inline bool getIsThirdpartyTest() const { DARABONBA_PTR_GET_DEFAULT(isThirdpartyTest_, false) };
    inline SubmitPenetrationTestRequest& setIsThirdpartyTest(bool isThirdpartyTest) { DARABONBA_PTR_SET_VALUE(isThirdpartyTest_, isThirdpartyTest) };


    // testContent Field Functions 
    bool hasTestContent() const { return this->testContent_ != nullptr;};
    void deleteTestContent() { this->testContent_ = nullptr;};
    inline string getTestContent() const { DARABONBA_PTR_GET_DEFAULT(testContent_, "") };
    inline SubmitPenetrationTestRequest& setTestContent(string testContent) { DARABONBA_PTR_SET_VALUE(testContent_, testContent) };


    // testEndDate Field Functions 
    bool hasTestEndDate() const { return this->testEndDate_ != nullptr;};
    void deleteTestEndDate() { this->testEndDate_ = nullptr;};
    inline string getTestEndDate() const { DARABONBA_PTR_GET_DEFAULT(testEndDate_, "") };
    inline SubmitPenetrationTestRequest& setTestEndDate(string testEndDate) { DARABONBA_PTR_SET_VALUE(testEndDate_, testEndDate) };


    // testSourceIps Field Functions 
    bool hasTestSourceIps() const { return this->testSourceIps_ != nullptr;};
    void deleteTestSourceIps() { this->testSourceIps_ = nullptr;};
    inline string getTestSourceIps() const { DARABONBA_PTR_GET_DEFAULT(testSourceIps_, "") };
    inline SubmitPenetrationTestRequest& setTestSourceIps(string testSourceIps) { DARABONBA_PTR_SET_VALUE(testSourceIps_, testSourceIps) };


    // testStartDate Field Functions 
    bool hasTestStartDate() const { return this->testStartDate_ != nullptr;};
    void deleteTestStartDate() { this->testStartDate_ = nullptr;};
    inline string getTestStartDate() const { DARABONBA_PTR_GET_DEFAULT(testStartDate_, "") };
    inline SubmitPenetrationTestRequest& setTestStartDate(string testStartDate) { DARABONBA_PTR_SET_VALUE(testStartDate_, testStartDate) };


    // testSteps Field Functions 
    bool hasTestSteps() const { return this->testSteps_ != nullptr;};
    void deleteTestSteps() { this->testSteps_ = nullptr;};
    inline string getTestSteps() const { DARABONBA_PTR_GET_DEFAULT(testSteps_, "") };
    inline SubmitPenetrationTestRequest& setTestSteps(string testSteps) { DARABONBA_PTR_SET_VALUE(testSteps_, testSteps) };


    // thirdpartyEmail Field Functions 
    bool hasThirdpartyEmail() const { return this->thirdpartyEmail_ != nullptr;};
    void deleteThirdpartyEmail() { this->thirdpartyEmail_ = nullptr;};
    inline string getThirdpartyEmail() const { DARABONBA_PTR_GET_DEFAULT(thirdpartyEmail_, "") };
    inline SubmitPenetrationTestRequest& setThirdpartyEmail(string thirdpartyEmail) { DARABONBA_PTR_SET_VALUE(thirdpartyEmail_, thirdpartyEmail) };


    // thirdpartyMobile Field Functions 
    bool hasThirdpartyMobile() const { return this->thirdpartyMobile_ != nullptr;};
    void deleteThirdpartyMobile() { this->thirdpartyMobile_ = nullptr;};
    inline string getThirdpartyMobile() const { DARABONBA_PTR_GET_DEFAULT(thirdpartyMobile_, "") };
    inline SubmitPenetrationTestRequest& setThirdpartyMobile(string thirdpartyMobile) { DARABONBA_PTR_SET_VALUE(thirdpartyMobile_, thirdpartyMobile) };


    // thirdpartyTester Field Functions 
    bool hasThirdpartyTester() const { return this->thirdpartyTester_ != nullptr;};
    void deleteThirdpartyTester() { this->thirdpartyTester_ = nullptr;};
    inline string getThirdpartyTester() const { DARABONBA_PTR_GET_DEFAULT(thirdpartyTester_, "") };
    inline SubmitPenetrationTestRequest& setThirdpartyTester(string thirdpartyTester) { DARABONBA_PTR_SET_VALUE(thirdpartyTester_, thirdpartyTester) };


  protected:
    // The asset list.
    // 
    // > The array supports up to 50 IP addresses.
    shared_ptr<string> assetList_ {};
    // Specifies whether the test is performed by a third-party testing service provider. Valid values:
    // 
    // - true: Yes.
    // 
    // - false: No.
    shared_ptr<bool> isThirdpartyTest_ {};
    // The test content.
    // 
    // > The content must be up to 500 characters in length. Provide detailed information to facilitate the approval process.
    shared_ptr<string> testContent_ {};
    // The end time of the test.
    shared_ptr<string> testEndDate_ {};
    // The source IP addresses used for the test.
    // 
    // > Up to 50 IP addresses are supported. Separate multiple IP addresses with line breaks or commas (,). Enter 0.0.0.0 to allow all IP addresses. CIDR blocks such as 140.168.0.0/16 are not supported.
    shared_ptr<string> testSourceIps_ {};
    // The start date of the test.
    shared_ptr<string> testStartDate_ {};
    // The test steps.
    // 
    // > The steps must be up to 500 characters in length. Provide detailed information to facilitate the approval process.
    shared_ptr<string> testSteps_ {};
    // The email address of the third-party tester.
    shared_ptr<string> thirdpartyEmail_ {};
    // The mobile phone number of the third-party tester.
    shared_ptr<string> thirdpartyMobile_ {};
    // The name of the third-party tester.
    shared_ptr<string> thirdpartyTester_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
