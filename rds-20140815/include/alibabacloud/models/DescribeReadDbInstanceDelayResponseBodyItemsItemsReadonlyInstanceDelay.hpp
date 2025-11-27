// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREADDBINSTANCEDELAYRESPONSEBODYITEMSITEMSREADONLYINSTANCEDELAY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREADDBINSTANCEDELAYRESPONSEBODYITEMSITEMSREADONLYINSTANCEDELAY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay& obj) { 
      DARABONBA_PTR_TO_JSON(ReadonlyInstanceDelay, readonlyInstanceDelay_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay& obj) { 
      DARABONBA_PTR_FROM_JSON(ReadonlyInstanceDelay, readonlyInstanceDelay_);
    };
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay() = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay(const DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay &) = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay(DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay &&) = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay() = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay& operator=(const DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay &) = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay& operator=(DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->readonlyInstanceDelay_ == nullptr; };
    // readonlyInstanceDelay Field Functions 
    bool hasReadonlyInstanceDelay() const { return this->readonlyInstanceDelay_ != nullptr;};
    void deleteReadonlyInstanceDelay() { this->readonlyInstanceDelay_ = nullptr;};
    inline const vector<Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay> & readonlyInstanceDelay() const { DARABONBA_PTR_GET_CONST(readonlyInstanceDelay_, vector<Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay>) };
    inline vector<Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay> readonlyInstanceDelay() { DARABONBA_PTR_GET(readonlyInstanceDelay_, vector<Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay>) };
    inline DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay& setReadonlyInstanceDelay(const vector<Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay> & readonlyInstanceDelay) { DARABONBA_PTR_SET_VALUE(readonlyInstanceDelay_, readonlyInstanceDelay) };
    inline DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelay& setReadonlyInstanceDelay(vector<Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay> && readonlyInstanceDelay) { DARABONBA_PTR_SET_RVALUE(readonlyInstanceDelay_, readonlyInstanceDelay) };


  protected:
    std::shared_ptr<vector<Models::DescribeReadDBInstanceDelayResponseBodyItemsItemsReadonlyInstanceDelayReadonlyInstanceDelay>> readonlyInstanceDelay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
