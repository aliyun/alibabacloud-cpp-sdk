// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETOPICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETOPICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateTopicRequestBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class UpdateTopicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTopicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BodyData, bodyData_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TopicDefinition, topicDefinition_);
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTopicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BodyData, bodyData_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TopicDefinition, topicDefinition_);
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
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
    virtual bool empty() const override { return this->bodyData_ == nullptr
        && return this->regionId_ == nullptr && return this->topicDefinition_ == nullptr && return this->topicId_ == nullptr && return this->topicName_ == nullptr; };
    // bodyData Field Functions 
    bool hasBodyData() const { return this->bodyData_ != nullptr;};
    void deleteBodyData() { this->bodyData_ = nullptr;};
    inline const UpdateTopicRequestBodyData & bodyData() const { DARABONBA_PTR_GET_CONST(bodyData_, UpdateTopicRequestBodyData) };
    inline UpdateTopicRequestBodyData bodyData() { DARABONBA_PTR_GET(bodyData_, UpdateTopicRequestBodyData) };
    inline UpdateTopicRequest& setBodyData(const UpdateTopicRequestBodyData & bodyData) { DARABONBA_PTR_SET_VALUE(bodyData_, bodyData) };
    inline UpdateTopicRequest& setBodyData(UpdateTopicRequestBodyData && bodyData) { DARABONBA_PTR_SET_RVALUE(bodyData_, bodyData) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateTopicRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topicDefinition Field Functions 
    bool hasTopicDefinition() const { return this->topicDefinition_ != nullptr;};
    void deleteTopicDefinition() { this->topicDefinition_ = nullptr;};
    inline string topicDefinition() const { DARABONBA_PTR_GET_DEFAULT(topicDefinition_, "") };
    inline UpdateTopicRequest& setTopicDefinition(string topicDefinition) { DARABONBA_PTR_SET_VALUE(topicDefinition_, topicDefinition) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline int64_t topicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
    inline UpdateTopicRequest& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline UpdateTopicRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    std::shared_ptr<UpdateTopicRequestBodyData> bodyData_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> topicDefinition_ = nullptr;
    std::shared_ptr<int64_t> topicId_ = nullptr;
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
