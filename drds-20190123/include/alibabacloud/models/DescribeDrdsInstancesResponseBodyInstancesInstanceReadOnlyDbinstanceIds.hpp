// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCESRESPONSEBODYINSTANCESINSTANCEREADONLYDBINSTANCEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCESRESPONSEBODYINSTANCESINSTANCEREADONLYDBINSTANCEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds& obj) { 
      DARABONBA_PTR_TO_JSON(ReadOnlyDBInstanceId, readOnlyDBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds& obj) { 
      DARABONBA_PTR_FROM_JSON(ReadOnlyDBInstanceId, readOnlyDBInstanceId_);
    };
    DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds() = default ;
    DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds(const DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds &) = default ;
    DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds(DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds &&) = default ;
    DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds() = default ;
    DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds& operator=(const DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds &) = default ;
    DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds& operator=(DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->readOnlyDBInstanceId_ != nullptr; };
    // readOnlyDBInstanceId Field Functions 
    bool hasReadOnlyDBInstanceId() const { return this->readOnlyDBInstanceId_ != nullptr;};
    void deleteReadOnlyDBInstanceId() { this->readOnlyDBInstanceId_ = nullptr;};
    inline const vector<string> & readOnlyDBInstanceId() const { DARABONBA_PTR_GET_CONST(readOnlyDBInstanceId_, vector<string>) };
    inline vector<string> readOnlyDBInstanceId() { DARABONBA_PTR_GET(readOnlyDBInstanceId_, vector<string>) };
    inline DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds& setReadOnlyDBInstanceId(const vector<string> & readOnlyDBInstanceId) { DARABONBA_PTR_SET_VALUE(readOnlyDBInstanceId_, readOnlyDBInstanceId) };
    inline DescribeDrdsInstancesResponseBodyInstancesInstanceReadOnlyDBInstanceIds& setReadOnlyDBInstanceId(vector<string> && readOnlyDBInstanceId) { DARABONBA_PTR_SET_RVALUE(readOnlyDBInstanceId_, readOnlyDBInstanceId) };


  protected:
    std::shared_ptr<vector<string>> readOnlyDBInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
