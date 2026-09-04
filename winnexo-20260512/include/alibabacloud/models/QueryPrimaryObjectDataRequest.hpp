// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPRIMARYOBJECTDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPRIMARYOBJECTDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class QueryPrimaryObjectDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPrimaryObjectDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(onlyFavorites, onlyFavorites_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPrimaryObjectDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(onlyFavorites, onlyFavorites_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    QueryPrimaryObjectDataRequest() = default ;
    QueryPrimaryObjectDataRequest(const QueryPrimaryObjectDataRequest &) = default ;
    QueryPrimaryObjectDataRequest(QueryPrimaryObjectDataRequest &&) = default ;
    QueryPrimaryObjectDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPrimaryObjectDataRequest() = default ;
    QueryPrimaryObjectDataRequest& operator=(const QueryPrimaryObjectDataRequest &) = default ;
    QueryPrimaryObjectDataRequest& operator=(QueryPrimaryObjectDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && this->onlyFavorites_ == nullptr && this->operatingObjectName_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->tenantId_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline QueryPrimaryObjectDataRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // onlyFavorites Field Functions 
    bool hasOnlyFavorites() const { return this->onlyFavorites_ != nullptr;};
    void deleteOnlyFavorites() { this->onlyFavorites_ = nullptr;};
    inline bool getOnlyFavorites() const { DARABONBA_PTR_GET_DEFAULT(onlyFavorites_, false) };
    inline QueryPrimaryObjectDataRequest& setOnlyFavorites(bool onlyFavorites) { DARABONBA_PTR_SET_VALUE(onlyFavorites_, onlyFavorites) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline QueryPrimaryObjectDataRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline QueryPrimaryObjectDataRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryPrimaryObjectDataRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline QueryPrimaryObjectDataRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The keyword for searching. The keyword is matched against the name field by default. If the schema defines a description field, the keyword is also matched against the description field.
    shared_ptr<string> keyword_ {};
    // Specifies whether to return only favorited primary objects. If this parameter is set to false or not specified, all objects are returned, including the isFavorited flag.
    shared_ptr<bool> onlyFavorites_ {};
    // The operating object name, such as customer_1.
    // 
    // This parameter is required.
    shared_ptr<string> operatingObjectName_ {};
    // The page number. Pages start from 1.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page. Valid values: 1 to 100.
    shared_ptr<int64_t> pageSize_ {};
    // The tenant ID. This is a common parameter. You can explicitly pass it in winnexo-cli by using --tenant-id.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
