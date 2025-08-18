// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERDELIVERYTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERDELIVERYTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListUserDeliveryTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserDeliveryTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserDeliveryTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListUserDeliveryTasksRequest() = default ;
    ListUserDeliveryTasksRequest(const ListUserDeliveryTasksRequest &) = default ;
    ListUserDeliveryTasksRequest(ListUserDeliveryTasksRequest &&) = default ;
    ListUserDeliveryTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserDeliveryTasksRequest() = default ;
    ListUserDeliveryTasksRequest& operator=(const ListUserDeliveryTasksRequest &) = default ;
    ListUserDeliveryTasksRequest& operator=(ListUserDeliveryTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessType_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline ListUserDeliveryTasksRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListUserDeliveryTasksRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListUserDeliveryTasksRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The log category. Valid values:
    // 
    // 1.  dcdn_log_access_l1 (default): access logs.
    // 2.  dcdn_log_er: Edge Routine logs.
    // 3.  dcdn_log_waf: firewall logs.
    // 4.  dcdn_log_ipa: TCP/UDP proxy logs.
    std::shared_ptr<string> businessType_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 20.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
