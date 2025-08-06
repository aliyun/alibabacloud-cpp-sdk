// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATEGROUPCONSOLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATEGROUPCONSOLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTemplateGroupConsoleResponseBodyTemplateGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListTemplateGroupConsoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplateGroupConsoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateGroups, templateGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplateGroupConsoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateGroups, templateGroups_);
    };
    ListTemplateGroupConsoleResponseBody() = default ;
    ListTemplateGroupConsoleResponseBody(const ListTemplateGroupConsoleResponseBody &) = default ;
    ListTemplateGroupConsoleResponseBody(ListTemplateGroupConsoleResponseBody &&) = default ;
    ListTemplateGroupConsoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplateGroupConsoleResponseBody() = default ;
    ListTemplateGroupConsoleResponseBody& operator=(const ListTemplateGroupConsoleResponseBody &) = default ;
    ListTemplateGroupConsoleResponseBody& operator=(ListTemplateGroupConsoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->templateGroups_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTemplateGroupConsoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateGroups Field Functions 
    bool hasTemplateGroups() const { return this->templateGroups_ != nullptr;};
    void deleteTemplateGroups() { this->templateGroups_ = nullptr;};
    inline const ListTemplateGroupConsoleResponseBodyTemplateGroups & templateGroups() const { DARABONBA_PTR_GET_CONST(templateGroups_, ListTemplateGroupConsoleResponseBodyTemplateGroups) };
    inline ListTemplateGroupConsoleResponseBodyTemplateGroups templateGroups() { DARABONBA_PTR_GET(templateGroups_, ListTemplateGroupConsoleResponseBodyTemplateGroups) };
    inline ListTemplateGroupConsoleResponseBody& setTemplateGroups(const ListTemplateGroupConsoleResponseBodyTemplateGroups & templateGroups) { DARABONBA_PTR_SET_VALUE(templateGroups_, templateGroups) };
    inline ListTemplateGroupConsoleResponseBody& setTemplateGroups(ListTemplateGroupConsoleResponseBodyTemplateGroups && templateGroups) { DARABONBA_PTR_SET_RVALUE(templateGroups_, templateGroups) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<ListTemplateGroupConsoleResponseBodyTemplateGroups> templateGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
