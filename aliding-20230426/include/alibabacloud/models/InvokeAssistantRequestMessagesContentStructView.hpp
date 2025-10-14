// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTSTRUCTVIEW_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTSTRUCTVIEW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InvokeAssistantRequestMessagesContentStructViewParts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantRequestMessagesContentStructView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantRequestMessagesContentStructView& obj) { 
      DARABONBA_PTR_TO_JSON(parts, parts_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantRequestMessagesContentStructView& obj) { 
      DARABONBA_PTR_FROM_JSON(parts, parts_);
    };
    InvokeAssistantRequestMessagesContentStructView() = default ;
    InvokeAssistantRequestMessagesContentStructView(const InvokeAssistantRequestMessagesContentStructView &) = default ;
    InvokeAssistantRequestMessagesContentStructView(InvokeAssistantRequestMessagesContentStructView &&) = default ;
    InvokeAssistantRequestMessagesContentStructView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantRequestMessagesContentStructView() = default ;
    InvokeAssistantRequestMessagesContentStructView& operator=(const InvokeAssistantRequestMessagesContentStructView &) = default ;
    InvokeAssistantRequestMessagesContentStructView& operator=(InvokeAssistantRequestMessagesContentStructView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parts_ == nullptr; };
    // parts Field Functions 
    bool hasParts() const { return this->parts_ != nullptr;};
    void deleteParts() { this->parts_ = nullptr;};
    inline const vector<Models::InvokeAssistantRequestMessagesContentStructViewParts> & parts() const { DARABONBA_PTR_GET_CONST(parts_, vector<Models::InvokeAssistantRequestMessagesContentStructViewParts>) };
    inline vector<Models::InvokeAssistantRequestMessagesContentStructViewParts> parts() { DARABONBA_PTR_GET(parts_, vector<Models::InvokeAssistantRequestMessagesContentStructViewParts>) };
    inline InvokeAssistantRequestMessagesContentStructView& setParts(const vector<Models::InvokeAssistantRequestMessagesContentStructViewParts> & parts) { DARABONBA_PTR_SET_VALUE(parts_, parts) };
    inline InvokeAssistantRequestMessagesContentStructView& setParts(vector<Models::InvokeAssistantRequestMessagesContentStructViewParts> && parts) { DARABONBA_PTR_SET_RVALUE(parts_, parts) };


  protected:
    std::shared_ptr<vector<Models::InvokeAssistantRequestMessagesContentStructViewParts>> parts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
