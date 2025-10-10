// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODYLISTENERSLOGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODYLISTENERSLOGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListListenersResponseBodyListenersLogConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListenersResponseBodyListenersLogConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AccessLogRecordCustomizedHeadersEnabled, accessLogRecordCustomizedHeadersEnabled_);
      DARABONBA_PTR_TO_JSON(AccessLogTracingConfig, accessLogTracingConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ListListenersResponseBodyListenersLogConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessLogRecordCustomizedHeadersEnabled, accessLogRecordCustomizedHeadersEnabled_);
      DARABONBA_PTR_FROM_JSON(AccessLogTracingConfig, accessLogTracingConfig_);
    };
    ListListenersResponseBodyListenersLogConfig() = default ;
    ListListenersResponseBodyListenersLogConfig(const ListListenersResponseBodyListenersLogConfig &) = default ;
    ListListenersResponseBodyListenersLogConfig(ListListenersResponseBodyListenersLogConfig &&) = default ;
    ListListenersResponseBodyListenersLogConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListenersResponseBodyListenersLogConfig() = default ;
    ListListenersResponseBodyListenersLogConfig& operator=(const ListListenersResponseBodyListenersLogConfig &) = default ;
    ListListenersResponseBodyListenersLogConfig& operator=(ListListenersResponseBodyListenersLogConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessLogRecordCustomizedHeadersEnabled_ != nullptr
        && this->accessLogTracingConfig_ != nullptr; };
    // accessLogRecordCustomizedHeadersEnabled Field Functions 
    bool hasAccessLogRecordCustomizedHeadersEnabled() const { return this->accessLogRecordCustomizedHeadersEnabled_ != nullptr;};
    void deleteAccessLogRecordCustomizedHeadersEnabled() { this->accessLogRecordCustomizedHeadersEnabled_ = nullptr;};
    inline bool accessLogRecordCustomizedHeadersEnabled() const { DARABONBA_PTR_GET_DEFAULT(accessLogRecordCustomizedHeadersEnabled_, false) };
    inline ListListenersResponseBodyListenersLogConfig& setAccessLogRecordCustomizedHeadersEnabled(bool accessLogRecordCustomizedHeadersEnabled) { DARABONBA_PTR_SET_VALUE(accessLogRecordCustomizedHeadersEnabled_, accessLogRecordCustomizedHeadersEnabled) };


    // accessLogTracingConfig Field Functions 
    bool hasAccessLogTracingConfig() const { return this->accessLogTracingConfig_ != nullptr;};
    void deleteAccessLogTracingConfig() { this->accessLogTracingConfig_ = nullptr;};
    inline const Models::ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig & accessLogTracingConfig() const { DARABONBA_PTR_GET_CONST(accessLogTracingConfig_, Models::ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig) };
    inline Models::ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig accessLogTracingConfig() { DARABONBA_PTR_GET(accessLogTracingConfig_, Models::ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig) };
    inline ListListenersResponseBodyListenersLogConfig& setAccessLogTracingConfig(const Models::ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig & accessLogTracingConfig) { DARABONBA_PTR_SET_VALUE(accessLogTracingConfig_, accessLogTracingConfig) };
    inline ListListenersResponseBodyListenersLogConfig& setAccessLogTracingConfig(Models::ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig && accessLogTracingConfig) { DARABONBA_PTR_SET_RVALUE(accessLogTracingConfig_, accessLogTracingConfig) };


  protected:
    // Indicates whether custom headers are carried in the access log. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> accessLogRecordCustomizedHeadersEnabled_ = nullptr;
    // The configurations of xtrace.
    std::shared_ptr<Models::ListListenersResponseBodyListenersLogConfigAccessLogTracingConfig> accessLogTracingConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
