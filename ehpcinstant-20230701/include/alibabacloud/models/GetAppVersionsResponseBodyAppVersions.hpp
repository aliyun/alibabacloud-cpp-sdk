// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPVERSIONSRESPONSEBODYAPPVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_GETAPPVERSIONSRESPONSEBODYAPPVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetAppVersionsResponseBodyAppVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppVersionsResponseBodyAppVersions& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppVersionsResponseBodyAppVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetAppVersionsResponseBodyAppVersions() = default ;
    GetAppVersionsResponseBodyAppVersions(const GetAppVersionsResponseBodyAppVersions &) = default ;
    GetAppVersionsResponseBodyAppVersions(GetAppVersionsResponseBodyAppVersions &&) = default ;
    GetAppVersionsResponseBodyAppVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppVersionsResponseBodyAppVersions() = default ;
    GetAppVersionsResponseBodyAppVersions& operator=(const GetAppVersionsResponseBodyAppVersions &) = default ;
    GetAppVersionsResponseBodyAppVersions& operator=(GetAppVersionsResponseBodyAppVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && return this->name_ == nullptr && return this->version_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline GetAppVersionsResponseBodyAppVersions& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAppVersionsResponseBodyAppVersions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetAppVersionsResponseBodyAppVersions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The image ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageId_ = nullptr;
    // The application name.
    std::shared_ptr<string> name_ = nullptr;
    // The application version.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
