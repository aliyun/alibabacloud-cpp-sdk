// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class ListOrganizationalUnitsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationalUnitsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(parentId, parentId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationalUnitsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(parentId, parentId_);
    };
    ListOrganizationalUnitsRequest() = default ;
    ListOrganizationalUnitsRequest(const ListOrganizationalUnitsRequest &) = default ;
    ListOrganizationalUnitsRequest(ListOrganizationalUnitsRequest &&) = default ;
    ListOrganizationalUnitsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationalUnitsRequest() = default ;
    ListOrganizationalUnitsRequest& operator=(const ListOrganizationalUnitsRequest &) = default ;
    ListOrganizationalUnitsRequest& operator=(ListOrganizationalUnitsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->parentId_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListOrganizationalUnitsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOrganizationalUnitsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline ListOrganizationalUnitsRequest& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


  protected:
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 20. Valid values: 1 to 100.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the parent organizational unit.
    // 
    // This parameter is required.
    shared_ptr<string> parentId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
