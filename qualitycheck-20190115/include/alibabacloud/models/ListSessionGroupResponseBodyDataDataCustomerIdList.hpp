// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSESSIONGROUPRESPONSEBODYDATADATACUSTOMERIDLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSESSIONGROUPRESPONSEBODYDATADATACUSTOMERIDLIST_HPP_
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
  class ListSessionGroupResponseBodyDataDataCustomerIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSessionGroupResponseBodyDataDataCustomerIdList& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerIdList, customerIdList_);
    };
    friend void from_json(const Darabonba::Json& j, ListSessionGroupResponseBodyDataDataCustomerIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerIdList, customerIdList_);
    };
    ListSessionGroupResponseBodyDataDataCustomerIdList() = default ;
    ListSessionGroupResponseBodyDataDataCustomerIdList(const ListSessionGroupResponseBodyDataDataCustomerIdList &) = default ;
    ListSessionGroupResponseBodyDataDataCustomerIdList(ListSessionGroupResponseBodyDataDataCustomerIdList &&) = default ;
    ListSessionGroupResponseBodyDataDataCustomerIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSessionGroupResponseBodyDataDataCustomerIdList() = default ;
    ListSessionGroupResponseBodyDataDataCustomerIdList& operator=(const ListSessionGroupResponseBodyDataDataCustomerIdList &) = default ;
    ListSessionGroupResponseBodyDataDataCustomerIdList& operator=(ListSessionGroupResponseBodyDataDataCustomerIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customerIdList_ != nullptr; };
    // customerIdList Field Functions 
    bool hasCustomerIdList() const { return this->customerIdList_ != nullptr;};
    void deleteCustomerIdList() { this->customerIdList_ = nullptr;};
    inline const vector<string> & customerIdList() const { DARABONBA_PTR_GET_CONST(customerIdList_, vector<string>) };
    inline vector<string> customerIdList() { DARABONBA_PTR_GET(customerIdList_, vector<string>) };
    inline ListSessionGroupResponseBodyDataDataCustomerIdList& setCustomerIdList(const vector<string> & customerIdList) { DARABONBA_PTR_SET_VALUE(customerIdList_, customerIdList) };
    inline ListSessionGroupResponseBodyDataDataCustomerIdList& setCustomerIdList(vector<string> && customerIdList) { DARABONBA_PTR_SET_RVALUE(customerIdList_, customerIdList) };


  protected:
    std::shared_ptr<vector<string>> customerIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
