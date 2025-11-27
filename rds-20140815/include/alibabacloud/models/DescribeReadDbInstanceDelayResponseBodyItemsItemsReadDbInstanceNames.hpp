// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREADDBINSTANCEDELAYRESPONSEBODYITEMSITEMSREADDBINSTANCENAMES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREADDBINSTANCEDELAYRESPONSEBODYITEMSITEMSREADDBINSTANCENAMES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames& obj) { 
      DARABONBA_PTR_TO_JSON(ReadDBInstanceName, readDBInstanceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames& obj) { 
      DARABONBA_PTR_FROM_JSON(ReadDBInstanceName, readDBInstanceName_);
    };
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames() = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames(const DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames &) = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames(DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames &&) = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames() = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames& operator=(const DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames &) = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames& operator=(DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->readDBInstanceName_ == nullptr; };
    // readDBInstanceName Field Functions 
    bool hasReadDBInstanceName() const { return this->readDBInstanceName_ != nullptr;};
    void deleteReadDBInstanceName() { this->readDBInstanceName_ = nullptr;};
    inline const vector<string> & readDBInstanceName() const { DARABONBA_PTR_GET_CONST(readDBInstanceName_, vector<string>) };
    inline vector<string> readDBInstanceName() { DARABONBA_PTR_GET(readDBInstanceName_, vector<string>) };
    inline DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames& setReadDBInstanceName(const vector<string> & readDBInstanceName) { DARABONBA_PTR_SET_VALUE(readDBInstanceName_, readDBInstanceName) };
    inline DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDBInstanceNames& setReadDBInstanceName(vector<string> && readDBInstanceName) { DARABONBA_PTR_SET_RVALUE(readDBInstanceName_, readDBInstanceName) };


  protected:
    std::shared_ptr<vector<string>> readDBInstanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
