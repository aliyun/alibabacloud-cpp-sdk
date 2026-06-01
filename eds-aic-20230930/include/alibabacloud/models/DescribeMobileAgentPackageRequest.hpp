// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOBILEAGENTPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOBILEAGENTPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeMobileAgentPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMobileAgentPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(PackageIds, packageIds_);
      DARABONBA_PTR_TO_JSON(PackageSpec, packageSpec_);
      DARABONBA_PTR_TO_JSON(PackageStatus, packageStatus_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMobileAgentPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(PackageIds, packageIds_);
      DARABONBA_PTR_FROM_JSON(PackageSpec, packageSpec_);
      DARABONBA_PTR_FROM_JSON(PackageStatus, packageStatus_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeMobileAgentPackageRequest() = default ;
    DescribeMobileAgentPackageRequest(const DescribeMobileAgentPackageRequest &) = default ;
    DescribeMobileAgentPackageRequest(DescribeMobileAgentPackageRequest &&) = default ;
    DescribeMobileAgentPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMobileAgentPackageRequest() = default ;
    DescribeMobileAgentPackageRequest& operator=(const DescribeMobileAgentPackageRequest &) = default ;
    DescribeMobileAgentPackageRequest& operator=(DescribeMobileAgentPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->packageIds_ == nullptr && this->packageSpec_ == nullptr && this->packageStatus_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeMobileAgentPackageRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeMobileAgentPackageRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // packageIds Field Functions 
    bool hasPackageIds() const { return this->packageIds_ != nullptr;};
    void deletePackageIds() { this->packageIds_ = nullptr;};
    inline const vector<string> & getPackageIds() const { DARABONBA_PTR_GET_CONST(packageIds_, vector<string>) };
    inline vector<string> getPackageIds() { DARABONBA_PTR_GET(packageIds_, vector<string>) };
    inline DescribeMobileAgentPackageRequest& setPackageIds(const vector<string> & packageIds) { DARABONBA_PTR_SET_VALUE(packageIds_, packageIds) };
    inline DescribeMobileAgentPackageRequest& setPackageIds(vector<string> && packageIds) { DARABONBA_PTR_SET_RVALUE(packageIds_, packageIds) };


    // packageSpec Field Functions 
    bool hasPackageSpec() const { return this->packageSpec_ != nullptr;};
    void deletePackageSpec() { this->packageSpec_ = nullptr;};
    inline string getPackageSpec() const { DARABONBA_PTR_GET_DEFAULT(packageSpec_, "") };
    inline DescribeMobileAgentPackageRequest& setPackageSpec(string packageSpec) { DARABONBA_PTR_SET_VALUE(packageSpec_, packageSpec) };


    // packageStatus Field Functions 
    bool hasPackageStatus() const { return this->packageStatus_ != nullptr;};
    void deletePackageStatus() { this->packageStatus_ = nullptr;};
    inline string getPackageStatus() const { DARABONBA_PTR_GET_DEFAULT(packageStatus_, "") };
    inline DescribeMobileAgentPackageRequest& setPackageStatus(string packageStatus) { DARABONBA_PTR_SET_VALUE(packageStatus_, packageStatus) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeMobileAgentPackageRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMobileAgentPackageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<vector<string>> instanceIds_ {};
    shared_ptr<vector<string>> packageIds_ {};
    shared_ptr<string> packageSpec_ {};
    shared_ptr<string> packageStatus_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
