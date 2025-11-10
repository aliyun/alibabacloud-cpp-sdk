// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPIMCPSERVERREQUESTPROMPTSARGUMENTS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPIMCPSERVERREQUESTPROMPTSARGUMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class UpdateApiMcpServerRequestPromptsArguments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApiMcpServerRequestPromptsArguments& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(required, required_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApiMcpServerRequestPromptsArguments& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(required, required_);
    };
    UpdateApiMcpServerRequestPromptsArguments() = default ;
    UpdateApiMcpServerRequestPromptsArguments(const UpdateApiMcpServerRequestPromptsArguments &) = default ;
    UpdateApiMcpServerRequestPromptsArguments(UpdateApiMcpServerRequestPromptsArguments &&) = default ;
    UpdateApiMcpServerRequestPromptsArguments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApiMcpServerRequestPromptsArguments() = default ;
    UpdateApiMcpServerRequestPromptsArguments& operator=(const UpdateApiMcpServerRequestPromptsArguments &) = default ;
    UpdateApiMcpServerRequestPromptsArguments& operator=(UpdateApiMcpServerRequestPromptsArguments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->name_ == nullptr && return this->required_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateApiMcpServerRequestPromptsArguments& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateApiMcpServerRequestPromptsArguments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool required() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline UpdateApiMcpServerRequestPromptsArguments& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> required_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
