// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYDENTRYRESPONSEBODYSPACE_HPP_
#define ALIBABACLOUD_MODELS_COPYDENTRYRESPONSEBODYSPACE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CopyDentryResponseBodySpaceHdIconVO.hpp>
#include <alibabacloud/models/CopyDentryResponseBodySpaceIconVO.hpp>
#include <alibabacloud/models/CopyDentryResponseBodySpaceOwner.hpp>
#include <vector>
#include <alibabacloud/models/CopyDentryResponseBodySpaceRecentList.hpp>
#include <alibabacloud/models/CopyDentryResponseBodySpaceVisitorInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CopyDentryResponseBodySpace : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyDentryResponseBodySpace& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CopyDentryResponseBodySpace& obj) { 
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
    CopyDentryResponseBodySpace() = default ;
    CopyDentryResponseBodySpace(const CopyDentryResponseBodySpace &) = default ;
    CopyDentryResponseBodySpace(CopyDentryResponseBodySpace &&) = default ;
    CopyDentryResponseBodySpace(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyDentryResponseBodySpace() = default ;
    CopyDentryResponseBodySpace& operator=(const CopyDentryResponseBodySpace &) = default ;
    CopyDentryResponseBodySpace& operator=(CopyDentryResponseBodySpace &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cover_ != nullptr
        && this->description_ != nullptr && this->hdIconVO_ != nullptr && this->iconVO_ != nullptr && this->id_ != nullptr && this->name_ != nullptr
        && this->owner_ != nullptr && this->recentList_ != nullptr && this->type_ != nullptr && this->url_ != nullptr && this->visitorInfo_ != nullptr; };
    // cover Field Functions 
    bool hasCover() const { return this->cover_ != nullptr;};
    void deleteCover() { this->cover_ = nullptr;};
    inline string cover() const { DARABONBA_PTR_GET_DEFAULT(cover_, "") };
    inline CopyDentryResponseBodySpace& setCover(string cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CopyDentryResponseBodySpace& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hdIconVO Field Functions 
    bool hasHdIconVO() const { return this->hdIconVO_ != nullptr;};
    void deleteHdIconVO() { this->hdIconVO_ = nullptr;};
    inline const Models::CopyDentryResponseBodySpaceHdIconVO & hdIconVO() const { DARABONBA_PTR_GET_CONST(hdIconVO_, Models::CopyDentryResponseBodySpaceHdIconVO) };
    inline Models::CopyDentryResponseBodySpaceHdIconVO hdIconVO() { DARABONBA_PTR_GET(hdIconVO_, Models::CopyDentryResponseBodySpaceHdIconVO) };
    inline CopyDentryResponseBodySpace& setHdIconVO(const Models::CopyDentryResponseBodySpaceHdIconVO & hdIconVO) { DARABONBA_PTR_SET_VALUE(hdIconVO_, hdIconVO) };
    inline CopyDentryResponseBodySpace& setHdIconVO(Models::CopyDentryResponseBodySpaceHdIconVO && hdIconVO) { DARABONBA_PTR_SET_RVALUE(hdIconVO_, hdIconVO) };


    // iconVO Field Functions 
    bool hasIconVO() const { return this->iconVO_ != nullptr;};
    void deleteIconVO() { this->iconVO_ = nullptr;};
    inline const Models::CopyDentryResponseBodySpaceIconVO & iconVO() const { DARABONBA_PTR_GET_CONST(iconVO_, Models::CopyDentryResponseBodySpaceIconVO) };
    inline Models::CopyDentryResponseBodySpaceIconVO iconVO() { DARABONBA_PTR_GET(iconVO_, Models::CopyDentryResponseBodySpaceIconVO) };
    inline CopyDentryResponseBodySpace& setIconVO(const Models::CopyDentryResponseBodySpaceIconVO & iconVO) { DARABONBA_PTR_SET_VALUE(iconVO_, iconVO) };
    inline CopyDentryResponseBodySpace& setIconVO(Models::CopyDentryResponseBodySpaceIconVO && iconVO) { DARABONBA_PTR_SET_RVALUE(iconVO_, iconVO) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CopyDentryResponseBodySpace& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CopyDentryResponseBodySpace& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline const Models::CopyDentryResponseBodySpaceOwner & owner() const { DARABONBA_PTR_GET_CONST(owner_, Models::CopyDentryResponseBodySpaceOwner) };
    inline Models::CopyDentryResponseBodySpaceOwner owner() { DARABONBA_PTR_GET(owner_, Models::CopyDentryResponseBodySpaceOwner) };
    inline CopyDentryResponseBodySpace& setOwner(const Models::CopyDentryResponseBodySpaceOwner & owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };
    inline CopyDentryResponseBodySpace& setOwner(Models::CopyDentryResponseBodySpaceOwner && owner) { DARABONBA_PTR_SET_RVALUE(owner_, owner) };


    // recentList Field Functions 
    bool hasRecentList() const { return this->recentList_ != nullptr;};
    void deleteRecentList() { this->recentList_ = nullptr;};
    inline const vector<Models::CopyDentryResponseBodySpaceRecentList> & recentList() const { DARABONBA_PTR_GET_CONST(recentList_, vector<Models::CopyDentryResponseBodySpaceRecentList>) };
    inline vector<Models::CopyDentryResponseBodySpaceRecentList> recentList() { DARABONBA_PTR_GET(recentList_, vector<Models::CopyDentryResponseBodySpaceRecentList>) };
    inline CopyDentryResponseBodySpace& setRecentList(const vector<Models::CopyDentryResponseBodySpaceRecentList> & recentList) { DARABONBA_PTR_SET_VALUE(recentList_, recentList) };
    inline CopyDentryResponseBodySpace& setRecentList(vector<Models::CopyDentryResponseBodySpaceRecentList> && recentList) { DARABONBA_PTR_SET_RVALUE(recentList_, recentList) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline CopyDentryResponseBodySpace& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CopyDentryResponseBodySpace& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // visitorInfo Field Functions 
    bool hasVisitorInfo() const { return this->visitorInfo_ != nullptr;};
    void deleteVisitorInfo() { this->visitorInfo_ = nullptr;};
    inline const Models::CopyDentryResponseBodySpaceVisitorInfo & visitorInfo() const { DARABONBA_PTR_GET_CONST(visitorInfo_, Models::CopyDentryResponseBodySpaceVisitorInfo) };
    inline Models::CopyDentryResponseBodySpaceVisitorInfo visitorInfo() { DARABONBA_PTR_GET(visitorInfo_, Models::CopyDentryResponseBodySpaceVisitorInfo) };
    inline CopyDentryResponseBodySpace& setVisitorInfo(const Models::CopyDentryResponseBodySpaceVisitorInfo & visitorInfo) { DARABONBA_PTR_SET_VALUE(visitorInfo_, visitorInfo) };
    inline CopyDentryResponseBodySpace& setVisitorInfo(Models::CopyDentryResponseBodySpaceVisitorInfo && visitorInfo) { DARABONBA_PTR_SET_RVALUE(visitorInfo_, visitorInfo) };


  protected:
    std::shared_ptr<string> cover_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Models::CopyDentryResponseBodySpaceHdIconVO> hdIconVO_ = nullptr;
    std::shared_ptr<Models::CopyDentryResponseBodySpaceIconVO> iconVO_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::CopyDentryResponseBodySpaceOwner> owner_ = nullptr;
    std::shared_ptr<vector<Models::CopyDentryResponseBodySpaceRecentList>> recentList_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<Models::CopyDentryResponseBodySpaceVisitorInfo> visitorInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
