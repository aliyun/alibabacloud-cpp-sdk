// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTESCALATIONPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTESCALATIONPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEscalationPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEscalationPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListEscalationPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    ListEscalationPoliciesRequest() = default ;
    ListEscalationPoliciesRequest(const ListEscalationPoliciesRequest &) = default ;
    ListEscalationPoliciesRequest(ListEscalationPoliciesRequest &&) = default ;
    ListEscalationPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEscalationPoliciesRequest() = default ;
    ListEscalationPoliciesRequest& operator=(const ListEscalationPoliciesRequest &) = default ;
    ListEscalationPoliciesRequest& operator=(ListEscalationPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->page_ != nullptr && this->size_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEscalationPoliciesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListEscalationPoliciesRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListEscalationPoliciesRequest& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The name of the escalation policy.
    std::shared_ptr<string> name_ = nullptr;
    // The number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> page_ = nullptr;
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
