// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTODISPOSERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTODISPOSERECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateAutoDisposeRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAutoDisposeRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoDecisionConclusion, autoDecisionConclusion_);
      DARABONBA_PTR_TO_JSON(AutoDecisionEntityList, autoDecisionEntityList_);
      DARABONBA_PTR_TO_JSON(AutoDecisionResult, autoDecisionResult_);
      DARABONBA_PTR_TO_JSON(AutoDisposeRecordId, autoDisposeRecordId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAutoDisposeRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoDecisionConclusion, autoDecisionConclusion_);
      DARABONBA_PTR_FROM_JSON(AutoDecisionEntityList, autoDecisionEntityList_);
      DARABONBA_PTR_FROM_JSON(AutoDecisionResult, autoDecisionResult_);
      DARABONBA_PTR_FROM_JSON(AutoDisposeRecordId, autoDisposeRecordId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    UpdateAutoDisposeRecordRequest() = default ;
    UpdateAutoDisposeRecordRequest(const UpdateAutoDisposeRecordRequest &) = default ;
    UpdateAutoDisposeRecordRequest(UpdateAutoDisposeRecordRequest &&) = default ;
    UpdateAutoDisposeRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAutoDisposeRecordRequest() = default ;
    UpdateAutoDisposeRecordRequest& operator=(const UpdateAutoDisposeRecordRequest &) = default ;
    UpdateAutoDisposeRecordRequest& operator=(UpdateAutoDisposeRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoDecisionConclusion_ == nullptr
        && this->autoDecisionEntityList_ == nullptr && this->autoDecisionResult_ == nullptr && this->autoDisposeRecordId_ == nullptr && this->lang_ == nullptr; };
    // autoDecisionConclusion Field Functions 
    bool hasAutoDecisionConclusion() const { return this->autoDecisionConclusion_ != nullptr;};
    void deleteAutoDecisionConclusion() { this->autoDecisionConclusion_ = nullptr;};
    inline string getAutoDecisionConclusion() const { DARABONBA_PTR_GET_DEFAULT(autoDecisionConclusion_, "") };
    inline UpdateAutoDisposeRecordRequest& setAutoDecisionConclusion(string autoDecisionConclusion) { DARABONBA_PTR_SET_VALUE(autoDecisionConclusion_, autoDecisionConclusion) };


    // autoDecisionEntityList Field Functions 
    bool hasAutoDecisionEntityList() const { return this->autoDecisionEntityList_ != nullptr;};
    void deleteAutoDecisionEntityList() { this->autoDecisionEntityList_ = nullptr;};
    inline string getAutoDecisionEntityList() const { DARABONBA_PTR_GET_DEFAULT(autoDecisionEntityList_, "") };
    inline UpdateAutoDisposeRecordRequest& setAutoDecisionEntityList(string autoDecisionEntityList) { DARABONBA_PTR_SET_VALUE(autoDecisionEntityList_, autoDecisionEntityList) };


    // autoDecisionResult Field Functions 
    bool hasAutoDecisionResult() const { return this->autoDecisionResult_ != nullptr;};
    void deleteAutoDecisionResult() { this->autoDecisionResult_ = nullptr;};
    inline string getAutoDecisionResult() const { DARABONBA_PTR_GET_DEFAULT(autoDecisionResult_, "") };
    inline UpdateAutoDisposeRecordRequest& setAutoDecisionResult(string autoDecisionResult) { DARABONBA_PTR_SET_VALUE(autoDecisionResult_, autoDecisionResult) };


    // autoDisposeRecordId Field Functions 
    bool hasAutoDisposeRecordId() const { return this->autoDisposeRecordId_ != nullptr;};
    void deleteAutoDisposeRecordId() { this->autoDisposeRecordId_ = nullptr;};
    inline string getAutoDisposeRecordId() const { DARABONBA_PTR_GET_DEFAULT(autoDisposeRecordId_, "") };
    inline UpdateAutoDisposeRecordRequest& setAutoDisposeRecordId(string autoDisposeRecordId) { DARABONBA_PTR_SET_VALUE(autoDisposeRecordId_, autoDisposeRecordId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateAutoDisposeRecordRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    shared_ptr<string> autoDecisionConclusion_ {};
    shared_ptr<string> autoDecisionEntityList_ {};
    shared_ptr<string> autoDecisionResult_ {};
    // This parameter is required.
    shared_ptr<string> autoDisposeRecordId_ {};
    // This parameter is required.
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
