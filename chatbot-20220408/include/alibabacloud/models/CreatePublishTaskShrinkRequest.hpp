// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPUBLISHTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPUBLISHTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CreatePublishTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePublishTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(DataIdList, dataIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePublishTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(DataIdList, dataIdListShrink_);
    };
    CreatePublishTaskShrinkRequest() = default ;
    CreatePublishTaskShrinkRequest(const CreatePublishTaskShrinkRequest &) = default ;
    CreatePublishTaskShrinkRequest(CreatePublishTaskShrinkRequest &&) = default ;
    CreatePublishTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePublishTaskShrinkRequest() = default ;
    CreatePublishTaskShrinkRequest& operator=(const CreatePublishTaskShrinkRequest &) = default ;
    CreatePublishTaskShrinkRequest& operator=(CreatePublishTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->bizType_ != nullptr && this->dataIdListShrink_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline CreatePublishTaskShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline CreatePublishTaskShrinkRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // dataIdListShrink Field Functions 
    bool hasDataIdListShrink() const { return this->dataIdListShrink_ != nullptr;};
    void deleteDataIdListShrink() { this->dataIdListShrink_ = nullptr;};
    inline string dataIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(dataIdListShrink_, "") };
    inline CreatePublishTaskShrinkRequest& setDataIdListShrink(string dataIdListShrink) { DARABONBA_PTR_SET_VALUE(dataIdListShrink_, dataIdListShrink) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<string> dataIdListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
