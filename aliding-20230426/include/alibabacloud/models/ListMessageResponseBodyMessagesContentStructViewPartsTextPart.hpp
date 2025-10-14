// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSTEXTPART_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSTEXTPART_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListMessageResponseBodyMessagesContentStructViewPartsTextPart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageResponseBodyMessagesContentStructViewPartsTextPart& obj) { 
      DARABONBA_PTR_TO_JSON(text, text_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageResponseBodyMessagesContentStructViewPartsTextPart& obj) { 
      DARABONBA_PTR_FROM_JSON(text, text_);
    };
    ListMessageResponseBodyMessagesContentStructViewPartsTextPart() = default ;
    ListMessageResponseBodyMessagesContentStructViewPartsTextPart(const ListMessageResponseBodyMessagesContentStructViewPartsTextPart &) = default ;
    ListMessageResponseBodyMessagesContentStructViewPartsTextPart(ListMessageResponseBodyMessagesContentStructViewPartsTextPart &&) = default ;
    ListMessageResponseBodyMessagesContentStructViewPartsTextPart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageResponseBodyMessagesContentStructViewPartsTextPart() = default ;
    ListMessageResponseBodyMessagesContentStructViewPartsTextPart& operator=(const ListMessageResponseBodyMessagesContentStructViewPartsTextPart &) = default ;
    ListMessageResponseBodyMessagesContentStructViewPartsTextPart& operator=(ListMessageResponseBodyMessagesContentStructViewPartsTextPart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->text_ == nullptr; };
    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ListMessageResponseBodyMessagesContentStructViewPartsTextPart& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
