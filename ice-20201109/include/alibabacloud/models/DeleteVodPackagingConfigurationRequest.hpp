// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVODPACKAGINGCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVODPACKAGINGCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteVodPackagingConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVodPackagingConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigurationName, configurationName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVodPackagingConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigurationName, configurationName_);
    };
    DeleteVodPackagingConfigurationRequest() = default ;
    DeleteVodPackagingConfigurationRequest(const DeleteVodPackagingConfigurationRequest &) = default ;
    DeleteVodPackagingConfigurationRequest(DeleteVodPackagingConfigurationRequest &&) = default ;
    DeleteVodPackagingConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVodPackagingConfigurationRequest() = default ;
    DeleteVodPackagingConfigurationRequest& operator=(const DeleteVodPackagingConfigurationRequest &) = default ;
    DeleteVodPackagingConfigurationRequest& operator=(DeleteVodPackagingConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configurationName_ == nullptr; };
    // configurationName Field Functions 
    bool hasConfigurationName() const { return this->configurationName_ != nullptr;};
    void deleteConfigurationName() { this->configurationName_ = nullptr;};
    inline string configurationName() const { DARABONBA_PTR_GET_DEFAULT(configurationName_, "") };
    inline DeleteVodPackagingConfigurationRequest& setConfigurationName(string configurationName) { DARABONBA_PTR_SET_VALUE(configurationName_, configurationName) };


  protected:
    // The name of the packaging configuration.
    std::shared_ptr<string> configurationName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
