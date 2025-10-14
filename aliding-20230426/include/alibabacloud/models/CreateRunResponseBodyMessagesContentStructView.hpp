// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTSTRUCTVIEW_HPP_
#define ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTSTRUCTVIEW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentStructViewParts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateRunResponseBodyMessagesContentStructView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRunResponseBodyMessagesContentStructView& obj) { 
      DARABONBA_PTR_TO_JSON(parts, parts_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRunResponseBodyMessagesContentStructView& obj) { 
      DARABONBA_PTR_FROM_JSON(parts, parts_);
    };
    CreateRunResponseBodyMessagesContentStructView() = default ;
    CreateRunResponseBodyMessagesContentStructView(const CreateRunResponseBodyMessagesContentStructView &) = default ;
    CreateRunResponseBodyMessagesContentStructView(CreateRunResponseBodyMessagesContentStructView &&) = default ;
    CreateRunResponseBodyMessagesContentStructView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRunResponseBodyMessagesContentStructView() = default ;
    CreateRunResponseBodyMessagesContentStructView& operator=(const CreateRunResponseBodyMessagesContentStructView &) = default ;
    CreateRunResponseBodyMessagesContentStructView& operator=(CreateRunResponseBodyMessagesContentStructView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parts_ == nullptr; };
    // parts Field Functions 
    bool hasParts() const { return this->parts_ != nullptr;};
    void deleteParts() { this->parts_ = nullptr;};
    inline const vector<Models::CreateRunResponseBodyMessagesContentStructViewParts> & parts() const { DARABONBA_PTR_GET_CONST(parts_, vector<Models::CreateRunResponseBodyMessagesContentStructViewParts>) };
    inline vector<Models::CreateRunResponseBodyMessagesContentStructViewParts> parts() { DARABONBA_PTR_GET(parts_, vector<Models::CreateRunResponseBodyMessagesContentStructViewParts>) };
    inline CreateRunResponseBodyMessagesContentStructView& setParts(const vector<Models::CreateRunResponseBodyMessagesContentStructViewParts> & parts) { DARABONBA_PTR_SET_VALUE(parts_, parts) };
    inline CreateRunResponseBodyMessagesContentStructView& setParts(vector<Models::CreateRunResponseBodyMessagesContentStructViewParts> && parts) { DARABONBA_PTR_SET_RVALUE(parts_, parts) };


  protected:
    std::shared_ptr<vector<Models::CreateRunResponseBodyMessagesContentStructViewParts>> parts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
