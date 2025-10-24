// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDUSERRESPONSEBODYUSERINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDUSERRESPONSEBODYUSERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudUserResponseBodyUserInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudUserResponseBodyUserInfo& obj) { 
      DARABONBA_PTR_TO_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_TO_JSON(HttpsPorts, httpsPorts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudUserResponseBodyUserInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_FROM_JSON(HttpsPorts, httpsPorts_);
    };
    DescribeHybridCloudUserResponseBodyUserInfo() = default ;
    DescribeHybridCloudUserResponseBodyUserInfo(const DescribeHybridCloudUserResponseBodyUserInfo &) = default ;
    DescribeHybridCloudUserResponseBodyUserInfo(DescribeHybridCloudUserResponseBodyUserInfo &&) = default ;
    DescribeHybridCloudUserResponseBodyUserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudUserResponseBodyUserInfo() = default ;
    DescribeHybridCloudUserResponseBodyUserInfo& operator=(const DescribeHybridCloudUserResponseBodyUserInfo &) = default ;
    DescribeHybridCloudUserResponseBodyUserInfo& operator=(DescribeHybridCloudUserResponseBodyUserInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->httpPorts_ == nullptr
        && return this->httpsPorts_ == nullptr; };
    // httpPorts Field Functions 
    bool hasHttpPorts() const { return this->httpPorts_ != nullptr;};
    void deleteHttpPorts() { this->httpPorts_ = nullptr;};
    inline string httpPorts() const { DARABONBA_PTR_GET_DEFAULT(httpPorts_, "") };
    inline DescribeHybridCloudUserResponseBodyUserInfo& setHttpPorts(string httpPorts) { DARABONBA_PTR_SET_VALUE(httpPorts_, httpPorts) };


    // httpsPorts Field Functions 
    bool hasHttpsPorts() const { return this->httpsPorts_ != nullptr;};
    void deleteHttpsPorts() { this->httpsPorts_ = nullptr;};
    inline string httpsPorts() const { DARABONBA_PTR_GET_DEFAULT(httpsPorts_, "") };
    inline DescribeHybridCloudUserResponseBodyUserInfo& setHttpsPorts(string httpsPorts) { DARABONBA_PTR_SET_VALUE(httpsPorts_, httpsPorts) };


  protected:
    // The HTTP ports. The value is a string. If multiple ports are returned, the value is in the **port1,port2,port3** format.
    std::shared_ptr<string> httpPorts_ = nullptr;
    // The HTTPS ports. The value is a string. If multiple ports are returned, the value is in the **port1,port2,port3** format.
    std::shared_ptr<string> httpsPorts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
