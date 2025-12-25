// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETAILSCENERESPONSEBODYCAPTURES_HPP_
#define ALIBABACLOUD_MODELS_DETAILSCENERESPONSEBODYCAPTURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class DetailSceneResponseBodyCaptures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetailSceneResponseBodyCaptures& obj) { 
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DetailSceneResponseBodyCaptures& obj) { 
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DetailSceneResponseBodyCaptures() = default ;
    DetailSceneResponseBodyCaptures(const DetailSceneResponseBodyCaptures &) = default ;
    DetailSceneResponseBodyCaptures(DetailSceneResponseBodyCaptures &&) = default ;
    DetailSceneResponseBodyCaptures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetailSceneResponseBodyCaptures() = default ;
    DetailSceneResponseBodyCaptures& operator=(const DetailSceneResponseBodyCaptures &) = default ;
    DetailSceneResponseBodyCaptures& operator=(DetailSceneResponseBodyCaptures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->title_ == nullptr
        && return this->url_ == nullptr; };
    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DetailSceneResponseBodyCaptures& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DetailSceneResponseBodyCaptures& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
