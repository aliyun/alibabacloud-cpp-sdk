// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMGLOBALALERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMGLOBALALERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCloudGtmGlobalAlertResponseBodyAlertConfig.hpp>
#include <alibabacloud/models/DescribeCloudGtmGlobalAlertResponseBodyAlertGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmGlobalAlertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmGlobalAlertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmGlobalAlertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCloudGtmGlobalAlertResponseBody() = default ;
    DescribeCloudGtmGlobalAlertResponseBody(const DescribeCloudGtmGlobalAlertResponseBody &) = default ;
    DescribeCloudGtmGlobalAlertResponseBody(DescribeCloudGtmGlobalAlertResponseBody &&) = default ;
    DescribeCloudGtmGlobalAlertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmGlobalAlertResponseBody() = default ;
    DescribeCloudGtmGlobalAlertResponseBody& operator=(const DescribeCloudGtmGlobalAlertResponseBody &) = default ;
    DescribeCloudGtmGlobalAlertResponseBody& operator=(DescribeCloudGtmGlobalAlertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertConfig_ == nullptr
        && return this->alertGroup_ == nullptr && return this->requestId_ == nullptr; };
    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const DescribeCloudGtmGlobalAlertResponseBodyAlertConfig & alertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, DescribeCloudGtmGlobalAlertResponseBodyAlertConfig) };
    inline DescribeCloudGtmGlobalAlertResponseBodyAlertConfig alertConfig() { DARABONBA_PTR_GET(alertConfig_, DescribeCloudGtmGlobalAlertResponseBodyAlertConfig) };
    inline DescribeCloudGtmGlobalAlertResponseBody& setAlertConfig(const DescribeCloudGtmGlobalAlertResponseBodyAlertConfig & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline DescribeCloudGtmGlobalAlertResponseBody& setAlertConfig(DescribeCloudGtmGlobalAlertResponseBodyAlertConfig && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline const DescribeCloudGtmGlobalAlertResponseBodyAlertGroup & alertGroup() const { DARABONBA_PTR_GET_CONST(alertGroup_, DescribeCloudGtmGlobalAlertResponseBodyAlertGroup) };
    inline DescribeCloudGtmGlobalAlertResponseBodyAlertGroup alertGroup() { DARABONBA_PTR_GET(alertGroup_, DescribeCloudGtmGlobalAlertResponseBodyAlertGroup) };
    inline DescribeCloudGtmGlobalAlertResponseBody& setAlertGroup(const DescribeCloudGtmGlobalAlertResponseBodyAlertGroup & alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };
    inline DescribeCloudGtmGlobalAlertResponseBody& setAlertGroup(DescribeCloudGtmGlobalAlertResponseBodyAlertGroup && alertGroup) { DARABONBA_PTR_SET_RVALUE(alertGroup_, alertGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudGtmGlobalAlertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The alert configurations.
    std::shared_ptr<DescribeCloudGtmGlobalAlertResponseBodyAlertConfig> alertConfig_ = nullptr;
    // The alert contact groups.
    std::shared_ptr<DescribeCloudGtmGlobalAlertResponseBodyAlertGroup> alertGroup_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
