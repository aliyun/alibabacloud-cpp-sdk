// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENEPREVIEWRESOURCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSCENEPREVIEWRESOURCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetScenePreviewResourceResponseBodyDataResourceDirectory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetScenePreviewResourceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScenePreviewResourceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceDirectory, resourceDirectory_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetScenePreviewResourceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectory, resourceDirectory_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetScenePreviewResourceResponseBodyData() = default ;
    GetScenePreviewResourceResponseBodyData(const GetScenePreviewResourceResponseBodyData &) = default ;
    GetScenePreviewResourceResponseBodyData(GetScenePreviewResourceResponseBodyData &&) = default ;
    GetScenePreviewResourceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScenePreviewResourceResponseBodyData() = default ;
    GetScenePreviewResourceResponseBodyData& operator=(const GetScenePreviewResourceResponseBodyData &) = default ;
    GetScenePreviewResourceResponseBodyData& operator=(GetScenePreviewResourceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->resourceDirectory_ == nullptr && return this->version_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetScenePreviewResourceResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceDirectory Field Functions 
    bool hasResourceDirectory() const { return this->resourceDirectory_ != nullptr;};
    void deleteResourceDirectory() { this->resourceDirectory_ = nullptr;};
    inline const Models::GetScenePreviewResourceResponseBodyDataResourceDirectory & resourceDirectory() const { DARABONBA_PTR_GET_CONST(resourceDirectory_, Models::GetScenePreviewResourceResponseBodyDataResourceDirectory) };
    inline Models::GetScenePreviewResourceResponseBodyDataResourceDirectory resourceDirectory() { DARABONBA_PTR_GET(resourceDirectory_, Models::GetScenePreviewResourceResponseBodyDataResourceDirectory) };
    inline GetScenePreviewResourceResponseBodyData& setResourceDirectory(const Models::GetScenePreviewResourceResponseBodyDataResourceDirectory & resourceDirectory) { DARABONBA_PTR_SET_VALUE(resourceDirectory_, resourceDirectory) };
    inline GetScenePreviewResourceResponseBodyData& setResourceDirectory(Models::GetScenePreviewResourceResponseBodyDataResourceDirectory && resourceDirectory) { DARABONBA_PTR_SET_RVALUE(resourceDirectory_, resourceDirectory) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetScenePreviewResourceResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::GetScenePreviewResourceResponseBodyDataResourceDirectory> resourceDirectory_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
