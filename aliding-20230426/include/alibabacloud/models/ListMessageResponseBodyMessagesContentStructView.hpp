// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODYMESSAGESCONTENTSTRUCTVIEW_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODYMESSAGESCONTENTSTRUCTVIEW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMessageResponseBodyMessagesContentStructViewParts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListMessageResponseBodyMessagesContentStructView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageResponseBodyMessagesContentStructView& obj) { 
      DARABONBA_PTR_TO_JSON(parts, parts_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageResponseBodyMessagesContentStructView& obj) { 
      DARABONBA_PTR_FROM_JSON(parts, parts_);
    };
    ListMessageResponseBodyMessagesContentStructView() = default ;
    ListMessageResponseBodyMessagesContentStructView(const ListMessageResponseBodyMessagesContentStructView &) = default ;
    ListMessageResponseBodyMessagesContentStructView(ListMessageResponseBodyMessagesContentStructView &&) = default ;
    ListMessageResponseBodyMessagesContentStructView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageResponseBodyMessagesContentStructView() = default ;
    ListMessageResponseBodyMessagesContentStructView& operator=(const ListMessageResponseBodyMessagesContentStructView &) = default ;
    ListMessageResponseBodyMessagesContentStructView& operator=(ListMessageResponseBodyMessagesContentStructView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parts_ != nullptr; };
    // parts Field Functions 
    bool hasParts() const { return this->parts_ != nullptr;};
    void deleteParts() { this->parts_ = nullptr;};
    inline const vector<Models::ListMessageResponseBodyMessagesContentStructViewParts> & parts() const { DARABONBA_PTR_GET_CONST(parts_, vector<Models::ListMessageResponseBodyMessagesContentStructViewParts>) };
    inline vector<Models::ListMessageResponseBodyMessagesContentStructViewParts> parts() { DARABONBA_PTR_GET(parts_, vector<Models::ListMessageResponseBodyMessagesContentStructViewParts>) };
    inline ListMessageResponseBodyMessagesContentStructView& setParts(const vector<Models::ListMessageResponseBodyMessagesContentStructViewParts> & parts) { DARABONBA_PTR_SET_VALUE(parts_, parts) };
    inline ListMessageResponseBodyMessagesContentStructView& setParts(vector<Models::ListMessageResponseBodyMessagesContentStructViewParts> && parts) { DARABONBA_PTR_SET_RVALUE(parts_, parts) };


  protected:
    std::shared_ptr<vector<Models::ListMessageResponseBodyMessagesContentStructViewParts>> parts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
