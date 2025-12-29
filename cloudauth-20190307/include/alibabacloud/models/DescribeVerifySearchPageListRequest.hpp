// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYSEARCHPAGELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYSEARCHPAGELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifySearchPageListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifySearchPageListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertNo, certNo_);
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(HasDeviceRisk, hasDeviceRisk_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(OuterOrderNo, outerOrderNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Passed, passed_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Root, root_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(Simulator, simulator_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
      DARABONBA_PTR_TO_JSON(SubCodes, subCodes_);
      DARABONBA_PTR_TO_JSON(VirtualVideo, virtualVideo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifySearchPageListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertNo, certNo_);
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(HasDeviceRisk, hasDeviceRisk_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(OuterOrderNo, outerOrderNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Root, root_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(Simulator, simulator_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
      DARABONBA_PTR_FROM_JSON(SubCodes, subCodes_);
      DARABONBA_PTR_FROM_JSON(VirtualVideo, virtualVideo_);
    };
    DescribeVerifySearchPageListRequest() = default ;
    DescribeVerifySearchPageListRequest(const DescribeVerifySearchPageListRequest &) = default ;
    DescribeVerifySearchPageListRequest(DescribeVerifySearchPageListRequest &&) = default ;
    DescribeVerifySearchPageListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifySearchPageListRequest() = default ;
    DescribeVerifySearchPageListRequest& operator=(const DescribeVerifySearchPageListRequest &) = default ;
    DescribeVerifySearchPageListRequest& operator=(DescribeVerifySearchPageListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certNo_ == nullptr
        && this->certifyId_ == nullptr && this->currentPage_ == nullptr && this->endDate_ == nullptr && this->hasDeviceRisk_ == nullptr && this->model_ == nullptr
        && this->outerOrderNo_ == nullptr && this->pageSize_ == nullptr && this->passed_ == nullptr && this->productCode_ == nullptr && this->root_ == nullptr
        && this->sceneId_ == nullptr && this->simulator_ == nullptr && this->startDate_ == nullptr && this->subCode_ == nullptr && this->subCodes_ == nullptr
        && this->virtualVideo_ == nullptr; };
    // certNo Field Functions 
    bool hasCertNo() const { return this->certNo_ != nullptr;};
    void deleteCertNo() { this->certNo_ = nullptr;};
    inline string getCertNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
    inline DescribeVerifySearchPageListRequest& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string getCertifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline DescribeVerifySearchPageListRequest& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeVerifySearchPageListRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribeVerifySearchPageListRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // hasDeviceRisk Field Functions 
    bool hasHasDeviceRisk() const { return this->hasDeviceRisk_ != nullptr;};
    void deleteHasDeviceRisk() { this->hasDeviceRisk_ = nullptr;};
    inline bool getHasDeviceRisk() const { DARABONBA_PTR_GET_DEFAULT(hasDeviceRisk_, false) };
    inline DescribeVerifySearchPageListRequest& setHasDeviceRisk(bool hasDeviceRisk) { DARABONBA_PTR_SET_VALUE(hasDeviceRisk_, hasDeviceRisk) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline DescribeVerifySearchPageListRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // outerOrderNo Field Functions 
    bool hasOuterOrderNo() const { return this->outerOrderNo_ != nullptr;};
    void deleteOuterOrderNo() { this->outerOrderNo_ = nullptr;};
    inline string getOuterOrderNo() const { DARABONBA_PTR_GET_DEFAULT(outerOrderNo_, "") };
    inline DescribeVerifySearchPageListRequest& setOuterOrderNo(string outerOrderNo) { DARABONBA_PTR_SET_VALUE(outerOrderNo_, outerOrderNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeVerifySearchPageListRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline string getPassed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
    inline DescribeVerifySearchPageListRequest& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeVerifySearchPageListRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // root Field Functions 
    bool hasRoot() const { return this->root_ != nullptr;};
    void deleteRoot() { this->root_ = nullptr;};
    inline int32_t getRoot() const { DARABONBA_PTR_GET_DEFAULT(root_, 0) };
    inline DescribeVerifySearchPageListRequest& setRoot(int32_t root) { DARABONBA_PTR_SET_VALUE(root_, root) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline DescribeVerifySearchPageListRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // simulator Field Functions 
    bool hasSimulator() const { return this->simulator_ != nullptr;};
    void deleteSimulator() { this->simulator_ = nullptr;};
    inline int32_t getSimulator() const { DARABONBA_PTR_GET_DEFAULT(simulator_, 0) };
    inline DescribeVerifySearchPageListRequest& setSimulator(int32_t simulator) { DARABONBA_PTR_SET_VALUE(simulator_, simulator) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribeVerifySearchPageListRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string getSubCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline DescribeVerifySearchPageListRequest& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


    // subCodes Field Functions 
    bool hasSubCodes() const { return this->subCodes_ != nullptr;};
    void deleteSubCodes() { this->subCodes_ = nullptr;};
    inline string getSubCodes() const { DARABONBA_PTR_GET_DEFAULT(subCodes_, "") };
    inline DescribeVerifySearchPageListRequest& setSubCodes(string subCodes) { DARABONBA_PTR_SET_VALUE(subCodes_, subCodes) };


    // virtualVideo Field Functions 
    bool hasVirtualVideo() const { return this->virtualVideo_ != nullptr;};
    void deleteVirtualVideo() { this->virtualVideo_ = nullptr;};
    inline int32_t getVirtualVideo() const { DARABONBA_PTR_GET_DEFAULT(virtualVideo_, 0) };
    inline DescribeVerifySearchPageListRequest& setVirtualVideo(int32_t virtualVideo) { DARABONBA_PTR_SET_VALUE(virtualVideo_, virtualVideo) };


  protected:
    // ID number.
    shared_ptr<string> certNo_ {};
    // Authentication ID.
    shared_ptr<string> certifyId_ {};
    // Current page number.
    // 
    // This parameter is required.
    shared_ptr<string> currentPage_ {};
    // End date of the query. The format is a Unix timestamp, in milliseconds.
    shared_ptr<string> endDate_ {};
    // Whether there is device risk (pass true if root = 1 or simulator = 1 or virtual_video = 1).
    shared_ptr<bool> hasDeviceRisk_ {};
    // Liveness detection model.
    shared_ptr<string> model_ {};
    // Unique identifier for the customer request.
    shared_ptr<string> outerOrderNo_ {};
    // Number of items per page.
    // 
    // This parameter is required.
    shared_ptr<string> pageSize_ {};
    // Whether the authentication passed:
    // - **T**: Passed
    // - **F**: Not passed
    shared_ptr<string> passed_ {};
    // Product code.
    shared_ptr<string> productCode_ {};
    // Whether it is rooted (pass 1 if selected, otherwise do not pass; corresponds to identity label risk type).
    shared_ptr<int32_t> root_ {};
    // Scene ID.
    shared_ptr<string> sceneId_ {};
    // Whether it is a simulator (pass 1 if selected, otherwise do not pass; corresponds to device label risk type).
    shared_ptr<int32_t> simulator_ {};
    // Start date of the query.
    shared_ptr<string> startDate_ {};
    // Result Code. For detailed values, please refer to: [SubCode Explanation](https://help.aliyun.com/zh/id-verification/financial-grade-id-verification/error-code-person-verify?spm=a2c4g.11186623.0.0.6015566ebArcFw#d88910e172fgg).
    shared_ptr<string> subCode_ {};
    // Comma-separated Result Codes. For detailed values, please refer to: [SubCode Explanation](https://help.aliyun.com/zh/id-verification/financial-grade-id-verification/error-code-person-verify?spm=a2c4g.11186623.0.0.6015566ebArcFw#d88910e172fgg).
    shared_ptr<string> subCodes_ {};
    // Whether it is a virtual adaptation (pass 1 if selected, otherwise do not pass; corresponds to behavior label risk type).
    shared_ptr<int32_t> virtualVideo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
