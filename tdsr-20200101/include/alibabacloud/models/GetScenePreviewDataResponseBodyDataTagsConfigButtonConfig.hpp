// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENEPREVIEWDATARESPONSEBODYDATATAGSCONFIGBUTTONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETSCENEPREVIEWDATARESPONSEBODYDATATAGSCONFIGBUTTONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CustomText, customText_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomText, customText_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig() = default ;
    GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig(const GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig &) = default ;
    GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig(GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig &&) = default ;
    GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig() = default ;
    GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig& operator=(const GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig &) = default ;
    GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig& operator=(GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customText_ == nullptr
        && return this->type_ == nullptr; };
    // customText Field Functions 
    bool hasCustomText() const { return this->customText_ != nullptr;};
    void deleteCustomText() { this->customText_ = nullptr;};
    inline string customText() const { DARABONBA_PTR_GET_DEFAULT(customText_, "") };
    inline GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig& setCustomText(string customText) { DARABONBA_PTR_SET_VALUE(customText_, customText) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> customText_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
