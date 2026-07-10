// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
    };
    DescribeVerifyResultRequest() = default ;
    DescribeVerifyResultRequest(const DescribeVerifyResultRequest &) = default ;
    DescribeVerifyResultRequest(DescribeVerifyResultRequest &&) = default ;
    DescribeVerifyResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyResultRequest() = default ;
    DescribeVerifyResultRequest& operator=(const DescribeVerifyResultRequest &) = default ;
    DescribeVerifyResultRequest& operator=(DescribeVerifyResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->bizType_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline DescribeVerifyResultRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeVerifyResultRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


  protected:
    // The verification ID. A unique ID that identifies a verification task. The value can be up to 64 characters in length. For a single verification task, the system supports unlimited submissions until the verification is passed and the task is completed.
    // > Use a different BizId for each verification task.
    // 
    // This parameter is required.
    shared_ptr<string> bizId_ {};
    // The business scenario identifier of the ID Verification service.
    // 
    // This parameter is required.
    shared_ptr<string> bizType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
