// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBLOGENTRY_HPP_
#define ALIBABACLOUD_MODELS_WEBLOGENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class WebLogEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebLogEntry& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, WebLogEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    WebLogEntry() = default ;
    WebLogEntry(const WebLogEntry &) = default ;
    WebLogEntry(WebLogEntry &&) = default ;
    WebLogEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebLogEntry() = default ;
    WebLogEntry& operator=(const WebLogEntry &) = default ;
    WebLogEntry& operator=(WebLogEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline WebLogEntry& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
