// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDITINGPROJECTMATERIALSRESPONSEBODYLIVEMATERIALS_HPP_
#define ALIBABACLOUD_MODELS_GETEDITINGPROJECTMATERIALSRESPONSEBODYLIVEMATERIALS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetEditingProjectMaterialsResponseBodyLiveMaterials : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEditingProjectMaterialsResponseBodyLiveMaterials& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(LiveUrl, liveUrl_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, GetEditingProjectMaterialsResponseBodyLiveMaterials& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(LiveUrl, liveUrl_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    GetEditingProjectMaterialsResponseBodyLiveMaterials() = default ;
    GetEditingProjectMaterialsResponseBodyLiveMaterials(const GetEditingProjectMaterialsResponseBodyLiveMaterials &) = default ;
    GetEditingProjectMaterialsResponseBodyLiveMaterials(GetEditingProjectMaterialsResponseBodyLiveMaterials &&) = default ;
    GetEditingProjectMaterialsResponseBodyLiveMaterials(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEditingProjectMaterialsResponseBodyLiveMaterials() = default ;
    GetEditingProjectMaterialsResponseBodyLiveMaterials& operator=(const GetEditingProjectMaterialsResponseBodyLiveMaterials &) = default ;
    GetEditingProjectMaterialsResponseBodyLiveMaterials& operator=(GetEditingProjectMaterialsResponseBodyLiveMaterials &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->domainName_ != nullptr && this->liveUrl_ != nullptr && this->streamName_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetEditingProjectMaterialsResponseBodyLiveMaterials& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline GetEditingProjectMaterialsResponseBodyLiveMaterials& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // liveUrl Field Functions 
    bool hasLiveUrl() const { return this->liveUrl_ != nullptr;};
    void deleteLiveUrl() { this->liveUrl_ = nullptr;};
    inline string liveUrl() const { DARABONBA_PTR_GET_DEFAULT(liveUrl_, "") };
    inline GetEditingProjectMaterialsResponseBodyLiveMaterials& setLiveUrl(string liveUrl) { DARABONBA_PTR_SET_VALUE(liveUrl_, liveUrl) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline GetEditingProjectMaterialsResponseBodyLiveMaterials& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The application name of the live stream.
    std::shared_ptr<string> appName_ = nullptr;
    // The domain name of the live stream.
    std::shared_ptr<string> domainName_ = nullptr;
    // The URL of the live stream.
    std::shared_ptr<string> liveUrl_ = nullptr;
    // The name of the live stream.
    std::shared_ptr<string> streamName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
