// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJOBTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJOBTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class UpdateJobTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateJobTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
      DARABONBA_PTR_TO_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VersionCreated, versionCreated_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateJobTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
      DARABONBA_PTR_FROM_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VersionCreated, versionCreated_);
    };
    UpdateJobTemplateResponseBody() = default ;
    UpdateJobTemplateResponseBody(const UpdateJobTemplateResponseBody &) = default ;
    UpdateJobTemplateResponseBody(UpdateJobTemplateResponseBody &&) = default ;
    UpdateJobTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateJobTemplateResponseBody() = default ;
    UpdateJobTemplateResponseBody& operator=(const UpdateJobTemplateResponseBody &) = default ;
    UpdateJobTemplateResponseBody& operator=(UpdateJobTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultVersion_ == nullptr
        && this->gmtModifyTime_ == nullptr && this->requestId_ == nullptr && this->version_ == nullptr && this->versionCreated_ == nullptr; };
    // defaultVersion Field Functions 
    bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
    void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
    inline int32_t getDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, 0) };
    inline UpdateJobTemplateResponseBody& setDefaultVersion(int32_t defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


    // gmtModifyTime Field Functions 
    bool hasGmtModifyTime() const { return this->gmtModifyTime_ != nullptr;};
    void deleteGmtModifyTime() { this->gmtModifyTime_ = nullptr;};
    inline string getGmtModifyTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifyTime_, "") };
    inline UpdateJobTemplateResponseBody& setGmtModifyTime(string gmtModifyTime) { DARABONBA_PTR_SET_VALUE(gmtModifyTime_, gmtModifyTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateJobTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline UpdateJobTemplateResponseBody& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionCreated Field Functions 
    bool hasVersionCreated() const { return this->versionCreated_ != nullptr;};
    void deleteVersionCreated() { this->versionCreated_ = nullptr;};
    inline bool getVersionCreated() const { DARABONBA_PTR_GET_DEFAULT(versionCreated_, false) };
    inline UpdateJobTemplateResponseBody& setVersionCreated(bool versionCreated) { DARABONBA_PTR_SET_VALUE(versionCreated_, versionCreated) };


  protected:
    shared_ptr<int32_t> defaultVersion_ {};
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> gmtModifyTime_ {};
    // 本次请求的 ID，用于诊断和答疑。
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> version_ {};
    shared_ptr<bool> versionCreated_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
