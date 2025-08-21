// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPUBLISHTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPUBLISHTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CreatePublishTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePublishTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(DataIdList, dataIdList_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePublishTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(DataIdList, dataIdList_);
    };
    CreatePublishTaskRequest() = default ;
    CreatePublishTaskRequest(const CreatePublishTaskRequest &) = default ;
    CreatePublishTaskRequest(CreatePublishTaskRequest &&) = default ;
    CreatePublishTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePublishTaskRequest() = default ;
    CreatePublishTaskRequest& operator=(const CreatePublishTaskRequest &) = default ;
    CreatePublishTaskRequest& operator=(CreatePublishTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->bizType_ != nullptr && this->dataIdList_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline CreatePublishTaskRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline CreatePublishTaskRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // dataIdList Field Functions 
    bool hasDataIdList() const { return this->dataIdList_ != nullptr;};
    void deleteDataIdList() { this->dataIdList_ = nullptr;};
    inline const vector<string> & dataIdList() const { DARABONBA_PTR_GET_CONST(dataIdList_, vector<string>) };
    inline vector<string> dataIdList() { DARABONBA_PTR_GET(dataIdList_, vector<string>) };
    inline CreatePublishTaskRequest& setDataIdList(const vector<string> & dataIdList) { DARABONBA_PTR_SET_VALUE(dataIdList_, dataIdList) };
    inline CreatePublishTaskRequest& setDataIdList(vector<string> && dataIdList) { DARABONBA_PTR_SET_RVALUE(dataIdList_, dataIdList) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<vector<string>> dataIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
