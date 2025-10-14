// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPACEDIRECTORIESRESPONSEBODYCHILDRENSPACE_HPP_
#define ALIBABACLOUD_MODELS_GETSPACEDIRECTORIESRESPONSEBODYCHILDRENSPACE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSpaceDirectoriesResponseBodyChildrenSpaceHdIconVO.hpp>
#include <alibabacloud/models/GetSpaceDirectoriesResponseBodyChildrenSpaceIconVO.hpp>
#include <alibabacloud/models/GetSpaceDirectoriesResponseBodyChildrenSpaceOwner.hpp>
#include <vector>
#include <alibabacloud/models/GetSpaceDirectoriesResponseBodyChildrenSpaceVisitorInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetSpaceDirectoriesResponseBodyChildrenSpace : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSpaceDirectoriesResponseBodyChildrenSpace& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetSpaceDirectoriesResponseBodyChildrenSpace& obj) { 
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
    GetSpaceDirectoriesResponseBodyChildrenSpace() = default ;
    GetSpaceDirectoriesResponseBodyChildrenSpace(const GetSpaceDirectoriesResponseBodyChildrenSpace &) = default ;
    GetSpaceDirectoriesResponseBodyChildrenSpace(GetSpaceDirectoriesResponseBodyChildrenSpace &&) = default ;
    GetSpaceDirectoriesResponseBodyChildrenSpace(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSpaceDirectoriesResponseBodyChildrenSpace() = default ;
    GetSpaceDirectoriesResponseBodyChildrenSpace& operator=(const GetSpaceDirectoriesResponseBodyChildrenSpace &) = default ;
    GetSpaceDirectoriesResponseBodyChildrenSpace& operator=(GetSpaceDirectoriesResponseBodyChildrenSpace &&) = default ;
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
    inline GetSpaceDirectoriesResponseBodyChildrenSpace& setCover(string cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetSpaceDirectoriesResponseBodyChildrenSpace& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hdIconVO Field Functions 
    bool hasHdIconVO() const { return this->hdIconVO_ != nullptr;};
    void deleteHdIconVO() { this->hdIconVO_ = nullptr;};
    inline const Models::GetSpaceDirectoriesResponseBodyChildrenSpaceHdIconVO & hdIconVO() const { DARABONBA_PTR_GET_CONST(hdIconVO_, Models::GetSpaceDirectoriesResponseBodyChildrenSpaceHdIconVO) };
    inline Models::GetSpaceDirectoriesResponseBodyChildrenSpaceHdIconVO hdIconVO() { DARABONBA_PTR_GET(hdIconVO_, Models::GetSpaceDirectoriesResponseBodyChildrenSpaceHdIconVO) };
    inline GetSpaceDirectoriesResponseBodyChildrenSpace& setHdIconVO(const Models::GetSpaceDirectoriesResponseBodyChildrenSpaceHdIconVO & hdIconVO) { DARABONBA_PTR_SET_VALUE(hdIconVO_, hdIconVO) };
    inline GetSpaceDirectoriesResponseBodyChildrenSpace& setHdIconVO(Models::GetSpaceDirectoriesResponseBodyChildrenSpaceHdIconVO && hdIconVO) { DARABONBA_PTR_SET_RVALUE(hdIconVO_, hdIconVO) };


    // iconVO Field Functions 
    bool hasIconVO() const { return this->iconVO_ != nullptr;};
    void deleteIconVO() { this->iconVO_ = nullptr;};
    inline const Models::GetSpaceDirectoriesResponseBodyChildrenSpaceIconVO & iconVO() const { DARABONBA_PTR_GET_CONST(iconVO_, Models::GetSpaceDirectoriesResponseBodyChildrenSpaceIconVO) };
    inline Models::GetSpaceDirectoriesResponseBodyChildrenSpaceIconVO iconVO() { DARABONBA_PTR_GET(iconVO_, Models::GetSpaceDirectoriesResponseBodyChildrenSpaceIconVO) };
    inline GetSpaceDirectoriesResponseBodyChildrenSpace& setIconVO(const Models::GetSpaceDirectoriesResponseBodyChildrenSpaceIconVO & iconVO) { DARABONBA_PTR_SET_VALUE(iconVO_, iconVO) };
    inline GetSpaceDirectoriesResponseBodyChildrenSpace& setIconVO(Models::GetSpaceDirectoriesResponseBodyChildrenSpaceIconVO && iconVO) { DARABONBA_PTR_SET_RVALUE(iconVO_, iconVO) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetSpaceDirectoriesResponseBodyChildrenSpace& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSpaceDirectoriesResponseBodyChildrenSpace& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline const Models::GetSpaceDirectoriesResponseBodyChildrenSpaceOwner & owner() const { DARABONBA_PTR_GET_CONST(owner_, Models::GetSpaceDirectoriesResponseBodyChildrenSpaceOwner) };
    inline Models::GetSpaceDirectoriesResponseBodyChildrenSpaceOwner owner() { DARABONBA_PTR_GET(owner_, Models::GetSpaceDirectoriesResponseBodyChildrenSpaceOwner) };
    inline GetSpaceDirectoriesResponseBodyChildrenSpace& setOwner(const Models::GetSpaceDirectoriesResponseBodyChildrenSpaceOwner & owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };
    inline GetSpaceDirectoriesResponseBodyChildrenSpace& setOwner(Models::GetSpaceDirectoriesResponseBodyChildrenSpaceOwner && owner) { DARABONBA_PTR_SET_RVALUE(owner_, owner) };


    // recentList Field Functions 
    bool hasRecentList() const { return this->recentList_ != nullptr;};
    void deleteRecentList() { this->recentList_ = nullptr;};
    inline const vector<Darabonba::Json> & recentList() const { DARABONBA_PTR_GET_CONST(recentList_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> recentList() { DARABONBA_PTR_GET(recentList_, vector<Darabonba::Json>) };
    inline GetSpaceDirectoriesResponseBodyChildrenSpace& setRecentList(const vector<Darabonba::Json> & recentList) { DARABONBA_PTR_SET_VALUE(recentList_, recentList) };
    inline GetSpaceDirectoriesResponseBodyChildrenSpace& setRecentList(vector<Darabonba::Json> && recentList) { DARABONBA_PTR_SET_RVALUE(recentList_, recentList) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline GetSpaceDirectoriesResponseBodyChildrenSpace& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetSpaceDirectoriesResponseBodyChildrenSpace& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // visitorInfo Field Functions 
    bool hasVisitorInfo() const { return this->visitorInfo_ != nullptr;};
    void deleteVisitorInfo() { this->visitorInfo_ = nullptr;};
    inline const Models::GetSpaceDirectoriesResponseBodyChildrenSpaceVisitorInfo & visitorInfo() const { DARABONBA_PTR_GET_CONST(visitorInfo_, Models::GetSpaceDirectoriesResponseBodyChildrenSpaceVisitorInfo) };
    inline Models::GetSpaceDirectoriesResponseBodyChildrenSpaceVisitorInfo visitorInfo() { DARABONBA_PTR_GET(visitorInfo_, Models::GetSpaceDirectoriesResponseBodyChildrenSpaceVisitorInfo) };
    inline GetSpaceDirectoriesResponseBodyChildrenSpace& setVisitorInfo(const Models::GetSpaceDirectoriesResponseBodyChildrenSpaceVisitorInfo & visitorInfo) { DARABONBA_PTR_SET_VALUE(visitorInfo_, visitorInfo) };
    inline GetSpaceDirectoriesResponseBodyChildrenSpace& setVisitorInfo(Models::GetSpaceDirectoriesResponseBodyChildrenSpaceVisitorInfo && visitorInfo) { DARABONBA_PTR_SET_RVALUE(visitorInfo_, visitorInfo) };


  protected:
    std::shared_ptr<string> cover_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Models::GetSpaceDirectoriesResponseBodyChildrenSpaceHdIconVO> hdIconVO_ = nullptr;
    std::shared_ptr<Models::GetSpaceDirectoriesResponseBodyChildrenSpaceIconVO> iconVO_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::GetSpaceDirectoriesResponseBodyChildrenSpaceOwner> owner_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> recentList_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<Models::GetSpaceDirectoriesResponseBodyChildrenSpaceVisitorInfo> visitorInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
