// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFAULTKEYINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFAULTKEYINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDefaultKeyInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefaultKeyInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefaultKeyInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeDefaultKeyInfoRequest() = default ;
    DescribeDefaultKeyInfoRequest(const DescribeDefaultKeyInfoRequest &) = default ;
    DescribeDefaultKeyInfoRequest(DescribeDefaultKeyInfoRequest &&) = default ;
    DescribeDefaultKeyInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefaultKeyInfoRequest() = default ;
    DescribeDefaultKeyInfoRequest& operator=(const DescribeDefaultKeyInfoRequest &) = default ;
    DescribeDefaultKeyInfoRequest& operator=(DescribeDefaultKeyInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceIp_ == nullptr; };
    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeDefaultKeyInfoRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The source IP address.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
