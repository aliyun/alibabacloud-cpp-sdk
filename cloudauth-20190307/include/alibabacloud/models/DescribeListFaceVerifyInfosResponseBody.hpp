// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELISTFACEVERIFYINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELISTFACEVERIFYINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeListFaceVerifyInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeListFaceVerifyInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FaceVerifyInfos, faceVerifyInfos_);
      DARABONBA_PTR_TO_JSON(ItemsPerPage, itemsPerPage_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeListFaceVerifyInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceVerifyInfos, faceVerifyInfos_);
      DARABONBA_PTR_FROM_JSON(ItemsPerPage, itemsPerPage_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeListFaceVerifyInfosResponseBody() = default ;
    DescribeListFaceVerifyInfosResponseBody(const DescribeListFaceVerifyInfosResponseBody &) = default ;
    DescribeListFaceVerifyInfosResponseBody(DescribeListFaceVerifyInfosResponseBody &&) = default ;
    DescribeListFaceVerifyInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeListFaceVerifyInfosResponseBody() = default ;
    DescribeListFaceVerifyInfosResponseBody& operator=(const DescribeListFaceVerifyInfosResponseBody &) = default ;
    DescribeListFaceVerifyInfosResponseBody& operator=(DescribeListFaceVerifyInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FaceVerifyInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FaceVerifyInfos& obj) { 
        DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
        DARABONBA_PTR_TO_JSON(CertName, certName_);
        DARABONBA_PTR_TO_JSON(CertNo, certNo_);
        DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, FaceVerifyInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
        DARABONBA_PTR_FROM_JSON(CertName, certName_);
        DARABONBA_PTR_FROM_JSON(CertNo, certNo_);
        DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      FaceVerifyInfos() = default ;
      FaceVerifyInfos(const FaceVerifyInfos &) = default ;
      FaceVerifyInfos(FaceVerifyInfos &&) = default ;
      FaceVerifyInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FaceVerifyInfos() = default ;
      FaceVerifyInfos& operator=(const FaceVerifyInfos &) = default ;
      FaceVerifyInfos& operator=(FaceVerifyInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bizCode_ == nullptr
        && this->certName_ == nullptr && this->certNo_ == nullptr && this->certifyId_ == nullptr && this->createTime_ == nullptr && this->sceneId_ == nullptr
        && this->status_ == nullptr; };
      // bizCode Field Functions 
      bool hasBizCode() const { return this->bizCode_ != nullptr;};
      void deleteBizCode() { this->bizCode_ = nullptr;};
      inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
      inline FaceVerifyInfos& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


      // certName Field Functions 
      bool hasCertName() const { return this->certName_ != nullptr;};
      void deleteCertName() { this->certName_ = nullptr;};
      inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
      inline FaceVerifyInfos& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


      // certNo Field Functions 
      bool hasCertNo() const { return this->certNo_ != nullptr;};
      void deleteCertNo() { this->certNo_ = nullptr;};
      inline string getCertNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
      inline FaceVerifyInfos& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


      // certifyId Field Functions 
      bool hasCertifyId() const { return this->certifyId_ != nullptr;};
      void deleteCertifyId() { this->certifyId_ = nullptr;};
      inline string getCertifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
      inline FaceVerifyInfos& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline FaceVerifyInfos& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // sceneId Field Functions 
      bool hasSceneId() const { return this->sceneId_ != nullptr;};
      void deleteSceneId() { this->sceneId_ = nullptr;};
      inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
      inline FaceVerifyInfos& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline FaceVerifyInfos& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Business code.
      shared_ptr<string> bizCode_ {};
      // Name.
      shared_ptr<string> certName_ {};
      // ID number.
      shared_ptr<string> certNo_ {};
      // ID of the certificate.
      shared_ptr<string> certifyId_ {};
      // Creation time of the face recognition record.
      shared_ptr<string> createTime_ {};
      // Scene ID.
      shared_ptr<int64_t> sceneId_ {};
      // Verification status:
      // - **1**: Verification passed.
      // - **2**: Verification failed.
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->faceVerifyInfos_ == nullptr
        && this->itemsPerPage_ == nullptr && this->pageNumber_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPages_ == nullptr; };
    // faceVerifyInfos Field Functions 
    bool hasFaceVerifyInfos() const { return this->faceVerifyInfos_ != nullptr;};
    void deleteFaceVerifyInfos() { this->faceVerifyInfos_ = nullptr;};
    inline const vector<DescribeListFaceVerifyInfosResponseBody::FaceVerifyInfos> & getFaceVerifyInfos() const { DARABONBA_PTR_GET_CONST(faceVerifyInfos_, vector<DescribeListFaceVerifyInfosResponseBody::FaceVerifyInfos>) };
    inline vector<DescribeListFaceVerifyInfosResponseBody::FaceVerifyInfos> getFaceVerifyInfos() { DARABONBA_PTR_GET(faceVerifyInfos_, vector<DescribeListFaceVerifyInfosResponseBody::FaceVerifyInfos>) };
    inline DescribeListFaceVerifyInfosResponseBody& setFaceVerifyInfos(const vector<DescribeListFaceVerifyInfosResponseBody::FaceVerifyInfos> & faceVerifyInfos) { DARABONBA_PTR_SET_VALUE(faceVerifyInfos_, faceVerifyInfos) };
    inline DescribeListFaceVerifyInfosResponseBody& setFaceVerifyInfos(vector<DescribeListFaceVerifyInfosResponseBody::FaceVerifyInfos> && faceVerifyInfos) { DARABONBA_PTR_SET_RVALUE(faceVerifyInfos_, faceVerifyInfos) };


    // itemsPerPage Field Functions 
    bool hasItemsPerPage() const { return this->itemsPerPage_ != nullptr;};
    void deleteItemsPerPage() { this->itemsPerPage_ = nullptr;};
    inline int32_t getItemsPerPage() const { DARABONBA_PTR_GET_DEFAULT(itemsPerPage_, 0) };
    inline DescribeListFaceVerifyInfosResponseBody& setItemsPerPage(int32_t itemsPerPage) { DARABONBA_PTR_SET_VALUE(itemsPerPage_, itemsPerPage) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeListFaceVerifyInfosResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeListFaceVerifyInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeListFaceVerifyInfosResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeListFaceVerifyInfosResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // List of face verification records.
    shared_ptr<vector<DescribeListFaceVerifyInfosResponseBody::FaceVerifyInfos>> faceVerifyInfos_ {};
    // Number of items per page.
    shared_ptr<int32_t> itemsPerPage_ {};
    // Pagination parameter: current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // ID of the current request.
    shared_ptr<string> requestId_ {};
    // Total number of verifications.
    shared_ptr<int32_t> totalCount_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
