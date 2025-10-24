// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTSUBTITLECONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTSUBTITLECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobListJobOutputSubtitleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobListJobOutputSubtitleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ExtSubtitleList, extSubtitleList_);
      DARABONBA_PTR_TO_JSON(SubtitleList, subtitleList_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobListJobOutputSubtitleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtSubtitleList, extSubtitleList_);
      DARABONBA_PTR_FROM_JSON(SubtitleList, subtitleList_);
    };
    ListJobResponseBodyJobListJobOutputSubtitleConfig() = default ;
    ListJobResponseBodyJobListJobOutputSubtitleConfig(const ListJobResponseBodyJobListJobOutputSubtitleConfig &) = default ;
    ListJobResponseBodyJobListJobOutputSubtitleConfig(ListJobResponseBodyJobListJobOutputSubtitleConfig &&) = default ;
    ListJobResponseBodyJobListJobOutputSubtitleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobListJobOutputSubtitleConfig() = default ;
    ListJobResponseBodyJobListJobOutputSubtitleConfig& operator=(const ListJobResponseBodyJobListJobOutputSubtitleConfig &) = default ;
    ListJobResponseBodyJobListJobOutputSubtitleConfig& operator=(ListJobResponseBodyJobListJobOutputSubtitleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extSubtitleList_ == nullptr
        && return this->subtitleList_ == nullptr; };
    // extSubtitleList Field Functions 
    bool hasExtSubtitleList() const { return this->extSubtitleList_ != nullptr;};
    void deleteExtSubtitleList() { this->extSubtitleList_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList & extSubtitleList() const { DARABONBA_PTR_GET_CONST(extSubtitleList_, Models::ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList) };
    inline Models::ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList extSubtitleList() { DARABONBA_PTR_GET(extSubtitleList_, Models::ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList) };
    inline ListJobResponseBodyJobListJobOutputSubtitleConfig& setExtSubtitleList(const Models::ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList & extSubtitleList) { DARABONBA_PTR_SET_VALUE(extSubtitleList_, extSubtitleList) };
    inline ListJobResponseBodyJobListJobOutputSubtitleConfig& setExtSubtitleList(Models::ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList && extSubtitleList) { DARABONBA_PTR_SET_RVALUE(extSubtitleList_, extSubtitleList) };


    // subtitleList Field Functions 
    bool hasSubtitleList() const { return this->subtitleList_ != nullptr;};
    void deleteSubtitleList() { this->subtitleList_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList & subtitleList() const { DARABONBA_PTR_GET_CONST(subtitleList_, Models::ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList) };
    inline Models::ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList subtitleList() { DARABONBA_PTR_GET(subtitleList_, Models::ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList) };
    inline ListJobResponseBodyJobListJobOutputSubtitleConfig& setSubtitleList(const Models::ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList & subtitleList) { DARABONBA_PTR_SET_VALUE(subtitleList_, subtitleList) };
    inline ListJobResponseBodyJobListJobOutputSubtitleConfig& setSubtitleList(Models::ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList && subtitleList) { DARABONBA_PTR_SET_RVALUE(subtitleList_, subtitleList) };


  protected:
    // The external subtitles. The value is a JSON array.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList> extSubtitleList_ = nullptr;
    // The subtitles.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleList> subtitleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
