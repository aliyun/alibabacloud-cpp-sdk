// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMONAPPLYQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMMONAPPLYQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CommonApplyQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommonApplyQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(biz_category, bizCategory_);
      DARABONBA_PTR_TO_JSON(business_instance_id, businessInstanceId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CommonApplyQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(biz_category, bizCategory_);
      DARABONBA_PTR_FROM_JSON(business_instance_id, businessInstanceId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    CommonApplyQueryRequest() = default ;
    CommonApplyQueryRequest(const CommonApplyQueryRequest &) = default ;
    CommonApplyQueryRequest(CommonApplyQueryRequest &&) = default ;
    CommonApplyQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommonApplyQueryRequest() = default ;
    CommonApplyQueryRequest& operator=(const CommonApplyQueryRequest &) = default ;
    CommonApplyQueryRequest& operator=(CommonApplyQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->bizCategory_ != nullptr && this->businessInstanceId_ != nullptr && this->userId_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline int64_t applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
    inline CommonApplyQueryRequest& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // bizCategory Field Functions 
    bool hasBizCategory() const { return this->bizCategory_ != nullptr;};
    void deleteBizCategory() { this->bizCategory_ = nullptr;};
    inline int32_t bizCategory() const { DARABONBA_PTR_GET_DEFAULT(bizCategory_, 0) };
    inline CommonApplyQueryRequest& setBizCategory(int32_t bizCategory) { DARABONBA_PTR_SET_VALUE(bizCategory_, bizCategory) };


    // businessInstanceId Field Functions 
    bool hasBusinessInstanceId() const { return this->businessInstanceId_ != nullptr;};
    void deleteBusinessInstanceId() { this->businessInstanceId_ = nullptr;};
    inline string businessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(businessInstanceId_, "") };
    inline CommonApplyQueryRequest& setBusinessInstanceId(string businessInstanceId) { DARABONBA_PTR_SET_VALUE(businessInstanceId_, businessInstanceId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CommonApplyQueryRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> applyId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> bizCategory_ = nullptr;
    std::shared_ptr<string> businessInstanceId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
