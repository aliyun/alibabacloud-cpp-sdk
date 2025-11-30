// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTJOBCONFIGOUTPUTGROUPSGROUPCONFIGOUTPUTFILEBASE_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTJOBCONFIGOUTPUTGROUPSGROUPCONFIGOUTPUTFILEBASE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase() = default ;
    MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase(const MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase &) = default ;
    MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase(MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase &&) = default ;
    MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase() = default ;
    MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase& operator=(const MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase &) = default ;
    MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase& operator=(MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->media_ == nullptr
        && return this->type_ == nullptr; };
    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline string media() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
    inline MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MediaConvertJobConfigOutputGroupsGroupConfigOutputFileBase& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> media_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
