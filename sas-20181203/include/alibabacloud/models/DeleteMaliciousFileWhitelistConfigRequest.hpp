// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMALICIOUSFILEWHITELISTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMALICIOUSFILEWHITELISTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteMaliciousFileWhitelistConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMaliciousFileWhitelistConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMaliciousFileWhitelistConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
    };
    DeleteMaliciousFileWhitelistConfigRequest() = default ;
    DeleteMaliciousFileWhitelistConfigRequest(const DeleteMaliciousFileWhitelistConfigRequest &) = default ;
    DeleteMaliciousFileWhitelistConfigRequest(DeleteMaliciousFileWhitelistConfigRequest &&) = default ;
    DeleteMaliciousFileWhitelistConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMaliciousFileWhitelistConfigRequest() = default ;
    DeleteMaliciousFileWhitelistConfigRequest& operator=(const DeleteMaliciousFileWhitelistConfigRequest &) = default ;
    DeleteMaliciousFileWhitelistConfigRequest& operator=(DeleteMaliciousFileWhitelistConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline DeleteMaliciousFileWhitelistConfigRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


  protected:
    // The ID of the alert whitelist rule of sensitive files that are detected by using the agentless detection feature. You can call the [ListMaliciousFileWhitelistConfigs](~~ListMaliciousFileWhitelistConfigs~~) operation to query the IDs of alert whitelist rules.
    std::shared_ptr<int64_t> configId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
