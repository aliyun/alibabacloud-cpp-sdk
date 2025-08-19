// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUEUEATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUEUEATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetQueueAttributesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class GetQueueAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueueAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueueAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetQueueAttributesRequest() = default ;
    GetQueueAttributesRequest(const GetQueueAttributesRequest &) = default ;
    GetQueueAttributesRequest(GetQueueAttributesRequest &&) = default ;
    GetQueueAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueueAttributesRequest() = default ;
    GetQueueAttributesRequest& operator=(const GetQueueAttributesRequest &) = default ;
    GetQueueAttributesRequest& operator=(GetQueueAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->queueName_ != nullptr
        && this->tag_ != nullptr; };
    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline GetQueueAttributesRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<GetQueueAttributesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<GetQueueAttributesRequestTag>) };
    inline vector<GetQueueAttributesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<GetQueueAttributesRequestTag>) };
    inline GetQueueAttributesRequest& setTag(const vector<GetQueueAttributesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline GetQueueAttributesRequest& setTag(vector<GetQueueAttributesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The name of the queue.
    // 
    // This parameter is required.
    std::shared_ptr<string> queueName_ = nullptr;
    // The tags.
    std::shared_ptr<vector<GetQueueAttributesRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
