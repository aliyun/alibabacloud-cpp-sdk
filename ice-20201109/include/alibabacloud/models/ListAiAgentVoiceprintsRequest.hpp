// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIAGENTVOICEPRINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAIAGENTVOICEPRINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAIAgentVoiceprintsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIAgentVoiceprintsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(VoiceprintId, voiceprintId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIAgentVoiceprintsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(VoiceprintId, voiceprintId_);
    };
    ListAIAgentVoiceprintsRequest() = default ;
    ListAIAgentVoiceprintsRequest(const ListAIAgentVoiceprintsRequest &) = default ;
    ListAIAgentVoiceprintsRequest(ListAIAgentVoiceprintsRequest &&) = default ;
    ListAIAgentVoiceprintsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIAgentVoiceprintsRequest() = default ;
    ListAIAgentVoiceprintsRequest& operator=(const ListAIAgentVoiceprintsRequest &) = default ;
    ListAIAgentVoiceprintsRequest& operator=(ListAIAgentVoiceprintsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->voiceprintId_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAIAgentVoiceprintsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAIAgentVoiceprintsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // voiceprintId Field Functions 
    bool hasVoiceprintId() const { return this->voiceprintId_ != nullptr;};
    void deleteVoiceprintId() { this->voiceprintId_ = nullptr;};
    inline string voiceprintId() const { DARABONBA_PTR_GET_DEFAULT(voiceprintId_, "") };
    inline ListAIAgentVoiceprintsRequest& setVoiceprintId(string voiceprintId) { DARABONBA_PTR_SET_VALUE(voiceprintId_, voiceprintId) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Value values: [1,100].
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // A unique identifier for the voiceprint. This parameter is optional. If provided, only the information for that ID is returned. If not specified, all voiceprints under the account are returned.
    std::shared_ptr<string> voiceprintId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
