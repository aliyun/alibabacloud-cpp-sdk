// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARSUBSCRIBEDSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARSUBSCRIBEDSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSoarSubscribedStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarSubscribedStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarSubscribedStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeSoarSubscribedStrategyRequest() = default ;
    DescribeSoarSubscribedStrategyRequest(const DescribeSoarSubscribedStrategyRequest &) = default ;
    DescribeSoarSubscribedStrategyRequest(DescribeSoarSubscribedStrategyRequest &&) = default ;
    DescribeSoarSubscribedStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarSubscribedStrategyRequest() = default ;
    DescribeSoarSubscribedStrategyRequest& operator=(const DescribeSoarSubscribedStrategyRequest &) = default ;
    DescribeSoarSubscribedStrategyRequest& operator=(DescribeSoarSubscribedStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSoarSubscribedStrategyRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSoarSubscribedStrategyRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The page number. Pages start from page 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
