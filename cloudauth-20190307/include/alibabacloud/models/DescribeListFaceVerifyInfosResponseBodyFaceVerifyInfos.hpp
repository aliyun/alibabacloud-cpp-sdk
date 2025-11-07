// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELISTFACEVERIFYINFOSRESPONSEBODYFACEVERIFYINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELISTFACEVERIFYINFOSRESPONSEBODYFACEVERIFYINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertNo, certNo_);
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertNo, certNo_);
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos() = default ;
    DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos(const DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos &) = default ;
    DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos(DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos &&) = default ;
    DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos() = default ;
    DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos& operator=(const DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos &) = default ;
    DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos& operator=(DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizCode_ == nullptr
        && return this->certName_ == nullptr && return this->certNo_ == nullptr && return this->certifyId_ == nullptr && return this->createTime_ == nullptr && return this->sceneId_ == nullptr
        && return this->status_ == nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string certNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string certifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeListFaceVerifyInfosResponseBodyFaceVerifyInfos& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Business code.
    std::shared_ptr<string> bizCode_ = nullptr;
    // Name.
    std::shared_ptr<string> certName_ = nullptr;
    // ID number.
    std::shared_ptr<string> certNo_ = nullptr;
    // ID of the certificate.
    std::shared_ptr<string> certifyId_ = nullptr;
    // Creation time of the face recognition record.
    std::shared_ptr<string> createTime_ = nullptr;
    // Scene ID.
    std::shared_ptr<int64_t> sceneId_ = nullptr;
    // Verification status:
    // - **1**: Verification passed.
    // - **2**: Verification failed.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
