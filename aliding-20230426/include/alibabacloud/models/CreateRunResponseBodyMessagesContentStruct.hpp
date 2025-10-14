// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTSTRUCT_HPP_
#define ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTSTRUCT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentStructParts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateRunResponseBodyMessagesContentStruct : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRunResponseBodyMessagesContentStruct& obj) { 
      DARABONBA_PTR_TO_JSON(parts, parts_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRunResponseBodyMessagesContentStruct& obj) { 
      DARABONBA_PTR_FROM_JSON(parts, parts_);
    };
    CreateRunResponseBodyMessagesContentStruct() = default ;
    CreateRunResponseBodyMessagesContentStruct(const CreateRunResponseBodyMessagesContentStruct &) = default ;
    CreateRunResponseBodyMessagesContentStruct(CreateRunResponseBodyMessagesContentStruct &&) = default ;
    CreateRunResponseBodyMessagesContentStruct(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRunResponseBodyMessagesContentStruct() = default ;
    CreateRunResponseBodyMessagesContentStruct& operator=(const CreateRunResponseBodyMessagesContentStruct &) = default ;
    CreateRunResponseBodyMessagesContentStruct& operator=(CreateRunResponseBodyMessagesContentStruct &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parts_ == nullptr; };
    // parts Field Functions 
    bool hasParts() const { return this->parts_ != nullptr;};
    void deleteParts() { this->parts_ = nullptr;};
    inline const vector<Models::CreateRunResponseBodyMessagesContentStructParts> & parts() const { DARABONBA_PTR_GET_CONST(parts_, vector<Models::CreateRunResponseBodyMessagesContentStructParts>) };
    inline vector<Models::CreateRunResponseBodyMessagesContentStructParts> parts() { DARABONBA_PTR_GET(parts_, vector<Models::CreateRunResponseBodyMessagesContentStructParts>) };
    inline CreateRunResponseBodyMessagesContentStruct& setParts(const vector<Models::CreateRunResponseBodyMessagesContentStructParts> & parts) { DARABONBA_PTR_SET_VALUE(parts_, parts) };
    inline CreateRunResponseBodyMessagesContentStruct& setParts(vector<Models::CreateRunResponseBodyMessagesContentStructParts> && parts) { DARABONBA_PTR_SET_RVALUE(parts_, parts) };


  protected:
    std::shared_ptr<vector<Models::CreateRunResponseBodyMessagesContentStructParts>> parts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
