// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHTTPSAPPLICATIONCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHTTPSAPPLICATIONCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteHttpsApplicationConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHttpsApplicationConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHttpsApplicationConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    DeleteHttpsApplicationConfigurationRequest() = default ;
    DeleteHttpsApplicationConfigurationRequest(const DeleteHttpsApplicationConfigurationRequest &) = default ;
    DeleteHttpsApplicationConfigurationRequest(DeleteHttpsApplicationConfigurationRequest &&) = default ;
    DeleteHttpsApplicationConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHttpsApplicationConfigurationRequest() = default ;
    DeleteHttpsApplicationConfigurationRequest& operator=(const DeleteHttpsApplicationConfigurationRequest &) = default ;
    DeleteHttpsApplicationConfigurationRequest& operator=(DeleteHttpsApplicationConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && this->siteId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline DeleteHttpsApplicationConfigurationRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline DeleteHttpsApplicationConfigurationRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // ConfigId of the configuration, which can be obtained by calling the [listHttpsApplicationConfigurations](https://help.aliyun.com/document_detail/2869087.html) interface.
    // 
    // This parameter is required.
    shared_ptr<int64_t> configId_ {};
    // Site ID, which can be obtained by calling the [ListSites](~~ListSites~~) interface.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
