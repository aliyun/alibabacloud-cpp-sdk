// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYWATCHBYOBJECTIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYWATCHBYOBJECTIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetQualityWatchByObjectIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityWatchByObjectIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(WatchObjectId, watchObjectId_);
      DARABONBA_PTR_TO_JSON(WatchType, watchType_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityWatchByObjectIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(WatchObjectId, watchObjectId_);
      DARABONBA_PTR_FROM_JSON(WatchType, watchType_);
    };
    GetQualityWatchByObjectIdRequest() = default ;
    GetQualityWatchByObjectIdRequest(const GetQualityWatchByObjectIdRequest &) = default ;
    GetQualityWatchByObjectIdRequest(GetQualityWatchByObjectIdRequest &&) = default ;
    GetQualityWatchByObjectIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityWatchByObjectIdRequest() = default ;
    GetQualityWatchByObjectIdRequest& operator=(const GetQualityWatchByObjectIdRequest &) = default ;
    GetQualityWatchByObjectIdRequest& operator=(GetQualityWatchByObjectIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->watchObjectId_ == nullptr && this->watchType_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetQualityWatchByObjectIdRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // watchObjectId Field Functions 
    bool hasWatchObjectId() const { return this->watchObjectId_ != nullptr;};
    void deleteWatchObjectId() { this->watchObjectId_ = nullptr;};
    inline string getWatchObjectId() const { DARABONBA_PTR_GET_DEFAULT(watchObjectId_, "") };
    inline GetQualityWatchByObjectIdRequest& setWatchObjectId(string watchObjectId) { DARABONBA_PTR_SET_VALUE(watchObjectId_, watchObjectId) };


    // watchType Field Functions 
    bool hasWatchType() const { return this->watchType_ != nullptr;};
    void deleteWatchType() { this->watchType_ = nullptr;};
    inline string getWatchType() const { DARABONBA_PTR_GET_DEFAULT(watchType_, "") };
    inline GetQualityWatchByObjectIdRequest& setWatchType(string watchType) { DARABONBA_PTR_SET_VALUE(watchType_, watchType) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<string> watchObjectId_ {};
    // This parameter is required.
    shared_ptr<string> watchType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
