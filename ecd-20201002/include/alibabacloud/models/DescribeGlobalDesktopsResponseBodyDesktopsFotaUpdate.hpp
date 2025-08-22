// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPSRESPONSEBODYDESKTOPSFOTAUPDATE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPSRESPONSEBODYDESKTOPSFOTAUPDATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(CurrentAppVersion, currentAppVersion_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(NewAppVersion, newAppVersion_);
      DARABONBA_PTR_TO_JSON(NewDcdVersion, newDcdVersion_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
      DARABONBA_PTR_TO_JSON(ReleaseNoteEn, releaseNoteEn_);
      DARABONBA_PTR_TO_JSON(ReleaseNoteJp, releaseNoteJp_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(CurrentAppVersion, currentAppVersion_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(NewAppVersion, newAppVersion_);
      DARABONBA_PTR_FROM_JSON(NewDcdVersion, newDcdVersion_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
      DARABONBA_PTR_FROM_JSON(ReleaseNoteEn, releaseNoteEn_);
      DARABONBA_PTR_FROM_JSON(ReleaseNoteJp, releaseNoteJp_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate() = default ;
    DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate(const DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate &) = default ;
    DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate(DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate &&) = default ;
    DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate() = default ;
    DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate& operator=(const DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate &) = default ;
    DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate& operator=(DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channel_ != nullptr
        && this->currentAppVersion_ != nullptr && this->force_ != nullptr && this->newAppVersion_ != nullptr && this->newDcdVersion_ != nullptr && this->project_ != nullptr
        && this->releaseNote_ != nullptr && this->releaseNoteEn_ != nullptr && this->releaseNoteJp_ != nullptr && this->size_ != nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // currentAppVersion Field Functions 
    bool hasCurrentAppVersion() const { return this->currentAppVersion_ != nullptr;};
    void deleteCurrentAppVersion() { this->currentAppVersion_ = nullptr;};
    inline string currentAppVersion() const { DARABONBA_PTR_GET_DEFAULT(currentAppVersion_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate& setCurrentAppVersion(string currentAppVersion) { DARABONBA_PTR_SET_VALUE(currentAppVersion_, currentAppVersion) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // newAppVersion Field Functions 
    bool hasNewAppVersion() const { return this->newAppVersion_ != nullptr;};
    void deleteNewAppVersion() { this->newAppVersion_ = nullptr;};
    inline string newAppVersion() const { DARABONBA_PTR_GET_DEFAULT(newAppVersion_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate& setNewAppVersion(string newAppVersion) { DARABONBA_PTR_SET_VALUE(newAppVersion_, newAppVersion) };


    // newDcdVersion Field Functions 
    bool hasNewDcdVersion() const { return this->newDcdVersion_ != nullptr;};
    void deleteNewDcdVersion() { this->newDcdVersion_ = nullptr;};
    inline string newDcdVersion() const { DARABONBA_PTR_GET_DEFAULT(newDcdVersion_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate& setNewDcdVersion(string newDcdVersion) { DARABONBA_PTR_SET_VALUE(newDcdVersion_, newDcdVersion) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // releaseNote Field Functions 
    bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
    void deleteReleaseNote() { this->releaseNote_ = nullptr;};
    inline string releaseNote() const { DARABONBA_PTR_GET_DEFAULT(releaseNote_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


    // releaseNoteEn Field Functions 
    bool hasReleaseNoteEn() const { return this->releaseNoteEn_ != nullptr;};
    void deleteReleaseNoteEn() { this->releaseNoteEn_ = nullptr;};
    inline string releaseNoteEn() const { DARABONBA_PTR_GET_DEFAULT(releaseNoteEn_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate& setReleaseNoteEn(string releaseNoteEn) { DARABONBA_PTR_SET_VALUE(releaseNoteEn_, releaseNoteEn) };


    // releaseNoteJp Field Functions 
    bool hasReleaseNoteJp() const { return this->releaseNoteJp_ != nullptr;};
    void deleteReleaseNoteJp() { this->releaseNoteJp_ = nullptr;};
    inline string releaseNoteJp() const { DARABONBA_PTR_GET_DEFAULT(releaseNoteJp_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate& setReleaseNoteJp(string releaseNoteJp) { DARABONBA_PTR_SET_VALUE(releaseNoteJp_, releaseNoteJp) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<string> channel_ = nullptr;
    std::shared_ptr<string> currentAppVersion_ = nullptr;
    std::shared_ptr<bool> force_ = nullptr;
    std::shared_ptr<string> newAppVersion_ = nullptr;
    std::shared_ptr<string> newDcdVersion_ = nullptr;
    std::shared_ptr<string> project_ = nullptr;
    std::shared_ptr<string> releaseNote_ = nullptr;
    std::shared_ptr<string> releaseNoteEn_ = nullptr;
    std::shared_ptr<string> releaseNoteJp_ = nullptr;
    std::shared_ptr<string> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
