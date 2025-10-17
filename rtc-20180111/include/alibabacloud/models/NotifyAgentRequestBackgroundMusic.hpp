// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYAGENTREQUESTBACKGROUNDMUSIC_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYAGENTREQUESTBACKGROUNDMUSIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class NotifyAgentRequestBackgroundMusic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyAgentRequestBackgroundMusic& obj) { 
      DARABONBA_PTR_TO_JSON(format, format_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyAgentRequestBackgroundMusic& obj) { 
      DARABONBA_PTR_FROM_JSON(format, format_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    NotifyAgentRequestBackgroundMusic() = default ;
    NotifyAgentRequestBackgroundMusic(const NotifyAgentRequestBackgroundMusic &) = default ;
    NotifyAgentRequestBackgroundMusic(NotifyAgentRequestBackgroundMusic &&) = default ;
    NotifyAgentRequestBackgroundMusic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyAgentRequestBackgroundMusic() = default ;
    NotifyAgentRequestBackgroundMusic& operator=(const NotifyAgentRequestBackgroundMusic &) = default ;
    NotifyAgentRequestBackgroundMusic& operator=(NotifyAgentRequestBackgroundMusic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->format_ == nullptr
        && return this->url_ == nullptr; };
    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline NotifyAgentRequestBackgroundMusic& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline NotifyAgentRequestBackgroundMusic& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> format_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
