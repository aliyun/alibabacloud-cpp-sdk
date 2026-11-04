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
    // The query conditions in JSON string format. This parameter includes the following fields:
    // - **DownloadMode** (String): The download mode.
    //   - Example value: sync
    // - **InvokeType** (String): The product solution, which corresponds to **ProductType**.
    // - **SceneIdList** (List<Long>): The list of scene IDs.
    // - **StatisticsType** (String): The statistics type.
    //   - day
    //   - month
    // - **StartDate** (String): The start time of the query.
    //   - Example value: 2025-09-17 00:00:00 +0800
    // - **EndDate** (String): The end time of the query.
    //   - Example value: 2025-10-16 23:59:59 +0800
    // - **ProductProgramList**: The list of product codes corresponding to the product solution to be queried.
    //   - Example value: ["FINANCE_FACE_VERIFY","MFVC"]
    // - **Code** (Information verification API):
    //   - **ID_CARD_2_META**: Two-element verification for ID cards
    //   - **ID_PERIOD**: ID card validity period verification
    //   - **MOBILE_ONLINE_LENGTH**: Mobile phone in-network duration
    //   - **MOBILE_ONLINE_STATUS**: Mobile phone in-network status
    //   - **MOBILE_3_META_SIMPLE**: Simplified three-element verification for mobile phone numbers
    //   - **MOBILE_3_META**: Detailed three-element verification for mobile phone numbers
    //   - **MOBILE_2_META**: Two-element verification for mobile phone numbers
    //   - **BANK_CARD_N_META**: Detailed bank card verification
    //   - **MOBILE_DETECT**: Phone number detection 
    //   - **VEHICLE_N_META**: Enhanced vehicle element verification
    //   - **VEHICLE_PENTA_INFO**: Five-item vehicle information recognition
    //   - **VEHICLE_LICENSE_INFO**: Vehicle information recognition
    //   - **VEHICLE_INSURE_DATE**: Vehicle insurance date query
    //   - **VEHICLE_CHECK**: Vehicle element verification
    // - **ProductCode** (Information verification): Same as Code.
    shared_ptr<string> bizParam_ {};
    // The product type. Valid values:
    // - **FINANCE_VERIFY**: Financial-grade ID Verification
    // - **SMART_VERIFY**: Enhanced ID Verification (discontinued)
    // - **FACE_VERIFY**: ID Verification (discontinued)
    // - **INFO_CHECK_STATISTICS**: Information verification
    shared_ptr<string> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
