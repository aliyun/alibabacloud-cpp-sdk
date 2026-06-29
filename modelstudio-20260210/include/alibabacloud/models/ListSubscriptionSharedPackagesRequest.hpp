// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBSCRIPTIONSHAREDPACKAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBSCRIPTIONSHAREDPACKAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class ListSubscriptionSharedPackagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubscriptionSharedPackagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubscriptionSharedPackagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
    };
    ListSubscriptionSharedPackagesRequest() = default ;
    ListSubscriptionSharedPackagesRequest(const ListSubscriptionSharedPackagesRequest &) = default ;
    ListSubscriptionSharedPackagesRequest(ListSubscriptionSharedPackagesRequest &&) = default ;
    ListSubscriptionSharedPackagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubscriptionSharedPackagesRequest() = default ;
    ListSubscriptionSharedPackagesRequest& operator=(const ListSubscriptionSharedPackagesRequest &) = default ;
    ListSubscriptionSharedPackagesRequest& operator=(ListSubscriptionSharedPackagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->statusList_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListSubscriptionSharedPackagesRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSubscriptionSharedPackagesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline ListSubscriptionSharedPackagesRequest& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline ListSubscriptionSharedPackagesRequest& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


  protected:
    // The page number. Default value: 1. The value must be a positive integer.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The list of statuses used for filtering.
    shared_ptr<vector<string>> statusList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
