// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SMARTQAUTHTRANSFERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SMARTQAUTHTRANSFERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class SmartqAuthTransferRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SmartqAuthTransferRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OriginUserId, originUserId_);
      DARABONBA_PTR_TO_JSON(TargetUserIds, targetUserIds_);
    };
    friend void from_json(const Darabonba::Json& j, SmartqAuthTransferRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OriginUserId, originUserId_);
      DARABONBA_PTR_FROM_JSON(TargetUserIds, targetUserIds_);
    };
    SmartqAuthTransferRequest() = default ;
    SmartqAuthTransferRequest(const SmartqAuthTransferRequest &) = default ;
    SmartqAuthTransferRequest(SmartqAuthTransferRequest &&) = default ;
    SmartqAuthTransferRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SmartqAuthTransferRequest() = default ;
    SmartqAuthTransferRequest& operator=(const SmartqAuthTransferRequest &) = default ;
    SmartqAuthTransferRequest& operator=(SmartqAuthTransferRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->originUserId_ == nullptr
        && this->targetUserIds_ == nullptr; };
    // originUserId Field Functions 
    bool hasOriginUserId() const { return this->originUserId_ != nullptr;};
    void deleteOriginUserId() { this->originUserId_ = nullptr;};
    inline string getOriginUserId() const { DARABONBA_PTR_GET_DEFAULT(originUserId_, "") };
    inline SmartqAuthTransferRequest& setOriginUserId(string originUserId) { DARABONBA_PTR_SET_VALUE(originUserId_, originUserId) };


    // targetUserIds Field Functions 
    bool hasTargetUserIds() const { return this->targetUserIds_ != nullptr;};
    void deleteTargetUserIds() { this->targetUserIds_ = nullptr;};
    inline string getTargetUserIds() const { DARABONBA_PTR_GET_DEFAULT(targetUserIds_, "") };
    inline SmartqAuthTransferRequest& setTargetUserIds(string targetUserIds) { DARABONBA_PTR_SET_VALUE(targetUserIds_, targetUserIds) };


  protected:
    // Source user ID.
    // 
    // This parameter is required.
    shared_ptr<string> originUserId_ {};
    // Target user ID array, separated by English commas.
    // >Warning: The number of user IDs cannot exceed 100.
    // 
    // This parameter is required.
    shared_ptr<string> targetUserIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
