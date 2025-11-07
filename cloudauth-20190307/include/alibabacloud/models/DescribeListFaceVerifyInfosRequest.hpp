// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELISTFACEVERIFYINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELISTFACEVERIFYINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeListFaceVerifyInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeListFaceVerifyInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(GmtEnd, gmtEnd_);
      DARABONBA_PTR_TO_JSON(GmtStart, gmtStart_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeListFaceVerifyInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(GmtEnd, gmtEnd_);
      DARABONBA_PTR_FROM_JSON(GmtStart, gmtStart_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeListFaceVerifyInfosRequest() = default ;
    DescribeListFaceVerifyInfosRequest(const DescribeListFaceVerifyInfosRequest &) = default ;
    DescribeListFaceVerifyInfosRequest(DescribeListFaceVerifyInfosRequest &&) = default ;
    DescribeListFaceVerifyInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeListFaceVerifyInfosRequest() = default ;
    DescribeListFaceVerifyInfosRequest& operator=(const DescribeListFaceVerifyInfosRequest &) = default ;
    DescribeListFaceVerifyInfosRequest& operator=(DescribeListFaceVerifyInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certifyId_ == nullptr
        && return this->gmtEnd_ == nullptr && return this->gmtStart_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->sceneId_ == nullptr
        && return this->status_ == nullptr; };
    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string certifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline DescribeListFaceVerifyInfosRequest& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // gmtEnd Field Functions 
    bool hasGmtEnd() const { return this->gmtEnd_ != nullptr;};
    void deleteGmtEnd() { this->gmtEnd_ = nullptr;};
    inline int64_t gmtEnd() const { DARABONBA_PTR_GET_DEFAULT(gmtEnd_, 0L) };
    inline DescribeListFaceVerifyInfosRequest& setGmtEnd(int64_t gmtEnd) { DARABONBA_PTR_SET_VALUE(gmtEnd_, gmtEnd) };


    // gmtStart Field Functions 
    bool hasGmtStart() const { return this->gmtStart_ != nullptr;};
    void deleteGmtStart() { this->gmtStart_ = nullptr;};
    inline int64_t gmtStart() const { DARABONBA_PTR_GET_DEFAULT(gmtStart_, 0L) };
    inline DescribeListFaceVerifyInfosRequest& setGmtStart(int64_t gmtStart) { DARABONBA_PTR_SET_VALUE(gmtStart_, gmtStart) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeListFaceVerifyInfosRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeListFaceVerifyInfosRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline DescribeListFaceVerifyInfosRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeListFaceVerifyInfosRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Verification ID.
    std::shared_ptr<string> certifyId_ = nullptr;
    // Query the end time of the verification.
    std::shared_ptr<int64_t> gmtEnd_ = nullptr;
    // Query the start time of the verification.
    std::shared_ptr<int64_t> gmtStart_ = nullptr;
    // Pagination parameter: current page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Number of items per page for paginated queries. Maximum value: 100, default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
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
