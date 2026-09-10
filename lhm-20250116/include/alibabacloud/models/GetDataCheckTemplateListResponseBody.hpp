// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACHECKTEMPLATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATACHECKTEMPLATELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetDataCheckTemplateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCheckTemplateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCheckTemplateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetDataCheckTemplateListResponseBody() = default ;
    GetDataCheckTemplateListResponseBody(const GetDataCheckTemplateListResponseBody &) = default ;
    GetDataCheckTemplateListResponseBody(GetDataCheckTemplateListResponseBody &&) = default ;
    GetDataCheckTemplateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCheckTemplateListResponseBody() = default ;
    GetDataCheckTemplateListResponseBody& operator=(const GetDataCheckTemplateListResponseBody &) = default ;
    GetDataCheckTemplateListResponseBody& operator=(GetDataCheckTemplateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(checkType, checkType_);
        DARABONBA_PTR_TO_JSON(checkTypeExport, checkTypeExport_);
        DARABONBA_PTR_TO_JSON(checkTypeName, checkTypeName_);
        DARABONBA_PTR_TO_JSON(dsTypes, dsTypes_);
        DARABONBA_PTR_TO_JSON(engineTypes, engineTypes_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(isBuiltin, isBuiltin_);
        DARABONBA_PTR_TO_JSON(isUsedByTask, isUsedByTask_);
        DARABONBA_PTR_TO_JSON(templateDesc, templateDesc_);
        DARABONBA_PTR_TO_JSON(templateId, templateId_);
        DARABONBA_PTR_TO_JSON(templateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(checkType, checkType_);
        DARABONBA_PTR_FROM_JSON(checkTypeExport, checkTypeExport_);
        DARABONBA_PTR_FROM_JSON(checkTypeName, checkTypeName_);
        DARABONBA_PTR_FROM_JSON(dsTypes, dsTypes_);
        DARABONBA_PTR_FROM_JSON(engineTypes, engineTypes_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(isBuiltin, isBuiltin_);
        DARABONBA_PTR_FROM_JSON(isUsedByTask, isUsedByTask_);
        DARABONBA_PTR_FROM_JSON(templateDesc, templateDesc_);
        DARABONBA_PTR_FROM_JSON(templateId, templateId_);
        DARABONBA_PTR_FROM_JSON(templateName, templateName_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkType_ == nullptr
        && this->checkTypeExport_ == nullptr && this->checkTypeName_ == nullptr && this->dsTypes_ == nullptr && this->engineTypes_ == nullptr && this->gmtModified_ == nullptr
        && this->isBuiltin_ == nullptr && this->isUsedByTask_ == nullptr && this->templateDesc_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr; };
      // checkType Field Functions 
      bool hasCheckType() const { return this->checkType_ != nullptr;};
      void deleteCheckType() { this->checkType_ = nullptr;};
      inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
      inline Data& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


      // checkTypeExport Field Functions 
      bool hasCheckTypeExport() const { return this->checkTypeExport_ != nullptr;};
      void deleteCheckTypeExport() { this->checkTypeExport_ = nullptr;};
      inline string getCheckTypeExport() const { DARABONBA_PTR_GET_DEFAULT(checkTypeExport_, "") };
      inline Data& setCheckTypeExport(string checkTypeExport) { DARABONBA_PTR_SET_VALUE(checkTypeExport_, checkTypeExport) };


      // checkTypeName Field Functions 
      bool hasCheckTypeName() const { return this->checkTypeName_ != nullptr;};
      void deleteCheckTypeName() { this->checkTypeName_ = nullptr;};
      inline int32_t getCheckTypeName() const { DARABONBA_PTR_GET_DEFAULT(checkTypeName_, 0) };
      inline Data& setCheckTypeName(int32_t checkTypeName) { DARABONBA_PTR_SET_VALUE(checkTypeName_, checkTypeName) };


      // dsTypes Field Functions 
      bool hasDsTypes() const { return this->dsTypes_ != nullptr;};
      void deleteDsTypes() { this->dsTypes_ = nullptr;};
      inline string getDsTypes() const { DARABONBA_PTR_GET_DEFAULT(dsTypes_, "") };
      inline Data& setDsTypes(string dsTypes) { DARABONBA_PTR_SET_VALUE(dsTypes_, dsTypes) };


      // engineTypes Field Functions 
      bool hasEngineTypes() const { return this->engineTypes_ != nullptr;};
      void deleteEngineTypes() { this->engineTypes_ = nullptr;};
      inline string getEngineTypes() const { DARABONBA_PTR_GET_DEFAULT(engineTypes_, "") };
      inline Data& setEngineTypes(string engineTypes) { DARABONBA_PTR_SET_VALUE(engineTypes_, engineTypes) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // isBuiltin Field Functions 
      bool hasIsBuiltin() const { return this->isBuiltin_ != nullptr;};
      void deleteIsBuiltin() { this->isBuiltin_ = nullptr;};
      inline int32_t getIsBuiltin() const { DARABONBA_PTR_GET_DEFAULT(isBuiltin_, 0) };
      inline Data& setIsBuiltin(int32_t isBuiltin) { DARABONBA_PTR_SET_VALUE(isBuiltin_, isBuiltin) };


      // isUsedByTask Field Functions 
      bool hasIsUsedByTask() const { return this->isUsedByTask_ != nullptr;};
      void deleteIsUsedByTask() { this->isUsedByTask_ = nullptr;};
      inline bool getIsUsedByTask() const { DARABONBA_PTR_GET_DEFAULT(isUsedByTask_, false) };
      inline Data& setIsUsedByTask(bool isUsedByTask) { DARABONBA_PTR_SET_VALUE(isUsedByTask_, isUsedByTask) };


      // templateDesc Field Functions 
      bool hasTemplateDesc() const { return this->templateDesc_ != nullptr;};
      void deleteTemplateDesc() { this->templateDesc_ = nullptr;};
      inline string getTemplateDesc() const { DARABONBA_PTR_GET_DEFAULT(templateDesc_, "") };
      inline Data& setTemplateDesc(string templateDesc) { DARABONBA_PTR_SET_VALUE(templateDesc_, templateDesc) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Data& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Data& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      // The validation rule type. Valid values:
      // - 0: data volume comparison.
      // - 1: metric comparison.
      // - 2: weak content comparison.
      // - 3: custom comparison.
      // - 4: full-text comparison.
      // - 5: null rate comparison.
      shared_ptr<int32_t> checkType_ {};
      // The display name of the check type, used in exported reports.
      shared_ptr<string> checkTypeExport_ {};
      // The name of the check type.
      shared_ptr<int32_t> checkTypeName_ {};
      // The list of covered data source types. Multiple values are separated by commas.
      shared_ptr<string> dsTypes_ {};
      // The list of covered validation engine types, such as Tez and MapReduce. When returned as a string, multiple values are separated by commas.
      shared_ptr<string> engineTypes_ {};
      // The modification time.
      shared_ptr<string> gmtModified_ {};
      // Specifies whether the template is built-in. Valid values:
      // - 0: No. The template is a custom template.
      // - 1: Yes. The template is a built-in template.
      shared_ptr<int32_t> isBuiltin_ {};
      // Indicates whether the template is referenced by a validation task. Valid values:
      // - true: The template is referenced.
      // - false: The template is not referenced.
      // The delete operation does not verify this reference relationship. Confirm before deleting.
      shared_ptr<bool> isUsedByTask_ {};
      // The template description.
      shared_ptr<string> templateDesc_ {};
      // The validation template ID (logical foreign key) that uniquely identifies a validation template.
      shared_ptr<string> templateId_ {};
      // The name of the validation template.
      shared_ptr<string> templateName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetDataCheckTemplateListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetDataCheckTemplateListResponseBody::Data>) };
    inline vector<GetDataCheckTemplateListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetDataCheckTemplateListResponseBody::Data>) };
    inline GetDataCheckTemplateListResponseBody& setData(const vector<GetDataCheckTemplateListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataCheckTemplateListResponseBody& setData(vector<GetDataCheckTemplateListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetDataCheckTemplateListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetDataCheckTemplateListResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataCheckTemplateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataCheckTemplateListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data list returned by the operation. For the structure of each element, see the child field descriptions.
    shared_ptr<vector<GetDataCheckTemplateListResponseBody::Data>> data_ {};
    // The error code. An empty string is returned if the call is successful.
    shared_ptr<string> errCode_ {};
    // The error message. An empty string is returned if the call is successful.
    shared_ptr<string> errMessage_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // - true: The call is successful.
    // - false: The call failed. Check errCode and errMessage for details.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
