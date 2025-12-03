// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTOASRESPONSEBODYFAILEDMODELSFAILEDMODEL_HPP_
#define ALIBABACLOUD_MODELS_IMPORTOASRESPONSEBODYFAILEDMODELSFAILEDMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ImportOASResponseBodyFailedModelsFailedModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportOASResponseBodyFailedModelsFailedModel& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
    };
    friend void from_json(const Darabonba::Json& j, ImportOASResponseBodyFailedModelsFailedModel& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
    };
    ImportOASResponseBodyFailedModelsFailedModel() = default ;
    ImportOASResponseBodyFailedModelsFailedModel(const ImportOASResponseBodyFailedModelsFailedModel &) = default ;
    ImportOASResponseBodyFailedModelsFailedModel(ImportOASResponseBodyFailedModelsFailedModel &&) = default ;
    ImportOASResponseBodyFailedModelsFailedModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportOASResponseBodyFailedModelsFailedModel() = default ;
    ImportOASResponseBodyFailedModelsFailedModel& operator=(const ImportOASResponseBodyFailedModelsFailedModel &) = default ;
    ImportOASResponseBodyFailedModelsFailedModel& operator=(ImportOASResponseBodyFailedModelsFailedModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMsg_ == nullptr
        && return this->groupId_ == nullptr && return this->modelName_ == nullptr; };
    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ImportOASResponseBodyFailedModelsFailedModel& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ImportOASResponseBodyFailedModelsFailedModel& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ImportOASResponseBodyFailedModelsFailedModel& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


  protected:
    // The error message.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // The ID of the API group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the model.
    std::shared_ptr<string> modelName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
