// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIEWPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIEWPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ReferenceData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReferenceData& obj) { 
        DARABONBA_PTR_TO_JSON(MiniDoc, miniDoc_);
      };
      friend void from_json(const Darabonba::Json& j, ReferenceData& obj) { 
        DARABONBA_PTR_FROM_JSON(MiniDoc, miniDoc_);
      };
      ReferenceData() = default ;
      ReferenceData(const ReferenceData &) = default ;
      ReferenceData(ReferenceData &&) = default ;
      ReferenceData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReferenceData() = default ;
      ReferenceData& operator=(const ReferenceData &) = default ;
      ReferenceData& operator=(ReferenceData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->miniDoc_ == nullptr; };
      // miniDoc Field Functions 
      bool hasMiniDoc() const { return this->miniDoc_ != nullptr;};
      void deleteMiniDoc() { this->miniDoc_ = nullptr;};
      inline const vector<string> & getMiniDoc() const { DARABONBA_PTR_GET_CONST(miniDoc_, vector<string>) };
      inline vector<string> getMiniDoc() { DARABONBA_PTR_GET(miniDoc_, vector<string>) };
      inline ReferenceData& setMiniDoc(const vector<string> & miniDoc) { DARABONBA_PTR_SET_VALUE(miniDoc_, miniDoc) };
      inline ReferenceData& setMiniDoc(vector<string> && miniDoc) { DARABONBA_PTR_SET_RVALUE(miniDoc_, miniDoc) };


    protected:
      shared_ptr<vector<string>> miniDoc_ {};
    };

    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->referenceData_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline GenerateViewPointRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // referenceData Field Functions 
    bool hasReferenceData() const { return this->referenceData_ != nullptr;};
    void deleteReferenceData() { this->referenceData_ = nullptr;};
    inline const GenerateViewPointRequest::ReferenceData & getReferenceData() const { DARABONBA_PTR_GET_CONST(referenceData_, GenerateViewPointRequest::ReferenceData) };
    inline GenerateViewPointRequest::ReferenceData getReferenceData() { DARABONBA_PTR_GET(referenceData_, GenerateViewPointRequest::ReferenceData) };
    inline GenerateViewPointRequest& setReferenceData(const GenerateViewPointRequest::ReferenceData & referenceData) { DARABONBA_PTR_SET_VALUE(referenceData_, referenceData) };
    inline GenerateViewPointRequest& setReferenceData(GenerateViewPointRequest::ReferenceData && referenceData) { DARABONBA_PTR_SET_RVALUE(referenceData_, referenceData) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    shared_ptr<GenerateViewPointRequest::ReferenceData> referenceData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
