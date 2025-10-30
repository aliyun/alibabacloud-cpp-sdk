// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDONRESPONSEBODYNEWERVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDONRESPONSEBODYNEWERVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeAddonResponseBodyNewerVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddonResponseBodyNewerVersions& obj) { 
      DARABONBA_PTR_TO_JSON(minimum_cluster_version, minimumClusterVersion_);
      DARABONBA_PTR_TO_JSON(upgradable, upgradable_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddonResponseBodyNewerVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(minimum_cluster_version, minimumClusterVersion_);
      DARABONBA_PTR_FROM_JSON(upgradable, upgradable_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DescribeAddonResponseBodyNewerVersions() = default ;
    DescribeAddonResponseBodyNewerVersions(const DescribeAddonResponseBodyNewerVersions &) = default ;
    DescribeAddonResponseBodyNewerVersions(DescribeAddonResponseBodyNewerVersions &&) = default ;
    DescribeAddonResponseBodyNewerVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddonResponseBodyNewerVersions() = default ;
    DescribeAddonResponseBodyNewerVersions& operator=(const DescribeAddonResponseBodyNewerVersions &) = default ;
    DescribeAddonResponseBodyNewerVersions& operator=(DescribeAddonResponseBodyNewerVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->minimumClusterVersion_ == nullptr
        && return this->upgradable_ == nullptr && return this->version_ == nullptr; };
    // minimumClusterVersion Field Functions 
    bool hasMinimumClusterVersion() const { return this->minimumClusterVersion_ != nullptr;};
    void deleteMinimumClusterVersion() { this->minimumClusterVersion_ = nullptr;};
    inline string minimumClusterVersion() const { DARABONBA_PTR_GET_DEFAULT(minimumClusterVersion_, "") };
    inline DescribeAddonResponseBodyNewerVersions& setMinimumClusterVersion(string minimumClusterVersion) { DARABONBA_PTR_SET_VALUE(minimumClusterVersion_, minimumClusterVersion) };


    // upgradable Field Functions 
    bool hasUpgradable() const { return this->upgradable_ != nullptr;};
    void deleteUpgradable() { this->upgradable_ = nullptr;};
    inline bool upgradable() const { DARABONBA_PTR_GET_DEFAULT(upgradable_, false) };
    inline DescribeAddonResponseBodyNewerVersions& setUpgradable(bool upgradable) { DARABONBA_PTR_SET_VALUE(upgradable_, upgradable) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeAddonResponseBodyNewerVersions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The minimum cluster version required by the component version.
    std::shared_ptr<string> minimumClusterVersion_ = nullptr;
    // Indicates whether the component can be updated to the version.
    // 
    // *   true: yes
    // *   false: no
    std::shared_ptr<bool> upgradable_ = nullptr;
    // The latest version number of the component.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
