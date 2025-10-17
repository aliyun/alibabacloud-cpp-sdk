// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESTATUSRESPONSEBODYSUBSCRIPTIONOBJECTSYNCHRONOUSOBJECTTABLELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESTATUSRESPONSEBODYSUBSCRIPTIONOBJECTSYNCHRONOUSOBJECTTABLELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList& obj) { 
      DARABONBA_PTR_TO_JSON(Table, table_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList& obj) { 
      DARABONBA_PTR_FROM_JSON(Table, table_);
    };
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList() = default ;
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList(const DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList &) = default ;
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList(DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList &&) = default ;
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList() = default ;
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList& operator=(const DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList &) = default ;
    DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList& operator=(DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->table_ == nullptr; };
    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline const vector<string> & table() const { DARABONBA_PTR_GET_CONST(table_, vector<string>) };
    inline vector<string> table() { DARABONBA_PTR_GET(table_, vector<string>) };
    inline DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList& setTable(const vector<string> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
    inline DescribeSubscriptionInstanceStatusResponseBodySubscriptionObjectSynchronousObjectTableList& setTable(vector<string> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


  protected:
    std::shared_ptr<vector<string>> table_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
