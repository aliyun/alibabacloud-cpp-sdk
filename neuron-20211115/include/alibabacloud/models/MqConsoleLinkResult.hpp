// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MQCONSOLELINKRESULT_HPP_
#define ALIBABACLOUD_MODELS_MQCONSOLELINKRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MqConsoleLinkResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MqConsoleLinkResult& obj) { 
      DARABONBA_PTR_TO_JSON(groupLinkUrl, groupLinkUrl_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(topicLinkUrl, topicLinkUrl_);
    };
    friend void from_json(const Darabonba::Json& j, MqConsoleLinkResult& obj) { 
      DARABONBA_PTR_FROM_JSON(groupLinkUrl, groupLinkUrl_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(topicLinkUrl, topicLinkUrl_);
    };
    MqConsoleLinkResult() = default ;
    MqConsoleLinkResult(const MqConsoleLinkResult &) = default ;
    MqConsoleLinkResult(MqConsoleLinkResult &&) = default ;
    MqConsoleLinkResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MqConsoleLinkResult() = default ;
    MqConsoleLinkResult& operator=(const MqConsoleLinkResult &) = default ;
    MqConsoleLinkResult& operator=(MqConsoleLinkResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupLinkUrl_ == nullptr
        && this->requestId_ == nullptr && this->topicLinkUrl_ == nullptr; };
    // groupLinkUrl Field Functions 
    bool hasGroupLinkUrl() const { return this->groupLinkUrl_ != nullptr;};
    void deleteGroupLinkUrl() { this->groupLinkUrl_ = nullptr;};
    inline string getGroupLinkUrl() const { DARABONBA_PTR_GET_DEFAULT(groupLinkUrl_, "") };
    inline MqConsoleLinkResult& setGroupLinkUrl(string groupLinkUrl) { DARABONBA_PTR_SET_VALUE(groupLinkUrl_, groupLinkUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MqConsoleLinkResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // topicLinkUrl Field Functions 
    bool hasTopicLinkUrl() const { return this->topicLinkUrl_ != nullptr;};
    void deleteTopicLinkUrl() { this->topicLinkUrl_ = nullptr;};
    inline string getTopicLinkUrl() const { DARABONBA_PTR_GET_DEFAULT(topicLinkUrl_, "") };
    inline MqConsoleLinkResult& setTopicLinkUrl(string topicLinkUrl) { DARABONBA_PTR_SET_VALUE(topicLinkUrl_, topicLinkUrl) };


  protected:
    shared_ptr<string> groupLinkUrl_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> topicLinkUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
