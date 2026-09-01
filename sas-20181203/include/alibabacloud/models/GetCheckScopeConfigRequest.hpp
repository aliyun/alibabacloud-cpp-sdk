// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKSCOPECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKSCOPECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckScopeConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckScopeConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckScopeConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    GetCheckScopeConfigRequest() = default ;
    GetCheckScopeConfigRequest(const GetCheckScopeConfigRequest &) = default ;
    GetCheckScopeConfigRequest(GetCheckScopeConfigRequest &&) = default ;
    GetCheckScopeConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckScopeConfigRequest() = default ;
    GetCheckScopeConfigRequest& operator=(const GetCheckScopeConfigRequest &) = default ;
    GetCheckScopeConfigRequest& operator=(GetCheckScopeConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && this->resourceDirectoryAccountId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline GetCheckScopeConfigRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline GetCheckScopeConfigRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


  protected:
    // The ID of the configuration. This parameter is optional. If you do not specify this parameter, a default ID is generated.
    shared_ptr<int64_t> configId_ {};
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
