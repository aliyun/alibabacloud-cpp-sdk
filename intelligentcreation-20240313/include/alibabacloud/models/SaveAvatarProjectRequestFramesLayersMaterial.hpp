// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEAVATARPROJECTREQUESTFRAMESLAYERSMATERIAL_HPP_
#define ALIBABACLOUD_MODELS_SAVEAVATARPROJECTREQUESTFRAMESLAYERSMATERIAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SaveAvatarProjectRequestFramesLayersMaterial : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveAvatarProjectRequestFramesLayersMaterial& obj) { 
      DARABONBA_PTR_TO_JSON(format, format_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, SaveAvatarProjectRequestFramesLayersMaterial& obj) { 
      DARABONBA_PTR_FROM_JSON(format, format_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    SaveAvatarProjectRequestFramesLayersMaterial() = default ;
    SaveAvatarProjectRequestFramesLayersMaterial(const SaveAvatarProjectRequestFramesLayersMaterial &) = default ;
    SaveAvatarProjectRequestFramesLayersMaterial(SaveAvatarProjectRequestFramesLayersMaterial &&) = default ;
    SaveAvatarProjectRequestFramesLayersMaterial(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveAvatarProjectRequestFramesLayersMaterial() = default ;
    SaveAvatarProjectRequestFramesLayersMaterial& operator=(const SaveAvatarProjectRequestFramesLayersMaterial &) = default ;
    SaveAvatarProjectRequestFramesLayersMaterial& operator=(SaveAvatarProjectRequestFramesLayersMaterial &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->format_ == nullptr
        && return this->id_ == nullptr && return this->url_ == nullptr; };
    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline SaveAvatarProjectRequestFramesLayersMaterial& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline SaveAvatarProjectRequestFramesLayersMaterial& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SaveAvatarProjectRequestFramesLayersMaterial& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> format_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
