// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMESSAGEREQUESTMESSAGESCONTENTSTRUCTVIEWPARTSRECOMMENDPARTRECOMMENDS_HPP_
#define ALIBABACLOUD_MODELS_CREATEMESSAGEREQUESTMESSAGESCONTENTSTRUCTVIEWPARTSRECOMMENDPARTRECOMMENDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends& obj) { 
      DARABONBA_PTR_TO_JSON(mobileUrl, mobileUrl_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends& obj) { 
      DARABONBA_PTR_FROM_JSON(mobileUrl, mobileUrl_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends() = default ;
    CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends(const CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends &) = default ;
    CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends(CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends &&) = default ;
    CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends() = default ;
    CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends& operator=(const CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends &) = default ;
    CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends& operator=(CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mobileUrl_ == nullptr
        && return this->text_ == nullptr && return this->url_ == nullptr; };
    // mobileUrl Field Functions 
    bool hasMobileUrl() const { return this->mobileUrl_ != nullptr;};
    void deleteMobileUrl() { this->mobileUrl_ = nullptr;};
    inline string mobileUrl() const { DARABONBA_PTR_GET_DEFAULT(mobileUrl_, "") };
    inline CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends& setMobileUrl(string mobileUrl) { DARABONBA_PTR_SET_VALUE(mobileUrl_, mobileUrl) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> mobileUrl_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
