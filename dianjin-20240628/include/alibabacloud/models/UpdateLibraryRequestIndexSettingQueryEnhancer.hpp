// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIBRARYREQUESTINDEXSETTINGQUERYENHANCER_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIBRARYREQUESTINDEXSETTINGQUERYENHANCER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class UpdateLibraryRequestIndexSettingQueryEnhancer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLibraryRequestIndexSettingQueryEnhancer& obj) { 
      DARABONBA_PTR_TO_JSON(enableFollowUp, enableFollowUp_);
      DARABONBA_PTR_TO_JSON(enableMultiQuery, enableMultiQuery_);
      DARABONBA_PTR_TO_JSON(enableOpenQa, enableOpenQa_);
      DARABONBA_PTR_TO_JSON(enableQueryRewrite, enableQueryRewrite_);
      DARABONBA_PTR_TO_JSON(enableSession, enableSession_);
      DARABONBA_PTR_TO_JSON(localKnowledgeId, localKnowledgeId_);
      DARABONBA_PTR_TO_JSON(withDocumentReference, withDocumentReference_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLibraryRequestIndexSettingQueryEnhancer& obj) { 
      DARABONBA_PTR_FROM_JSON(enableFollowUp, enableFollowUp_);
      DARABONBA_PTR_FROM_JSON(enableMultiQuery, enableMultiQuery_);
      DARABONBA_PTR_FROM_JSON(enableOpenQa, enableOpenQa_);
      DARABONBA_PTR_FROM_JSON(enableQueryRewrite, enableQueryRewrite_);
      DARABONBA_PTR_FROM_JSON(enableSession, enableSession_);
      DARABONBA_PTR_FROM_JSON(localKnowledgeId, localKnowledgeId_);
      DARABONBA_PTR_FROM_JSON(withDocumentReference, withDocumentReference_);
    };
    UpdateLibraryRequestIndexSettingQueryEnhancer() = default ;
    UpdateLibraryRequestIndexSettingQueryEnhancer(const UpdateLibraryRequestIndexSettingQueryEnhancer &) = default ;
    UpdateLibraryRequestIndexSettingQueryEnhancer(UpdateLibraryRequestIndexSettingQueryEnhancer &&) = default ;
    UpdateLibraryRequestIndexSettingQueryEnhancer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLibraryRequestIndexSettingQueryEnhancer() = default ;
    UpdateLibraryRequestIndexSettingQueryEnhancer& operator=(const UpdateLibraryRequestIndexSettingQueryEnhancer &) = default ;
    UpdateLibraryRequestIndexSettingQueryEnhancer& operator=(UpdateLibraryRequestIndexSettingQueryEnhancer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableFollowUp_ != nullptr
        && this->enableMultiQuery_ != nullptr && this->enableOpenQa_ != nullptr && this->enableQueryRewrite_ != nullptr && this->enableSession_ != nullptr && this->localKnowledgeId_ != nullptr
        && this->withDocumentReference_ != nullptr; };
    // enableFollowUp Field Functions 
    bool hasEnableFollowUp() const { return this->enableFollowUp_ != nullptr;};
    void deleteEnableFollowUp() { this->enableFollowUp_ = nullptr;};
    inline bool enableFollowUp() const { DARABONBA_PTR_GET_DEFAULT(enableFollowUp_, false) };
    inline UpdateLibraryRequestIndexSettingQueryEnhancer& setEnableFollowUp(bool enableFollowUp) { DARABONBA_PTR_SET_VALUE(enableFollowUp_, enableFollowUp) };


    // enableMultiQuery Field Functions 
    bool hasEnableMultiQuery() const { return this->enableMultiQuery_ != nullptr;};
    void deleteEnableMultiQuery() { this->enableMultiQuery_ = nullptr;};
    inline bool enableMultiQuery() const { DARABONBA_PTR_GET_DEFAULT(enableMultiQuery_, false) };
    inline UpdateLibraryRequestIndexSettingQueryEnhancer& setEnableMultiQuery(bool enableMultiQuery) { DARABONBA_PTR_SET_VALUE(enableMultiQuery_, enableMultiQuery) };


    // enableOpenQa Field Functions 
    bool hasEnableOpenQa() const { return this->enableOpenQa_ != nullptr;};
    void deleteEnableOpenQa() { this->enableOpenQa_ = nullptr;};
    inline bool enableOpenQa() const { DARABONBA_PTR_GET_DEFAULT(enableOpenQa_, false) };
    inline UpdateLibraryRequestIndexSettingQueryEnhancer& setEnableOpenQa(bool enableOpenQa) { DARABONBA_PTR_SET_VALUE(enableOpenQa_, enableOpenQa) };


    // enableQueryRewrite Field Functions 
    bool hasEnableQueryRewrite() const { return this->enableQueryRewrite_ != nullptr;};
    void deleteEnableQueryRewrite() { this->enableQueryRewrite_ = nullptr;};
    inline bool enableQueryRewrite() const { DARABONBA_PTR_GET_DEFAULT(enableQueryRewrite_, false) };
    inline UpdateLibraryRequestIndexSettingQueryEnhancer& setEnableQueryRewrite(bool enableQueryRewrite) { DARABONBA_PTR_SET_VALUE(enableQueryRewrite_, enableQueryRewrite) };


    // enableSession Field Functions 
    bool hasEnableSession() const { return this->enableSession_ != nullptr;};
    void deleteEnableSession() { this->enableSession_ = nullptr;};
    inline bool enableSession() const { DARABONBA_PTR_GET_DEFAULT(enableSession_, false) };
    inline UpdateLibraryRequestIndexSettingQueryEnhancer& setEnableSession(bool enableSession) { DARABONBA_PTR_SET_VALUE(enableSession_, enableSession) };


    // localKnowledgeId Field Functions 
    bool hasLocalKnowledgeId() const { return this->localKnowledgeId_ != nullptr;};
    void deleteLocalKnowledgeId() { this->localKnowledgeId_ = nullptr;};
    inline string localKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(localKnowledgeId_, "") };
    inline UpdateLibraryRequestIndexSettingQueryEnhancer& setLocalKnowledgeId(string localKnowledgeId) { DARABONBA_PTR_SET_VALUE(localKnowledgeId_, localKnowledgeId) };


    // withDocumentReference Field Functions 
    bool hasWithDocumentReference() const { return this->withDocumentReference_ != nullptr;};
    void deleteWithDocumentReference() { this->withDocumentReference_ = nullptr;};
    inline bool withDocumentReference() const { DARABONBA_PTR_GET_DEFAULT(withDocumentReference_, false) };
    inline UpdateLibraryRequestIndexSettingQueryEnhancer& setWithDocumentReference(bool withDocumentReference) { DARABONBA_PTR_SET_VALUE(withDocumentReference_, withDocumentReference) };


  protected:
    std::shared_ptr<bool> enableFollowUp_ = nullptr;
    std::shared_ptr<bool> enableMultiQuery_ = nullptr;
    std::shared_ptr<bool> enableOpenQa_ = nullptr;
    std::shared_ptr<bool> enableQueryRewrite_ = nullptr;
    std::shared_ptr<bool> enableSession_ = nullptr;
    std::shared_ptr<string> localKnowledgeId_ = nullptr;
    std::shared_ptr<bool> withDocumentReference_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
