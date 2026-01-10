// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETOOLDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATETOOLDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateToolData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateToolData& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(toolType, toolType_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateToolData& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(toolType, toolType_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    UpdateToolData() = default ;
    UpdateToolData(const UpdateToolData &) = default ;
    UpdateToolData(UpdateToolData &&) = default ;
    UpdateToolData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateToolData() = default ;
    UpdateToolData& operator=(const UpdateToolData &) = default ;
    UpdateToolData& operator=(UpdateToolData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->sourceType_ == nullptr && this->toolType_ == nullptr && this->updatedAt_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateToolData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateToolData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateToolData& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // toolType Field Functions 
    bool hasToolType() const { return this->toolType_ != nullptr;};
    void deleteToolType() { this->toolType_ = nullptr;};
    inline string getToolType() const { DARABONBA_PTR_GET_DEFAULT(toolType_, "") };
    inline UpdateToolData& setToolType(string toolType) { DARABONBA_PTR_SET_VALUE(toolType_, toolType) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline UpdateToolData& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    shared_ptr<string> id_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> sourceType_ {};
    shared_ptr<string> toolType_ {};
    shared_ptr<string> updatedAt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
