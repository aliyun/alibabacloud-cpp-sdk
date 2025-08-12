// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORSLSGROUPRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORSLSGROUPRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHybridMonitorSLSGroupResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorSLSGroupResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(SLSGroupConfig, SLSGroupConfig_);
      DARABONBA_PTR_TO_JSON(SLSGroupDescription, SLSGroupDescription_);
      DARABONBA_PTR_TO_JSON(SLSGroupName, SLSGroupName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorSLSGroupResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(SLSGroupConfig, SLSGroupConfig_);
      DARABONBA_PTR_FROM_JSON(SLSGroupDescription, SLSGroupDescription_);
      DARABONBA_PTR_FROM_JSON(SLSGroupName, SLSGroupName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeHybridMonitorSLSGroupResponseBodyList() = default ;
    DescribeHybridMonitorSLSGroupResponseBodyList(const DescribeHybridMonitorSLSGroupResponseBodyList &) = default ;
    DescribeHybridMonitorSLSGroupResponseBodyList(DescribeHybridMonitorSLSGroupResponseBodyList &&) = default ;
    DescribeHybridMonitorSLSGroupResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridMonitorSLSGroupResponseBodyList() = default ;
    DescribeHybridMonitorSLSGroupResponseBodyList& operator=(const DescribeHybridMonitorSLSGroupResponseBodyList &) = default ;
    DescribeHybridMonitorSLSGroupResponseBodyList& operator=(DescribeHybridMonitorSLSGroupResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->SLSGroupConfig_ != nullptr && this->SLSGroupDescription_ != nullptr && this->SLSGroupName_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeHybridMonitorSLSGroupResponseBodyList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // SLSGroupConfig Field Functions 
    bool hasSLSGroupConfig() const { return this->SLSGroupConfig_ != nullptr;};
    void deleteSLSGroupConfig() { this->SLSGroupConfig_ = nullptr;};
    inline const vector<Models::DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig> & SLSGroupConfig() const { DARABONBA_PTR_GET_CONST(SLSGroupConfig_, vector<Models::DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig>) };
    inline vector<Models::DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig> SLSGroupConfig() { DARABONBA_PTR_GET(SLSGroupConfig_, vector<Models::DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig>) };
    inline DescribeHybridMonitorSLSGroupResponseBodyList& setSLSGroupConfig(const vector<Models::DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig> & SLSGroupConfig) { DARABONBA_PTR_SET_VALUE(SLSGroupConfig_, SLSGroupConfig) };
    inline DescribeHybridMonitorSLSGroupResponseBodyList& setSLSGroupConfig(vector<Models::DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig> && SLSGroupConfig) { DARABONBA_PTR_SET_RVALUE(SLSGroupConfig_, SLSGroupConfig) };


    // SLSGroupDescription Field Functions 
    bool hasSLSGroupDescription() const { return this->SLSGroupDescription_ != nullptr;};
    void deleteSLSGroupDescription() { this->SLSGroupDescription_ = nullptr;};
    inline string SLSGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(SLSGroupDescription_, "") };
    inline DescribeHybridMonitorSLSGroupResponseBodyList& setSLSGroupDescription(string SLSGroupDescription) { DARABONBA_PTR_SET_VALUE(SLSGroupDescription_, SLSGroupDescription) };


    // SLSGroupName Field Functions 
    bool hasSLSGroupName() const { return this->SLSGroupName_ != nullptr;};
    void deleteSLSGroupName() { this->SLSGroupName_ = nullptr;};
    inline string SLSGroupName() const { DARABONBA_PTR_GET_DEFAULT(SLSGroupName_, "") };
    inline DescribeHybridMonitorSLSGroupResponseBodyList& setSLSGroupName(string SLSGroupName) { DARABONBA_PTR_SET_VALUE(SLSGroupName_, SLSGroupName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeHybridMonitorSLSGroupResponseBodyList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the Logstore group was created.
    // 
    // Unit: milliseconds.
    std::shared_ptr<string> createTime_ = nullptr;
    // The configurations of the Logstore group.
    std::shared_ptr<vector<Models::DescribeHybridMonitorSLSGroupResponseBodyListSLSGroupConfig>> SLSGroupConfig_ = nullptr;
    // The description of the Logstore group.
    std::shared_ptr<string> SLSGroupDescription_ = nullptr;
    // The name of the Logstore group.
    std::shared_ptr<string> SLSGroupName_ = nullptr;
    // The time when the Logstore group was modified.
    // 
    // Unit: milliseconds.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
