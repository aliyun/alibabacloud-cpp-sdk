// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERCONFIGSRESPONSEBODYCONFIGSWAFCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERCONFIGSRESPONSEBODYCONFIGSWAFCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeUserConfigsResponseBodyConfigsWafConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserConfigsResponseBodyConfigsWafConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserConfigsResponseBodyConfigsWafConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
    };
    DescribeUserConfigsResponseBodyConfigsWafConfig() = default ;
    DescribeUserConfigsResponseBodyConfigsWafConfig(const DescribeUserConfigsResponseBodyConfigsWafConfig &) = default ;
    DescribeUserConfigsResponseBodyConfigsWafConfig(DescribeUserConfigsResponseBodyConfigsWafConfig &&) = default ;
    DescribeUserConfigsResponseBodyConfigsWafConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserConfigsResponseBodyConfigsWafConfig() = default ;
    DescribeUserConfigsResponseBodyConfigsWafConfig& operator=(const DescribeUserConfigsResponseBodyConfigsWafConfig &) = default ;
    DescribeUserConfigsResponseBodyConfigsWafConfig& operator=(DescribeUserConfigsResponseBodyConfigsWafConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline DescribeUserConfigsResponseBodyConfigsWafConfig& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    // Indicates whether WAF is enabled.
    std::shared_ptr<string> enable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
