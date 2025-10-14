// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETFORMDATABYIDLISTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETFORMDATABYIDLISTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchGetFormDataByIdListResponseBodyResultModifyUser.hpp>
#include <alibabacloud/models/BatchGetFormDataByIdListResponseBodyResultOriginator.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class BatchGetFormDataByIdListResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetFormDataByIdListResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimeGMT, createTimeGMT_);
      DARABONBA_PTR_TO_JSON(CreatorUserId, creatorUserId_);
      DARABONBA_ANY_TO_JSON(FormData, formData_);
      DARABONBA_PTR_TO_JSON(FormInstanceId, formInstanceId_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceValue, instanceValue_);
      DARABONBA_PTR_TO_JSON(ModifiedTimeGMT, modifiedTimeGMT_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_TO_JSON(Originator, originator_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetFormDataByIdListResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimeGMT, createTimeGMT_);
      DARABONBA_PTR_FROM_JSON(CreatorUserId, creatorUserId_);
      DARABONBA_ANY_FROM_JSON(FormData, formData_);
      DARABONBA_PTR_FROM_JSON(FormInstanceId, formInstanceId_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceValue, instanceValue_);
      DARABONBA_PTR_FROM_JSON(ModifiedTimeGMT, modifiedTimeGMT_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_FROM_JSON(Originator, originator_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    BatchGetFormDataByIdListResponseBodyResult() = default ;
    BatchGetFormDataByIdListResponseBodyResult(const BatchGetFormDataByIdListResponseBodyResult &) = default ;
    BatchGetFormDataByIdListResponseBodyResult(BatchGetFormDataByIdListResponseBodyResult &&) = default ;
    BatchGetFormDataByIdListResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetFormDataByIdListResponseBodyResult() = default ;
    BatchGetFormDataByIdListResponseBodyResult& operator=(const BatchGetFormDataByIdListResponseBodyResult &) = default ;
    BatchGetFormDataByIdListResponseBodyResult& operator=(BatchGetFormDataByIdListResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTimeGMT_ == nullptr
        && return this->creatorUserId_ == nullptr && return this->formData_ == nullptr && return this->formInstanceId_ == nullptr && return this->formUuid_ == nullptr && return this->id_ == nullptr
        && return this->instanceValue_ == nullptr && return this->modifiedTimeGMT_ == nullptr && return this->modifier_ == nullptr && return this->modifyUser_ == nullptr && return this->originator_ == nullptr
        && return this->sequence_ == nullptr && return this->serialNumber_ == nullptr && return this->title_ == nullptr && return this->version_ == nullptr; };
    // createTimeGMT Field Functions 
    bool hasCreateTimeGMT() const { return this->createTimeGMT_ != nullptr;};
    void deleteCreateTimeGMT() { this->createTimeGMT_ = nullptr;};
    inline string createTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createTimeGMT_, "") };
    inline BatchGetFormDataByIdListResponseBodyResult& setCreateTimeGMT(string createTimeGMT) { DARABONBA_PTR_SET_VALUE(createTimeGMT_, createTimeGMT) };


    // creatorUserId Field Functions 
    bool hasCreatorUserId() const { return this->creatorUserId_ != nullptr;};
    void deleteCreatorUserId() { this->creatorUserId_ = nullptr;};
    inline string creatorUserId() const { DARABONBA_PTR_GET_DEFAULT(creatorUserId_, "") };
    inline BatchGetFormDataByIdListResponseBodyResult& setCreatorUserId(string creatorUserId) { DARABONBA_PTR_SET_VALUE(creatorUserId_, creatorUserId) };


    // formData Field Functions 
    bool hasFormData() const { return this->formData_ != nullptr;};
    void deleteFormData() { this->formData_ = nullptr;};
    inline     const Darabonba::Json & formData() const { DARABONBA_GET(formData_) };
    Darabonba::Json & formData() { DARABONBA_GET(formData_) };
    inline BatchGetFormDataByIdListResponseBodyResult& setFormData(const Darabonba::Json & formData) { DARABONBA_SET_VALUE(formData_, formData) };
    inline BatchGetFormDataByIdListResponseBodyResult& setFormData(Darabonba::Json & formData) { DARABONBA_SET_RVALUE(formData_, formData) };


    // formInstanceId Field Functions 
    bool hasFormInstanceId() const { return this->formInstanceId_ != nullptr;};
    void deleteFormInstanceId() { this->formInstanceId_ = nullptr;};
    inline string formInstanceId() const { DARABONBA_PTR_GET_DEFAULT(formInstanceId_, "") };
    inline BatchGetFormDataByIdListResponseBodyResult& setFormInstanceId(string formInstanceId) { DARABONBA_PTR_SET_VALUE(formInstanceId_, formInstanceId) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string formUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline BatchGetFormDataByIdListResponseBodyResult& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline BatchGetFormDataByIdListResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceValue Field Functions 
    bool hasInstanceValue() const { return this->instanceValue_ != nullptr;};
    void deleteInstanceValue() { this->instanceValue_ = nullptr;};
    inline string instanceValue() const { DARABONBA_PTR_GET_DEFAULT(instanceValue_, "") };
    inline BatchGetFormDataByIdListResponseBodyResult& setInstanceValue(string instanceValue) { DARABONBA_PTR_SET_VALUE(instanceValue_, instanceValue) };


    // modifiedTimeGMT Field Functions 
    bool hasModifiedTimeGMT() const { return this->modifiedTimeGMT_ != nullptr;};
    void deleteModifiedTimeGMT() { this->modifiedTimeGMT_ = nullptr;};
    inline string modifiedTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimeGMT_, "") };
    inline BatchGetFormDataByIdListResponseBodyResult& setModifiedTimeGMT(string modifiedTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedTimeGMT_, modifiedTimeGMT) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline BatchGetFormDataByIdListResponseBodyResult& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline const Models::BatchGetFormDataByIdListResponseBodyResultModifyUser & modifyUser() const { DARABONBA_PTR_GET_CONST(modifyUser_, Models::BatchGetFormDataByIdListResponseBodyResultModifyUser) };
    inline Models::BatchGetFormDataByIdListResponseBodyResultModifyUser modifyUser() { DARABONBA_PTR_GET(modifyUser_, Models::BatchGetFormDataByIdListResponseBodyResultModifyUser) };
    inline BatchGetFormDataByIdListResponseBodyResult& setModifyUser(const Models::BatchGetFormDataByIdListResponseBodyResultModifyUser & modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };
    inline BatchGetFormDataByIdListResponseBodyResult& setModifyUser(Models::BatchGetFormDataByIdListResponseBodyResultModifyUser && modifyUser) { DARABONBA_PTR_SET_RVALUE(modifyUser_, modifyUser) };


    // originator Field Functions 
    bool hasOriginator() const { return this->originator_ != nullptr;};
    void deleteOriginator() { this->originator_ = nullptr;};
    inline const Models::BatchGetFormDataByIdListResponseBodyResultOriginator & originator() const { DARABONBA_PTR_GET_CONST(originator_, Models::BatchGetFormDataByIdListResponseBodyResultOriginator) };
    inline Models::BatchGetFormDataByIdListResponseBodyResultOriginator originator() { DARABONBA_PTR_GET(originator_, Models::BatchGetFormDataByIdListResponseBodyResultOriginator) };
    inline BatchGetFormDataByIdListResponseBodyResult& setOriginator(const Models::BatchGetFormDataByIdListResponseBodyResultOriginator & originator) { DARABONBA_PTR_SET_VALUE(originator_, originator) };
    inline BatchGetFormDataByIdListResponseBodyResult& setOriginator(Models::BatchGetFormDataByIdListResponseBodyResultOriginator && originator) { DARABONBA_PTR_SET_RVALUE(originator_, originator) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline string sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
    inline BatchGetFormDataByIdListResponseBodyResult& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline BatchGetFormDataByIdListResponseBodyResult& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline BatchGetFormDataByIdListResponseBodyResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline BatchGetFormDataByIdListResponseBodyResult& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> createTimeGMT_ = nullptr;
    std::shared_ptr<string> creatorUserId_ = nullptr;
    Darabonba::Json formData_ = nullptr;
    std::shared_ptr<string> formInstanceId_ = nullptr;
    std::shared_ptr<string> formUuid_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> instanceValue_ = nullptr;
    std::shared_ptr<string> modifiedTimeGMT_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<Models::BatchGetFormDataByIdListResponseBodyResultModifyUser> modifyUser_ = nullptr;
    std::shared_ptr<Models::BatchGetFormDataByIdListResponseBodyResultOriginator> originator_ = nullptr;
    std::shared_ptr<string> sequence_ = nullptr;
    std::shared_ptr<string> serialNumber_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
