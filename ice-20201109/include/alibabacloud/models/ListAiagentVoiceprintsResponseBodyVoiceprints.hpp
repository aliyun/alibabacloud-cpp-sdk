// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIAGENTVOICEPRINTSRESPONSEBODYVOICEPRINTS_HPP_
#define ALIBABACLOUD_MODELS_LISTAIAGENTVOICEPRINTSRESPONSEBODYVOICEPRINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAIAgentVoiceprintsResponseBodyVoiceprints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIAgentVoiceprintsResponseBodyVoiceprints& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(VoiceprintId, voiceprintId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIAgentVoiceprintsResponseBodyVoiceprints& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(VoiceprintId, voiceprintId_);
    };
    ListAIAgentVoiceprintsResponseBodyVoiceprints() = default ;
    ListAIAgentVoiceprintsResponseBodyVoiceprints(const ListAIAgentVoiceprintsResponseBodyVoiceprints &) = default ;
    ListAIAgentVoiceprintsResponseBodyVoiceprints(ListAIAgentVoiceprintsResponseBodyVoiceprints &&) = default ;
    ListAIAgentVoiceprintsResponseBodyVoiceprints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIAgentVoiceprintsResponseBodyVoiceprints() = default ;
    ListAIAgentVoiceprintsResponseBodyVoiceprints& operator=(const ListAIAgentVoiceprintsResponseBodyVoiceprints &) = default ;
    ListAIAgentVoiceprintsResponseBodyVoiceprints& operator=(ListAIAgentVoiceprintsResponseBodyVoiceprints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gmtCreate_ != nullptr
        && this->gmtModified_ != nullptr && this->voiceprintId_ != nullptr; };
    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListAIAgentVoiceprintsResponseBodyVoiceprints& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListAIAgentVoiceprintsResponseBodyVoiceprints& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // voiceprintId Field Functions 
    bool hasVoiceprintId() const { return this->voiceprintId_ != nullptr;};
    void deleteVoiceprintId() { this->voiceprintId_ = nullptr;};
    inline string voiceprintId() const { DARABONBA_PTR_GET_DEFAULT(voiceprintId_, "") };
    inline ListAIAgentVoiceprintsResponseBodyVoiceprints& setVoiceprintId(string voiceprintId) { DARABONBA_PTR_SET_VALUE(voiceprintId_, voiceprintId) };


  protected:
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> voiceprintId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
