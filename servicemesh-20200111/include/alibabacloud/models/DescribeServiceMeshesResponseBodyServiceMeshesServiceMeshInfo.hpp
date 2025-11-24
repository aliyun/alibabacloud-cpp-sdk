// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHESSERVICEMESHINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHESSERVICEMESHINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo(const DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo(DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo &&) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo& operator=(const DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo& operator=(DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->errorMessage_ == nullptr && return this->name_ == nullptr && return this->profile_ == nullptr && return this->regionId_ == nullptr && return this->serviceMeshId_ == nullptr
        && return this->state_ == nullptr && return this->updateTime_ == nullptr && return this->version_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The time when the ASM instance was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The returned error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The name of the ASM instance.
    std::shared_ptr<string> name_ = nullptr;
    // The edition of the ASM instance before ASM is available for commercial use. Valid values:
    // 
    // *   `Pro`: Professional Edition
    // *   `Default`: Standard Edition
    std::shared_ptr<string> profile_ = nullptr;
    // The region ID of the ASM instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the ASM instance.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
    // The state of the ASM instance.
    std::shared_ptr<string> state_ = nullptr;
    // The time when the ASM instance was last modified.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The version number of the ASM instance.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
