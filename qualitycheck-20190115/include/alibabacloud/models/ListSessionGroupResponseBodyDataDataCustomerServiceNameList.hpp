// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSESSIONGROUPRESPONSEBODYDATADATACUSTOMERSERVICENAMELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSESSIONGROUPRESPONSEBODYDATADATACUSTOMERSERVICENAMELIST_HPP_
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
  class ListSessionGroupResponseBodyDataDataCustomerServiceNameList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSessionGroupResponseBodyDataDataCustomerServiceNameList& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerServiceNameList, customerServiceNameList_);
    };
    friend void from_json(const Darabonba::Json& j, ListSessionGroupResponseBodyDataDataCustomerServiceNameList& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerServiceNameList, customerServiceNameList_);
    };
    ListSessionGroupResponseBodyDataDataCustomerServiceNameList() = default ;
    ListSessionGroupResponseBodyDataDataCustomerServiceNameList(const ListSessionGroupResponseBodyDataDataCustomerServiceNameList &) = default ;
    ListSessionGroupResponseBodyDataDataCustomerServiceNameList(ListSessionGroupResponseBodyDataDataCustomerServiceNameList &&) = default ;
    ListSessionGroupResponseBodyDataDataCustomerServiceNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSessionGroupResponseBodyDataDataCustomerServiceNameList() = default ;
    ListSessionGroupResponseBodyDataDataCustomerServiceNameList& operator=(const ListSessionGroupResponseBodyDataDataCustomerServiceNameList &) = default ;
    ListSessionGroupResponseBodyDataDataCustomerServiceNameList& operator=(ListSessionGroupResponseBodyDataDataCustomerServiceNameList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customerServiceNameList_ != nullptr; };
    // customerServiceNameList Field Functions 
    bool hasCustomerServiceNameList() const { return this->customerServiceNameList_ != nullptr;};
    void deleteCustomerServiceNameList() { this->customerServiceNameList_ = nullptr;};
    inline const vector<string> & customerServiceNameList() const { DARABONBA_PTR_GET_CONST(customerServiceNameList_, vector<string>) };
    inline vector<string> customerServiceNameList() { DARABONBA_PTR_GET(customerServiceNameList_, vector<string>) };
    inline ListSessionGroupResponseBodyDataDataCustomerServiceNameList& setCustomerServiceNameList(const vector<string> & customerServiceNameList) { DARABONBA_PTR_SET_VALUE(customerServiceNameList_, customerServiceNameList) };
    inline ListSessionGroupResponseBodyDataDataCustomerServiceNameList& setCustomerServiceNameList(vector<string> && customerServiceNameList) { DARABONBA_PTR_SET_RVALUE(customerServiceNameList_, customerServiceNameList) };


  protected:
    std::shared_ptr<vector<string>> customerServiceNameList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
