// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERT_HPP_
#define ALIBABACLOUD_MODELS_ALERT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
namespace Models
{
  class Alert : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Alert& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(subtitle, subtitle_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, Alert& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(subtitle, subtitle_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    Alert() = default ;
    Alert(const Alert &) = default ;
    Alert(Alert &&) = default ;
    Alert(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Alert() = default ;
    Alert& operator=(const Alert &) = default ;
    Alert& operator=(Alert &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->subtitle_ == nullptr && return this->title_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline Alert& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // subtitle Field Functions 
    bool hasSubtitle() const { return this->subtitle_ != nullptr;};
    void deleteSubtitle() { this->subtitle_ = nullptr;};
    inline string subtitle() const { DARABONBA_PTR_GET_DEFAULT(subtitle_, "") };
    inline Alert& setSubtitle(string subtitle) { DARABONBA_PTR_SET_VALUE(subtitle_, subtitle) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline Alert& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> body_ = nullptr;
    std::shared_ptr<string> subtitle_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
