// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDENTRYRESPONSEBODYSPACE_HPP_
#define ALIBABACLOUD_MODELS_QUERYDENTRYRESPONSEBODYSPACE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDentryResponseBodySpaceHdIconVO.hpp>
#include <alibabacloud/models/QueryDentryResponseBodySpaceIconVO.hpp>
#include <alibabacloud/models/QueryDentryResponseBodySpaceOwner.hpp>
#include <vector>
#include <alibabacloud/models/QueryDentryResponseBodySpaceRecentList.hpp>
#include <alibabacloud/models/QueryDentryResponseBodySpaceVisitorInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryDentryResponseBodySpace : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDentryResponseBodySpace& obj) { 
      DARABONBA_PTR_TO_JSON(Cover, cover_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HdIconVO, hdIconVO_);
      DARABONBA_PTR_TO_JSON(IconVO, iconVO_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RecentList, recentList_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(VisitorInfo, visitorInfo_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDentryResponseBodySpace& obj) { 
      DARABONBA_PTR_FROM_JSON(Cover, cover_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HdIconVO, hdIconVO_);
      DARABONBA_PTR_FROM_JSON(IconVO, iconVO_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RecentList, recentList_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(VisitorInfo, visitorInfo_);
    };
    QueryDentryResponseBodySpace() = default ;
    QueryDentryResponseBodySpace(const QueryDentryResponseBodySpace &) = default ;
    QueryDentryResponseBodySpace(QueryDentryResponseBodySpace &&) = default ;
    QueryDentryResponseBodySpace(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDentryResponseBodySpace() = default ;
    QueryDentryResponseBodySpace& operator=(const QueryDentryResponseBodySpace &) = default ;
    QueryDentryResponseBodySpace& operator=(QueryDentryResponseBodySpace &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cover_ == nullptr
        && return this->description_ == nullptr && return this->hdIconVO_ == nullptr && return this->iconVO_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr
        && return this->owner_ == nullptr && return this->recentList_ == nullptr && return this->type_ == nullptr && return this->url_ == nullptr && return this->visitorInfo_ == nullptr; };
    // cover Field Functions 
    bool hasCover() const { return this->cover_ != nullptr;};
    void deleteCover() { this->cover_ = nullptr;};
    inline string cover() const { DARABONBA_PTR_GET_DEFAULT(cover_, "") };
    inline QueryDentryResponseBodySpace& setCover(string cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QueryDentryResponseBodySpace& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hdIconVO Field Functions 
    bool hasHdIconVO() const { return this->hdIconVO_ != nullptr;};
    void deleteHdIconVO() { this->hdIconVO_ = nullptr;};
    inline const Models::QueryDentryResponseBodySpaceHdIconVO & hdIconVO() const { DARABONBA_PTR_GET_CONST(hdIconVO_, Models::QueryDentryResponseBodySpaceHdIconVO) };
    inline Models::QueryDentryResponseBodySpaceHdIconVO hdIconVO() { DARABONBA_PTR_GET(hdIconVO_, Models::QueryDentryResponseBodySpaceHdIconVO) };
    inline QueryDentryResponseBodySpace& setHdIconVO(const Models::QueryDentryResponseBodySpaceHdIconVO & hdIconVO) { DARABONBA_PTR_SET_VALUE(hdIconVO_, hdIconVO) };
    inline QueryDentryResponseBodySpace& setHdIconVO(Models::QueryDentryResponseBodySpaceHdIconVO && hdIconVO) { DARABONBA_PTR_SET_RVALUE(hdIconVO_, hdIconVO) };


    // iconVO Field Functions 
    bool hasIconVO() const { return this->iconVO_ != nullptr;};
    void deleteIconVO() { this->iconVO_ = nullptr;};
    inline const Models::QueryDentryResponseBodySpaceIconVO & iconVO() const { DARABONBA_PTR_GET_CONST(iconVO_, Models::QueryDentryResponseBodySpaceIconVO) };
    inline Models::QueryDentryResponseBodySpaceIconVO iconVO() { DARABONBA_PTR_GET(iconVO_, Models::QueryDentryResponseBodySpaceIconVO) };
    inline QueryDentryResponseBodySpace& setIconVO(const Models::QueryDentryResponseBodySpaceIconVO & iconVO) { DARABONBA_PTR_SET_VALUE(iconVO_, iconVO) };
    inline QueryDentryResponseBodySpace& setIconVO(Models::QueryDentryResponseBodySpaceIconVO && iconVO) { DARABONBA_PTR_SET_RVALUE(iconVO_, iconVO) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryDentryResponseBodySpace& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryDentryResponseBodySpace& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline const Models::QueryDentryResponseBodySpaceOwner & owner() const { DARABONBA_PTR_GET_CONST(owner_, Models::QueryDentryResponseBodySpaceOwner) };
    inline Models::QueryDentryResponseBodySpaceOwner owner() { DARABONBA_PTR_GET(owner_, Models::QueryDentryResponseBodySpaceOwner) };
    inline QueryDentryResponseBodySpace& setOwner(const Models::QueryDentryResponseBodySpaceOwner & owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };
    inline QueryDentryResponseBodySpace& setOwner(Models::QueryDentryResponseBodySpaceOwner && owner) { DARABONBA_PTR_SET_RVALUE(owner_, owner) };


    // recentList Field Functions 
    bool hasRecentList() const { return this->recentList_ != nullptr;};
    void deleteRecentList() { this->recentList_ = nullptr;};
    inline const vector<Models::QueryDentryResponseBodySpaceRecentList> & recentList() const { DARABONBA_PTR_GET_CONST(recentList_, vector<Models::QueryDentryResponseBodySpaceRecentList>) };
    inline vector<Models::QueryDentryResponseBodySpaceRecentList> recentList() { DARABONBA_PTR_GET(recentList_, vector<Models::QueryDentryResponseBodySpaceRecentList>) };
    inline QueryDentryResponseBodySpace& setRecentList(const vector<Models::QueryDentryResponseBodySpaceRecentList> & recentList) { DARABONBA_PTR_SET_VALUE(recentList_, recentList) };
    inline QueryDentryResponseBodySpace& setRecentList(vector<Models::QueryDentryResponseBodySpaceRecentList> && recentList) { DARABONBA_PTR_SET_RVALUE(recentList_, recentList) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline QueryDentryResponseBodySpace& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline QueryDentryResponseBodySpace& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // visitorInfo Field Functions 
    bool hasVisitorInfo() const { return this->visitorInfo_ != nullptr;};
    void deleteVisitorInfo() { this->visitorInfo_ = nullptr;};
    inline const Models::QueryDentryResponseBodySpaceVisitorInfo & visitorInfo() const { DARABONBA_PTR_GET_CONST(visitorInfo_, Models::QueryDentryResponseBodySpaceVisitorInfo) };
    inline Models::QueryDentryResponseBodySpaceVisitorInfo visitorInfo() { DARABONBA_PTR_GET(visitorInfo_, Models::QueryDentryResponseBodySpaceVisitorInfo) };
    inline QueryDentryResponseBodySpace& setVisitorInfo(const Models::QueryDentryResponseBodySpaceVisitorInfo & visitorInfo) { DARABONBA_PTR_SET_VALUE(visitorInfo_, visitorInfo) };
    inline QueryDentryResponseBodySpace& setVisitorInfo(Models::QueryDentryResponseBodySpaceVisitorInfo && visitorInfo) { DARABONBA_PTR_SET_RVALUE(visitorInfo_, visitorInfo) };


  protected:
    std::shared_ptr<string> cover_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Models::QueryDentryResponseBodySpaceHdIconVO> hdIconVO_ = nullptr;
    std::shared_ptr<Models::QueryDentryResponseBodySpaceIconVO> iconVO_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::QueryDentryResponseBodySpaceOwner> owner_ = nullptr;
    std::shared_ptr<vector<Models::QueryDentryResponseBodySpaceRecentList>> recentList_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<Models::QueryDentryResponseBodySpaceVisitorInfo> visitorInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
