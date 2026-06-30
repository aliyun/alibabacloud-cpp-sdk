// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLPOLARCLAWSKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLPOLARCLAWSKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class InstallPolarClawSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallPolarClawSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(SkillVersion, skillVersion_);
      DARABONBA_PTR_TO_JSON(Slug, slug_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, InstallPolarClawSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(SkillVersion, skillVersion_);
      DARABONBA_PTR_FROM_JSON(Slug, slug_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    InstallPolarClawSkillRequest() = default ;
    InstallPolarClawSkillRequest(const InstallPolarClawSkillRequest &) = default ;
    InstallPolarClawSkillRequest(InstallPolarClawSkillRequest &&) = default ;
    InstallPolarClawSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallPolarClawSkillRequest() = default ;
    InstallPolarClawSkillRequest& operator=(const InstallPolarClawSkillRequest &) = default ;
    InstallPolarClawSkillRequest& operator=(InstallPolarClawSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->force_ == nullptr && this->skillVersion_ == nullptr && this->slug_ == nullptr && this->source_ == nullptr && this->url_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline InstallPolarClawSkillRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline InstallPolarClawSkillRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // skillVersion Field Functions 
    bool hasSkillVersion() const { return this->skillVersion_ != nullptr;};
    void deleteSkillVersion() { this->skillVersion_ = nullptr;};
    inline string getSkillVersion() const { DARABONBA_PTR_GET_DEFAULT(skillVersion_, "") };
    inline InstallPolarClawSkillRequest& setSkillVersion(string skillVersion) { DARABONBA_PTR_SET_VALUE(skillVersion_, skillVersion) };


    // slug Field Functions 
    bool hasSlug() const { return this->slug_ != nullptr;};
    void deleteSlug() { this->slug_ = nullptr;};
    inline string getSlug() const { DARABONBA_PTR_GET_DEFAULT(slug_, "") };
    inline InstallPolarClawSkillRequest& setSlug(string slug) { DARABONBA_PTR_SET_VALUE(slug_, slug) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline InstallPolarClawSkillRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline InstallPolarClawSkillRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // Specifies whether to force a reinstallation.
    shared_ptr<bool> force_ {};
    // The version number.
    shared_ptr<string> skillVersion_ {};
    // The Skill identifier.
    shared_ptr<string> slug_ {};
    // The source.
    shared_ptr<string> source_ {};
    // URL
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
