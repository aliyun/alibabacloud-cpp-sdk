// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYSEARCHPAGELISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYSEARCHPAGELISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVerifySearchPageListResponseBodyItemsExtInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifySearchPageListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifySearchPageListResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(CertNo, certNo_);
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(ExtInfo, extInfo_);
      DARABONBA_PTR_TO_JSON(GmtVerify, gmtVerify_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(OuterOrderNo, outerOrderNo_);
      DARABONBA_PTR_TO_JSON(Passed, passed_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Root, root_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(Simulator, simulator_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VirtualVideo, virtualVideo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifySearchPageListResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CertNo, certNo_);
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(ExtInfo, extInfo_);
      DARABONBA_PTR_FROM_JSON(GmtVerify, gmtVerify_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(OuterOrderNo, outerOrderNo_);
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Root, root_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(Simulator, simulator_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VirtualVideo, virtualVideo_);
    };
    DescribeVerifySearchPageListResponseBodyItems() = default ;
    DescribeVerifySearchPageListResponseBodyItems(const DescribeVerifySearchPageListResponseBodyItems &) = default ;
    DescribeVerifySearchPageListResponseBodyItems(DescribeVerifySearchPageListResponseBodyItems &&) = default ;
    DescribeVerifySearchPageListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifySearchPageListResponseBodyItems() = default ;
    DescribeVerifySearchPageListResponseBodyItems& operator=(const DescribeVerifySearchPageListResponseBodyItems &) = default ;
    DescribeVerifySearchPageListResponseBodyItems& operator=(DescribeVerifySearchPageListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certNo_ == nullptr
        && return this->certifyId_ == nullptr && return this->extInfo_ == nullptr && return this->gmtVerify_ == nullptr && return this->model_ == nullptr && return this->outerOrderNo_ == nullptr
        && return this->passed_ == nullptr && return this->productCode_ == nullptr && return this->root_ == nullptr && return this->sceneId_ == nullptr && return this->simulator_ == nullptr
        && return this->subCode_ == nullptr && return this->userId_ == nullptr && return this->virtualVideo_ == nullptr; };
    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string certNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline DescribeVerifySearchPageListResponseBodyItems& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string certifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline DescribeVerifySearchPageListResponseBodyItems& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline const Models::DescribeVerifySearchPageListResponseBodyItemsExtInfo & extInfo() const { DARABONBA_PTR_GET_CONST(extInfo_, Models::DescribeVerifySearchPageListResponseBodyItemsExtInfo) };
    inline Models::DescribeVerifySearchPageListResponseBodyItemsExtInfo extInfo() { DARABONBA_PTR_GET(extInfo_, Models::DescribeVerifySearchPageListResponseBodyItemsExtInfo) };
    inline DescribeVerifySearchPageListResponseBodyItems& setExtInfo(const Models::DescribeVerifySearchPageListResponseBodyItemsExtInfo & extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };
    inline DescribeVerifySearchPageListResponseBodyItems& setExtInfo(Models::DescribeVerifySearchPageListResponseBodyItemsExtInfo && extInfo) { DARABONBA_PTR_SET_RVALUE(extInfo_, extInfo) };


    // gmtVerify Field Functions 
    bool hasGmtVerify() const { return this->gmtVerify_ != nullptr;};
    void deleteGmtVerify() { this->gmtVerify_ = nullptr;};
    inline string gmtVerify() const { DARABONBA_PTR_GET_DEFAULT(gmtVerify_, "") };
    inline DescribeVerifySearchPageListResponseBodyItems& setGmtVerify(string gmtVerify) { DARABONBA_PTR_SET_VALUE(gmtVerify_, gmtVerify) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline DescribeVerifySearchPageListResponseBodyItems& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // outerOrderNo Field Functions 
    bool hasOuterOrderNo() const { return this->outerOrderNo_ != nullptr;};
    void deleteOuterOrderNo() { this->outerOrderNo_ = nullptr;};
    inline string outerOrderNo() const { DARABONBA_PTR_GET_DEFAULT(outerOrderNo_, "") };
    inline DescribeVerifySearchPageListResponseBodyItems& setOuterOrderNo(string outerOrderNo) { DARABONBA_PTR_SET_VALUE(outerOrderNo_, outerOrderNo) };


    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline string passed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
    inline DescribeVerifySearchPageListResponseBodyItems& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeVerifySearchPageListResponseBodyItems& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // root Field Functions 
    bool hasRoot() const { return this->root_ != nullptr;};
    void deleteRoot() { this->root_ = nullptr;};
    inline int32_t root() const { DARABONBA_PTR_GET_DEFAULT(root_, 0) };
    inline DescribeVerifySearchPageListResponseBodyItems& setRoot(int32_t root) { DARABONBA_PTR_SET_VALUE(root_, root) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline DescribeVerifySearchPageListResponseBodyItems& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // simulator Field Functions 
    bool hasSimulator() const { return this->simulator_ != nullptr;};
    void deleteSimulator() { this->simulator_ = nullptr;};
    inline int32_t simulator() const { DARABONBA_PTR_GET_DEFAULT(simulator_, 0) };
    inline DescribeVerifySearchPageListResponseBodyItems& setSimulator(int32_t simulator) { DARABONBA_PTR_SET_VALUE(simulator_, simulator) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string subCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline DescribeVerifySearchPageListResponseBodyItems& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeVerifySearchPageListResponseBodyItems& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // virtualVideo Field Functions 
    bool hasVirtualVideo() const { return this->virtualVideo_ != nullptr;};
    void deleteVirtualVideo() { this->virtualVideo_ = nullptr;};
    inline int32_t virtualVideo() const { DARABONBA_PTR_GET_DEFAULT(virtualVideo_, 0) };
    inline DescribeVerifySearchPageListResponseBodyItems& setVirtualVideo(int32_t virtualVideo) { DARABONBA_PTR_SET_VALUE(virtualVideo_, virtualVideo) };


  protected:
    // Desensitized ID number.
    std::shared_ptr<string> certNo_ = nullptr;
    // Certification ID.
    std::shared_ptr<string> certifyId_ = nullptr;
    // Extended information.
    std::shared_ptr<Models::DescribeVerifySearchPageListResponseBodyItemsExtInfo> extInfo_ = nullptr;
    // Verification time of this authentication.
    std::shared_ptr<string> gmtVerify_ = nullptr;
    // Liveness detection scheme.
    std::shared_ptr<string> model_ = nullptr;
    // Unique identifier for the customer request.
    std::shared_ptr<string> outerOrderNo_ = nullptr;
    // Whether the certification passed. Values:
    // - **T**: Passed.
    // - **F**: Not passed.
    std::shared_ptr<string> passed_ = nullptr;
    // Product code.
    std::shared_ptr<string> productCode_ = nullptr;
    // Whether it is root (pass 1 if selected, otherwise do not pass; corresponds to identity label risk type).
    std::shared_ptr<int32_t> root_ = nullptr;
    // Scene ID.
    std::shared_ptr<int64_t> sceneId_ = nullptr;
    // Whether it is a simulator (pass 1 if selected, otherwise do not pass; corresponds to device label risk type).
    std::shared_ptr<int32_t> simulator_ = nullptr;
    // System returned error code.
    std::shared_ptr<string> subCode_ = nullptr;
    // User ID.
    std::shared_ptr<string> userId_ = nullptr;
    // Whether it is a virtual adaptation (pass 1 if selected, otherwise do not pass; corresponds to behavior label risk type).
    std::shared_ptr<int32_t> virtualVideo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
