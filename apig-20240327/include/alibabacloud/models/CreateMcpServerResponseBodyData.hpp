// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCPSERVERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCPSERVERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateMcpServerResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcpServerResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(mcpServerId, mcpServerId_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcpServerResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(mcpServerId, mcpServerId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CreateMcpServerResponseBodyData() = default ;
    CreateMcpServerResponseBodyData(const CreateMcpServerResponseBodyData &) = default ;
    CreateMcpServerResponseBodyData(CreateMcpServerResponseBodyData &&) = default ;
    CreateMcpServerResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcpServerResponseBodyData() = default ;
    CreateMcpServerResponseBodyData& operator=(const CreateMcpServerResponseBodyData &) = default ;
    CreateMcpServerResponseBodyData& operator=(CreateMcpServerResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mcpServerId_ == nullptr
        && return this->name_ == nullptr; };
    // mcpServerId Field Functions 
    bool hasMcpServerId() const { return this->mcpServerId_ != nullptr;};
    void deleteMcpServerId() { this->mcpServerId_ = nullptr;};
    inline string mcpServerId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerId_, "") };
    inline CreateMcpServerResponseBodyData& setMcpServerId(string mcpServerId) { DARABONBA_PTR_SET_VALUE(mcpServerId_, mcpServerId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMcpServerResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // MCP Server ID
    std::shared_ptr<string> mcpServerId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
