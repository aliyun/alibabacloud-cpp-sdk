// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONNECTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONNECTORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateConnectorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConnectorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SwitchStatus, switchStatus_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConnectorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SwitchStatus, switchStatus_);
    };
    CreateConnectorRequest() = default ;
    CreateConnectorRequest(const CreateConnectorRequest &) = default ;
    CreateConnectorRequest(CreateConnectorRequest &&) = default ;
    CreateConnectorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConnectorRequest() = default ;
    CreateConnectorRequest& operator=(const CreateConnectorRequest &) = default ;
    CreateConnectorRequest& operator=(CreateConnectorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->name_ == nullptr && this->region_ == nullptr && this->switchStatus_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreateConnectorRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateConnectorRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateConnectorRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // switchStatus Field Functions 
    bool hasSwitchStatus() const { return this->switchStatus_ != nullptr;};
    void deleteSwitchStatus() { this->switchStatus_ = nullptr;};
    inline string getSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(switchStatus_, "") };
    inline CreateConnectorRequest& setSwitchStatus(string switchStatus) { DARABONBA_PTR_SET_VALUE(switchStatus_, switchStatus) };


  protected:
    // The bandwidth value (Mbit/s).
    shared_ptr<int32_t> bandwidth_ {};
    // The connector name. The name must be 1 to 128 characters in length and can contain letters, digits, Chinese characters, periods (.), underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> region_ {};
    // The connector instance status. Valid values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Shutdown.
    // 
    // This parameter is required.
    shared_ptr<string> switchStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
