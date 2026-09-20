// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEMINORVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEMINORVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class UpgradeMinorVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeMinorVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Components, components_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeMinorVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Components, components_);
    };
    UpgradeMinorVersionRequest() = default ;
    UpgradeMinorVersionRequest(const UpgradeMinorVersionRequest &) = default ;
    UpgradeMinorVersionRequest(UpgradeMinorVersionRequest &&) = default ;
    UpgradeMinorVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeMinorVersionRequest() = default ;
    UpgradeMinorVersionRequest& operator=(const UpgradeMinorVersionRequest &) = default ;
    UpgradeMinorVersionRequest& operator=(UpgradeMinorVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->components_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpgradeMinorVersionRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline string getComponents() const { DARABONBA_PTR_GET_DEFAULT(components_, "") };
    inline UpgradeMinorVersionRequest& setComponents(string components) { DARABONBA_PTR_SET_VALUE(components_, components) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The names of the components to upgrade. Separate multiple component names with commas (,).
    shared_ptr<string> components_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
