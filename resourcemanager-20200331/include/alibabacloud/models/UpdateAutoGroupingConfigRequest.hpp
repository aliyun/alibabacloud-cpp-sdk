// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTOGROUPINGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTOGROUPINGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class UpdateAutoGroupingConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAutoGroupingConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableExistingResourcesTransfer, enableExistingResourcesTransfer_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAutoGroupingConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableExistingResourcesTransfer, enableExistingResourcesTransfer_);
    };
    UpdateAutoGroupingConfigRequest() = default ;
    UpdateAutoGroupingConfigRequest(const UpdateAutoGroupingConfigRequest &) = default ;
    UpdateAutoGroupingConfigRequest(UpdateAutoGroupingConfigRequest &&) = default ;
    UpdateAutoGroupingConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAutoGroupingConfigRequest() = default ;
    UpdateAutoGroupingConfigRequest& operator=(const UpdateAutoGroupingConfigRequest &) = default ;
    UpdateAutoGroupingConfigRequest& operator=(UpdateAutoGroupingConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableExistingResourcesTransfer_ == nullptr; };
    // enableExistingResourcesTransfer Field Functions 
    bool hasEnableExistingResourcesTransfer() const { return this->enableExistingResourcesTransfer_ != nullptr;};
    void deleteEnableExistingResourcesTransfer() { this->enableExistingResourcesTransfer_ = nullptr;};
    inline bool enableExistingResourcesTransfer() const { DARABONBA_PTR_GET_DEFAULT(enableExistingResourcesTransfer_, false) };
    inline UpdateAutoGroupingConfigRequest& setEnableExistingResourcesTransfer(bool enableExistingResourcesTransfer) { DARABONBA_PTR_SET_VALUE(enableExistingResourcesTransfer_, enableExistingResourcesTransfer) };


  protected:
    // Specifies whether to enable the Transfer Existing Associated Resources feature. Valid values:
    // 
    // *   false
    // *   true
    std::shared_ptr<bool> enableExistingResourcesTransfer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
