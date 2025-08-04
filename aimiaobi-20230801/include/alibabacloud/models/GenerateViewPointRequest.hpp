// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIEWPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIEWPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GenerateViewPointRequestReferenceData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GenerateViewPointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateViewPointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(ReferenceData, referenceData_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateViewPointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(ReferenceData, referenceData_);
    };
    GenerateViewPointRequest() = default ;
    GenerateViewPointRequest(const GenerateViewPointRequest &) = default ;
    GenerateViewPointRequest(GenerateViewPointRequest &&) = default ;
    GenerateViewPointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateViewPointRequest() = default ;
    GenerateViewPointRequest& operator=(const GenerateViewPointRequest &) = default ;
    GenerateViewPointRequest& operator=(GenerateViewPointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->referenceData_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline GenerateViewPointRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // referenceData Field Functions 
    bool hasReferenceData() const { return this->referenceData_ != nullptr;};
    void deleteReferenceData() { this->referenceData_ = nullptr;};
    inline const GenerateViewPointRequestReferenceData & referenceData() const { DARABONBA_PTR_GET_CONST(referenceData_, GenerateViewPointRequestReferenceData) };
    inline GenerateViewPointRequestReferenceData referenceData() { DARABONBA_PTR_GET(referenceData_, GenerateViewPointRequestReferenceData) };
    inline GenerateViewPointRequest& setReferenceData(const GenerateViewPointRequestReferenceData & referenceData) { DARABONBA_PTR_SET_VALUE(referenceData_, referenceData) };
    inline GenerateViewPointRequest& setReferenceData(GenerateViewPointRequestReferenceData && referenceData) { DARABONBA_PTR_SET_RVALUE(referenceData_, referenceData) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<GenerateViewPointRequestReferenceData> referenceData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
