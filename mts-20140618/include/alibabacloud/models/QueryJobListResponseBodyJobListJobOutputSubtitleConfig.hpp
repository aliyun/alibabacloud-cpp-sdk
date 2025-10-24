// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTSUBTITLECONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTSUBTITLECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputSubtitleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputSubtitleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ExtSubtitleList, extSubtitleList_);
      DARABONBA_PTR_TO_JSON(SubtitleList, subtitleList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputSubtitleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtSubtitleList, extSubtitleList_);
      DARABONBA_PTR_FROM_JSON(SubtitleList, subtitleList_);
    };
    QueryJobListResponseBodyJobListJobOutputSubtitleConfig() = default ;
    QueryJobListResponseBodyJobListJobOutputSubtitleConfig(const QueryJobListResponseBodyJobListJobOutputSubtitleConfig &) = default ;
    QueryJobListResponseBodyJobListJobOutputSubtitleConfig(QueryJobListResponseBodyJobListJobOutputSubtitleConfig &&) = default ;
    QueryJobListResponseBodyJobListJobOutputSubtitleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputSubtitleConfig() = default ;
    QueryJobListResponseBodyJobListJobOutputSubtitleConfig& operator=(const QueryJobListResponseBodyJobListJobOutputSubtitleConfig &) = default ;
    QueryJobListResponseBodyJobListJobOutputSubtitleConfig& operator=(QueryJobListResponseBodyJobListJobOutputSubtitleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extSubtitleList_ == nullptr
        && return this->subtitleList_ == nullptr; };
    // extSubtitleList Field Functions 
    bool hasExtSubtitleList() const { return this->extSubtitleList_ != nullptr;};
    void deleteExtSubtitleList() { this->extSubtitleList_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList & extSubtitleList() const { DARABONBA_PTR_GET_CONST(extSubtitleList_, Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList) };
    inline Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList extSubtitleList() { DARABONBA_PTR_GET(extSubtitleList_, Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList) };
    inline QueryJobListResponseBodyJobListJobOutputSubtitleConfig& setExtSubtitleList(const Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList & extSubtitleList) { DARABONBA_PTR_SET_VALUE(extSubtitleList_, extSubtitleList) };
    inline QueryJobListResponseBodyJobListJobOutputSubtitleConfig& setExtSubtitleList(Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList && extSubtitleList) { DARABONBA_PTR_SET_RVALUE(extSubtitleList_, extSubtitleList) };


    // subtitleList Field Functions 
    bool hasSubtitleList() const { return this->subtitleList_ != nullptr;};
    void deleteSubtitleList() { this->subtitleList_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList & subtitleList() const { DARABONBA_PTR_GET_CONST(subtitleList_, Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList) };
    inline Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList subtitleList() { DARABONBA_PTR_GET(subtitleList_, Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList) };
    inline QueryJobListResponseBodyJobListJobOutputSubtitleConfig& setSubtitleList(const Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList & subtitleList) { DARABONBA_PTR_SET_VALUE(subtitleList_, subtitleList) };
    inline QueryJobListResponseBodyJobListJobOutputSubtitleConfig& setSubtitleList(Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList && subtitleList) { DARABONBA_PTR_SET_RVALUE(subtitleList_, subtitleList) };


  protected:
    // The external captions.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigExtSubtitleList> extSubtitleList_ = nullptr;
    // The captions.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfigSubtitleList> subtitleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
