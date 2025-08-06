// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODYEVENTSRICHTEXTDESCRIPTION_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODYEVENTSRICHTEXTDESCRIPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListEventsResponseBodyEventsRichTextDescription : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsResponseBodyEventsRichTextDescription& obj) { 
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsResponseBodyEventsRichTextDescription& obj) { 
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    ListEventsResponseBodyEventsRichTextDescription() = default ;
    ListEventsResponseBodyEventsRichTextDescription(const ListEventsResponseBodyEventsRichTextDescription &) = default ;
    ListEventsResponseBodyEventsRichTextDescription(ListEventsResponseBodyEventsRichTextDescription &&) = default ;
    ListEventsResponseBodyEventsRichTextDescription(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsResponseBodyEventsRichTextDescription() = default ;
    ListEventsResponseBodyEventsRichTextDescription& operator=(const ListEventsResponseBodyEventsRichTextDescription &) = default ;
    ListEventsResponseBodyEventsRichTextDescription& operator=(ListEventsResponseBodyEventsRichTextDescription &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->text_ != nullptr; };
    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ListEventsResponseBodyEventsRichTextDescription& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
