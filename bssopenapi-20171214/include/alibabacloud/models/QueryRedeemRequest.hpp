// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREDEEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYREDEEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryRedeemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRedeemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveOrNot, effectiveOrNot_);
      DARABONBA_PTR_TO_JSON(ExpiryTimeEnd, expiryTimeEnd_);
      DARABONBA_PTR_TO_JSON(ExpiryTimeStart, expiryTimeStart_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRedeemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveOrNot, effectiveOrNot_);
      DARABONBA_PTR_FROM_JSON(ExpiryTimeEnd, expiryTimeEnd_);
      DARABONBA_PTR_FROM_JSON(ExpiryTimeStart, expiryTimeStart_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    QueryRedeemRequest() = default ;
    QueryRedeemRequest(const QueryRedeemRequest &) = default ;
    QueryRedeemRequest(QueryRedeemRequest &&) = default ;
    QueryRedeemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRedeemRequest() = default ;
    QueryRedeemRequest& operator=(const QueryRedeemRequest &) = default ;
    QueryRedeemRequest& operator=(QueryRedeemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->effectiveOrNot_ != nullptr
        && this->expiryTimeEnd_ != nullptr && this->expiryTimeStart_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr; };
    // effectiveOrNot Field Functions 
    bool hasEffectiveOrNot() const { return this->effectiveOrNot_ != nullptr;};
    void deleteEffectiveOrNot() { this->effectiveOrNot_ = nullptr;};
    inline bool effectiveOrNot() const { DARABONBA_PTR_GET_DEFAULT(effectiveOrNot_, false) };
    inline QueryRedeemRequest& setEffectiveOrNot(bool effectiveOrNot) { DARABONBA_PTR_SET_VALUE(effectiveOrNot_, effectiveOrNot) };


    // expiryTimeEnd Field Functions 
    bool hasExpiryTimeEnd() const { return this->expiryTimeEnd_ != nullptr;};
    void deleteExpiryTimeEnd() { this->expiryTimeEnd_ = nullptr;};
    inline string expiryTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(expiryTimeEnd_, "") };
    inline QueryRedeemRequest& setExpiryTimeEnd(string expiryTimeEnd) { DARABONBA_PTR_SET_VALUE(expiryTimeEnd_, expiryTimeEnd) };


    // expiryTimeStart Field Functions 
    bool hasExpiryTimeStart() const { return this->expiryTimeStart_ != nullptr;};
    void deleteExpiryTimeStart() { this->expiryTimeStart_ = nullptr;};
    inline string expiryTimeStart() const { DARABONBA_PTR_GET_DEFAULT(expiryTimeStart_, "") };
    inline QueryRedeemRequest& setExpiryTimeStart(string expiryTimeStart) { DARABONBA_PTR_SET_VALUE(expiryTimeStart_, expiryTimeStart) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryRedeemRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryRedeemRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // Specifies whether the redemption coupon takes effect. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> effectiveOrNot_ = nullptr;
    // The end time when the redemption coupon expires. The value must be in the yyyy-MM-ddTHH:mm:ssZ format.
    std::shared_ptr<string> expiryTimeEnd_ = nullptr;
    // The start time when the redemption coupon expires. The value must be in the yyyy-MM-ddTHH:mm:ssZ format.
    std::shared_ptr<string> expiryTimeStart_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
