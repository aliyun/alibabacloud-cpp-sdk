// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MCPTOOLMETA_HPP_
#define ALIBABACLOUD_MODELS_MCPTOOLMETA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class MCPToolMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MCPToolMeta& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_ANY_TO_JSON(inputSchema, inputSchema_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, MCPToolMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_ANY_FROM_JSON(inputSchema, inputSchema_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    MCPToolMeta() = default ;
    MCPToolMeta(const MCPToolMeta &) = default ;
    MCPToolMeta(MCPToolMeta &&) = default ;
    MCPToolMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MCPToolMeta() = default ;
    MCPToolMeta& operator=(const MCPToolMeta &) = default ;
    MCPToolMeta& operator=(MCPToolMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->inputSchema_ != nullptr && this->name_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline MCPToolMeta& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // inputSchema Field Functions 
    bool hasInputSchema() const { return this->inputSchema_ != nullptr;};
    void deleteInputSchema() { this->inputSchema_ = nullptr;};
    inline     const Darabonba::Json & inputSchema() const { DARABONBA_GET(inputSchema_) };
    Darabonba::Json & inputSchema() { DARABONBA_GET(inputSchema_) };
    inline MCPToolMeta& setInputSchema(const Darabonba::Json & inputSchema) { DARABONBA_SET_VALUE(inputSchema_, inputSchema) };
    inline MCPToolMeta& setInputSchema(Darabonba::Json & inputSchema) { DARABONBA_SET_RVALUE(inputSchema_, inputSchema) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MCPToolMeta& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    Darabonba::Json inputSchema_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
