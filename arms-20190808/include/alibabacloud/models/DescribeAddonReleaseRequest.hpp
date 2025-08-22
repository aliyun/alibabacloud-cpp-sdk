// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDONRELEASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDONRELEASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeAddonReleaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddonReleaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReleaseName, releaseName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddonReleaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReleaseName, releaseName_);
    };
    DescribeAddonReleaseRequest() = default ;
    DescribeAddonReleaseRequest(const DescribeAddonReleaseRequest &) = default ;
    DescribeAddonReleaseRequest(DescribeAddonReleaseRequest &&) = default ;
    DescribeAddonReleaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddonReleaseRequest() = default ;
    DescribeAddonReleaseRequest& operator=(const DescribeAddonReleaseRequest &) = default ;
    DescribeAddonReleaseRequest& operator=(DescribeAddonReleaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->environmentId_ != nullptr
        && this->regionId_ != nullptr && this->releaseName_ != nullptr; };
    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline DescribeAddonReleaseRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAddonReleaseRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseName Field Functions 
    bool hasReleaseName() const { return this->releaseName_ != nullptr;};
    void deleteReleaseName() { this->releaseName_ = nullptr;};
    inline string releaseName() const { DARABONBA_PTR_GET_DEFAULT(releaseName_, "") };
    inline DescribeAddonReleaseRequest& setReleaseName(string releaseName) { DARABONBA_PTR_SET_VALUE(releaseName_, releaseName) };


  protected:
    // The environment ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the add-on release.
    // 
    // This parameter is required.
    std::shared_ptr<string> releaseName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
