// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETAILSCENERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETAILSCENERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DetailSceneResponseBodyAccessDeniedDetail.hpp>
#include <vector>
#include <alibabacloud/models/DetailSceneResponseBodyCaptures.hpp>
#include <alibabacloud/models/DetailSceneResponseBodyFloorPlans.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class DetailSceneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetailSceneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Captures, captures_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_TO_JSON(FloorPlans, floorPlans_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PreviewToken, previewToken_);
      DARABONBA_PTR_TO_JSON(Published, published_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceNum, sourceNum_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusName, statusName_);
      DARABONBA_PTR_TO_JSON(SubSceneNum, subSceneNum_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DetailSceneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Captures, captures_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
      DARABONBA_PTR_FROM_JSON(FloorPlans, floorPlans_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PreviewToken, previewToken_);
      DARABONBA_PTR_FROM_JSON(Published, published_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceNum, sourceNum_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusName, statusName_);
      DARABONBA_PTR_FROM_JSON(SubSceneNum, subSceneNum_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DetailSceneResponseBody() = default ;
    DetailSceneResponseBody(const DetailSceneResponseBody &) = default ;
    DetailSceneResponseBody(DetailSceneResponseBody &&) = default ;
    DetailSceneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetailSceneResponseBody() = default ;
    DetailSceneResponseBody& operator=(const DetailSceneResponseBody &) = default ;
    DetailSceneResponseBody& operator=(DetailSceneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->captures_ == nullptr && return this->code_ == nullptr && return this->coverUrl_ == nullptr && return this->floorPlans_ == nullptr && return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->message_ == nullptr && return this->name_ == nullptr && return this->previewToken_ == nullptr
        && return this->published_ == nullptr && return this->requestId_ == nullptr && return this->sourceNum_ == nullptr && return this->status_ == nullptr && return this->statusName_ == nullptr
        && return this->subSceneNum_ == nullptr && return this->success_ == nullptr && return this->type_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const DetailSceneResponseBodyAccessDeniedDetail & accessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, DetailSceneResponseBodyAccessDeniedDetail) };
    inline DetailSceneResponseBodyAccessDeniedDetail accessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, DetailSceneResponseBodyAccessDeniedDetail) };
    inline DetailSceneResponseBody& setAccessDeniedDetail(const DetailSceneResponseBodyAccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline DetailSceneResponseBody& setAccessDeniedDetail(DetailSceneResponseBodyAccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // captures Field Functions 
    bool hasCaptures() const { return this->captures_ != nullptr;};
    void deleteCaptures() { this->captures_ = nullptr;};
    inline const vector<DetailSceneResponseBodyCaptures> & captures() const { DARABONBA_PTR_GET_CONST(captures_, vector<DetailSceneResponseBodyCaptures>) };
    inline vector<DetailSceneResponseBodyCaptures> captures() { DARABONBA_PTR_GET(captures_, vector<DetailSceneResponseBodyCaptures>) };
    inline DetailSceneResponseBody& setCaptures(const vector<DetailSceneResponseBodyCaptures> & captures) { DARABONBA_PTR_SET_VALUE(captures_, captures) };
    inline DetailSceneResponseBody& setCaptures(vector<DetailSceneResponseBodyCaptures> && captures) { DARABONBA_PTR_SET_RVALUE(captures_, captures) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline DetailSceneResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // coverUrl Field Functions 
    bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
    void deleteCoverUrl() { this->coverUrl_ = nullptr;};
    inline string coverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
    inline DetailSceneResponseBody& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


    // floorPlans Field Functions 
    bool hasFloorPlans() const { return this->floorPlans_ != nullptr;};
    void deleteFloorPlans() { this->floorPlans_ = nullptr;};
    inline const vector<DetailSceneResponseBodyFloorPlans> & floorPlans() const { DARABONBA_PTR_GET_CONST(floorPlans_, vector<DetailSceneResponseBodyFloorPlans>) };
    inline vector<DetailSceneResponseBodyFloorPlans> floorPlans() { DARABONBA_PTR_GET(floorPlans_, vector<DetailSceneResponseBodyFloorPlans>) };
    inline DetailSceneResponseBody& setFloorPlans(const vector<DetailSceneResponseBodyFloorPlans> & floorPlans) { DARABONBA_PTR_SET_VALUE(floorPlans_, floorPlans) };
    inline DetailSceneResponseBody& setFloorPlans(vector<DetailSceneResponseBodyFloorPlans> && floorPlans) { DARABONBA_PTR_SET_RVALUE(floorPlans_, floorPlans) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DetailSceneResponseBody& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DetailSceneResponseBody& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DetailSceneResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DetailSceneResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DetailSceneResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // previewToken Field Functions 
    bool hasPreviewToken() const { return this->previewToken_ != nullptr;};
    void deletePreviewToken() { this->previewToken_ = nullptr;};
    inline string previewToken() const { DARABONBA_PTR_GET_DEFAULT(previewToken_, "") };
    inline DetailSceneResponseBody& setPreviewToken(string previewToken) { DARABONBA_PTR_SET_VALUE(previewToken_, previewToken) };


    // published Field Functions 
    bool hasPublished() const { return this->published_ != nullptr;};
    void deletePublished() { this->published_ = nullptr;};
    inline bool published() const { DARABONBA_PTR_GET_DEFAULT(published_, false) };
    inline DetailSceneResponseBody& setPublished(bool published) { DARABONBA_PTR_SET_VALUE(published_, published) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetailSceneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceNum Field Functions 
    bool hasSourceNum() const { return this->sourceNum_ != nullptr;};
    void deleteSourceNum() { this->sourceNum_ = nullptr;};
    inline int64_t sourceNum() const { DARABONBA_PTR_GET_DEFAULT(sourceNum_, 0L) };
    inline DetailSceneResponseBody& setSourceNum(int64_t sourceNum) { DARABONBA_PTR_SET_VALUE(sourceNum_, sourceNum) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DetailSceneResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusName Field Functions 
    bool hasStatusName() const { return this->statusName_ != nullptr;};
    void deleteStatusName() { this->statusName_ = nullptr;};
    inline string statusName() const { DARABONBA_PTR_GET_DEFAULT(statusName_, "") };
    inline DetailSceneResponseBody& setStatusName(string statusName) { DARABONBA_PTR_SET_VALUE(statusName_, statusName) };


    // subSceneNum Field Functions 
    bool hasSubSceneNum() const { return this->subSceneNum_ != nullptr;};
    void deleteSubSceneNum() { this->subSceneNum_ = nullptr;};
    inline int64_t subSceneNum() const { DARABONBA_PTR_GET_DEFAULT(subSceneNum_, 0L) };
    inline DetailSceneResponseBody& setSubSceneNum(int64_t subSceneNum) { DARABONBA_PTR_SET_VALUE(subSceneNum_, subSceneNum) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DetailSceneResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DetailSceneResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<DetailSceneResponseBodyAccessDeniedDetail> accessDeniedDetail_ = nullptr;
    std::shared_ptr<vector<DetailSceneResponseBodyCaptures>> captures_ = nullptr;
    std::shared_ptr<int64_t> code_ = nullptr;
    std::shared_ptr<string> coverUrl_ = nullptr;
    std::shared_ptr<vector<DetailSceneResponseBodyFloorPlans>> floorPlans_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> previewToken_ = nullptr;
    std::shared_ptr<bool> published_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> sourceNum_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusName_ = nullptr;
    std::shared_ptr<int64_t> subSceneNum_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
