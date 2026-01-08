// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGERESULTEXTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGERESULTEXTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeImageResultExtRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageResultExtRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InfoType, infoType_);
      DARABONBA_PTR_TO_JSON(ReqId, reqId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageResultExtRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InfoType, infoType_);
      DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
    };
    DescribeImageResultExtRequest() = default ;
    DescribeImageResultExtRequest(const DescribeImageResultExtRequest &) = default ;
    DescribeImageResultExtRequest(DescribeImageResultExtRequest &&) = default ;
    DescribeImageResultExtRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageResultExtRequest() = default ;
    DescribeImageResultExtRequest& operator=(const DescribeImageResultExtRequest &) = default ;
    DescribeImageResultExtRequest& operator=(DescribeImageResultExtRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->infoType_ == nullptr
        && this->reqId_ == nullptr; };
    // infoType Field Functions 
    bool hasInfoType() const { return this->infoType_ != nullptr;};
    void deleteInfoType() { this->infoType_ = nullptr;};
    inline string getInfoType() const { DARABONBA_PTR_GET_DEFAULT(infoType_, "") };
    inline DescribeImageResultExtRequest& setInfoType(string infoType) { DARABONBA_PTR_SET_VALUE(infoType_, infoType) };


    // reqId Field Functions 
    bool hasReqId() const { return this->reqId_ != nullptr;};
    void deleteReqId() { this->reqId_ = nullptr;};
    inline string getReqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
    inline DescribeImageResultExtRequest& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


  protected:
    // The content of the information to be obtained. Multiple values are separated by commas.
    shared_ptr<string> infoType_ {};
    // The reqId field returned by the Url Async Moderation API.
    shared_ptr<string> reqId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
