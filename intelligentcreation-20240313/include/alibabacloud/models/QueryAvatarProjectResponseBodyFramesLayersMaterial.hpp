// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAVATARPROJECTRESPONSEBODYFRAMESLAYERSMATERIAL_HPP_
#define ALIBABACLOUD_MODELS_QUERYAVATARPROJECTRESPONSEBODYFRAMESLAYERSMATERIAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class QueryAvatarProjectResponseBodyFramesLayersMaterial : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAvatarProjectResponseBodyFramesLayersMaterial& obj) { 
      DARABONBA_PTR_TO_JSON(format, format_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAvatarProjectResponseBodyFramesLayersMaterial& obj) { 
      DARABONBA_PTR_FROM_JSON(format, format_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    QueryAvatarProjectResponseBodyFramesLayersMaterial() = default ;
    QueryAvatarProjectResponseBodyFramesLayersMaterial(const QueryAvatarProjectResponseBodyFramesLayersMaterial &) = default ;
    QueryAvatarProjectResponseBodyFramesLayersMaterial(QueryAvatarProjectResponseBodyFramesLayersMaterial &&) = default ;
    QueryAvatarProjectResponseBodyFramesLayersMaterial(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAvatarProjectResponseBodyFramesLayersMaterial() = default ;
    QueryAvatarProjectResponseBodyFramesLayersMaterial& operator=(const QueryAvatarProjectResponseBodyFramesLayersMaterial &) = default ;
    QueryAvatarProjectResponseBodyFramesLayersMaterial& operator=(QueryAvatarProjectResponseBodyFramesLayersMaterial &&) = default ;
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
    inline QueryAvatarProjectResponseBodyFramesLayersMaterial& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryAvatarProjectResponseBodyFramesLayersMaterial& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline QueryAvatarProjectResponseBodyFramesLayersMaterial& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> format_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
