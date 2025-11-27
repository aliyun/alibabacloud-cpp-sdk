// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREADDBINSTANCEDELAYRESPONSEBODYITEMSITEMSREADDELAYTIMES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREADDBINSTANCEDELAYRESPONSEBODYITEMSITEMSREADDELAYTIMES_HPP_
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
  class DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes& obj) { 
      DARABONBA_PTR_TO_JSON(ReadDelayTime, readDelayTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes& obj) { 
      DARABONBA_PTR_FROM_JSON(ReadDelayTime, readDelayTime_);
    };
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes() = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes(const DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes &) = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes(DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes &&) = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes() = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes& operator=(const DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes &) = default ;
    DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes& operator=(DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->readDelayTime_ == nullptr; };
    // readDelayTime Field Functions 
    bool hasReadDelayTime() const { return this->readDelayTime_ != nullptr;};
    void deleteReadDelayTime() { this->readDelayTime_ = nullptr;};
    inline const vector<string> & readDelayTime() const { DARABONBA_PTR_GET_CONST(readDelayTime_, vector<string>) };
    inline vector<string> readDelayTime() { DARABONBA_PTR_GET(readDelayTime_, vector<string>) };
    inline DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes& setReadDelayTime(const vector<string> & readDelayTime) { DARABONBA_PTR_SET_VALUE(readDelayTime_, readDelayTime) };
    inline DescribeReadDBInstanceDelayResponseBodyItemsItemsReadDelayTimes& setReadDelayTime(vector<string> && readDelayTime) { DARABONBA_PTR_SET_RVALUE(readDelayTime_, readDelayTime) };


  protected:
    std::shared_ptr<vector<string>> readDelayTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
