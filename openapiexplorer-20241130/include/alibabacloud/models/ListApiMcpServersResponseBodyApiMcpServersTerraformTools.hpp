// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIMCPSERVERSRESPONSEBODYAPIMCPSERVERSTERRAFORMTOOLS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIMCPSERVERSRESPONSEBODYAPIMCPSERVERSTERRAFORMTOOLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class ListApiMcpServersResponseBodyApiMcpServersTerraformTools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiMcpServersResponseBodyApiMcpServersTerraformTools& obj) { 
      DARABONBA_PTR_TO_JSON(async, async_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(destroyPolicy, destroyPolicy_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiMcpServersResponseBodyApiMcpServersTerraformTools& obj) { 
      DARABONBA_PTR_FROM_JSON(async, async_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(destroyPolicy, destroyPolicy_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ListApiMcpServersResponseBodyApiMcpServersTerraformTools() = default ;
    ListApiMcpServersResponseBodyApiMcpServersTerraformTools(const ListApiMcpServersResponseBodyApiMcpServersTerraformTools &) = default ;
    ListApiMcpServersResponseBodyApiMcpServersTerraformTools(ListApiMcpServersResponseBodyApiMcpServersTerraformTools &&) = default ;
    ListApiMcpServersResponseBodyApiMcpServersTerraformTools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiMcpServersResponseBodyApiMcpServersTerraformTools() = default ;
    ListApiMcpServersResponseBodyApiMcpServersTerraformTools& operator=(const ListApiMcpServersResponseBodyApiMcpServersTerraformTools &) = default ;
    ListApiMcpServersResponseBodyApiMcpServersTerraformTools& operator=(ListApiMcpServersResponseBodyApiMcpServersTerraformTools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->async_ == nullptr
        && return this->code_ == nullptr && return this->description_ == nullptr && return this->destroyPolicy_ == nullptr && return this->name_ == nullptr; };
    // async Field Functions 
    bool hasAsync() const { return this->async_ != nullptr;};
    void deleteAsync() { this->async_ = nullptr;};
    inline bool async() const { DARABONBA_PTR_GET_DEFAULT(async_, false) };
    inline ListApiMcpServersResponseBodyApiMcpServersTerraformTools& setAsync(bool async) { DARABONBA_PTR_SET_VALUE(async_, async) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListApiMcpServersResponseBodyApiMcpServersTerraformTools& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListApiMcpServersResponseBodyApiMcpServersTerraformTools& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destroyPolicy Field Functions 
    bool hasDestroyPolicy() const { return this->destroyPolicy_ != nullptr;};
    void deleteDestroyPolicy() { this->destroyPolicy_ = nullptr;};
    inline string destroyPolicy() const { DARABONBA_PTR_GET_DEFAULT(destroyPolicy_, "") };
    inline ListApiMcpServersResponseBodyApiMcpServersTerraformTools& setDestroyPolicy(string destroyPolicy) { DARABONBA_PTR_SET_VALUE(destroyPolicy_, destroyPolicy) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListApiMcpServersResponseBodyApiMcpServersTerraformTools& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<bool> async_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> destroyPolicy_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
