// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(CreatedTs, createdTs_);
      DARABONBA_PTR_TO_JSON(DestroyedTs, destroyedTs_);
      DARABONBA_PTR_TO_JSON(ExtDataType, extDataType_);
      DARABONBA_PTR_TO_JSON(QueryExpInfo, queryExpInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(CreatedTs, createdTs_);
      DARABONBA_PTR_FROM_JSON(DestroyedTs, destroyedTs_);
      DARABONBA_PTR_FROM_JSON(ExtDataType, extDataType_);
      DARABONBA_PTR_FROM_JSON(QueryExpInfo, queryExpInfo_);
    };
    DescribeCallRequest() = default ;
    DescribeCallRequest(const DescribeCallRequest &) = default ;
    DescribeCallRequest(DescribeCallRequest &&) = default ;
    DescribeCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCallRequest() = default ;
    DescribeCallRequest& operator=(const DescribeCallRequest &) = default ;
    DescribeCallRequest& operator=(DescribeCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->channelId_ == nullptr && return this->createdTs_ == nullptr && return this->destroyedTs_ == nullptr && return this->extDataType_ == nullptr && return this->queryExpInfo_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeCallRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DescribeCallRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // createdTs Field Functions 
    bool hasCreatedTs() const { return this->createdTs_ != nullptr;};
    void deleteCreatedTs() { this->createdTs_ = nullptr;};
    inline int64_t createdTs() const { DARABONBA_PTR_GET_DEFAULT(createdTs_, 0L) };
    inline DescribeCallRequest& setCreatedTs(int64_t createdTs) { DARABONBA_PTR_SET_VALUE(createdTs_, createdTs) };


    // destroyedTs Field Functions 
    bool hasDestroyedTs() const { return this->destroyedTs_ != nullptr;};
    void deleteDestroyedTs() { this->destroyedTs_ = nullptr;};
    inline int64_t destroyedTs() const { DARABONBA_PTR_GET_DEFAULT(destroyedTs_, 0L) };
    inline DescribeCallRequest& setDestroyedTs(int64_t destroyedTs) { DARABONBA_PTR_SET_VALUE(destroyedTs_, destroyedTs) };


    // extDataType Field Functions 
    bool hasExtDataType() const { return this->extDataType_ != nullptr;};
    void deleteExtDataType() { this->extDataType_ = nullptr;};
    inline string extDataType() const { DARABONBA_PTR_GET_DEFAULT(extDataType_, "") };
    inline DescribeCallRequest& setExtDataType(string extDataType) { DARABONBA_PTR_SET_VALUE(extDataType_, extDataType) };


    // queryExpInfo Field Functions 
    bool hasQueryExpInfo() const { return this->queryExpInfo_ != nullptr;};
    void deleteQueryExpInfo() { this->queryExpInfo_ = nullptr;};
    inline bool queryExpInfo() const { DARABONBA_PTR_GET_DEFAULT(queryExpInfo_, false) };
    inline DescribeCallRequest& setQueryExpInfo(bool queryExpInfo) { DARABONBA_PTR_SET_VALUE(queryExpInfo_, queryExpInfo) };


  protected:
    // APP ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> createdTs_ = nullptr;
    std::shared_ptr<int64_t> destroyedTs_ = nullptr;
    std::shared_ptr<string> extDataType_ = nullptr;
    std::shared_ptr<bool> queryExpInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
