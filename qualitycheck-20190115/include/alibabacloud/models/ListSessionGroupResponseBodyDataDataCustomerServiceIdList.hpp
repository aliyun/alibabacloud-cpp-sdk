// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSESSIONGROUPRESPONSEBODYDATADATACUSTOMERSERVICEIDLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSESSIONGROUPRESPONSEBODYDATADATACUSTOMERSERVICEIDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListSessionGroupResponseBodyDataDataCustomerServiceIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSessionGroupResponseBodyDataDataCustomerServiceIdList& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerServiceIdList, customerServiceIdList_);
    };
    friend void from_json(const Darabonba::Json& j, ListSessionGroupResponseBodyDataDataCustomerServiceIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerServiceIdList, customerServiceIdList_);
    };
    ListSessionGroupResponseBodyDataDataCustomerServiceIdList() = default ;
    ListSessionGroupResponseBodyDataDataCustomerServiceIdList(const ListSessionGroupResponseBodyDataDataCustomerServiceIdList &) = default ;
    ListSessionGroupResponseBodyDataDataCustomerServiceIdList(ListSessionGroupResponseBodyDataDataCustomerServiceIdList &&) = default ;
    ListSessionGroupResponseBodyDataDataCustomerServiceIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSessionGroupResponseBodyDataDataCustomerServiceIdList() = default ;
    ListSessionGroupResponseBodyDataDataCustomerServiceIdList& operator=(const ListSessionGroupResponseBodyDataDataCustomerServiceIdList &) = default ;
    ListSessionGroupResponseBodyDataDataCustomerServiceIdList& operator=(ListSessionGroupResponseBodyDataDataCustomerServiceIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerServiceIdList_ == nullptr; };
    // customerServiceIdList Field Functions 
    bool hasCustomerServiceIdList() const { return this->customerServiceIdList_ != nullptr;};
    void deleteCustomerServiceIdList() { this->customerServiceIdList_ = nullptr;};
    inline const vector<string> & customerServiceIdList() const { DARABONBA_PTR_GET_CONST(customerServiceIdList_, vector<string>) };
    inline vector<string> customerServiceIdList() { DARABONBA_PTR_GET(customerServiceIdList_, vector<string>) };
    inline ListSessionGroupResponseBodyDataDataCustomerServiceIdList& setCustomerServiceIdList(const vector<string> & customerServiceIdList) { DARABONBA_PTR_SET_VALUE(customerServiceIdList_, customerServiceIdList) };
    inline ListSessionGroupResponseBodyDataDataCustomerServiceIdList& setCustomerServiceIdList(vector<string> && customerServiceIdList) { DARABONBA_PTR_SET_RVALUE(customerServiceIdList_, customerServiceIdList) };


  protected:
    std::shared_ptr<vector<string>> customerServiceIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
