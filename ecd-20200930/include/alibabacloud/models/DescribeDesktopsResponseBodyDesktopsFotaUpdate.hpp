// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSRESPONSEBODYDESKTOPSFOTAUPDATE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSRESPONSEBODYDESKTOPSFOTAUPDATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopsResponseBodyDesktopsFotaUpdate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopsResponseBodyDesktopsFotaUpdate& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentAppVersion, currentAppVersion_);
      DARABONBA_PTR_TO_JSON(NewAppVersion, newAppVersion_);
      DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
      DARABONBA_PTR_TO_JSON(ReleaseNoteEn, releaseNoteEn_);
      DARABONBA_PTR_TO_JSON(ReleaseNoteJp, releaseNoteJp_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopsResponseBodyDesktopsFotaUpdate& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentAppVersion, currentAppVersion_);
      DARABONBA_PTR_FROM_JSON(NewAppVersion, newAppVersion_);
      DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
      DARABONBA_PTR_FROM_JSON(ReleaseNoteEn, releaseNoteEn_);
      DARABONBA_PTR_FROM_JSON(ReleaseNoteJp, releaseNoteJp_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DescribeDesktopsResponseBodyDesktopsFotaUpdate() = default ;
    DescribeDesktopsResponseBodyDesktopsFotaUpdate(const DescribeDesktopsResponseBodyDesktopsFotaUpdate &) = default ;
    DescribeDesktopsResponseBodyDesktopsFotaUpdate(DescribeDesktopsResponseBodyDesktopsFotaUpdate &&) = default ;
    DescribeDesktopsResponseBodyDesktopsFotaUpdate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopsResponseBodyDesktopsFotaUpdate() = default ;
    DescribeDesktopsResponseBodyDesktopsFotaUpdate& operator=(const DescribeDesktopsResponseBodyDesktopsFotaUpdate &) = default ;
    DescribeDesktopsResponseBodyDesktopsFotaUpdate& operator=(DescribeDesktopsResponseBodyDesktopsFotaUpdate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentAppVersion_ == nullptr
        && return this->newAppVersion_ == nullptr && return this->releaseNote_ == nullptr && return this->releaseNoteEn_ == nullptr && return this->releaseNoteJp_ == nullptr && return this->size_ == nullptr; };
    // currentAppVersion Field Functions 
    bool hasCurrentAppVersion() const { return this->currentAppVersion_ != nullptr;};
    void deleteCurrentAppVersion() { this->currentAppVersion_ = nullptr;};
    inline string currentAppVersion() const { DARABONBA_PTR_GET_DEFAULT(currentAppVersion_, "") };
    inline DescribeDesktopsResponseBodyDesktopsFotaUpdate& setCurrentAppVersion(string currentAppVersion) { DARABONBA_PTR_SET_VALUE(currentAppVersion_, currentAppVersion) };


    // newAppVersion Field Functions 
    bool hasNewAppVersion() const { return this->newAppVersion_ != nullptr;};
    void deleteNewAppVersion() { this->newAppVersion_ = nullptr;};
    inline string newAppVersion() const { DARABONBA_PTR_GET_DEFAULT(newAppVersion_, "") };
    inline DescribeDesktopsResponseBodyDesktopsFotaUpdate& setNewAppVersion(string newAppVersion) { DARABONBA_PTR_SET_VALUE(newAppVersion_, newAppVersion) };


    // releaseNote Field Functions 
    bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
    void deleteReleaseNote() { this->releaseNote_ = nullptr;};
    inline string releaseNote() const { DARABONBA_PTR_GET_DEFAULT(releaseNote_, "") };
    inline DescribeDesktopsResponseBodyDesktopsFotaUpdate& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


    // releaseNoteEn Field Functions 
    bool hasReleaseNoteEn() const { return this->releaseNoteEn_ != nullptr;};
    void deleteReleaseNoteEn() { this->releaseNoteEn_ = nullptr;};
    inline string releaseNoteEn() const { DARABONBA_PTR_GET_DEFAULT(releaseNoteEn_, "") };
    inline DescribeDesktopsResponseBodyDesktopsFotaUpdate& setReleaseNoteEn(string releaseNoteEn) { DARABONBA_PTR_SET_VALUE(releaseNoteEn_, releaseNoteEn) };


    // releaseNoteJp Field Functions 
    bool hasReleaseNoteJp() const { return this->releaseNoteJp_ != nullptr;};
    void deleteReleaseNoteJp() { this->releaseNoteJp_ = nullptr;};
    inline string releaseNoteJp() const { DARABONBA_PTR_GET_DEFAULT(releaseNoteJp_, "") };
    inline DescribeDesktopsResponseBodyDesktopsFotaUpdate& setReleaseNoteJp(string releaseNoteJp) { DARABONBA_PTR_SET_VALUE(releaseNoteJp_, releaseNoteJp) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeDesktopsResponseBodyDesktopsFotaUpdate& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The current image version of the cloud computer.
    std::shared_ptr<string> currentAppVersion_ = nullptr;
    // The version number to which the image of the cloud computer can be updated.
    std::shared_ptr<string> newAppVersion_ = nullptr;
    // The description of the version to which the image of the cloud computer can be updated.
    std::shared_ptr<string> releaseNote_ = nullptr;
    // The English description of the version to which the image of the cloud computer can be updated.
    std::shared_ptr<string> releaseNoteEn_ = nullptr;
    // The Japanese description of the image version to which the cloud desktop can be updated.
    std::shared_ptr<string> releaseNoteJp_ = nullptr;
    // The size of the installation package for the image to which the cloud desktop can be updated. Unit: KB.
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
