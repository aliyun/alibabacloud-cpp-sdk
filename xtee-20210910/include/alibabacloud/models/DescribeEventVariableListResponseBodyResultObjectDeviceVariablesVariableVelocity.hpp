// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLELISTRESPONSEBODYRESULTOBJECTDEVICEVARIABLESVARIABLEVELOCITY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTVARIABLELISTRESPONSEBODYRESULTOBJECTDEVICEVARIABLESVARIABLEVELOCITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventVariableListResponseBodyResultObjectDeviceVariablesVariableVelocity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventVariableListResponseBodyResultObjectDeviceVariablesVariableVelocity& obj) { 
      DARABONBA_PTR_TO_JSON(iv, iv_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventVariableListResponseBodyResultObjectDeviceVariablesVariableVelocity& obj) { 
      DARABONBA_PTR_FROM_JSON(iv, iv_);
    };
    DescribeEventVariableListResponseBodyResultObjectDeviceVariablesVariableVelocity() = default ;
    DescribeEventVariableListResponseBodyResultObjectDeviceVariablesVariableVelocity(const DescribeEventVariableListResponseBodyResultObjectDeviceVariablesVariableVelocity &) = default ;
    DescribeEventVariableListResponseBodyResultObjectDeviceVariablesVariableVelocity(DescribeEventVariableListResponseBodyResultObjectDeviceVariablesVariableVelocity &&) = default ;
    DescribeEventVariableListResponseBodyResultObjectDeviceVariablesVariableVelocity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventVariableListResponseBodyResultObjectDeviceVariablesVariableVelocity() = default ;
    DescribeEventVariableListResponseBodyResultObjectDeviceVariablesVariableVelocity& operator=(const DescribeEventVariableListResponseBodyResultObjectDeviceVariablesVariableVelocity &) = default ;
    DescribeEventVariableListResponseBodyResultObjectDeviceVariablesVariableVelocity& operator=(DescribeEventVariableListResponseBodyResultObjectDeviceVariablesVariableVelocity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->iv_ != nullptr; };
    // iv Field Functions 
    bool hasIv() const { return this->iv_ != nullptr;};
    void deleteIv() { this->iv_ = nullptr;};
    inline string iv() const { DARABONBA_PTR_GET_DEFAULT(iv_, "") };
    inline DescribeEventVariableListResponseBodyResultObjectDeviceVariablesVariableVelocity& setIv(string iv) { DARABONBA_PTR_SET_VALUE(iv_, iv) };


  protected:
    std::shared_ptr<string> iv_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
