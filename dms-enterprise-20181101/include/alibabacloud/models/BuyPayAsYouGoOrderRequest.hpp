// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUYPAYASYOUGOORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BUYPAYASYOUGOORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class BuyPayAsYouGoOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuyPayAsYouGoOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityType, commodityType_);
      DARABONBA_PTR_TO_JSON(InsNum, insNum_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(VersionType, versionType_);
    };
    friend void from_json(const Darabonba::Json& j, BuyPayAsYouGoOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityType, commodityType_);
      DARABONBA_PTR_FROM_JSON(InsNum, insNum_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(VersionType, versionType_);
    };
    BuyPayAsYouGoOrderRequest() = default ;
    BuyPayAsYouGoOrderRequest(const BuyPayAsYouGoOrderRequest &) = default ;
    BuyPayAsYouGoOrderRequest(BuyPayAsYouGoOrderRequest &&) = default ;
    BuyPayAsYouGoOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuyPayAsYouGoOrderRequest() = default ;
    BuyPayAsYouGoOrderRequest& operator=(const BuyPayAsYouGoOrderRequest &) = default ;
    BuyPayAsYouGoOrderRequest& operator=(BuyPayAsYouGoOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodityType_ == nullptr
        && this->insNum_ == nullptr && this->tid_ == nullptr && this->versionType_ == nullptr; };
    // commodityType Field Functions 
    bool hasCommodityType() const { return this->commodityType_ != nullptr;};
    void deleteCommodityType() { this->commodityType_ = nullptr;};
    inline string getCommodityType() const { DARABONBA_PTR_GET_DEFAULT(commodityType_, "") };
    inline BuyPayAsYouGoOrderRequest& setCommodityType(string commodityType) { DARABONBA_PTR_SET_VALUE(commodityType_, commodityType) };


    // insNum Field Functions 
    bool hasInsNum() const { return this->insNum_ != nullptr;};
    void deleteInsNum() { this->insNum_ = nullptr;};
    inline int32_t getInsNum() const { DARABONBA_PTR_GET_DEFAULT(insNum_, 0) };
    inline BuyPayAsYouGoOrderRequest& setInsNum(int32_t insNum) { DARABONBA_PTR_SET_VALUE(insNum_, insNum) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline BuyPayAsYouGoOrderRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // versionType Field Functions 
    bool hasVersionType() const { return this->versionType_ != nullptr;};
    void deleteVersionType() { this->versionType_ = nullptr;};
    inline string getVersionType() const { DARABONBA_PTR_GET_DEFAULT(versionType_, "") };
    inline BuyPayAsYouGoOrderRequest& setVersionType(string versionType) { DARABONBA_PTR_SET_VALUE(versionType_, versionType) };


  protected:
    // The type of the resource that you want to purchase.
    // 
    // *   **VersionType**: DMS that supports control modes
    // *   **SensitiveDataProtection**: DMS that supports sensitive data protection
    // 
    // This parameter is required.
    shared_ptr<string> commodityType_ {};
    // The number of database instances that you want to use DMS to manage.
    // 
    // > A quota can be used for only one database instance.
    // 
    // This parameter is required.
    shared_ptr<int32_t> insNum_ {};
    // The ID of the tenant.
    // 
    // > To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    shared_ptr<int64_t> tid_ {};
    // The control mode of DMS. Valid values:
    // 
    // *   **stand**: Stable Change
    // *   **safety**: Security Collaboration
    shared_ptr<string> versionType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
