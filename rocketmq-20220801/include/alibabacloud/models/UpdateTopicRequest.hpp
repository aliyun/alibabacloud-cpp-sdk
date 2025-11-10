// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETOPICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETOPICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class UpdateTopicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTopicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(liteTopicExpiration, liteTopicExpiration_);
      DARABONBA_PTR_TO_JSON(maxSendTps, maxSendTps_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTopicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(liteTopicExpiration, liteTopicExpiration_);
      DARABONBA_PTR_FROM_JSON(maxSendTps, maxSendTps_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
    };
    UpdateTopicRequest() = default ;
    UpdateTopicRequest(const UpdateTopicRequest &) = default ;
    UpdateTopicRequest(UpdateTopicRequest &&) = default ;
    UpdateTopicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTopicRequest() = default ;
    UpdateTopicRequest& operator=(const UpdateTopicRequest &) = default ;
    UpdateTopicRequest& operator=(UpdateTopicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liteTopicExpiration_ == nullptr
        && return this->maxSendTps_ == nullptr && return this->remark_ == nullptr; };
    // liteTopicExpiration Field Functions 
    bool hasLiteTopicExpiration() const { return this->liteTopicExpiration_ != nullptr;};
    void deleteLiteTopicExpiration() { this->liteTopicExpiration_ = nullptr;};
    inline int64_t liteTopicExpiration() const { DARABONBA_PTR_GET_DEFAULT(liteTopicExpiration_, 0L) };
    inline UpdateTopicRequest& setLiteTopicExpiration(int64_t liteTopicExpiration) { DARABONBA_PTR_SET_VALUE(liteTopicExpiration_, liteTopicExpiration) };


    // maxSendTps Field Functions 
    bool hasMaxSendTps() const { return this->maxSendTps_ != nullptr;};
    void deleteMaxSendTps() { this->maxSendTps_ = nullptr;};
    inline int64_t maxSendTps() const { DARABONBA_PTR_GET_DEFAULT(maxSendTps_, 0L) };
    inline UpdateTopicRequest& setMaxSendTps(int64_t maxSendTps) { DARABONBA_PTR_SET_VALUE(maxSendTps_, maxSendTps) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateTopicRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    std::shared_ptr<int64_t> liteTopicExpiration_ = nullptr;
    // Maximum send message tps
    std::shared_ptr<int64_t> maxSendTps_ = nullptr;
    // Updated remarks for the topic.
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
