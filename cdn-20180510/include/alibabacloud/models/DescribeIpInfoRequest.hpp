// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeIpInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IP, IP_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IP, IP_);
    };
    DescribeIpInfoRequest() = default ;
    DescribeIpInfoRequest(const DescribeIpInfoRequest &) = default ;
    DescribeIpInfoRequest(DescribeIpInfoRequest &&) = default ;
    DescribeIpInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpInfoRequest() = default ;
    DescribeIpInfoRequest& operator=(const DescribeIpInfoRequest &) = default ;
    DescribeIpInfoRequest& operator=(DescribeIpInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->IP_ != nullptr; };
    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline DescribeIpInfoRequest& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


  protected:
    // The IP address. You can specify only one IP address.
    // 
    // This parameter is required.
    std::shared_ptr<string> IP_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
