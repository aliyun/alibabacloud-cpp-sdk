// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADVERIFYRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADVERIFYRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DownloadVerifyRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadVerifyRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizParam, bizParam_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadVerifyRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizParam, bizParam_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    DownloadVerifyRecordsRequest() = default ;
    DownloadVerifyRecordsRequest(const DownloadVerifyRecordsRequest &) = default ;
    DownloadVerifyRecordsRequest(DownloadVerifyRecordsRequest &&) = default ;
    DownloadVerifyRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadVerifyRecordsRequest() = default ;
    DownloadVerifyRecordsRequest& operator=(const DownloadVerifyRecordsRequest &) = default ;
    DownloadVerifyRecordsRequest& operator=(DownloadVerifyRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizParam_ == nullptr
        && this->productType_ == nullptr; };
    // bizParam Field Functions 
    bool hasBizParam() const { return this->bizParam_ != nullptr;};
    void deleteBizParam() { this->bizParam_ = nullptr;};
    inline string getBizParam() const { DARABONBA_PTR_GET_DEFAULT(bizParam_, "") };
    inline DownloadVerifyRecordsRequest& setBizParam(string bizParam) { DARABONBA_PTR_SET_VALUE(bizParam_, bizParam) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DownloadVerifyRecordsRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The query conditions in JSON string format. The following fields are included:
    // - **DownloadMode (String)**: the download mode.
    //   - Example: sync
    // - **InvokeType (String)**: the product plan, which corresponds to **ProductType**.
    // - **SceneIdList (List<Long>)**: the list of scene IDs.
    // - **StatisticsType (String)**: the statistics type. Valid values:
    //   - day
    //   - month
    // - **StartDate (String)**: the query start time.
    //   - Example: 2025-09-17 00:00:00 +0800
    // - **EndDate (String)**: the query end time.
    //   - Example: 2025-10-16 23:59:59 +0800
    // - **ProductProgramList**: the list of product codes under the product plan to query.
    //   - Example: ["FINANCE_FACE_VERIFY","MFVC"]
    // - **Code (information verification API)**: Valid values:
    //   - **ID_CARD_2_META**: ID card two-factor verification
    //   - **ID_PERIOD**: ID card validity period verification
    //   - **MOBILE_ONLINE_LENGTH**: mobile number online duration
    //   - **MOBILE_ONLINE_STATUS**: mobile number online status
    //   - **MOBILE_3_META_SIMPLE**: mobile number three-factor verification (basic)
    //   - **MOBILE_3_META**: mobile number three-factor verification (detailed)
    //   - **MOBILE_2_META**: mobile number two-factor verification
    //   - **BANK_CARD_N_META**: bank card verification (detailed)
    //   - **MOBILE_DETECT**: phone number detection 
    //   - **VEHICLE_N_META**: vehicle element verification (enhanced)
    //   - **VEHICLE_PENTA_INFO**: vehicle five-element information recognition
    //   - **VEHICLE_LICENSE_INFO**: vehicle information recognition
    //   - **VEHICLE_INSURE_DATE**: vehicle insurance date query
    //   - **VEHICLE_CHECK**: vehicle element verification
    // - **ProductCode (information verification)**: same as Code.
    shared_ptr<string> bizParam_ {};
    // The product type. Valid values:
    // - **FINANCE_VERIFY**: financial-grade ID Verification
    // - **SMART_VERIFY**: enhanced ID Verification (discontinued)
    // - **FACE_VERIFY**: ID Verification (discontinued)
    // - **INFO_CHECK_STATISTICS**: information verification.
    shared_ptr<string> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
