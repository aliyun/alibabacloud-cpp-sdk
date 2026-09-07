// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTENANTAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTENANTAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20210602
{
namespace Models
{
  class ListTenantAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTenantAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTenantAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    ListTenantAppRequest() = default ;
    ListTenantAppRequest(const ListTenantAppRequest &) = default ;
    ListTenantAppRequest(ListTenantAppRequest &&) = default ;
    ListTenantAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTenantAppRequest() = default ;
    ListTenantAppRequest& operator=(const ListTenantAppRequest &) = default ;
    ListTenantAppRequest& operator=(ListTenantAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyName_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->sourceType_ == nullptr; };
    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline ListTenantAppRequest& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTenantAppRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTenantAppRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListTenantAppRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The application name keyword, matched by containment. If this parameter is not specified or is set to an empty string, no name-based filtering is applied. `%` can be used as a wildcard, and `_` is matched as a literal character.
    shared_ptr<string> keyName_ {};
    // The page number, starting from 1. If this parameter is not specified or is set to a value less than or equal to 0, the value 1 is used.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 500. If this parameter is not specified, is set to a value less than or equal to 0, or is set to a value greater than 500, the value 20 is used.
    shared_ptr<int32_t> pageSize_ {};
    // The application source. Valid values:
    // - MARKET: marketplace applications.
    // - TENANT: applications uploaded by the current tenant.
    // 
    // If this parameter is not specified, both types of visible applications are queried.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20210602
#endif
