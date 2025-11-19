// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYIPGROUPRESPONSEBODYDATASECURITYIPGROUPSENGINEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYIPGROUPRESPONSEBODYDATASECURITYIPGROUPSENGINEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(EngineName, engineName_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(InstanceNum, instanceNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(InstanceNum, instanceNum_);
    };
    DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList() = default ;
    DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList(const DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList &) = default ;
    DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList(DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList &&) = default ;
    DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList() = default ;
    DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList& operator=(const DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList &) = default ;
    DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList& operator=(DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->engineName_ == nullptr
        && return this->instanceIds_ == nullptr && return this->instanceNum_ == nullptr; };
    // engineName Field Functions 
    bool hasEngineName() const { return this->engineName_ != nullptr;};
    void deleteEngineName() { this->engineName_ = nullptr;};
    inline string engineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
    inline DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // instanceNum Field Functions 
    bool hasInstanceNum() const { return this->instanceNum_ != nullptr;};
    void deleteInstanceNum() { this->instanceNum_ = nullptr;};
    inline int32_t instanceNum() const { DARABONBA_PTR_GET_DEFAULT(instanceNum_, 0) };
    inline DescribeSecurityIPGroupResponseBodyDataSecurityIpGroupsEngineInfoList& setInstanceNum(int32_t instanceNum) { DARABONBA_PTR_SET_VALUE(instanceNum_, instanceNum) };


  protected:
    std::shared_ptr<string> engineName_ = nullptr;
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    std::shared_ptr<int32_t> instanceNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
