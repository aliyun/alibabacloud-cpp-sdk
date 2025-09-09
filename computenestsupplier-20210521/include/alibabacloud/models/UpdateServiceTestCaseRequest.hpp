// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICETESTCASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICETESTCASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateServiceTestCaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceTestCaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TestCaseId, testCaseId_);
      DARABONBA_PTR_TO_JSON(TestCaseName, testCaseName_);
      DARABONBA_PTR_TO_JSON(TestConfig, testConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceTestCaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TestCaseId, testCaseId_);
      DARABONBA_PTR_FROM_JSON(TestCaseName, testCaseName_);
      DARABONBA_PTR_FROM_JSON(TestConfig, testConfig_);
    };
    UpdateServiceTestCaseRequest() = default ;
    UpdateServiceTestCaseRequest(const UpdateServiceTestCaseRequest &) = default ;
    UpdateServiceTestCaseRequest(UpdateServiceTestCaseRequest &&) = default ;
    UpdateServiceTestCaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceTestCaseRequest() = default ;
    UpdateServiceTestCaseRequest& operator=(const UpdateServiceTestCaseRequest &) = default ;
    UpdateServiceTestCaseRequest& operator=(UpdateServiceTestCaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->testCaseId_ != nullptr && this->testCaseName_ != nullptr && this->testConfig_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateServiceTestCaseRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // testCaseId Field Functions 
    bool hasTestCaseId() const { return this->testCaseId_ != nullptr;};
    void deleteTestCaseId() { this->testCaseId_ = nullptr;};
    inline string testCaseId() const { DARABONBA_PTR_GET_DEFAULT(testCaseId_, "") };
    inline UpdateServiceTestCaseRequest& setTestCaseId(string testCaseId) { DARABONBA_PTR_SET_VALUE(testCaseId_, testCaseId) };


    // testCaseName Field Functions 
    bool hasTestCaseName() const { return this->testCaseName_ != nullptr;};
    void deleteTestCaseName() { this->testCaseName_ = nullptr;};
    inline string testCaseName() const { DARABONBA_PTR_GET_DEFAULT(testCaseName_, "") };
    inline UpdateServiceTestCaseRequest& setTestCaseName(string testCaseName) { DARABONBA_PTR_SET_VALUE(testCaseName_, testCaseName) };


    // testConfig Field Functions 
    bool hasTestConfig() const { return this->testConfig_ != nullptr;};
    void deleteTestConfig() { this->testConfig_ = nullptr;};
    inline string testConfig() const { DARABONBA_PTR_GET_DEFAULT(testConfig_, "") };
    inline UpdateServiceTestCaseRequest& setTestConfig(string testConfig) { DARABONBA_PTR_SET_VALUE(testConfig_, testConfig) };


  protected:
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Service test case ID
    // 
    // This parameter is required.
    std::shared_ptr<string> testCaseId_ = nullptr;
    // Test case name
    // 
    // This parameter is required.
    std::shared_ptr<string> testCaseName_ = nullptr;
    // Test configuration
    // 
    // This parameter is required.
    std::shared_ptr<string> testConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
