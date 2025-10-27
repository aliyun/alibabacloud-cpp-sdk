// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeDataSourceRequest() = default ;
    DescribeDataSourceRequest(const DescribeDataSourceRequest &) = default ;
    DescribeDataSourceRequest(DescribeDataSourceRequest &&) = default ;
    DescribeDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataSourceRequest() = default ;
    DescribeDataSourceRequest& operator=(const DescribeDataSourceRequest &) = default ;
    DescribeDataSourceRequest& operator=(DescribeDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configType_ == nullptr
        && return this->lang_ == nullptr && return this->sourceIp_ == nullptr; };
    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline DescribeDataSourceRequest& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDataSourceRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeDataSourceRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The method that is used to send alert notifications. Set the value to DingTalk.
    std::shared_ptr<string> configType_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The source IP address.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
