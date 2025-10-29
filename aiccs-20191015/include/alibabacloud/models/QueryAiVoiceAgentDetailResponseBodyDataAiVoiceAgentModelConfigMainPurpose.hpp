// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTMODELCONFIGMAINPURPOSE_HPP_
#define ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTMODELCONFIGMAINPURPOSE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurposeMainPurposeEnum.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MainPurposeDescription, mainPurposeDescription_);
      DARABONBA_PTR_TO_JSON(MainPurposeEnum, mainPurposeEnum_);
      DARABONBA_PTR_TO_JSON(MainPurposeName, mainPurposeName_);
      DARABONBA_PTR_TO_JSON(MainPurposeType, mainPurposeType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MainPurposeDescription, mainPurposeDescription_);
      DARABONBA_PTR_FROM_JSON(MainPurposeEnum, mainPurposeEnum_);
      DARABONBA_PTR_FROM_JSON(MainPurposeName, mainPurposeName_);
      DARABONBA_PTR_FROM_JSON(MainPurposeType, mainPurposeType_);
    };
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose &&) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose& operator=(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose& operator=(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->mainPurposeDescription_ == nullptr && return this->mainPurposeEnum_ == nullptr && return this->mainPurposeName_ == nullptr && return this->mainPurposeType_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mainPurposeDescription Field Functions 
    bool hasMainPurposeDescription() const { return this->mainPurposeDescription_ != nullptr;};
    void deleteMainPurposeDescription() { this->mainPurposeDescription_ = nullptr;};
    inline string mainPurposeDescription() const { DARABONBA_PTR_GET_DEFAULT(mainPurposeDescription_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose& setMainPurposeDescription(string mainPurposeDescription) { DARABONBA_PTR_SET_VALUE(mainPurposeDescription_, mainPurposeDescription) };


    // mainPurposeEnum Field Functions 
    bool hasMainPurposeEnum() const { return this->mainPurposeEnum_ != nullptr;};
    void deleteMainPurposeEnum() { this->mainPurposeEnum_ = nullptr;};
    inline const vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurposeMainPurposeEnum> & mainPurposeEnum() const { DARABONBA_PTR_GET_CONST(mainPurposeEnum_, vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurposeMainPurposeEnum>) };
    inline vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurposeMainPurposeEnum> mainPurposeEnum() { DARABONBA_PTR_GET(mainPurposeEnum_, vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurposeMainPurposeEnum>) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose& setMainPurposeEnum(const vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurposeMainPurposeEnum> & mainPurposeEnum) { DARABONBA_PTR_SET_VALUE(mainPurposeEnum_, mainPurposeEnum) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose& setMainPurposeEnum(vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurposeMainPurposeEnum> && mainPurposeEnum) { DARABONBA_PTR_SET_RVALUE(mainPurposeEnum_, mainPurposeEnum) };


    // mainPurposeName Field Functions 
    bool hasMainPurposeName() const { return this->mainPurposeName_ != nullptr;};
    void deleteMainPurposeName() { this->mainPurposeName_ = nullptr;};
    inline string mainPurposeName() const { DARABONBA_PTR_GET_DEFAULT(mainPurposeName_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose& setMainPurposeName(string mainPurposeName) { DARABONBA_PTR_SET_VALUE(mainPurposeName_, mainPurposeName) };


    // mainPurposeType Field Functions 
    bool hasMainPurposeType() const { return this->mainPurposeType_ != nullptr;};
    void deleteMainPurposeType() { this->mainPurposeType_ = nullptr;};
    inline string mainPurposeType() const { DARABONBA_PTR_GET_DEFAULT(mainPurposeType_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurpose& setMainPurposeType(string mainPurposeType) { DARABONBA_PTR_SET_VALUE(mainPurposeType_, mainPurposeType) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> mainPurposeDescription_ = nullptr;
    std::shared_ptr<vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigMainPurposeMainPurposeEnum>> mainPurposeEnum_ = nullptr;
    std::shared_ptr<string> mainPurposeName_ = nullptr;
    std::shared_ptr<string> mainPurposeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
