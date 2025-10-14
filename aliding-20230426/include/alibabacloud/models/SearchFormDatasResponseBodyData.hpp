// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHFORMDATASRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SEARCHFORMDATASRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchFormDatasResponseBodyDataModifyUser.hpp>
#include <alibabacloud/models/SearchFormDatasResponseBodyDataOriginator.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SearchFormDatasResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchFormDatasResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTimeGMT, createdTimeGMT_);
      DARABONBA_PTR_TO_JSON(CreatorUserId, creatorUserId_);
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_ANY_TO_JSON(FormData, formData_);
      DARABONBA_PTR_TO_JSON(FormInstanceId, formInstanceId_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(InstanceValue, instanceValue_);
      DARABONBA_PTR_TO_JSON(ModelUuid, modelUuid_);
      DARABONBA_PTR_TO_JSON(ModifiedTimeGMT, modifiedTimeGMT_);
      DARABONBA_PTR_TO_JSON(ModifierUserId, modifierUserId_);
      DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_TO_JSON(Originator, originator_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SerialNo, serialNo_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, SearchFormDatasResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTimeGMT, createdTimeGMT_);
      DARABONBA_PTR_FROM_JSON(CreatorUserId, creatorUserId_);
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_ANY_FROM_JSON(FormData, formData_);
      DARABONBA_PTR_FROM_JSON(FormInstanceId, formInstanceId_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(InstanceValue, instanceValue_);
      DARABONBA_PTR_FROM_JSON(ModelUuid, modelUuid_);
      DARABONBA_PTR_FROM_JSON(ModifiedTimeGMT, modifiedTimeGMT_);
      DARABONBA_PTR_FROM_JSON(ModifierUserId, modifierUserId_);
      DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_FROM_JSON(Originator, originator_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SerialNo, serialNo_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    SearchFormDatasResponseBodyData() = default ;
    SearchFormDatasResponseBodyData(const SearchFormDatasResponseBodyData &) = default ;
    SearchFormDatasResponseBodyData(SearchFormDatasResponseBodyData &&) = default ;
    SearchFormDatasResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchFormDatasResponseBodyData() = default ;
    SearchFormDatasResponseBodyData& operator=(const SearchFormDatasResponseBodyData &) = default ;
    SearchFormDatasResponseBodyData& operator=(SearchFormDatasResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTimeGMT_ == nullptr
        && return this->creatorUserId_ == nullptr && return this->dataId_ == nullptr && return this->formData_ == nullptr && return this->formInstanceId_ == nullptr && return this->formUuid_ == nullptr
        && return this->instanceValue_ == nullptr && return this->modelUuid_ == nullptr && return this->modifiedTimeGMT_ == nullptr && return this->modifierUserId_ == nullptr && return this->modifyUser_ == nullptr
        && return this->originator_ == nullptr && return this->sequence_ == nullptr && return this->serialNo_ == nullptr && return this->title_ == nullptr && return this->version_ == nullptr; };
    // createdTimeGMT Field Functions 
    bool hasCreatedTimeGMT() const { return this->createdTimeGMT_ != nullptr;};
    void deleteCreatedTimeGMT() { this->createdTimeGMT_ = nullptr;};
    inline string createdTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createdTimeGMT_, "") };
    inline SearchFormDatasResponseBodyData& setCreatedTimeGMT(string createdTimeGMT) { DARABONBA_PTR_SET_VALUE(createdTimeGMT_, createdTimeGMT) };


    // creatorUserId Field Functions 
    bool hasCreatorUserId() const { return this->creatorUserId_ != nullptr;};
    void deleteCreatorUserId() { this->creatorUserId_ = nullptr;};
    inline string creatorUserId() const { DARABONBA_PTR_GET_DEFAULT(creatorUserId_, "") };
    inline SearchFormDatasResponseBodyData& setCreatorUserId(string creatorUserId) { DARABONBA_PTR_SET_VALUE(creatorUserId_, creatorUserId) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline int64_t dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, 0L) };
    inline SearchFormDatasResponseBodyData& setDataId(int64_t dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // formData Field Functions 
    bool hasFormData() const { return this->formData_ != nullptr;};
    void deleteFormData() { this->formData_ = nullptr;};
    inline     const Darabonba::Json & formData() const { DARABONBA_GET(formData_) };
    Darabonba::Json & formData() { DARABONBA_GET(formData_) };
    inline SearchFormDatasResponseBodyData& setFormData(const Darabonba::Json & formData) { DARABONBA_SET_VALUE(formData_, formData) };
    inline SearchFormDatasResponseBodyData& setFormData(Darabonba::Json & formData) { DARABONBA_SET_RVALUE(formData_, formData) };


    // formInstanceId Field Functions 
    bool hasFormInstanceId() const { return this->formInstanceId_ != nullptr;};
    void deleteFormInstanceId() { this->formInstanceId_ = nullptr;};
    inline string formInstanceId() const { DARABONBA_PTR_GET_DEFAULT(formInstanceId_, "") };
    inline SearchFormDatasResponseBodyData& setFormInstanceId(string formInstanceId) { DARABONBA_PTR_SET_VALUE(formInstanceId_, formInstanceId) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string formUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline SearchFormDatasResponseBodyData& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // instanceValue Field Functions 
    bool hasInstanceValue() const { return this->instanceValue_ != nullptr;};
    void deleteInstanceValue() { this->instanceValue_ = nullptr;};
    inline string instanceValue() const { DARABONBA_PTR_GET_DEFAULT(instanceValue_, "") };
    inline SearchFormDatasResponseBodyData& setInstanceValue(string instanceValue) { DARABONBA_PTR_SET_VALUE(instanceValue_, instanceValue) };


    // modelUuid Field Functions 
    bool hasModelUuid() const { return this->modelUuid_ != nullptr;};
    void deleteModelUuid() { this->modelUuid_ = nullptr;};
    inline string modelUuid() const { DARABONBA_PTR_GET_DEFAULT(modelUuid_, "") };
    inline SearchFormDatasResponseBodyData& setModelUuid(string modelUuid) { DARABONBA_PTR_SET_VALUE(modelUuid_, modelUuid) };


    // modifiedTimeGMT Field Functions 
    bool hasModifiedTimeGMT() const { return this->modifiedTimeGMT_ != nullptr;};
    void deleteModifiedTimeGMT() { this->modifiedTimeGMT_ = nullptr;};
    inline string modifiedTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimeGMT_, "") };
    inline SearchFormDatasResponseBodyData& setModifiedTimeGMT(string modifiedTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedTimeGMT_, modifiedTimeGMT) };


    // modifierUserId Field Functions 
    bool hasModifierUserId() const { return this->modifierUserId_ != nullptr;};
    void deleteModifierUserId() { this->modifierUserId_ = nullptr;};
    inline string modifierUserId() const { DARABONBA_PTR_GET_DEFAULT(modifierUserId_, "") };
    inline SearchFormDatasResponseBodyData& setModifierUserId(string modifierUserId) { DARABONBA_PTR_SET_VALUE(modifierUserId_, modifierUserId) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline const Models::SearchFormDatasResponseBodyDataModifyUser & modifyUser() const { DARABONBA_PTR_GET_CONST(modifyUser_, Models::SearchFormDatasResponseBodyDataModifyUser) };
    inline Models::SearchFormDatasResponseBodyDataModifyUser modifyUser() { DARABONBA_PTR_GET(modifyUser_, Models::SearchFormDatasResponseBodyDataModifyUser) };
    inline SearchFormDatasResponseBodyData& setModifyUser(const Models::SearchFormDatasResponseBodyDataModifyUser & modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };
    inline SearchFormDatasResponseBodyData& setModifyUser(Models::SearchFormDatasResponseBodyDataModifyUser && modifyUser) { DARABONBA_PTR_SET_RVALUE(modifyUser_, modifyUser) };


    // originator Field Functions 
    bool hasOriginator() const { return this->originator_ != nullptr;};
    void deleteOriginator() { this->originator_ = nullptr;};
    inline const Models::SearchFormDatasResponseBodyDataOriginator & originator() const { DARABONBA_PTR_GET_CONST(originator_, Models::SearchFormDatasResponseBodyDataOriginator) };
    inline Models::SearchFormDatasResponseBodyDataOriginator originator() { DARABONBA_PTR_GET(originator_, Models::SearchFormDatasResponseBodyDataOriginator) };
    inline SearchFormDatasResponseBodyData& setOriginator(const Models::SearchFormDatasResponseBodyDataOriginator & originator) { DARABONBA_PTR_SET_VALUE(originator_, originator) };
    inline SearchFormDatasResponseBodyData& setOriginator(Models::SearchFormDatasResponseBodyDataOriginator && originator) { DARABONBA_PTR_SET_RVALUE(originator_, originator) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline string sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
    inline SearchFormDatasResponseBodyData& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // serialNo Field Functions 
    bool hasSerialNo() const { return this->serialNo_ != nullptr;};
    void deleteSerialNo() { this->serialNo_ = nullptr;};
    inline string serialNo() const { DARABONBA_PTR_GET_DEFAULT(serialNo_, "") };
    inline SearchFormDatasResponseBodyData& setSerialNo(string serialNo) { DARABONBA_PTR_SET_VALUE(serialNo_, serialNo) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SearchFormDatasResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline SearchFormDatasResponseBodyData& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> createdTimeGMT_ = nullptr;
    std::shared_ptr<string> creatorUserId_ = nullptr;
    std::shared_ptr<int64_t> dataId_ = nullptr;
    Darabonba::Json formData_ = nullptr;
    std::shared_ptr<string> formInstanceId_ = nullptr;
    std::shared_ptr<string> formUuid_ = nullptr;
    std::shared_ptr<string> instanceValue_ = nullptr;
    std::shared_ptr<string> modelUuid_ = nullptr;
    std::shared_ptr<string> modifiedTimeGMT_ = nullptr;
    std::shared_ptr<string> modifierUserId_ = nullptr;
    std::shared_ptr<Models::SearchFormDatasResponseBodyDataModifyUser> modifyUser_ = nullptr;
    std::shared_ptr<Models::SearchFormDatasResponseBodyDataOriginator> originator_ = nullptr;
    std::shared_ptr<string> sequence_ = nullptr;
    std::shared_ptr<string> serialNo_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
