// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSRESOURCESETTINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSRESOURCESETTINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRdsResourceSettingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsResourceSettingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RdsInstanceResourceSettings, rdsInstanceResourceSettings_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsResourceSettingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RdsInstanceResourceSettings, rdsInstanceResourceSettings_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRdsResourceSettingsResponseBody() = default ;
    DescribeRdsResourceSettingsResponseBody(const DescribeRdsResourceSettingsResponseBody &) = default ;
    DescribeRdsResourceSettingsResponseBody(DescribeRdsResourceSettingsResponseBody &&) = default ;
    DescribeRdsResourceSettingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsResourceSettingsResponseBody() = default ;
    DescribeRdsResourceSettingsResponseBody& operator=(const DescribeRdsResourceSettingsResponseBody &) = default ;
    DescribeRdsResourceSettingsResponseBody& operator=(DescribeRdsResourceSettingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rdsInstanceResourceSettings_ == nullptr
        && return this->requestId_ == nullptr; };
    // rdsInstanceResourceSettings Field Functions 
    bool hasRdsInstanceResourceSettings() const { return this->rdsInstanceResourceSettings_ != nullptr;};
    void deleteRdsInstanceResourceSettings() { this->rdsInstanceResourceSettings_ = nullptr;};
    inline const DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings & rdsInstanceResourceSettings() const { DARABONBA_PTR_GET_CONST(rdsInstanceResourceSettings_, DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings) };
    inline DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings rdsInstanceResourceSettings() { DARABONBA_PTR_GET(rdsInstanceResourceSettings_, DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings) };
    inline DescribeRdsResourceSettingsResponseBody& setRdsInstanceResourceSettings(const DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings & rdsInstanceResourceSettings) { DARABONBA_PTR_SET_VALUE(rdsInstanceResourceSettings_, rdsInstanceResourceSettings) };
    inline DescribeRdsResourceSettingsResponseBody& setRdsInstanceResourceSettings(DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings && rdsInstanceResourceSettings) { DARABONBA_PTR_SET_RVALUE(rdsInstanceResourceSettings_, rdsInstanceResourceSettings) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRdsResourceSettingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about notification settings for an instance.
    std::shared_ptr<DescribeRdsResourceSettingsResponseBodyRdsInstanceResourceSettings> rdsInstanceResourceSettings_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
