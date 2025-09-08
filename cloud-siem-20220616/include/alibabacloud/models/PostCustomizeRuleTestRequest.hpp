// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POSTCUSTOMIZERULETESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_POSTCUSTOMIZERULETESTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class PostCustomizeRuleTestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PostCustomizeRuleTestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(SimulatedData, simulatedData_);
      DARABONBA_PTR_TO_JSON(TestType, testType_);
    };
    friend void from_json(const Darabonba::Json& j, PostCustomizeRuleTestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(SimulatedData, simulatedData_);
      DARABONBA_PTR_FROM_JSON(TestType, testType_);
    };
    PostCustomizeRuleTestRequest() = default ;
    PostCustomizeRuleTestRequest(const PostCustomizeRuleTestRequest &) = default ;
    PostCustomizeRuleTestRequest(PostCustomizeRuleTestRequest &&) = default ;
    PostCustomizeRuleTestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PostCustomizeRuleTestRequest() = default ;
    PostCustomizeRuleTestRequest& operator=(const PostCustomizeRuleTestRequest &) = default ;
    PostCustomizeRuleTestRequest& operator=(PostCustomizeRuleTestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->regionId_ != nullptr && this->roleFor_ != nullptr && this->roleType_ != nullptr && this->simulatedData_ != nullptr && this->testType_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PostCustomizeRuleTestRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PostCustomizeRuleTestRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline PostCustomizeRuleTestRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline PostCustomizeRuleTestRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // simulatedData Field Functions 
    bool hasSimulatedData() const { return this->simulatedData_ != nullptr;};
    void deleteSimulatedData() { this->simulatedData_ = nullptr;};
    inline string simulatedData() const { DARABONBA_PTR_GET_DEFAULT(simulatedData_, "") };
    inline PostCustomizeRuleTestRequest& setSimulatedData(string simulatedData) { DARABONBA_PTR_SET_VALUE(simulatedData_, simulatedData) };


    // testType Field Functions 
    bool hasTestType() const { return this->testType_ != nullptr;};
    void deleteTestType() { this->testType_ = nullptr;};
    inline string testType() const { DARABONBA_PTR_GET_DEFAULT(testType_, "") };
    inline PostCustomizeRuleTestRequest& setTestType(string testType) { DARABONBA_PTR_SET_VALUE(testType_, testType) };


  protected:
    // The ID of the rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The data management center of the threat analysis feature. Specify this parameter based on the region in which your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions inside China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the account that you switch from the management account.
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    // The type of the view. Valid values:
    // - 0: the current Alibaba Cloud account
    // - 1: the global account
    std::shared_ptr<int32_t> roleType_ = nullptr;
    // The simulation data for the test. This parameter is available only when TestType is set to simulate.
    std::shared_ptr<string> simulatedData_ = nullptr;
    // The test type. Valid values:
    // 
    // *   simulate: simulation data test
    // *   business: business data test
    std::shared_ptr<string> testType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
