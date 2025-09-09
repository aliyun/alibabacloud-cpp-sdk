// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSDBRDSNAMELISTRESPONSEBODYINSTANCENAMELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSDBRDSNAMELISTRESPONSEBODYINSTANCENAMELIST_HPP_
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
  class DescribeDrdsDbRdsNameListResponseBodyInstanceNameList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsDbRdsNameListResponseBodyInstanceNameList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsDbRdsNameListResponseBodyInstanceNameList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
    };
    DescribeDrdsDbRdsNameListResponseBodyInstanceNameList() = default ;
    DescribeDrdsDbRdsNameListResponseBodyInstanceNameList(const DescribeDrdsDbRdsNameListResponseBodyInstanceNameList &) = default ;
    DescribeDrdsDbRdsNameListResponseBodyInstanceNameList(DescribeDrdsDbRdsNameListResponseBodyInstanceNameList &&) = default ;
    DescribeDrdsDbRdsNameListResponseBodyInstanceNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsDbRdsNameListResponseBodyInstanceNameList() = default ;
    DescribeDrdsDbRdsNameListResponseBodyInstanceNameList& operator=(const DescribeDrdsDbRdsNameListResponseBodyInstanceNameList &) = default ;
    DescribeDrdsDbRdsNameListResponseBodyInstanceNameList& operator=(DescribeDrdsDbRdsNameListResponseBodyInstanceNameList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceName_ != nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline const vector<string> & instanceName() const { DARABONBA_PTR_GET_CONST(instanceName_, vector<string>) };
    inline vector<string> instanceName() { DARABONBA_PTR_GET(instanceName_, vector<string>) };
    inline DescribeDrdsDbRdsNameListResponseBodyInstanceNameList& setInstanceName(const vector<string> & instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };
    inline DescribeDrdsDbRdsNameListResponseBodyInstanceNameList& setInstanceName(vector<string> && instanceName) { DARABONBA_PTR_SET_RVALUE(instanceName_, instanceName) };


  protected:
    std::shared_ptr<vector<string>> instanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
