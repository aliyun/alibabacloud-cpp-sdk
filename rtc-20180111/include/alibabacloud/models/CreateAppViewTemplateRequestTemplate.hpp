// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPVIEWTEMPLATEREQUESTTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPVIEWTEMPLATEREQUESTTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class CreateAppViewTemplateRequestTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppViewTemplateRequestTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(LayoutIds, layoutIds_);
      DARABONBA_PTR_TO_JSON(MediaEncode, mediaEncode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppViewTemplateRequestTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(LayoutIds, layoutIds_);
      DARABONBA_PTR_FROM_JSON(MediaEncode, mediaEncode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateAppViewTemplateRequestTemplate() = default ;
    CreateAppViewTemplateRequestTemplate(const CreateAppViewTemplateRequestTemplate &) = default ;
    CreateAppViewTemplateRequestTemplate(CreateAppViewTemplateRequestTemplate &&) = default ;
    CreateAppViewTemplateRequestTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppViewTemplateRequestTemplate() = default ;
    CreateAppViewTemplateRequestTemplate& operator=(const CreateAppViewTemplateRequestTemplate &) = default ;
    CreateAppViewTemplateRequestTemplate& operator=(CreateAppViewTemplateRequestTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->layoutIds_ == nullptr
        && return this->mediaEncode_ == nullptr && return this->name_ == nullptr; };
    // layoutIds Field Functions 
    bool hasLayoutIds() const { return this->layoutIds_ != nullptr;};
    void deleteLayoutIds() { this->layoutIds_ = nullptr;};
    inline const vector<string> & layoutIds() const { DARABONBA_PTR_GET_CONST(layoutIds_, vector<string>) };
    inline vector<string> layoutIds() { DARABONBA_PTR_GET(layoutIds_, vector<string>) };
    inline CreateAppViewTemplateRequestTemplate& setLayoutIds(const vector<string> & layoutIds) { DARABONBA_PTR_SET_VALUE(layoutIds_, layoutIds) };
    inline CreateAppViewTemplateRequestTemplate& setLayoutIds(vector<string> && layoutIds) { DARABONBA_PTR_SET_RVALUE(layoutIds_, layoutIds) };


    // mediaEncode Field Functions 
    bool hasMediaEncode() const { return this->mediaEncode_ != nullptr;};
    void deleteMediaEncode() { this->mediaEncode_ = nullptr;};
    inline int32_t mediaEncode() const { DARABONBA_PTR_GET_DEFAULT(mediaEncode_, 0) };
    inline CreateAppViewTemplateRequestTemplate& setMediaEncode(int32_t mediaEncode) { DARABONBA_PTR_SET_VALUE(mediaEncode_, mediaEncode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAppViewTemplateRequestTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> layoutIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> mediaEncode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
