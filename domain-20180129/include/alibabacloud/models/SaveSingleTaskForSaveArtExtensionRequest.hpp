// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVESINGLETASKFORSAVEARTEXTENSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVESINGLETASKFORSAVEARTEXTENSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveSingleTaskForSaveArtExtensionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveSingleTaskForSaveArtExtensionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DateOrPeriod, dateOrPeriod_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(InscriptionsAndMarkings, inscriptionsAndMarkings_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Maker, maker_);
      DARABONBA_PTR_TO_JSON(MaterialsAndTechniques, materialsAndTechniques_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(Reference, reference_);
      DARABONBA_PTR_TO_JSON(Subject, subject_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, SaveSingleTaskForSaveArtExtensionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DateOrPeriod, dateOrPeriod_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(InscriptionsAndMarkings, inscriptionsAndMarkings_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Maker, maker_);
      DARABONBA_PTR_FROM_JSON(MaterialsAndTechniques, materialsAndTechniques_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(Reference, reference_);
      DARABONBA_PTR_FROM_JSON(Subject, subject_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    SaveSingleTaskForSaveArtExtensionRequest() = default ;
    SaveSingleTaskForSaveArtExtensionRequest(const SaveSingleTaskForSaveArtExtensionRequest &) = default ;
    SaveSingleTaskForSaveArtExtensionRequest(SaveSingleTaskForSaveArtExtensionRequest &&) = default ;
    SaveSingleTaskForSaveArtExtensionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveSingleTaskForSaveArtExtensionRequest() = default ;
    SaveSingleTaskForSaveArtExtensionRequest& operator=(const SaveSingleTaskForSaveArtExtensionRequest &) = default ;
    SaveSingleTaskForSaveArtExtensionRequest& operator=(SaveSingleTaskForSaveArtExtensionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dateOrPeriod_ == nullptr
        && return this->dimensions_ == nullptr && return this->domainName_ == nullptr && return this->features_ == nullptr && return this->inscriptionsAndMarkings_ == nullptr && return this->lang_ == nullptr
        && return this->maker_ == nullptr && return this->materialsAndTechniques_ == nullptr && return this->objectType_ == nullptr && return this->reference_ == nullptr && return this->subject_ == nullptr
        && return this->title_ == nullptr; };
    // dateOrPeriod Field Functions 
    bool hasDateOrPeriod() const { return this->dateOrPeriod_ != nullptr;};
    void deleteDateOrPeriod() { this->dateOrPeriod_ = nullptr;};
    inline string dateOrPeriod() const { DARABONBA_PTR_GET_DEFAULT(dateOrPeriod_, "") };
    inline SaveSingleTaskForSaveArtExtensionRequest& setDateOrPeriod(string dateOrPeriod) { DARABONBA_PTR_SET_VALUE(dateOrPeriod_, dateOrPeriod) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline string dimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
    inline SaveSingleTaskForSaveArtExtensionRequest& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SaveSingleTaskForSaveArtExtensionRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline string features() const { DARABONBA_PTR_GET_DEFAULT(features_, "") };
    inline SaveSingleTaskForSaveArtExtensionRequest& setFeatures(string features) { DARABONBA_PTR_SET_VALUE(features_, features) };


    // inscriptionsAndMarkings Field Functions 
    bool hasInscriptionsAndMarkings() const { return this->inscriptionsAndMarkings_ != nullptr;};
    void deleteInscriptionsAndMarkings() { this->inscriptionsAndMarkings_ = nullptr;};
    inline string inscriptionsAndMarkings() const { DARABONBA_PTR_GET_DEFAULT(inscriptionsAndMarkings_, "") };
    inline SaveSingleTaskForSaveArtExtensionRequest& setInscriptionsAndMarkings(string inscriptionsAndMarkings) { DARABONBA_PTR_SET_VALUE(inscriptionsAndMarkings_, inscriptionsAndMarkings) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveSingleTaskForSaveArtExtensionRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maker Field Functions 
    bool hasMaker() const { return this->maker_ != nullptr;};
    void deleteMaker() { this->maker_ = nullptr;};
    inline string maker() const { DARABONBA_PTR_GET_DEFAULT(maker_, "") };
    inline SaveSingleTaskForSaveArtExtensionRequest& setMaker(string maker) { DARABONBA_PTR_SET_VALUE(maker_, maker) };


    // materialsAndTechniques Field Functions 
    bool hasMaterialsAndTechniques() const { return this->materialsAndTechniques_ != nullptr;};
    void deleteMaterialsAndTechniques() { this->materialsAndTechniques_ = nullptr;};
    inline string materialsAndTechniques() const { DARABONBA_PTR_GET_DEFAULT(materialsAndTechniques_, "") };
    inline SaveSingleTaskForSaveArtExtensionRequest& setMaterialsAndTechniques(string materialsAndTechniques) { DARABONBA_PTR_SET_VALUE(materialsAndTechniques_, materialsAndTechniques) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline SaveSingleTaskForSaveArtExtensionRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // reference Field Functions 
    bool hasReference() const { return this->reference_ != nullptr;};
    void deleteReference() { this->reference_ = nullptr;};
    inline string reference() const { DARABONBA_PTR_GET_DEFAULT(reference_, "") };
    inline SaveSingleTaskForSaveArtExtensionRequest& setReference(string reference) { DARABONBA_PTR_SET_VALUE(reference_, reference) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline SaveSingleTaskForSaveArtExtensionRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SaveSingleTaskForSaveArtExtensionRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> dateOrPeriod_ = nullptr;
    std::shared_ptr<string> dimensions_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> features_ = nullptr;
    std::shared_ptr<string> inscriptionsAndMarkings_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> maker_ = nullptr;
    std::shared_ptr<string> materialsAndTechniques_ = nullptr;
    std::shared_ptr<string> objectType_ = nullptr;
    std::shared_ptr<string> reference_ = nullptr;
    std::shared_ptr<string> subject_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
