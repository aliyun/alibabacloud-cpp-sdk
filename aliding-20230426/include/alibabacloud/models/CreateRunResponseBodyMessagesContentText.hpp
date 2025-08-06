// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTTEXT_HPP_
#define ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTTEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateRunResponseBodyMessagesContentText : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRunResponseBodyMessagesContentText& obj) { 
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRunResponseBodyMessagesContentText& obj) { 
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    CreateRunResponseBodyMessagesContentText() = default ;
    CreateRunResponseBodyMessagesContentText(const CreateRunResponseBodyMessagesContentText &) = default ;
    CreateRunResponseBodyMessagesContentText(CreateRunResponseBodyMessagesContentText &&) = default ;
    CreateRunResponseBodyMessagesContentText(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRunResponseBodyMessagesContentText() = default ;
    CreateRunResponseBodyMessagesContentText& operator=(const CreateRunResponseBodyMessagesContentText &) = default ;
    CreateRunResponseBodyMessagesContentText& operator=(CreateRunResponseBodyMessagesContentText &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->value_ != nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateRunResponseBodyMessagesContentText& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
