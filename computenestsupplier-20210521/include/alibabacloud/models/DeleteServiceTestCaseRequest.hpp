// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESERVICETESTCASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESERVICETESTCASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class DeleteServiceTestCaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteServiceTestCaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TestCaseId, testCaseId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteServiceTestCaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TestCaseId, testCaseId_);
    };
    DeleteServiceTestCaseRequest() = default ;
    DeleteServiceTestCaseRequest(const DeleteServiceTestCaseRequest &) = default ;
    DeleteServiceTestCaseRequest(DeleteServiceTestCaseRequest &&) = default ;
    DeleteServiceTestCaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteServiceTestCaseRequest() = default ;
    DeleteServiceTestCaseRequest& operator=(const DeleteServiceTestCaseRequest &) = default ;
    DeleteServiceTestCaseRequest& operator=(DeleteServiceTestCaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->testCaseId_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteServiceTestCaseRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // testCaseId Field Functions 
    bool hasTestCaseId() const { return this->testCaseId_ != nullptr;};
    void deleteTestCaseId() { this->testCaseId_ = nullptr;};
    inline string testCaseId() const { DARABONBA_PTR_GET_DEFAULT(testCaseId_, "") };
    inline DeleteServiceTestCaseRequest& setTestCaseId(string testCaseId) { DARABONBA_PTR_SET_VALUE(testCaseId_, testCaseId) };


  protected:
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The service test case id.
    // 
    // This parameter is required.
    std::shared_ptr<string> testCaseId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
