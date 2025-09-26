// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETOOLINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATETOOLINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateToolInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateToolInput& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateToolInput& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
    };
    UpdateToolInput() = default ;
    UpdateToolInput(const UpdateToolInput &) = default ;
    UpdateToolInput(UpdateToolInput &&) = default ;
    UpdateToolInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateToolInput() = default ;
    UpdateToolInput& operator=(const UpdateToolInput &) = default ;
    UpdateToolInput& operator=(UpdateToolInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->name_ != nullptr && this->schema_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateToolInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateToolInput& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline UpdateToolInput& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> schema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
