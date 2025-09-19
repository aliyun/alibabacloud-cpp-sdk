// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUserSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeUserSettingRequest() = default ;
    DescribeUserSettingRequest(const DescribeUserSettingRequest &) = default ;
    DescribeUserSettingRequest(DescribeUserSettingRequest &&) = default ;
    DescribeUserSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserSettingRequest() = default ;
    DescribeUserSettingRequest& operator=(const DescribeUserSettingRequest &) = default ;
    DescribeUserSettingRequest& operator=(DescribeUserSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceIp_ != nullptr; };
    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeUserSettingRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
