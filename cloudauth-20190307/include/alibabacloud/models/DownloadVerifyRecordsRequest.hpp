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
        && return this->productType_ == nullptr; };
    // bizParam Field Functions 
    bool hasBizParam() const { return this->bizParam_ != nullptr;};
    void deleteBizParam() { this->bizParam_ = nullptr;};
    inline string bizParam() const { DARABONBA_PTR_GET_DEFAULT(bizParam_, "") };
    inline DownloadVerifyRecordsRequest& setBizParam(string bizParam) { DARABONBA_PTR_SET_VALUE(bizParam_, bizParam) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DownloadVerifyRecordsRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // Query condition in JSON string format, specifically including fields:
    // - **DownloadMode (String)**: Download mode,
    //   - Example value: sync
    // - **InvokeType (String)**: Product plan, corresponding to **ProductType**
    // - **SceneIdList (List<Long>)**: List of scene IDs
    // - **StatisticsType (String)**: Statistics type
    //   - day
    //   - month
    // - **StartDate (String)**: Start date of the query
    //   - Example value: 2025-09-17 00:00:00 +0800
    // - **EndDate (String)**: End date of the query
    //   - Example value: 2025-10-16 23:59:59 +0800
    // - **ProductProgramList**: List of product codes under the queried product plan
    //   - Example value: ["FINANCE_FACE_VERIFY","MFVC"]
    // - **Code (Information Verification API)**:
    //   - **ID_CARD_2_META**: ID card two-factor verification
    //   - **ID_PERIOD**: Validity period of ID card verification
    //   - **MOBILE_ONLINE_LENGTH**: Mobile online duration
    //   - **MOBILE_ONLINE_STATUS**: Mobile online status
    //   - **MOBILE_3_META_SIMPLE**: Simplified mobile three-factor verification
    //   - **MOBILE_3_META**: Detailed mobile three-factor verification
    //   - **MOBILE_2_META**: Mobile two-factor verification
    //   - **BANK_CARD_N_META**: Detailed bank card verification
    //   - **MOBILE_DETECT**: Number detection 
    //   - **VEHICLE_N_META**: Enhanced vehicle factor verification
    //   - **VEHICLE_PENTA_INFO**: Vehicle five-item information recognition
    //   - **VEHICLE_LICENSE_INFO**: Vehicle information recognition
    //   - **VEHICLE_INSURE_DATE**: Vehicle insurance date inquiry
    //   - **VEHICLE_CHECK**: Vehicle factor verification
    // - **ProductCode** (Information Verification): Same as Code
    std::shared_ptr<string> bizParam_ = nullptr;
    // Product type:
    // - **FINANCE_VERIFY**: Financial-level real-person authentication
    // - **SMART_VERIFY**: Enhanced real-person authentication (discontinued)
    // - **FACE_VERIFY**: Real-person authentication (discontinued)
    // - **INFO_CHECK_STATISTICS**: Information verification
    std::shared_ptr<string> productType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
