// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIMODALMODERATIONRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIMODALMODERATIONRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeMultimodalModerationResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultimodalModerationResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReqId, reqId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultimodalModerationResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
    };
    DescribeMultimodalModerationResultRequest() = default ;
    DescribeMultimodalModerationResultRequest(const DescribeMultimodalModerationResultRequest &) = default ;
    DescribeMultimodalModerationResultRequest(DescribeMultimodalModerationResultRequest &&) = default ;
    DescribeMultimodalModerationResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultimodalModerationResultRequest() = default ;
    DescribeMultimodalModerationResultRequest& operator=(const DescribeMultimodalModerationResultRequest &) = default ;
    DescribeMultimodalModerationResultRequest& operator=(DescribeMultimodalModerationResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reqId_ == nullptr; };
    // reqId Field Functions 
    bool hasReqId() const { return this->reqId_ != nullptr;};
    void deleteReqId() { this->reqId_ = nullptr;};
    inline string reqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
    inline DescribeMultimodalModerationResultRequest& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


  protected:
    std::shared_ptr<string> reqId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
