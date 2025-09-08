// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILEMODERATIONRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILEMODERATIONRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeFileModerationResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileModerationResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileModerationResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
    };
    DescribeFileModerationResultRequest() = default ;
    DescribeFileModerationResultRequest(const DescribeFileModerationResultRequest &) = default ;
    DescribeFileModerationResultRequest(DescribeFileModerationResultRequest &&) = default ;
    DescribeFileModerationResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileModerationResultRequest() = default ;
    DescribeFileModerationResultRequest& operator=(const DescribeFileModerationResultRequest &) = default ;
    DescribeFileModerationResultRequest& operator=(DescribeFileModerationResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->service_ != nullptr
        && this->serviceParameters_ != nullptr; };
    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline DescribeFileModerationResultRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string serviceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline DescribeFileModerationResultRequest& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


  protected:
    // The type of the moderation service.
    std::shared_ptr<string> service_ = nullptr;
    // The parameters required by the moderation service. The value is a JSON string.
    // 
    // *   taskId: required. The URL of the object that you want to moderate. Make sure that the URL can be accessed over the Internet.
    std::shared_ptr<string> serviceParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
