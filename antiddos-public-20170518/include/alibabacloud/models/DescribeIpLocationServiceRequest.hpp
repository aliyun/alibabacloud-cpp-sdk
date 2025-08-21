// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPLOCATIONSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPLOCATIONSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeIpLocationServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpLocationServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpLocationServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
    };
    DescribeIpLocationServiceRequest() = default ;
    DescribeIpLocationServiceRequest(const DescribeIpLocationServiceRequest &) = default ;
    DescribeIpLocationServiceRequest(DescribeIpLocationServiceRequest &&) = default ;
    DescribeIpLocationServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpLocationServiceRequest() = default ;
    DescribeIpLocationServiceRequest& operator=(const DescribeIpLocationServiceRequest &) = default ;
    DescribeIpLocationServiceRequest& operator=(DescribeIpLocationServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->internetIp_ != nullptr; };
    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeIpLocationServiceRequest& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


  protected:
    // The IP address of the asset to query.
    // 
    // This parameter is required.
    std::shared_ptr<string> internetIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
