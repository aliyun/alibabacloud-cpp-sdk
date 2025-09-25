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
    virtual bool empty() const override { this->bizId_ != nullptr
        && this->bizType_ != nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline DescribeVerifyResultRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeVerifyResultRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


  protected:
    // Authentication ID. A unique ID that identifies an authentication task, not exceeding 64 characters. For a single authentication task, the system supports an unlimited number of submissions until the final authentication is successful and the task is completed. > You need to use a different BizId for each new authentication task.
    // 
    // This parameter is required.
    std::shared_ptr<string> bizId_ = nullptr;
    // Business scenario identifier for real-person authentication service
    // 
    // This parameter is required.
    std::shared_ptr<string> bizType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
