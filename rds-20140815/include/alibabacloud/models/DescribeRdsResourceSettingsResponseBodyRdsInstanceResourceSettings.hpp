// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSRESOURCESETTINGSRESPONSEBODYRDSINSTANCERESOURCESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSRESOURCESETTINGSRESPONSEBODYRDSINSTANCERESOURCESETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings& obj) { 
      DARABONBA_PTR_TO_JSON(RdsInstanceResourceSetting, rdsInstanceResourceSetting_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(RdsInstanceResourceSetting, rdsInstanceResourceSetting_);
    };
    DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings() = default ;
    DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings(const DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings &) = default ;
    DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings(DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings &&) = default ;
    DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings() = default ;
    DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings& operator=(const DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings &) = default ;
    DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings& operator=(DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rdsInstanceResourceSetting_ == nullptr; };
    // rdsInstanceResourceSetting Field Functions 
    bool hasRdsInstanceResourceSetting() const { return this->rdsInstanceResourceSetting_ != nullptr;};
    void deleteRdsInstanceResourceSetting() { this->rdsInstanceResourceSetting_ = nullptr;};
    inline const vector<Models::DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting> & rdsInstanceResourceSetting() const { DARABONBA_PTR_GET_CONST(rdsInstanceResourceSetting_, vector<Models::DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting>) };
    inline vector<Models::DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting> rdsInstanceResourceSetting() { DARABONBA_PTR_GET(rdsInstanceResourceSetting_, vector<Models::DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting>) };
    inline DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings& setRdsInstanceResourceSetting(const vector<Models::DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting> & rdsInstanceResourceSetting) { DARABONBA_PTR_SET_VALUE(rdsInstanceResourceSetting_, rdsInstanceResourceSetting) };
    inline DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings& setRdsInstanceResourceSetting(vector<Models::DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting> && rdsInstanceResourceSetting) { DARABONBA_PTR_SET_RVALUE(rdsInstanceResourceSetting_, rdsInstanceResourceSetting) };


  protected:
    std::shared_ptr<vector<Models::DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettingsRdsInstanceResourceSetting>> rdsInstanceResourceSetting_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
