// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTJOBCONFIGOUTPUTGROUPSGROUPCONFIGMANIFESTEXTEND_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTJOBCONFIGOUTPUTGROUPSGROUPCONFIGMANIFESTEXTEND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend& obj) { 
      DARABONBA_PTR_TO_JSON(Excludes, excludes_);
      DARABONBA_PTR_TO_JSON(InputRef, inputRef_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend& obj) { 
      DARABONBA_PTR_FROM_JSON(Excludes, excludes_);
      DARABONBA_PTR_FROM_JSON(InputRef, inputRef_);
    };
    MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend() = default ;
    MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend(const MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend &) = default ;
    MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend(MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend &&) = default ;
    MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend() = default ;
    MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend& operator=(const MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend &) = default ;
    MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend& operator=(MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->excludes_ == nullptr
        && return this->inputRef_ == nullptr; };
    // excludes Field Functions 
    bool hasExcludes() const { return this->excludes_ != nullptr;};
    void deleteExcludes() { this->excludes_ = nullptr;};
    inline const vector<Models::MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes> & excludes() const { DARABONBA_PTR_GET_CONST(excludes_, vector<Models::MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes>) };
    inline vector<Models::MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes> excludes() { DARABONBA_PTR_GET(excludes_, vector<Models::MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes>) };
    inline MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend& setExcludes(const vector<Models::MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes> & excludes) { DARABONBA_PTR_SET_VALUE(excludes_, excludes) };
    inline MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend& setExcludes(vector<Models::MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes> && excludes) { DARABONBA_PTR_SET_RVALUE(excludes_, excludes) };


    // inputRef Field Functions 
    bool hasInputRef() const { return this->inputRef_ != nullptr;};
    void deleteInputRef() { this->inputRef_ = nullptr;};
    inline string inputRef() const { DARABONBA_PTR_GET_DEFAULT(inputRef_, "") };
    inline MediaConvertJobConfigOutputGroupsGroupConfigManifestExtend& setInputRef(string inputRef) { DARABONBA_PTR_SET_VALUE(inputRef_, inputRef) };


  protected:
    std::shared_ptr<vector<Models::MediaConvertJobConfigOutputGroupsGroupConfigManifestExtendExcludes>> excludes_ = nullptr;
    std::shared_ptr<string> inputRef_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
