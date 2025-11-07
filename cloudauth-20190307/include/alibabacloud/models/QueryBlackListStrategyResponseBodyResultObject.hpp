// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBLACKLISTSTRATEGYRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_QUERYBLACKLISTSTRATEGYRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QueryBlackListStrategyResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBlackListStrategyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(BizContent, bizContent_);
      DARABONBA_PTR_TO_JSON(BizKey, bizKey_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBlackListStrategyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(BizContent, bizContent_);
      DARABONBA_PTR_FROM_JSON(BizKey, bizKey_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QueryBlackListStrategyResponseBodyResultObject() = default ;
    QueryBlackListStrategyResponseBodyResultObject(const QueryBlackListStrategyResponseBodyResultObject &) = default ;
    QueryBlackListStrategyResponseBodyResultObject(QueryBlackListStrategyResponseBodyResultObject &&) = default ;
    QueryBlackListStrategyResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBlackListStrategyResponseBodyResultObject() = default ;
    QueryBlackListStrategyResponseBodyResultObject& operator=(const QueryBlackListStrategyResponseBodyResultObject &) = default ;
    QueryBlackListStrategyResponseBodyResultObject& operator=(QueryBlackListStrategyResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizContent_ == nullptr
        && return this->bizKey_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->productName_ == nullptr && return this->status_ == nullptr
        && return this->userId_ == nullptr; };
    // bizContent Field Functions 
    bool hasBizContent() const { return this->bizContent_ != nullptr;};
    void deleteBizContent() { this->bizContent_ = nullptr;};
    inline string bizContent() const { DARABONBA_PTR_GET_DEFAULT(bizContent_, "") };
    inline QueryBlackListStrategyResponseBodyResultObject& setBizContent(string bizContent) { DARABONBA_PTR_SET_VALUE(bizContent_, bizContent) };


    // bizKey Field Functions 
    bool hasBizKey() const { return this->bizKey_ != nullptr;};
    void deleteBizKey() { this->bizKey_ = nullptr;};
    inline string bizKey() const { DARABONBA_PTR_GET_DEFAULT(bizKey_, "") };
    inline QueryBlackListStrategyResponseBodyResultObject& setBizKey(string bizKey) { DARABONBA_PTR_SET_VALUE(bizKey_, bizKey) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline QueryBlackListStrategyResponseBodyResultObject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryBlackListStrategyResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline QueryBlackListStrategyResponseBodyResultObject& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryBlackListStrategyResponseBodyResultObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline QueryBlackListStrategyResponseBodyResultObject& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Blacklist string, separated by **commas**.
    std::shared_ptr<string> bizContent_ = nullptr;
    // List type:
    // - mobile: Phone number blacklist
    // - ip: IP blacklist
    // - identifyNum: ID number blacklist
    // - bankCard: Bank card blacklist
    std::shared_ptr<string> bizKey_ = nullptr;
    // Modification time.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Rule ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Product name:
    // - id2meta: ID number two-factor verification
    // - mobile3Meta: Phone number factor verification
    // - bankcardMeta: Bank card factor verification
    std::shared_ptr<string> productName_ = nullptr;
    // Status:
    // - **disabled**: Disabled
    // - **normal**: Enabled
    std::shared_ptr<string> status_ = nullptr;
    // User ID.
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
