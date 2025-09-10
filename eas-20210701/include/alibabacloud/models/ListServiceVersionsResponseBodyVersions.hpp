// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEVERSIONSRESPONSEBODYVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEVERSIONSRESPONSEBODYVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListServiceVersionsResponseBodyVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceVersionsResponseBodyVersions& obj) { 
      DARABONBA_PTR_TO_JSON(BuildTime, buildTime_);
      DARABONBA_PTR_TO_JSON(ImageAvailable, imageAvailable_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ServiceConfig, serviceConfig_);
      DARABONBA_PTR_TO_JSON(ServiceRunnable, serviceRunnable_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceVersionsResponseBodyVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildTime, buildTime_);
      DARABONBA_PTR_FROM_JSON(ImageAvailable, imageAvailable_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ServiceConfig, serviceConfig_);
      DARABONBA_PTR_FROM_JSON(ServiceRunnable, serviceRunnable_);
    };
    ListServiceVersionsResponseBodyVersions() = default ;
    ListServiceVersionsResponseBodyVersions(const ListServiceVersionsResponseBodyVersions &) = default ;
    ListServiceVersionsResponseBodyVersions(ListServiceVersionsResponseBodyVersions &&) = default ;
    ListServiceVersionsResponseBodyVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceVersionsResponseBodyVersions() = default ;
    ListServiceVersionsResponseBodyVersions& operator=(const ListServiceVersionsResponseBodyVersions &) = default ;
    ListServiceVersionsResponseBodyVersions& operator=(ListServiceVersionsResponseBodyVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildTime_ != nullptr
        && this->imageAvailable_ != nullptr && this->imageId_ != nullptr && this->message_ != nullptr && this->serviceConfig_ != nullptr && this->serviceRunnable_ != nullptr; };
    // buildTime Field Functions 
    bool hasBuildTime() const { return this->buildTime_ != nullptr;};
    void deleteBuildTime() { this->buildTime_ = nullptr;};
    inline string buildTime() const { DARABONBA_PTR_GET_DEFAULT(buildTime_, "") };
    inline ListServiceVersionsResponseBodyVersions& setBuildTime(string buildTime) { DARABONBA_PTR_SET_VALUE(buildTime_, buildTime) };


    // imageAvailable Field Functions 
    bool hasImageAvailable() const { return this->imageAvailable_ != nullptr;};
    void deleteImageAvailable() { this->imageAvailable_ = nullptr;};
    inline string imageAvailable() const { DARABONBA_PTR_GET_DEFAULT(imageAvailable_, "") };
    inline ListServiceVersionsResponseBodyVersions& setImageAvailable(string imageAvailable) { DARABONBA_PTR_SET_VALUE(imageAvailable_, imageAvailable) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline int32_t imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, 0) };
    inline ListServiceVersionsResponseBodyVersions& setImageId(int32_t imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListServiceVersionsResponseBodyVersions& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // serviceConfig Field Functions 
    bool hasServiceConfig() const { return this->serviceConfig_ != nullptr;};
    void deleteServiceConfig() { this->serviceConfig_ = nullptr;};
    inline string serviceConfig() const { DARABONBA_PTR_GET_DEFAULT(serviceConfig_, "") };
    inline ListServiceVersionsResponseBodyVersions& setServiceConfig(string serviceConfig) { DARABONBA_PTR_SET_VALUE(serviceConfig_, serviceConfig) };


    // serviceRunnable Field Functions 
    bool hasServiceRunnable() const { return this->serviceRunnable_ != nullptr;};
    void deleteServiceRunnable() { this->serviceRunnable_ = nullptr;};
    inline string serviceRunnable() const { DARABONBA_PTR_GET_DEFAULT(serviceRunnable_, "") };
    inline ListServiceVersionsResponseBodyVersions& setServiceRunnable(string serviceRunnable) { DARABONBA_PTR_SET_VALUE(serviceRunnable_, serviceRunnable) };


  protected:
    // The time when the service version was created. The time is displayed in UTC.
    std::shared_ptr<string> buildTime_ = nullptr;
    // Indicates whether the image is available. Valid values:
    // 
    // *   true: The image is available.
    // *   false: The image is unavailable.
    // *   unknown: The availability of the image is unknown.
    std::shared_ptr<string> imageAvailable_ = nullptr;
    // The image ID.
    std::shared_ptr<int32_t> imageId_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The service deployment configurations. This parameter is returned only if the service is deployed by using a custom image.
    std::shared_ptr<string> serviceConfig_ = nullptr;
    // Indicates whether Elastic Algorithm service (EAS) is activated. Valid values:
    // 
    // *   true: EAS is activated.
    // *   false: EAS is not activated.
    // *   unknown: The activation of EAS is unknown.
    std::shared_ptr<string> serviceRunnable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
