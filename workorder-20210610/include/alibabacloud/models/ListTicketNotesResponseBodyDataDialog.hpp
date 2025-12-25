// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETNOTESRESPONSEBODYDATADIALOG_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETNOTESRESPONSEBODYDATADIALOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class ListTicketNotesResponseBodyDataDialog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketNotesResponseBodyDataDialog& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketNotesResponseBodyDataDialog& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
    };
    ListTicketNotesResponseBodyDataDialog() = default ;
    ListTicketNotesResponseBodyDataDialog(const ListTicketNotesResponseBodyDataDialog &) = default ;
    ListTicketNotesResponseBodyDataDialog(ListTicketNotesResponseBodyDataDialog &&) = default ;
    ListTicketNotesResponseBodyDataDialog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketNotesResponseBodyDataDialog() = default ;
    ListTicketNotesResponseBodyDataDialog& operator=(const ListTicketNotesResponseBodyDataDialog &) = default ;
    ListTicketNotesResponseBodyDataDialog& operator=(ListTicketNotesResponseBodyDataDialog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->schema_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListTicketNotesResponseBodyDataDialog& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline ListTicketNotesResponseBodyDataDialog& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


  protected:
    // Work order communication content
    std::shared_ptr<string> content_ = nullptr;
    // The ticket communication record system card will be used when the system card docking capability is opened in the future. At present, the content can be used to obtain plain text content.
    std::shared_ptr<string> schema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif
