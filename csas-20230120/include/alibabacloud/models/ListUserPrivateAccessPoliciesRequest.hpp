// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERPRIVATEACCESSPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERPRIVATEACCESSPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUserPrivateAccessPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserPrivateAccessPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserPrivateAccessPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
    };
    ListUserPrivateAccessPoliciesRequest() = default ;
    ListUserPrivateAccessPoliciesRequest(const ListUserPrivateAccessPoliciesRequest &) = default ;
    ListUserPrivateAccessPoliciesRequest(ListUserPrivateAccessPoliciesRequest &&) = default ;
    ListUserPrivateAccessPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserPrivateAccessPoliciesRequest() = default ;
    ListUserPrivateAccessPoliciesRequest& operator=(const ListUserPrivateAccessPoliciesRequest &) = default ;
    ListUserPrivateAccessPoliciesRequest& operator=(ListUserPrivateAccessPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->name_ == nullptr && return this->pageSize_ == nullptr && return this->saseUserId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListUserPrivateAccessPoliciesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListUserPrivateAccessPoliciesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUserPrivateAccessPoliciesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // saseUserId Field Functions 
    bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
    void deleteSaseUserId() { this->saseUserId_ = nullptr;};
    inline string saseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
    inline ListUserPrivateAccessPoliciesRequest& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


  protected:
    // Current page number.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Intranet access policy name. Length should be between 1 to 128 characters, supporting Chinese and case-sensitive English letters, and can include numbers, periods (.), underscores (_), and hyphens (-).
    std::shared_ptr<string> name_ = nullptr;
    // Number of items per page for pagination. Range: 1~100.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // User ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> saseUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
