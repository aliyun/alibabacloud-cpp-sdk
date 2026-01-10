// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLASSIFICATIONTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLASSIFICATIONTEMPLATESRESPONSEBODY_HPP_
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
  class ListClassificationTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClassificationTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TemplateList, templateList_);
    };
    friend void from_json(const Darabonba::Json& j, ListClassificationTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TemplateList, templateList_);
    };
    ListClassificationTemplatesResponseBody() = default ;
    ListClassificationTemplatesResponseBody(const ListClassificationTemplatesResponseBody &) = default ;
    ListClassificationTemplatesResponseBody(ListClassificationTemplatesResponseBody &&) = default ;
    ListClassificationTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClassificationTemplatesResponseBody() = default ;
    ListClassificationTemplatesResponseBody& operator=(const ListClassificationTemplatesResponseBody &) = default ;
    ListClassificationTemplatesResponseBody& operator=(ListClassificationTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TemplateList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateList& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateList& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      };
      TemplateList() = default ;
      TemplateList(const TemplateList &) = default ;
      TemplateList(TemplateList &&) = default ;
      TemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateList() = default ;
      TemplateList& operator=(const TemplateList &) = default ;
      TemplateList& operator=(TemplateList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->remark_ == nullptr && this->templateId_ == nullptr && this->templateType_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TemplateList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline TemplateList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline TemplateList& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline TemplateList& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    protected:
      // The name of the classification template.
      shared_ptr<string> name_ {};
      // The remarks.
      shared_ptr<string> remark_ {};
      // The ID of the classification template.
      shared_ptr<int64_t> templateId_ {};
      // The type of the classification template. Valid values:
      // 
      // *   **INNER**: built-in template
      // *   **USER_DEFINE**: custom template
      shared_ptr<string> templateType_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->templateList_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListClassificationTemplatesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListClassificationTemplatesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClassificationTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListClassificationTemplatesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // templateList Field Functions 
    bool hasTemplateList() const { return this->templateList_ != nullptr;};
    void deleteTemplateList() { this->templateList_ = nullptr;};
    inline const vector<ListClassificationTemplatesResponseBody::TemplateList> & getTemplateList() const { DARABONBA_PTR_GET_CONST(templateList_, vector<ListClassificationTemplatesResponseBody::TemplateList>) };
    inline vector<ListClassificationTemplatesResponseBody::TemplateList> getTemplateList() { DARABONBA_PTR_GET(templateList_, vector<ListClassificationTemplatesResponseBody::TemplateList>) };
    inline ListClassificationTemplatesResponseBody& setTemplateList(const vector<ListClassificationTemplatesResponseBody::TemplateList> & templateList) { DARABONBA_PTR_SET_VALUE(templateList_, templateList) };
    inline ListClassificationTemplatesResponseBody& setTemplateList(vector<ListClassificationTemplatesResponseBody::TemplateList> && templateList) { DARABONBA_PTR_SET_RVALUE(templateList_, templateList) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The list of templates.
    shared_ptr<vector<ListClassificationTemplatesResponseBody::TemplateList>> templateList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
