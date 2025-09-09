// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCERESPONSEBODYDATAREADONLYDBINSTANCEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCERESPONSEBODYDATAREADONLYDBINSTANCEIDS_HPP_
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
  class DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds& obj) { 
      DARABONBA_PTR_TO_JSON(ReadOnlyDBInstanceId, readOnlyDBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds& obj) { 
      DARABONBA_PTR_FROM_JSON(ReadOnlyDBInstanceId, readOnlyDBInstanceId_);
    };
    DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds() = default ;
    DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds(const DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds &) = default ;
    DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds(DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds &&) = default ;
    DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds() = default ;
    DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds& operator=(const DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds &) = default ;
    DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds& operator=(DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds &&) = default ;
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
    inline DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds& setReadOnlyDBInstanceId(const vector<string> & readOnlyDBInstanceId) { DARABONBA_PTR_SET_VALUE(readOnlyDBInstanceId_, readOnlyDBInstanceId) };
    inline DescribeDrdsInstanceResponseBodyDataReadOnlyDBInstanceIds& setReadOnlyDBInstanceId(vector<string> && readOnlyDBInstanceId) { DARABONBA_PTR_SET_RVALUE(readOnlyDBInstanceId_, readOnlyDBInstanceId) };


  protected:
    std::shared_ptr<vector<string>> readOnlyDBInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
