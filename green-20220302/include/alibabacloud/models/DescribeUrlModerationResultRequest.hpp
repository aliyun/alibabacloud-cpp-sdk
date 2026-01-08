// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEURLMODERATIONRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEURLMODERATIONRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeUrlModerationResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUrlModerationResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReqId, reqId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUrlModerationResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
    };
    DescribeUrlModerationResultRequest() = default ;
    DescribeUrlModerationResultRequest(const DescribeUrlModerationResultRequest &) = default ;
    DescribeUrlModerationResultRequest(DescribeUrlModerationResultRequest &&) = default ;
    DescribeUrlModerationResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUrlModerationResultRequest() = default ;
    DescribeUrlModerationResultRequest& operator=(const DescribeUrlModerationResultRequest &) = default ;
    DescribeUrlModerationResultRequest& operator=(DescribeUrlModerationResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reqId_ == nullptr; };
    // reqId Field Functions 
    bool hasReqId() const { return this->reqId_ != nullptr;};
    void deleteReqId() { this->reqId_ = nullptr;};
    inline string getReqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
    inline DescribeUrlModerationResultRequest& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


  protected:
    // The ReqId field returned by an asynchronous URL moderation operation.
    shared_ptr<string> reqId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
