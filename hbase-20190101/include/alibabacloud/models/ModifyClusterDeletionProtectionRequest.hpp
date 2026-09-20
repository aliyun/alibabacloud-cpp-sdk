// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERDELETIONPROTECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERDELETIONPROTECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class ModifyClusterDeletionProtectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterDeletionProtectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Protection, protection_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterDeletionProtectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Protection, protection_);
    };
    ModifyClusterDeletionProtectionRequest() = default ;
    ModifyClusterDeletionProtectionRequest(const ModifyClusterDeletionProtectionRequest &) = default ;
    ModifyClusterDeletionProtectionRequest(ModifyClusterDeletionProtectionRequest &&) = default ;
    ModifyClusterDeletionProtectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterDeletionProtectionRequest() = default ;
    ModifyClusterDeletionProtectionRequest& operator=(const ModifyClusterDeletionProtectionRequest &) = default ;
    ModifyClusterDeletionProtectionRequest& operator=(ModifyClusterDeletionProtectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->protection_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyClusterDeletionProtectionRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // protection Field Functions 
    bool hasProtection() const { return this->protection_ != nullptr;};
    void deleteProtection() { this->protection_ = nullptr;};
    inline bool getProtection() const { DARABONBA_PTR_GET_DEFAULT(protection_, false) };
    inline ModifyClusterDeletionProtectionRequest& setProtection(bool protection) { DARABONBA_PTR_SET_VALUE(protection_, protection) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // Specifies whether to enable deletion protection. Valid values:
    // 
    // - true: Enables deletion protection. The cluster cannot be deleted when deletion protection is enabled.
    // - false: Disables deletion protection. The cluster can be deleted.
    // 
    // This parameter is required.
    shared_ptr<bool> protection_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
