// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLASHSMSTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFLASHSMSTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListFlashSmsTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlashSmsTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProviderId, providerId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlashSmsTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProviderId, providerId_);
    };
    ListFlashSmsTemplatesRequest() = default ;
    ListFlashSmsTemplatesRequest(const ListFlashSmsTemplatesRequest &) = default ;
    ListFlashSmsTemplatesRequest(ListFlashSmsTemplatesRequest &&) = default ;
    ListFlashSmsTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlashSmsTemplatesRequest() = default ;
    ListFlashSmsTemplatesRequest& operator=(const ListFlashSmsTemplatesRequest &) = default ;
    ListFlashSmsTemplatesRequest& operator=(ListFlashSmsTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->instanceId_ == nullptr && this->providerId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListFlashSmsTemplatesRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListFlashSmsTemplatesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // providerId Field Functions 
    bool hasProviderId() const { return this->providerId_ != nullptr;};
    void deleteProviderId() { this->providerId_ = nullptr;};
    inline string getProviderId() const { DARABONBA_PTR_GET_DEFAULT(providerId_, "") };
    inline ListFlashSmsTemplatesRequest& setProviderId(string providerId) { DARABONBA_PTR_SET_VALUE(providerId_, providerId) };


  protected:
    shared_ptr<string> applicationId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> providerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
