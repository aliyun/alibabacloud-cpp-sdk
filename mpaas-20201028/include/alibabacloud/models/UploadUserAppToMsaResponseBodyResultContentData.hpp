// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADUSERAPPTOMSARESPONSEBODYRESULTCONTENTDATA_HPP_
#define ALIBABACLOUD_MODELS_UPLOADUSERAPPTOMSARESPONSEBODYRESULTCONTENTDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UploadUserAppToMsaResponseBodyResultContentDataApkInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class UploadUserAppToMsaResponseBodyResultContentData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadUserAppToMsaResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_TO_JSON(ApkInfo, apkInfo_);
      DARABONBA_PTR_TO_JSON(EnhanceTaskId, enhanceTaskId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UploadUserAppToMsaResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApkInfo, apkInfo_);
      DARABONBA_PTR_FROM_JSON(EnhanceTaskId, enhanceTaskId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UploadUserAppToMsaResponseBodyResultContentData() = default ;
    UploadUserAppToMsaResponseBodyResultContentData(const UploadUserAppToMsaResponseBodyResultContentData &) = default ;
    UploadUserAppToMsaResponseBodyResultContentData(UploadUserAppToMsaResponseBodyResultContentData &&) = default ;
    UploadUserAppToMsaResponseBodyResultContentData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadUserAppToMsaResponseBodyResultContentData() = default ;
    UploadUserAppToMsaResponseBodyResultContentData& operator=(const UploadUserAppToMsaResponseBodyResultContentData &) = default ;
    UploadUserAppToMsaResponseBodyResultContentData& operator=(UploadUserAppToMsaResponseBodyResultContentData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apkInfo_ == nullptr
        && return this->enhanceTaskId_ == nullptr && return this->id_ == nullptr && return this->progress_ == nullptr && return this->status_ == nullptr; };
    // apkInfo Field Functions 
    bool hasApkInfo() const { return this->apkInfo_ != nullptr;};
    void deleteApkInfo() { this->apkInfo_ = nullptr;};
    inline const Models::UploadUserAppToMsaResponseBodyResultContentDataApkInfo & apkInfo() const { DARABONBA_PTR_GET_CONST(apkInfo_, Models::UploadUserAppToMsaResponseBodyResultContentDataApkInfo) };
    inline Models::UploadUserAppToMsaResponseBodyResultContentDataApkInfo apkInfo() { DARABONBA_PTR_GET(apkInfo_, Models::UploadUserAppToMsaResponseBodyResultContentDataApkInfo) };
    inline UploadUserAppToMsaResponseBodyResultContentData& setApkInfo(const Models::UploadUserAppToMsaResponseBodyResultContentDataApkInfo & apkInfo) { DARABONBA_PTR_SET_VALUE(apkInfo_, apkInfo) };
    inline UploadUserAppToMsaResponseBodyResultContentData& setApkInfo(Models::UploadUserAppToMsaResponseBodyResultContentDataApkInfo && apkInfo) { DARABONBA_PTR_SET_RVALUE(apkInfo_, apkInfo) };


    // enhanceTaskId Field Functions 
    bool hasEnhanceTaskId() const { return this->enhanceTaskId_ != nullptr;};
    void deleteEnhanceTaskId() { this->enhanceTaskId_ = nullptr;};
    inline int64_t enhanceTaskId() const { DARABONBA_PTR_GET_DEFAULT(enhanceTaskId_, 0L) };
    inline UploadUserAppToMsaResponseBodyResultContentData& setEnhanceTaskId(int64_t enhanceTaskId) { DARABONBA_PTR_SET_VALUE(enhanceTaskId_, enhanceTaskId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UploadUserAppToMsaResponseBodyResultContentData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int64_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
    inline UploadUserAppToMsaResponseBodyResultContentData& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline UploadUserAppToMsaResponseBodyResultContentData& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<Models::UploadUserAppToMsaResponseBodyResultContentDataApkInfo> apkInfo_ = nullptr;
    std::shared_ptr<int64_t> enhanceTaskId_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> progress_ = nullptr;
    std::shared_ptr<int64_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
