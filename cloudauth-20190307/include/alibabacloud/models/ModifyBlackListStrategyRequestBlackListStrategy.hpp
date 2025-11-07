// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBLACKLISTSTRATEGYREQUESTBLACKLISTSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBLACKLISTSTRATEGYREQUESTBLACKLISTSTRATEGY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class ModifyBlackListStrategyRequestBlackListStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBlackListStrategyRequestBlackListStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(BizContent, bizContent_);
      DARABONBA_PTR_TO_JSON(BizKey, bizKey_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBlackListStrategyRequestBlackListStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(BizContent, bizContent_);
      DARABONBA_PTR_FROM_JSON(BizKey, bizKey_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyBlackListStrategyRequestBlackListStrategy() = default ;
    ModifyBlackListStrategyRequestBlackListStrategy(const ModifyBlackListStrategyRequestBlackListStrategy &) = default ;
    ModifyBlackListStrategyRequestBlackListStrategy(ModifyBlackListStrategyRequestBlackListStrategy &&) = default ;
    ModifyBlackListStrategyRequestBlackListStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBlackListStrategyRequestBlackListStrategy() = default ;
    ModifyBlackListStrategyRequestBlackListStrategy& operator=(const ModifyBlackListStrategyRequestBlackListStrategy &) = default ;
    ModifyBlackListStrategyRequestBlackListStrategy& operator=(ModifyBlackListStrategyRequestBlackListStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizContent_ == nullptr
        && return this->bizKey_ == nullptr && return this->id_ == nullptr && return this->productName_ == nullptr && return this->status_ == nullptr; };
    // bizContent Field Functions 
    bool hasBizContent() const { return this->bizContent_ != nullptr;};
    void deleteBizContent() { this->bizContent_ = nullptr;};
    inline string bizContent() const { DARABONBA_PTR_GET_DEFAULT(bizContent_, "") };
    inline ModifyBlackListStrategyRequestBlackListStrategy& setBizContent(string bizContent) { DARABONBA_PTR_SET_VALUE(bizContent_, bizContent) };


    // bizKey Field Functions 
    bool hasBizKey() const { return this->bizKey_ != nullptr;};
    void deleteBizKey() { this->bizKey_ = nullptr;};
    inline string bizKey() const { DARABONBA_PTR_GET_DEFAULT(bizKey_, "") };
    inline ModifyBlackListStrategyRequestBlackListStrategy& setBizKey(string bizKey) { DARABONBA_PTR_SET_VALUE(bizKey_, bizKey) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModifyBlackListStrategyRequestBlackListStrategy& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline ModifyBlackListStrategyRequestBlackListStrategy& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyBlackListStrategyRequestBlackListStrategy& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Blacklist string, with each blacklist entry separated by commas.
    std::shared_ptr<string> bizContent_ = nullptr;
    // List Type:
    // - **mobile**: Mobile number blacklist
    // - **ip**: IP blacklist
    // - **identifyNum**: ID number blacklist
    // - **bankCard**: Bank card blacklist
    std::shared_ptr<string> bizKey_ = nullptr;
    // Rule ID:
    // - **Empty**: Add a new rule
    // - **Non-empty**: Modify an existing rule
    std::shared_ptr<int64_t> id_ = nullptr;
    // Product Name:
    // - **id2meta**: ID card two-factor verification
    // - **mobile3Meta**: Mobile number factor verification
    // - **bankcardMeta**: Bank card factor verification
    std::shared_ptr<string> productName_ = nullptr;
    // Verification Status:
    // - **1**: Verification passed
    // - **2**: Verification failed
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
