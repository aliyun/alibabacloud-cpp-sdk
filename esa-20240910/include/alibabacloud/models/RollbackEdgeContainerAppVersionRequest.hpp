// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROLLBACKEDGECONTAINERAPPVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ROLLBACKEDGECONTAINERAPPVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class RollbackEdgeContainerAppVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RollbackEdgeContainerAppVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
      DARABONBA_PTR_TO_JSON(Remarks, remarks_);
      DARABONBA_PTR_TO_JSON(UsedPercent, usedPercent_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, RollbackEdgeContainerAppVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
      DARABONBA_PTR_FROM_JSON(Remarks, remarks_);
      DARABONBA_PTR_FROM_JSON(UsedPercent, usedPercent_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    RollbackEdgeContainerAppVersionRequest() = default ;
    RollbackEdgeContainerAppVersionRequest(const RollbackEdgeContainerAppVersionRequest &) = default ;
    RollbackEdgeContainerAppVersionRequest(RollbackEdgeContainerAppVersionRequest &&) = default ;
    RollbackEdgeContainerAppVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RollbackEdgeContainerAppVersionRequest() = default ;
    RollbackEdgeContainerAppVersionRequest& operator=(const RollbackEdgeContainerAppVersionRequest &) = default ;
    RollbackEdgeContainerAppVersionRequest& operator=(RollbackEdgeContainerAppVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->percentage_ == nullptr && return this->remarks_ == nullptr && return this->usedPercent_ == nullptr && return this->versionId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RollbackEdgeContainerAppVersionRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline int32_t percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
    inline RollbackEdgeContainerAppVersionRequest& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // remarks Field Functions 
    bool hasRemarks() const { return this->remarks_ != nullptr;};
    void deleteRemarks() { this->remarks_ = nullptr;};
    inline string remarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
    inline RollbackEdgeContainerAppVersionRequest& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


    // usedPercent Field Functions 
    bool hasUsedPercent() const { return this->usedPercent_ != nullptr;};
    void deleteUsedPercent() { this->usedPercent_ = nullptr;};
    inline bool usedPercent() const { DARABONBA_PTR_GET_DEFAULT(usedPercent_, false) };
    inline RollbackEdgeContainerAppVersionRequest& setUsedPercent(bool usedPercent) { DARABONBA_PTR_SET_VALUE(usedPercent_, usedPercent) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline RollbackEdgeContainerAppVersionRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<int32_t> percentage_ = nullptr;
    // The remarks.
    std::shared_ptr<string> remarks_ = nullptr;
    std::shared_ptr<bool> usedPercent_ = nullptr;
    // The ID of version that you want to roll back.
    // 
    // This parameter is required.
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
