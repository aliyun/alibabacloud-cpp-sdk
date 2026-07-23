// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMANAGEDDATAKEYVERSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMANAGEDDATAKEYVERSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListManagedDataKeyVersionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListManagedDataKeyVersionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataKeyName, dataKeyName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListManagedDataKeyVersionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataKeyName, dataKeyName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListManagedDataKeyVersionsRequest() = default ;
    ListManagedDataKeyVersionsRequest(const ListManagedDataKeyVersionsRequest &) = default ;
    ListManagedDataKeyVersionsRequest(ListManagedDataKeyVersionsRequest &&) = default ;
    ListManagedDataKeyVersionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListManagedDataKeyVersionsRequest() = default ;
    ListManagedDataKeyVersionsRequest& operator=(const ListManagedDataKeyVersionsRequest &) = default ;
    ListManagedDataKeyVersionsRequest& operator=(ListManagedDataKeyVersionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataKeyName_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // dataKeyName Field Functions 
    bool hasDataKeyName() const { return this->dataKeyName_ != nullptr;};
    void deleteDataKeyName() { this->dataKeyName_ = nullptr;};
    inline string getDataKeyName() const { DARABONBA_PTR_GET_DEFAULT(dataKeyName_, "") };
    inline ListManagedDataKeyVersionsRequest& setDataKeyName(string dataKeyName) { DARABONBA_PTR_SET_VALUE(dataKeyName_, dataKeyName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListManagedDataKeyVersionsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListManagedDataKeyVersionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The name of the managed data key (DK) to query. This parameter is required.
    shared_ptr<string> dataKeyName_ {};
    // The page number. The value must be an integer greater than 0. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
