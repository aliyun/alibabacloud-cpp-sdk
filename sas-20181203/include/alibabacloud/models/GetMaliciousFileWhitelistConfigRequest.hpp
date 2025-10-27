// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMALICIOUSFILEWHITELISTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMALICIOUSFILEWHITELISTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetMaliciousFileWhitelistConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMaliciousFileWhitelistConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMaliciousFileWhitelistConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
    };
    GetMaliciousFileWhitelistConfigRequest() = default ;
    GetMaliciousFileWhitelistConfigRequest(const GetMaliciousFileWhitelistConfigRequest &) = default ;
    GetMaliciousFileWhitelistConfigRequest(GetMaliciousFileWhitelistConfigRequest &&) = default ;
    GetMaliciousFileWhitelistConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMaliciousFileWhitelistConfigRequest() = default ;
    GetMaliciousFileWhitelistConfigRequest& operator=(const GetMaliciousFileWhitelistConfigRequest &) = default ;
    GetMaliciousFileWhitelistConfigRequest& operator=(GetMaliciousFileWhitelistConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline GetMaliciousFileWhitelistConfigRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


  protected:
    // The ID of the whitelist rule.
    std::shared_ptr<int64_t> configId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
