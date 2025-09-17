// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTICEINSTANCEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_NOTICEINSTANCEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketplaceIntl20221230
{
namespace Models
{
  class NoticeInstanceUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NoticeInstanceUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NoticeParam, noticeParam_);
      DARABONBA_PTR_TO_JSON(NoticeType, noticeType_);
    };
    friend void from_json(const Darabonba::Json& j, NoticeInstanceUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NoticeParam, noticeParam_);
      DARABONBA_PTR_FROM_JSON(NoticeType, noticeType_);
    };
    NoticeInstanceUserRequest() = default ;
    NoticeInstanceUserRequest(const NoticeInstanceUserRequest &) = default ;
    NoticeInstanceUserRequest(NoticeInstanceUserRequest &&) = default ;
    NoticeInstanceUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NoticeInstanceUserRequest() = default ;
    NoticeInstanceUserRequest& operator=(const NoticeInstanceUserRequest &) = default ;
    NoticeInstanceUserRequest& operator=(NoticeInstanceUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->noticeParam_ != nullptr && this->noticeType_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline NoticeInstanceUserRequest& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // noticeParam Field Functions 
    bool hasNoticeParam() const { return this->noticeParam_ != nullptr;};
    void deleteNoticeParam() { this->noticeParam_ = nullptr;};
    inline string noticeParam() const { DARABONBA_PTR_GET_DEFAULT(noticeParam_, "") };
    inline NoticeInstanceUserRequest& setNoticeParam(string noticeParam) { DARABONBA_PTR_SET_VALUE(noticeParam_, noticeParam) };


    // noticeType Field Functions 
    bool hasNoticeType() const { return this->noticeType_ != nullptr;};
    void deleteNoticeType() { this->noticeType_ = nullptr;};
    inline int64_t noticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, 0L) };
    inline NoticeInstanceUserRequest& setNoticeType(int64_t noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


  protected:
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    std::shared_ptr<string> noticeParam_ = nullptr;
    std::shared_ptr<int64_t> noticeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketplaceIntl20221230
#endif
