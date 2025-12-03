// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DRYRUNSWAGGERRESPONSEBODYMODELSUCCESSAPIIMPORTMODELSUCCESS_HPP_
#define ALIBABACLOUD_MODELS_DRYRUNSWAGGERRESPONSEBODYMODELSUCCESSAPIIMPORTMODELSUCCESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelOperation, modelOperation_);
      DARABONBA_PTR_TO_JSON(ModelUid, modelUid_);
    };
    friend void from_json(const Darabonba::Json& j, DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelOperation, modelOperation_);
      DARABONBA_PTR_FROM_JSON(ModelUid, modelUid_);
    };
    DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess() = default ;
    DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess(const DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess &) = default ;
    DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess(DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess &&) = default ;
    DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess() = default ;
    DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess& operator=(const DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess &) = default ;
    DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess& operator=(DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->modelName_ == nullptr && return this->modelOperation_ == nullptr && return this->modelUid_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelOperation Field Functions 
    bool hasModelOperation() const { return this->modelOperation_ != nullptr;};
    void deleteModelOperation() { this->modelOperation_ = nullptr;};
    inline string modelOperation() const { DARABONBA_PTR_GET_DEFAULT(modelOperation_, "") };
    inline DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess& setModelOperation(string modelOperation) { DARABONBA_PTR_SET_VALUE(modelOperation_, modelOperation) };


    // modelUid Field Functions 
    bool hasModelUid() const { return this->modelUid_ != nullptr;};
    void deleteModelUid() { this->modelUid_ = nullptr;};
    inline string modelUid() const { DARABONBA_PTR_GET_DEFAULT(modelUid_, "") };
    inline DryRunSwaggerResponseBodyModelSuccessApiImportModelSuccess& setModelUid(string modelUid) { DARABONBA_PTR_SET_VALUE(modelUid_, modelUid) };


  protected:
    // The ID of the API group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the model.
    std::shared_ptr<string> modelName_ = nullptr;
    // The model operation.
    std::shared_ptr<string> modelOperation_ = nullptr;
    // The UID of the model.
    std::shared_ptr<string> modelUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
