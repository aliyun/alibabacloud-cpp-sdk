// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBLACKLISTSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBLACKLISTSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class ModifyBlackListStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBlackListStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlackListStrategy, blackListStrategy_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBlackListStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackListStrategy, blackListStrategy_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyBlackListStrategyRequest() = default ;
    ModifyBlackListStrategyRequest(const ModifyBlackListStrategyRequest &) = default ;
    ModifyBlackListStrategyRequest(ModifyBlackListStrategyRequest &&) = default ;
    ModifyBlackListStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBlackListStrategyRequest() = default ;
    ModifyBlackListStrategyRequest& operator=(const ModifyBlackListStrategyRequest &) = default ;
    ModifyBlackListStrategyRequest& operator=(ModifyBlackListStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BlackListStrategy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BlackListStrategy& obj) { 
        DARABONBA_PTR_TO_JSON(BizContent, bizContent_);
        DARABONBA_PTR_TO_JSON(BizKey, bizKey_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, BlackListStrategy& obj) { 
        DARABONBA_PTR_FROM_JSON(BizContent, bizContent_);
        DARABONBA_PTR_FROM_JSON(BizKey, bizKey_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      BlackListStrategy() = default ;
      BlackListStrategy(const BlackListStrategy &) = default ;
      BlackListStrategy(BlackListStrategy &&) = default ;
      BlackListStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BlackListStrategy() = default ;
      BlackListStrategy& operator=(const BlackListStrategy &) = default ;
      BlackListStrategy& operator=(BlackListStrategy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bizContent_ == nullptr
        && this->bizKey_ == nullptr && this->id_ == nullptr && this->productName_ == nullptr && this->status_ == nullptr; };
      // bizContent Field Functions 
      bool hasBizContent() const { return this->bizContent_ != nullptr;};
      void deleteBizContent() { this->bizContent_ = nullptr;};
      inline string getBizContent() const { DARABONBA_PTR_GET_DEFAULT(bizContent_, "") };
      inline BlackListStrategy& setBizContent(string bizContent) { DARABONBA_PTR_SET_VALUE(bizContent_, bizContent) };


      // bizKey Field Functions 
      bool hasBizKey() const { return this->bizKey_ != nullptr;};
      void deleteBizKey() { this->bizKey_ = nullptr;};
      inline string getBizKey() const { DARABONBA_PTR_GET_DEFAULT(bizKey_, "") };
      inline BlackListStrategy& setBizKey(string bizKey) { DARABONBA_PTR_SET_VALUE(bizKey_, bizKey) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline BlackListStrategy& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline BlackListStrategy& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline BlackListStrategy& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Blacklist string, with each blacklist entry separated by commas.
      shared_ptr<string> bizContent_ {};
      // List Type:
      // - **mobile**: Mobile number blacklist
      // - **ip**: IP blacklist
      // - **identifyNum**: ID number blacklist
      // - **bankCard**: Bank card blacklist
      shared_ptr<string> bizKey_ {};
      // Rule ID:
      // - **Empty**: Add a new rule
      // - **Non-empty**: Modify an existing rule
      shared_ptr<int64_t> id_ {};
      // Product Name:
      // - **id2meta**: ID card two-factor verification
      // - **mobile3Meta**: Mobile number factor verification
      // - **bankcardMeta**: Bank card factor verification
      shared_ptr<string> productName_ {};
      // Verification Status:
      // - **1**: Verification passed
      // - **2**: Verification failed
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->blackListStrategy_ == nullptr
        && this->regionId_ == nullptr; };
    // blackListStrategy Field Functions 
    bool hasBlackListStrategy() const { return this->blackListStrategy_ != nullptr;};
    void deleteBlackListStrategy() { this->blackListStrategy_ = nullptr;};
    inline const ModifyBlackListStrategyRequest::BlackListStrategy & getBlackListStrategy() const { DARABONBA_PTR_GET_CONST(blackListStrategy_, ModifyBlackListStrategyRequest::BlackListStrategy) };
    inline ModifyBlackListStrategyRequest::BlackListStrategy getBlackListStrategy() { DARABONBA_PTR_GET(blackListStrategy_, ModifyBlackListStrategyRequest::BlackListStrategy) };
    inline ModifyBlackListStrategyRequest& setBlackListStrategy(const ModifyBlackListStrategyRequest::BlackListStrategy & blackListStrategy) { DARABONBA_PTR_SET_VALUE(blackListStrategy_, blackListStrategy) };
    inline ModifyBlackListStrategyRequest& setBlackListStrategy(ModifyBlackListStrategyRequest::BlackListStrategy && blackListStrategy) { DARABONBA_PTR_SET_RVALUE(blackListStrategy_, blackListStrategy) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyBlackListStrategyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Blacklist rule.
    shared_ptr<ModifyBlackListStrategyRequest::BlackListStrategy> blackListStrategy_ {};
    // Region ID
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
