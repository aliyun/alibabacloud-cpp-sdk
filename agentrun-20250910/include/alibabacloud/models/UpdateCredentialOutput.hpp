// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECREDENTIALOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATECREDENTIALOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateCredentialOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCredentialOutput& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCredentialOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    UpdateCredentialOutput() = default ;
    UpdateCredentialOutput(const UpdateCredentialOutput &) = default ;
    UpdateCredentialOutput(UpdateCredentialOutput &&) = default ;
    UpdateCredentialOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCredentialOutput() = default ;
    UpdateCredentialOutput& operator=(const UpdateCredentialOutput &) = default ;
    UpdateCredentialOutput& operator=(UpdateCredentialOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr && this->type_ != nullptr && this->updatedAt_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateCredentialOutput& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateCredentialOutput& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateCredentialOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline UpdateCredentialOutput& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> updatedAt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
