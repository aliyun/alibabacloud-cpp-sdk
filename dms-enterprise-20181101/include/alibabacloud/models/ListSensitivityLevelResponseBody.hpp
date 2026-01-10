// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENSITIVITYLEVELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSENSITIVITYLEVELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSensitivityLevelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSensitivityLevelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SensitivityLevelList, sensitivityLevelList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSensitivityLevelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SensitivityLevelList, sensitivityLevelList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSensitivityLevelResponseBody() = default ;
    ListSensitivityLevelResponseBody(const ListSensitivityLevelResponseBody &) = default ;
    ListSensitivityLevelResponseBody(ListSensitivityLevelResponseBody &&) = default ;
    ListSensitivityLevelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSensitivityLevelResponseBody() = default ;
    ListSensitivityLevelResponseBody& operator=(const ListSensitivityLevelResponseBody &) = default ;
    ListSensitivityLevelResponseBody& operator=(ListSensitivityLevelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SensitivityLevelList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SensitivityLevelList& obj) { 
        DARABONBA_PTR_TO_JSON(IsPlain, isPlain_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      };
      friend void from_json(const Darabonba::Json& j, SensitivityLevelList& obj) { 
        DARABONBA_PTR_FROM_JSON(IsPlain, isPlain_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      };
      SensitivityLevelList() = default ;
      SensitivityLevelList(const SensitivityLevelList &) = default ;
      SensitivityLevelList(SensitivityLevelList &&) = default ;
      SensitivityLevelList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SensitivityLevelList() = default ;
      SensitivityLevelList& operator=(const SensitivityLevelList &) = default ;
      SensitivityLevelList& operator=(SensitivityLevelList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->isPlain_ == nullptr
        && this->name_ == nullptr && this->templateId_ == nullptr && this->templateType_ == nullptr; };
      // isPlain Field Functions 
      bool hasIsPlain() const { return this->isPlain_ != nullptr;};
      void deleteIsPlain() { this->isPlain_ = nullptr;};
      inline bool getIsPlain() const { DARABONBA_PTR_GET_DEFAULT(isPlain_, false) };
      inline SensitivityLevelList& setIsPlain(bool isPlain) { DARABONBA_PTR_SET_VALUE(isPlain_, isPlain) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SensitivityLevelList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline SensitivityLevelList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline SensitivityLevelList& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    protected:
      // Indicates whether the fields of the sensitive level are displayed in plaintext.
      shared_ptr<bool> isPlain_ {};
      // The name of the sensitive level.
      shared_ptr<string> name_ {};
      // The ID of the classification template.
      shared_ptr<string> templateId_ {};
      // The type of the classification template. Valid values:
      // 
      // *   **INNER**: a built-in template.
      // *   **USER_DEFINE**: a custom template.
      shared_ptr<string> templateType_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->sensitivityLevelList_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListSensitivityLevelResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListSensitivityLevelResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSensitivityLevelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sensitivityLevelList Field Functions 
    bool hasSensitivityLevelList() const { return this->sensitivityLevelList_ != nullptr;};
    void deleteSensitivityLevelList() { this->sensitivityLevelList_ = nullptr;};
    inline const vector<ListSensitivityLevelResponseBody::SensitivityLevelList> & getSensitivityLevelList() const { DARABONBA_PTR_GET_CONST(sensitivityLevelList_, vector<ListSensitivityLevelResponseBody::SensitivityLevelList>) };
    inline vector<ListSensitivityLevelResponseBody::SensitivityLevelList> getSensitivityLevelList() { DARABONBA_PTR_GET(sensitivityLevelList_, vector<ListSensitivityLevelResponseBody::SensitivityLevelList>) };
    inline ListSensitivityLevelResponseBody& setSensitivityLevelList(const vector<ListSensitivityLevelResponseBody::SensitivityLevelList> & sensitivityLevelList) { DARABONBA_PTR_SET_VALUE(sensitivityLevelList_, sensitivityLevelList) };
    inline ListSensitivityLevelResponseBody& setSensitivityLevelList(vector<ListSensitivityLevelResponseBody::SensitivityLevelList> && sensitivityLevelList) { DARABONBA_PTR_SET_RVALUE(sensitivityLevelList_, sensitivityLevelList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSensitivityLevelResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> errorCode_ {};
    // The error message returned.
    shared_ptr<string> errorMessage_ {};
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The sensitivity levels.
    shared_ptr<vector<ListSensitivityLevelResponseBody::SensitivityLevelList>> sensitivityLevelList_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
