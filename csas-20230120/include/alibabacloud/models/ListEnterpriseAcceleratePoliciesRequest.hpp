// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTERPRISEACCELERATEPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTENTERPRISEACCELERATEPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListEnterpriseAcceleratePoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnterpriseAcceleratePoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnterpriseAcceleratePoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListEnterpriseAcceleratePoliciesRequest() = default ;
    ListEnterpriseAcceleratePoliciesRequest(const ListEnterpriseAcceleratePoliciesRequest &) = default ;
    ListEnterpriseAcceleratePoliciesRequest(ListEnterpriseAcceleratePoliciesRequest &&) = default ;
    ListEnterpriseAcceleratePoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnterpriseAcceleratePoliciesRequest() = default ;
    ListEnterpriseAcceleratePoliciesRequest& operator=(const ListEnterpriseAcceleratePoliciesRequest &) = default ;
    ListEnterpriseAcceleratePoliciesRequest& operator=(ListEnterpriseAcceleratePoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->name_ != nullptr && this->pageSize_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListEnterpriseAcceleratePoliciesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEnterpriseAcceleratePoliciesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEnterpriseAcceleratePoliciesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
