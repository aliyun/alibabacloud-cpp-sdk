// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSESSIONGROUPRESPONSEBODYDATADATACUSTOMERNAMELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSESSIONGROUPRESPONSEBODYDATADATACUSTOMERNAMELIST_HPP_
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
  class ListSessionGroupResponseBodyDataDataCustomerNameList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSessionGroupResponseBodyDataDataCustomerNameList& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerNameList, customerNameList_);
    };
    friend void from_json(const Darabonba::Json& j, ListSessionGroupResponseBodyDataDataCustomerNameList& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerNameList, customerNameList_);
    };
    ListSessionGroupResponseBodyDataDataCustomerNameList() = default ;
    ListSessionGroupResponseBodyDataDataCustomerNameList(const ListSessionGroupResponseBodyDataDataCustomerNameList &) = default ;
    ListSessionGroupResponseBodyDataDataCustomerNameList(ListSessionGroupResponseBodyDataDataCustomerNameList &&) = default ;
    ListSessionGroupResponseBodyDataDataCustomerNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSessionGroupResponseBodyDataDataCustomerNameList() = default ;
    ListSessionGroupResponseBodyDataDataCustomerNameList& operator=(const ListSessionGroupResponseBodyDataDataCustomerNameList &) = default ;
    ListSessionGroupResponseBodyDataDataCustomerNameList& operator=(ListSessionGroupResponseBodyDataDataCustomerNameList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customerNameList_ != nullptr; };
    // customerNameList Field Functions 
    bool hasCustomerNameList() const { return this->customerNameList_ != nullptr;};
    void deleteCustomerNameList() { this->customerNameList_ = nullptr;};
    inline const vector<string> & customerNameList() const { DARABONBA_PTR_GET_CONST(customerNameList_, vector<string>) };
    inline vector<string> customerNameList() { DARABONBA_PTR_GET(customerNameList_, vector<string>) };
    inline ListSessionGroupResponseBodyDataDataCustomerNameList& setCustomerNameList(const vector<string> & customerNameList) { DARABONBA_PTR_SET_VALUE(customerNameList_, customerNameList) };
    inline ListSessionGroupResponseBodyDataDataCustomerNameList& setCustomerNameList(vector<string> && customerNameList) { DARABONBA_PTR_SET_RVALUE(customerNameList_, customerNameList) };


  protected:
    std::shared_ptr<vector<string>> customerNameList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
