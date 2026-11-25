// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIAFOLDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIAFOLDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class ListMediaFoldersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaFoldersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductionId, productionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaFoldersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductionId, productionId_);
    };
    ListMediaFoldersRequest() = default ;
    ListMediaFoldersRequest(const ListMediaFoldersRequest &) = default ;
    ListMediaFoldersRequest(ListMediaFoldersRequest &&) = default ;
    ListMediaFoldersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaFoldersRequest() = default ;
    ListMediaFoldersRequest& operator=(const ListMediaFoldersRequest &) = default ;
    ListMediaFoldersRequest& operator=(ListMediaFoldersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->productionId_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListMediaFoldersRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMediaFoldersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productionId Field Functions 
    bool hasProductionId() const { return this->productionId_ != nullptr;};
    void deleteProductionId() { this->productionId_ = nullptr;};
    inline string getProductionId() const { DARABONBA_PTR_GET_DEFAULT(productionId_, "") };
    inline ListMediaFoldersRequest& setProductionId(string productionId) { DARABONBA_PTR_SET_VALUE(productionId_, productionId) };


  protected:
    // The page number. Pages start from 1. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Default value: 20. Maximum value: 50. If the value exceeds 50, it is truncated to 50.
    shared_ptr<int32_t> pageSize_ {};
    // The project ID. If this parameter is not specified, the default project of the current account is used. The value format is `pd_{uid}`.
    shared_ptr<string> productionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
