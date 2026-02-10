// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENOTICECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENOTICECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeNoticeConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNoticeConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNoticeConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeNoticeConfigRequest() = default ;
    DescribeNoticeConfigRequest(const DescribeNoticeConfigRequest &) = default ;
    DescribeNoticeConfigRequest(DescribeNoticeConfigRequest &&) = default ;
    DescribeNoticeConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNoticeConfigRequest() = default ;
    DescribeNoticeConfigRequest& operator=(const DescribeNoticeConfigRequest &) = default ;
    DescribeNoticeConfigRequest& operator=(DescribeNoticeConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->sourceIp_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeNoticeConfigRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeNoticeConfigRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // Notification configuration type, with values:
    // - **Default (not provided)**: SMS/Email/Site Message 
    // - **cms**: Cloud Monitor Push
    shared_ptr<string> bizType_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
