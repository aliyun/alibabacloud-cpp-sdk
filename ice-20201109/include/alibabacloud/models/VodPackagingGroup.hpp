// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VODPACKAGINGGROUP_HPP_
#define ALIBABACLOUD_MODELS_VODPACKAGINGGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class VodPackagingGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VodPackagingGroup& obj) { 
      DARABONBA_PTR_TO_JSON(ApproximateAssetCount, approximateAssetCount_);
      DARABONBA_PTR_TO_JSON(ConfigurationCount, configurationCount_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, VodPackagingGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(ApproximateAssetCount, approximateAssetCount_);
      DARABONBA_PTR_FROM_JSON(ConfigurationCount, configurationCount_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    VodPackagingGroup() = default ;
    VodPackagingGroup(const VodPackagingGroup &) = default ;
    VodPackagingGroup(VodPackagingGroup &&) = default ;
    VodPackagingGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VodPackagingGroup() = default ;
    VodPackagingGroup& operator=(const VodPackagingGroup &) = default ;
    VodPackagingGroup& operator=(VodPackagingGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approximateAssetCount_ == nullptr
        && this->configurationCount_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->domainName_ == nullptr && this->groupName_ == nullptr; };
    // approximateAssetCount Field Functions 
    bool hasApproximateAssetCount() const { return this->approximateAssetCount_ != nullptr;};
    void deleteApproximateAssetCount() { this->approximateAssetCount_ = nullptr;};
    inline int64_t getApproximateAssetCount() const { DARABONBA_PTR_GET_DEFAULT(approximateAssetCount_, 0L) };
    inline VodPackagingGroup& setApproximateAssetCount(int64_t approximateAssetCount) { DARABONBA_PTR_SET_VALUE(approximateAssetCount_, approximateAssetCount) };


    // configurationCount Field Functions 
    bool hasConfigurationCount() const { return this->configurationCount_ != nullptr;};
    void deleteConfigurationCount() { this->configurationCount_ = nullptr;};
    inline int64_t getConfigurationCount() const { DARABONBA_PTR_GET_DEFAULT(configurationCount_, 0L) };
    inline VodPackagingGroup& setConfigurationCount(int64_t configurationCount) { DARABONBA_PTR_SET_VALUE(configurationCount_, configurationCount) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline VodPackagingGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline VodPackagingGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline VodPackagingGroup& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline VodPackagingGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    shared_ptr<int64_t> approximateAssetCount_ {};
    shared_ptr<int64_t> configurationCount_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> domainName_ {};
    shared_ptr<string> groupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
