// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCECONSTRAINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCECONSTRAINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DescribeResourceConstraintsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceConstraintsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceConstraintsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
    };
    DescribeResourceConstraintsRequest() = default ;
    DescribeResourceConstraintsRequest(const DescribeResourceConstraintsRequest &) = default ;
    DescribeResourceConstraintsRequest(DescribeResourceConstraintsRequest &&) = default ;
    DescribeResourceConstraintsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceConstraintsRequest() = default ;
    DescribeResourceConstraintsRequest& operator=(const DescribeResourceConstraintsRequest &) = default ;
    DescribeResourceConstraintsRequest& operator=(DescribeResourceConstraintsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->architecture_ == nullptr
        && this->packageType_ == nullptr && this->runMode_ == nullptr; };
    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline DescribeResourceConstraintsRequest& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline DescribeResourceConstraintsRequest& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline string getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
    inline DescribeResourceConstraintsRequest& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


  protected:
    shared_ptr<string> architecture_ {};
    shared_ptr<string> packageType_ {};
    shared_ptr<string> runMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
