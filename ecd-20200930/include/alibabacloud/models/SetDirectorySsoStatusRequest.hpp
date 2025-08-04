// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDIRECTORYSSOSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDIRECTORYSSOSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class SetDirectorySsoStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDirectorySsoStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(EnableSso, enableSso_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetDirectorySsoStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(EnableSso, enableSso_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetDirectorySsoStatusRequest() = default ;
    SetDirectorySsoStatusRequest(const SetDirectorySsoStatusRequest &) = default ;
    SetDirectorySsoStatusRequest(SetDirectorySsoStatusRequest &&) = default ;
    SetDirectorySsoStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDirectorySsoStatusRequest() = default ;
    SetDirectorySsoStatusRequest& operator=(const SetDirectorySsoStatusRequest &) = default ;
    SetDirectorySsoStatusRequest& operator=(SetDirectorySsoStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->directoryId_ != nullptr
        && this->enableSso_ != nullptr && this->regionId_ != nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline SetDirectorySsoStatusRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // enableSso Field Functions 
    bool hasEnableSso() const { return this->enableSso_ != nullptr;};
    void deleteEnableSso() { this->enableSso_ = nullptr;};
    inline bool enableSso() const { DARABONBA_PTR_GET_DEFAULT(enableSso_, false) };
    inline SetDirectorySsoStatusRequest& setEnableSso(bool enableSso) { DARABONBA_PTR_SET_VALUE(enableSso_, enableSso) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetDirectorySsoStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The AD directory ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> directoryId_ = nullptr;
    // Specifies whether to enable SSO. Valid values:
    // 
    // *   true: enables SSO.
    // *   false: disables SSO.
    // 
    // This parameter is required.
    std::shared_ptr<bool> enableSso_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
