// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCENERESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCENERESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class ListSceneResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSceneResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PreviewToken, previewToken_);
      DARABONBA_PTR_TO_JSON(Published, published_);
      DARABONBA_PTR_TO_JSON(SourceNum, sourceNum_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusName, statusName_);
      DARABONBA_PTR_TO_JSON(SubSceneNum, subSceneNum_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListSceneResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PreviewToken, previewToken_);
      DARABONBA_PTR_FROM_JSON(Published, published_);
      DARABONBA_PTR_FROM_JSON(SourceNum, sourceNum_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusName, statusName_);
      DARABONBA_PTR_FROM_JSON(SubSceneNum, subSceneNum_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListSceneResponseBodyList() = default ;
    ListSceneResponseBodyList(const ListSceneResponseBodyList &) = default ;
    ListSceneResponseBodyList(ListSceneResponseBodyList &&) = default ;
    ListSceneResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSceneResponseBodyList() = default ;
    ListSceneResponseBodyList& operator=(const ListSceneResponseBodyList &) = default ;
    ListSceneResponseBodyList& operator=(ListSceneResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coverUrl_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->previewToken_ == nullptr
        && return this->published_ == nullptr && return this->sourceNum_ == nullptr && return this->status_ == nullptr && return this->statusName_ == nullptr && return this->subSceneNum_ == nullptr
        && return this->type_ == nullptr; };
    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string coverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline ListSceneResponseBodyList& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ListSceneResponseBodyList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline ListSceneResponseBodyList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListSceneResponseBodyList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSceneResponseBodyList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // previewToken Field Functions 
    bool hasPreviewToken() const { return this->previewToken_ != nullptr;};
    void deletePreviewToken() { this->previewToken_ = nullptr;};
    inline string previewToken() const { DARABONBA_PTR_GET_DEFAULT(previewToken_, "") };
    inline ListSceneResponseBodyList& setPreviewToken(string previewToken) { DARABONBA_PTR_SET_VALUE(previewToken_, previewToken) };


    // published Field Functions 
    bool hasPublished() const { return this->published_ != nullptr;};
    void deletePublished() { this->published_ = nullptr;};
    inline bool published() const { DARABONBA_PTR_GET_DEFAULT(published_, false) };
    inline ListSceneResponseBodyList& setPublished(bool published) { DARABONBA_PTR_SET_VALUE(published_, published) };


    // sourceNum Field Functions 
    bool hasSourceNum() const { return this->sourceNum_ != nullptr;};
    void deleteSourceNum() { this->sourceNum_ = nullptr;};
    inline int64_t sourceNum() const { DARABONBA_PTR_GET_DEFAULT(sourceNum_, 0L) };
    inline ListSceneResponseBodyList& setSourceNum(int64_t sourceNum) { DARABONBA_PTR_SET_VALUE(sourceNum_, sourceNum) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListSceneResponseBodyList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusName Field Functions 
    bool hasStatusName() const { return this->statusName_ != nullptr;};
    void deleteStatusName() { this->statusName_ = nullptr;};
    inline string statusName() const { DARABONBA_PTR_GET_DEFAULT(statusName_, "") };
    inline ListSceneResponseBodyList& setStatusName(string statusName) { DARABONBA_PTR_SET_VALUE(statusName_, statusName) };


    // subSceneNum Field Functions 
    bool hasSubSceneNum() const { return this->subSceneNum_ != nullptr;};
    void deleteSubSceneNum() { this->subSceneNum_ = nullptr;};
    inline int64_t subSceneNum() const { DARABONBA_PTR_GET_DEFAULT(subSceneNum_, 0L) };
    inline ListSceneResponseBodyList& setSubSceneNum(int64_t subSceneNum) { DARABONBA_PTR_SET_VALUE(subSceneNum_, subSceneNum) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListSceneResponseBodyList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> coverUrl_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> previewToken_ = nullptr;
    std::shared_ptr<bool> published_ = nullptr;
    std::shared_ptr<int64_t> sourceNum_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusName_ = nullptr;
    std::shared_ptr<int64_t> subSceneNum_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
