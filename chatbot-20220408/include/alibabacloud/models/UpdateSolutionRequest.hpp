// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESOLUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESOLUTIONREQUEST_HPP_
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
  class UpdateSolutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSolutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(PerspectiveCodes, perspectiveCodes_);
      DARABONBA_PTR_TO_JSON(SolutionId, solutionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSolutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(PerspectiveCodes, perspectiveCodes_);
      DARABONBA_PTR_FROM_JSON(SolutionId, solutionId_);
    };
    UpdateSolutionRequest() = default ;
    UpdateSolutionRequest(const UpdateSolutionRequest &) = default ;
    UpdateSolutionRequest(UpdateSolutionRequest &&) = default ;
    UpdateSolutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSolutionRequest() = default ;
    UpdateSolutionRequest& operator=(const UpdateSolutionRequest &) = default ;
    UpdateSolutionRequest& operator=(UpdateSolutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->content_ == nullptr && return this->contentType_ == nullptr && return this->perspectiveCodes_ == nullptr && return this->solutionId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline UpdateSolutionRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateSolutionRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline int32_t contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, 0) };
    inline UpdateSolutionRequest& setContentType(int32_t contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // perspectiveCodes Field Functions 
    bool hasPerspectiveCodes() const { return this->perspectiveCodes_ != nullptr;};
    void deletePerspectiveCodes() { this->perspectiveCodes_ = nullptr;};
    inline const vector<string> & perspectiveCodes() const { DARABONBA_PTR_GET_CONST(perspectiveCodes_, vector<string>) };
    inline vector<string> perspectiveCodes() { DARABONBA_PTR_GET(perspectiveCodes_, vector<string>) };
    inline UpdateSolutionRequest& setPerspectiveCodes(const vector<string> & perspectiveCodes) { DARABONBA_PTR_SET_VALUE(perspectiveCodes_, perspectiveCodes) };
    inline UpdateSolutionRequest& setPerspectiveCodes(vector<string> && perspectiveCodes) { DARABONBA_PTR_SET_RVALUE(perspectiveCodes_, perspectiveCodes) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline int64_t solutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, 0L) };
    inline UpdateSolutionRequest& setSolutionId(int64_t solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<int32_t> contentType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> perspectiveCodes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> solutionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
