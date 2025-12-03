// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOUPONLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOUPONLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bss20140714
{
namespace Models
{
  class DescribeCouponListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCouponListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDeliveryTime, endDeliveryTime_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartDeliveryTime, startDeliveryTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCouponListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDeliveryTime, endDeliveryTime_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartDeliveryTime, startDeliveryTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCouponListRequest() = default ;
    DescribeCouponListRequest(const DescribeCouponListRequest &) = default ;
    DescribeCouponListRequest(DescribeCouponListRequest &&) = default ;
    DescribeCouponListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCouponListRequest() = default ;
    DescribeCouponListRequest& operator=(const DescribeCouponListRequest &) = default ;
    DescribeCouponListRequest& operator=(DescribeCouponListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDeliveryTime_ == nullptr
        && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->startDeliveryTime_ == nullptr && return this->status_ == nullptr; };
    // endDeliveryTime Field Functions 
    bool hasEndDeliveryTime() const { return this->endDeliveryTime_ != nullptr;};
    void deleteEndDeliveryTime() { this->endDeliveryTime_ = nullptr;};
    inline string endDeliveryTime() const { DARABONBA_PTR_GET_DEFAULT(endDeliveryTime_, "") };
    inline DescribeCouponListRequest& setEndDeliveryTime(string endDeliveryTime) { DARABONBA_PTR_SET_VALUE(endDeliveryTime_, endDeliveryTime) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeCouponListRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCouponListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startDeliveryTime Field Functions 
    bool hasStartDeliveryTime() const { return this->startDeliveryTime_ != nullptr;};
    void deleteStartDeliveryTime() { this->startDeliveryTime_ = nullptr;};
    inline string startDeliveryTime() const { DARABONBA_PTR_GET_DEFAULT(startDeliveryTime_, "") };
    inline DescribeCouponListRequest& setStartDeliveryTime(string startDeliveryTime) { DARABONBA_PTR_SET_VALUE(startDeliveryTime_, startDeliveryTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCouponListRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> endDeliveryTime_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> startDeliveryTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bss20140714
#endif
