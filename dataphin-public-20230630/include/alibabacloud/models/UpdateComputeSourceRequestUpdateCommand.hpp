// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTESOURCEREQUESTUPDATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTESOURCEREQUESTUPDATECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateComputeSourceRequestUpdateCommandConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateComputeSourceRequestUpdateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeSourceRequestUpdateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeSourceRequestUpdateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateComputeSourceRequestUpdateCommand() = default ;
    UpdateComputeSourceRequestUpdateCommand(const UpdateComputeSourceRequestUpdateCommand &) = default ;
    UpdateComputeSourceRequestUpdateCommand(UpdateComputeSourceRequestUpdateCommand &&) = default ;
    UpdateComputeSourceRequestUpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeSourceRequestUpdateCommand() = default ;
    UpdateComputeSourceRequestUpdateCommand& operator=(const UpdateComputeSourceRequestUpdateCommand &) = default ;
    UpdateComputeSourceRequestUpdateCommand& operator=(UpdateComputeSourceRequestUpdateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configList_ == nullptr
        && return this->description_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr; };
    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline const vector<Models::UpdateComputeSourceRequestUpdateCommandConfigList> & configList() const { DARABONBA_PTR_GET_CONST(configList_, vector<Models::UpdateComputeSourceRequestUpdateCommandConfigList>) };
    inline vector<Models::UpdateComputeSourceRequestUpdateCommandConfigList> configList() { DARABONBA_PTR_GET(configList_, vector<Models::UpdateComputeSourceRequestUpdateCommandConfigList>) };
    inline UpdateComputeSourceRequestUpdateCommand& setConfigList(const vector<Models::UpdateComputeSourceRequestUpdateCommandConfigList> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
    inline UpdateComputeSourceRequestUpdateCommand& setConfigList(vector<Models::UpdateComputeSourceRequestUpdateCommandConfigList> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateComputeSourceRequestUpdateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateComputeSourceRequestUpdateCommand& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateComputeSourceRequestUpdateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateComputeSourceRequestUpdateCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::UpdateComputeSourceRequestUpdateCommandConfigList>> configList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
