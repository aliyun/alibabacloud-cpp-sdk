// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLATESTSUBMITDETAILRESPONSEBODYSUBMITDETAILRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETLATESTSUBMITDETAILRESPONSEBODYSUBMITDETAILRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetLatestSubmitDetailResponseBodySubmitDetailResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLatestSubmitDetailResponseBodySubmitDetailResult& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_TO_JSON(ReleaseObject, releaseObject_);
      DARABONBA_PTR_TO_JSON(SubmitStatus, submitStatus_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetLatestSubmitDetailResponseBodySubmitDetailResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_FROM_JSON(ReleaseObject, releaseObject_);
      DARABONBA_PTR_FROM_JSON(SubmitStatus, submitStatus_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetLatestSubmitDetailResponseBodySubmitDetailResult() = default ;
    GetLatestSubmitDetailResponseBodySubmitDetailResult(const GetLatestSubmitDetailResponseBodySubmitDetailResult &) = default ;
    GetLatestSubmitDetailResponseBodySubmitDetailResult(GetLatestSubmitDetailResponseBodySubmitDetailResult &&) = default ;
    GetLatestSubmitDetailResponseBodySubmitDetailResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLatestSubmitDetailResponseBodySubmitDetailResult() = default ;
    GetLatestSubmitDetailResponseBodySubmitDetailResult& operator=(const GetLatestSubmitDetailResponseBodySubmitDetailResult &) = default ;
    GetLatestSubmitDetailResponseBodySubmitDetailResult& operator=(GetLatestSubmitDetailResponseBodySubmitDetailResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->publishStatus_ != nullptr && this->releaseObject_ != nullptr && this->submitStatus_ != nullptr && this->tag_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetLatestSubmitDetailResponseBodySubmitDetailResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // publishStatus Field Functions 
    bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
    void deletePublishStatus() { this->publishStatus_ = nullptr;};
    inline string publishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, "") };
    inline GetLatestSubmitDetailResponseBodySubmitDetailResult& setPublishStatus(string publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


    // releaseObject Field Functions 
    bool hasReleaseObject() const { return this->releaseObject_ != nullptr;};
    void deleteReleaseObject() { this->releaseObject_ = nullptr;};
    inline const Models::GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject & releaseObject() const { DARABONBA_PTR_GET_CONST(releaseObject_, Models::GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject) };
    inline Models::GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject releaseObject() { DARABONBA_PTR_GET(releaseObject_, Models::GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject) };
    inline GetLatestSubmitDetailResponseBodySubmitDetailResult& setReleaseObject(const Models::GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject & releaseObject) { DARABONBA_PTR_SET_VALUE(releaseObject_, releaseObject) };
    inline GetLatestSubmitDetailResponseBodySubmitDetailResult& setReleaseObject(Models::GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject && releaseObject) { DARABONBA_PTR_SET_RVALUE(releaseObject_, releaseObject) };


    // submitStatus Field Functions 
    bool hasSubmitStatus() const { return this->submitStatus_ != nullptr;};
    void deleteSubmitStatus() { this->submitStatus_ = nullptr;};
    inline string submitStatus() const { DARABONBA_PTR_GET_DEFAULT(submitStatus_, "") };
    inline GetLatestSubmitDetailResponseBodySubmitDetailResult& setSubmitStatus(string submitStatus) { DARABONBA_PTR_SET_VALUE(submitStatus_, submitStatus) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline GetLatestSubmitDetailResponseBodySubmitDetailResult& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> publishStatus_ = nullptr;
    std::shared_ptr<Models::GetLatestSubmitDetailResponseBodySubmitDetailResultReleaseObject> releaseObject_ = nullptr;
    std::shared_ptr<string> submitStatus_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
