// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HttpPackageConfigurations, httpPackageConfigurations_);
      DARABONBA_PTR_TO_JSON(SourceLocationName, sourceLocationName_);
      DARABONBA_PTR_TO_JSON(SourceName, sourceName_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpPackageConfigurations, httpPackageConfigurations_);
      DARABONBA_PTR_FROM_JSON(SourceLocationName, sourceLocationName_);
      DARABONBA_PTR_FROM_JSON(SourceName, sourceName_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    CreateSourceRequest() = default ;
    CreateSourceRequest(const CreateSourceRequest &) = default ;
    CreateSourceRequest(CreateSourceRequest &&) = default ;
    CreateSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSourceRequest() = default ;
    CreateSourceRequest& operator=(const CreateSourceRequest &) = default ;
    CreateSourceRequest& operator=(CreateSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->httpPackageConfigurations_ != nullptr
        && this->sourceLocationName_ != nullptr && this->sourceName_ != nullptr && this->sourceType_ != nullptr; };
    // httpPackageConfigurations Field Functions 
    bool hasHttpPackageConfigurations() const { return this->httpPackageConfigurations_ != nullptr;};
    void deleteHttpPackageConfigurations() { this->httpPackageConfigurations_ = nullptr;};
    inline string httpPackageConfigurations() const { DARABONBA_PTR_GET_DEFAULT(httpPackageConfigurations_, "") };
    inline CreateSourceRequest& setHttpPackageConfigurations(string httpPackageConfigurations) { DARABONBA_PTR_SET_VALUE(httpPackageConfigurations_, httpPackageConfigurations) };


    // sourceLocationName Field Functions 
    bool hasSourceLocationName() const { return this->sourceLocationName_ != nullptr;};
    void deleteSourceLocationName() { this->sourceLocationName_ = nullptr;};
    inline string sourceLocationName() const { DARABONBA_PTR_GET_DEFAULT(sourceLocationName_, "") };
    inline CreateSourceRequest& setSourceLocationName(string sourceLocationName) { DARABONBA_PTR_SET_VALUE(sourceLocationName_, sourceLocationName) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string sourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline CreateSourceRequest& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateSourceRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The source configurations.
    // 
    // This parameter is required.
    std::shared_ptr<string> httpPackageConfigurations_ = nullptr;
    // The name of the source location.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceLocationName_ = nullptr;
    // The name of the source.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceName_ = nullptr;
    // The source type. Valid values: vodSource and liveSource.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
