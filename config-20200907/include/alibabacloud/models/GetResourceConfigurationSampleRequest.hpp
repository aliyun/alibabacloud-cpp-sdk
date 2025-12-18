// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECONFIGURATIONSAMPLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECONFIGURATIONSAMPLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceConfigurationSampleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceConfigurationSampleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MockOnly, mockOnly_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceConfigurationSampleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MockOnly, mockOnly_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetResourceConfigurationSampleRequest() = default ;
    GetResourceConfigurationSampleRequest(const GetResourceConfigurationSampleRequest &) = default ;
    GetResourceConfigurationSampleRequest(GetResourceConfigurationSampleRequest &&) = default ;
    GetResourceConfigurationSampleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceConfigurationSampleRequest() = default ;
    GetResourceConfigurationSampleRequest& operator=(const GetResourceConfigurationSampleRequest &) = default ;
    GetResourceConfigurationSampleRequest& operator=(GetResourceConfigurationSampleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mockOnly_ == nullptr
        && return this->resourceType_ == nullptr; };
    // mockOnly Field Functions 
    bool hasMockOnly() const { return this->mockOnly_ != nullptr;};
    void deleteMockOnly() { this->mockOnly_ = nullptr;};
    inline string mockOnly() const { DARABONBA_PTR_GET_DEFAULT(mockOnly_, "") };
    inline GetResourceConfigurationSampleRequest& setMockOnly(string mockOnly) { DARABONBA_PTR_SET_VALUE(mockOnly_, mockOnly) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetResourceConfigurationSampleRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<string> mockOnly_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
