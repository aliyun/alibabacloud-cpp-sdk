// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHTASKMESSAGE_HPP_
#define ALIBABACLOUD_MODELS_PUSHTASKMESSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushTaskMessage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushTaskMessage& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, PushTaskMessage& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    PushTaskMessage() = default ;
    PushTaskMessage(const PushTaskMessage &) = default ;
    PushTaskMessage(PushTaskMessage &&) = default ;
    PushTaskMessage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushTaskMessage() = default ;
    PushTaskMessage& operator=(const PushTaskMessage &) = default ;
    PushTaskMessage& operator=(PushTaskMessage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->title_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline PushTaskMessage& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline PushTaskMessage& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> body_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
