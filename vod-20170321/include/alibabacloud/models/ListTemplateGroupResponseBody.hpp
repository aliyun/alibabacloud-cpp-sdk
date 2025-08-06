// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTemplateGroupResponseBodyTemplateGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListTemplateGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplateGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateGroups, templateGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplateGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateGroups, templateGroups_);
    };
    ListTemplateGroupResponseBody() = default ;
    ListTemplateGroupResponseBody(const ListTemplateGroupResponseBody &) = default ;
    ListTemplateGroupResponseBody(ListTemplateGroupResponseBody &&) = default ;
    ListTemplateGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplateGroupResponseBody() = default ;
    ListTemplateGroupResponseBody& operator=(const ListTemplateGroupResponseBody &) = default ;
    ListTemplateGroupResponseBody& operator=(ListTemplateGroupResponseBody &&) = default ;
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
    inline ListTemplateGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateGroups Field Functions 
    bool hasTemplateGroups() const { return this->templateGroups_ != nullptr;};
    void deleteTemplateGroups() { this->templateGroups_ = nullptr;};
    inline const ListTemplateGroupResponseBodyTemplateGroups & templateGroups() const { DARABONBA_PTR_GET_CONST(templateGroups_, ListTemplateGroupResponseBodyTemplateGroups) };
    inline ListTemplateGroupResponseBodyTemplateGroups templateGroups() { DARABONBA_PTR_GET(templateGroups_, ListTemplateGroupResponseBodyTemplateGroups) };
    inline ListTemplateGroupResponseBody& setTemplateGroups(const ListTemplateGroupResponseBodyTemplateGroups & templateGroups) { DARABONBA_PTR_SET_VALUE(templateGroups_, templateGroups) };
    inline ListTemplateGroupResponseBody& setTemplateGroups(ListTemplateGroupResponseBodyTemplateGroups && templateGroups) { DARABONBA_PTR_SET_RVALUE(templateGroups_, templateGroups) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<ListTemplateGroupResponseBodyTemplateGroups> templateGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
