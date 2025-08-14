// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNACOSMCPSERVERRESPONSEBODYDATATOOLSPECTOOLS_HPP_
#define ALIBABACLOUD_MODELS_GETNACOSMCPSERVERRESPONSEBODYDATATOOLSPECTOOLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetNacosMcpServerResponseBodyDataToolSpecTools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNacosMcpServerResponseBodyDataToolSpecTools& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_ANY_TO_JSON(InputSchema, inputSchema_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetNacosMcpServerResponseBodyDataToolSpecTools& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_ANY_FROM_JSON(InputSchema, inputSchema_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetNacosMcpServerResponseBodyDataToolSpecTools() = default ;
    GetNacosMcpServerResponseBodyDataToolSpecTools(const GetNacosMcpServerResponseBodyDataToolSpecTools &) = default ;
    GetNacosMcpServerResponseBodyDataToolSpecTools(GetNacosMcpServerResponseBodyDataToolSpecTools &&) = default ;
    GetNacosMcpServerResponseBodyDataToolSpecTools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNacosMcpServerResponseBodyDataToolSpecTools() = default ;
    GetNacosMcpServerResponseBodyDataToolSpecTools& operator=(const GetNacosMcpServerResponseBodyDataToolSpecTools &) = default ;
    GetNacosMcpServerResponseBodyDataToolSpecTools& operator=(GetNacosMcpServerResponseBodyDataToolSpecTools &&) = default ;
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
    inline GetNacosMcpServerResponseBodyDataToolSpecTools& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // inputSchema Field Functions 
    bool hasInputSchema() const { return this->inputSchema_ != nullptr;};
    void deleteInputSchema() { this->inputSchema_ = nullptr;};
    inline     const Darabonba::Json & inputSchema() const { DARABONBA_GET(inputSchema_) };
    Darabonba::Json & inputSchema() { DARABONBA_GET(inputSchema_) };
    inline GetNacosMcpServerResponseBodyDataToolSpecTools& setInputSchema(const Darabonba::Json & inputSchema) { DARABONBA_SET_VALUE(inputSchema_, inputSchema) };
    inline GetNacosMcpServerResponseBodyDataToolSpecTools& setInputSchema(Darabonba::Json & inputSchema) { DARABONBA_SET_RVALUE(inputSchema_, inputSchema) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetNacosMcpServerResponseBodyDataToolSpecTools& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    Darabonba::Json inputSchema_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
