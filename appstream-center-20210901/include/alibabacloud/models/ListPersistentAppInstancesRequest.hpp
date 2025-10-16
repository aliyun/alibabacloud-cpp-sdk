// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERSISTENTAPPINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPERSISTENTAPPINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListPersistentAppInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPersistentAppInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstancePersistentIds, appInstancePersistentIds_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPersistentAppInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstancePersistentIds, appInstancePersistentIds_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    ListPersistentAppInstancesRequest() = default ;
    ListPersistentAppInstancesRequest(const ListPersistentAppInstancesRequest &) = default ;
    ListPersistentAppInstancesRequest(ListPersistentAppInstancesRequest &&) = default ;
    ListPersistentAppInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPersistentAppInstancesRequest() = default ;
    ListPersistentAppInstancesRequest& operator=(const ListPersistentAppInstancesRequest &) = default ;
    ListPersistentAppInstancesRequest& operator=(ListPersistentAppInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && return this->appInstancePersistentIds_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->productType_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ListPersistentAppInstancesRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstancePersistentIds Field Functions 
    bool hasAppInstancePersistentIds() const { return this->appInstancePersistentIds_ != nullptr;};
    void deleteAppInstancePersistentIds() { this->appInstancePersistentIds_ = nullptr;};
    inline const vector<string> & appInstancePersistentIds() const { DARABONBA_PTR_GET_CONST(appInstancePersistentIds_, vector<string>) };
    inline vector<string> appInstancePersistentIds() { DARABONBA_PTR_GET(appInstancePersistentIds_, vector<string>) };
    inline ListPersistentAppInstancesRequest& setAppInstancePersistentIds(const vector<string> & appInstancePersistentIds) { DARABONBA_PTR_SET_VALUE(appInstancePersistentIds_, appInstancePersistentIds) };
    inline ListPersistentAppInstancesRequest& setAppInstancePersistentIds(vector<string> && appInstancePersistentIds) { DARABONBA_PTR_SET_RVALUE(appInstancePersistentIds_, appInstancePersistentIds) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPersistentAppInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPersistentAppInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListPersistentAppInstancesRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    std::shared_ptr<vector<string>> appInstancePersistentIds_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> productType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
