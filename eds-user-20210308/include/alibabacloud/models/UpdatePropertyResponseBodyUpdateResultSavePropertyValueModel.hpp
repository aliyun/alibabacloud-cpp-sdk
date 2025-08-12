// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROPERTYRESPONSEBODYUPDATERESULTSAVEPROPERTYVALUEMODEL_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROPERTYRESPONSEBODYUPDATERESULTSAVEPROPERTYVALUEMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues.hpp>
#include <alibabacloud/models/UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelSavePropertyValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel& obj) { 
      DARABONBA_PTR_TO_JSON(FailedPropertyValues, failedPropertyValues_);
      DARABONBA_PTR_TO_JSON(SavePropertyValues, savePropertyValues_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedPropertyValues, failedPropertyValues_);
      DARABONBA_PTR_FROM_JSON(SavePropertyValues, savePropertyValues_);
    };
    UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel() = default ;
    UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel(const UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel &) = default ;
    UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel(UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel &&) = default ;
    UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel() = default ;
    UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel& operator=(const UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel &) = default ;
    UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel& operator=(UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedPropertyValues_ != nullptr
        && this->savePropertyValues_ != nullptr; };
    // failedPropertyValues Field Functions 
    bool hasFailedPropertyValues() const { return this->failedPropertyValues_ != nullptr;};
    void deleteFailedPropertyValues() { this->failedPropertyValues_ = nullptr;};
    inline const vector<Models::UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues> & failedPropertyValues() const { DARABONBA_PTR_GET_CONST(failedPropertyValues_, vector<Models::UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues>) };
    inline vector<Models::UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues> failedPropertyValues() { DARABONBA_PTR_GET(failedPropertyValues_, vector<Models::UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues>) };
    inline UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel& setFailedPropertyValues(const vector<Models::UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues> & failedPropertyValues) { DARABONBA_PTR_SET_VALUE(failedPropertyValues_, failedPropertyValues) };
    inline UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel& setFailedPropertyValues(vector<Models::UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues> && failedPropertyValues) { DARABONBA_PTR_SET_RVALUE(failedPropertyValues_, failedPropertyValues) };


    // savePropertyValues Field Functions 
    bool hasSavePropertyValues() const { return this->savePropertyValues_ != nullptr;};
    void deleteSavePropertyValues() { this->savePropertyValues_ = nullptr;};
    inline const vector<Models::UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelSavePropertyValues> & savePropertyValues() const { DARABONBA_PTR_GET_CONST(savePropertyValues_, vector<Models::UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelSavePropertyValues>) };
    inline vector<Models::UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelSavePropertyValues> savePropertyValues() { DARABONBA_PTR_GET(savePropertyValues_, vector<Models::UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelSavePropertyValues>) };
    inline UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel& setSavePropertyValues(const vector<Models::UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelSavePropertyValues> & savePropertyValues) { DARABONBA_PTR_SET_VALUE(savePropertyValues_, savePropertyValues) };
    inline UpdatePropertyResponseBodyUpdateResultSavePropertyValueModel& setSavePropertyValues(vector<Models::UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelSavePropertyValues> && savePropertyValues) { DARABONBA_PTR_SET_RVALUE(savePropertyValues_, savePropertyValues) };


  protected:
    // The property values that failed to be modified.
    std::shared_ptr<vector<Models::UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues>> failedPropertyValues_ = nullptr;
    // The property values that were modified.
    std::shared_ptr<vector<Models::UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelSavePropertyValues>> savePropertyValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
