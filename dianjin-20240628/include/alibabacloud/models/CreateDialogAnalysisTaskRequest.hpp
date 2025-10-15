// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIALOGANALYSISTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIALOGANALYSISTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDialogAnalysisTaskRequestConversationList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateDialogAnalysisTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDialogAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(analysisNodes, analysisNodes_);
      DARABONBA_PTR_TO_JSON(conversationList, conversationList_);
      DARABONBA_ANY_TO_JSON(metaData, metaData_);
      DARABONBA_PTR_TO_JSON(playCode, playCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDialogAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(analysisNodes, analysisNodes_);
      DARABONBA_PTR_FROM_JSON(conversationList, conversationList_);
      DARABONBA_ANY_FROM_JSON(metaData, metaData_);
      DARABONBA_PTR_FROM_JSON(playCode, playCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateDialogAnalysisTaskRequest() = default ;
    CreateDialogAnalysisTaskRequest(const CreateDialogAnalysisTaskRequest &) = default ;
    CreateDialogAnalysisTaskRequest(CreateDialogAnalysisTaskRequest &&) = default ;
    CreateDialogAnalysisTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDialogAnalysisTaskRequest() = default ;
    CreateDialogAnalysisTaskRequest& operator=(const CreateDialogAnalysisTaskRequest &) = default ;
    CreateDialogAnalysisTaskRequest& operator=(CreateDialogAnalysisTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisNodes_ == nullptr
        && return this->conversationList_ == nullptr && return this->metaData_ == nullptr && return this->playCode_ == nullptr && return this->requestId_ == nullptr; };
    // analysisNodes Field Functions 
    bool hasAnalysisNodes() const { return this->analysisNodes_ != nullptr;};
    void deleteAnalysisNodes() { this->analysisNodes_ = nullptr;};
    inline const vector<string> & analysisNodes() const { DARABONBA_PTR_GET_CONST(analysisNodes_, vector<string>) };
    inline vector<string> analysisNodes() { DARABONBA_PTR_GET(analysisNodes_, vector<string>) };
    inline CreateDialogAnalysisTaskRequest& setAnalysisNodes(const vector<string> & analysisNodes) { DARABONBA_PTR_SET_VALUE(analysisNodes_, analysisNodes) };
    inline CreateDialogAnalysisTaskRequest& setAnalysisNodes(vector<string> && analysisNodes) { DARABONBA_PTR_SET_RVALUE(analysisNodes_, analysisNodes) };


    // conversationList Field Functions 
    bool hasConversationList() const { return this->conversationList_ != nullptr;};
    void deleteConversationList() { this->conversationList_ = nullptr;};
    inline const vector<CreateDialogAnalysisTaskRequestConversationList> & conversationList() const { DARABONBA_PTR_GET_CONST(conversationList_, vector<CreateDialogAnalysisTaskRequestConversationList>) };
    inline vector<CreateDialogAnalysisTaskRequestConversationList> conversationList() { DARABONBA_PTR_GET(conversationList_, vector<CreateDialogAnalysisTaskRequestConversationList>) };
    inline CreateDialogAnalysisTaskRequest& setConversationList(const vector<CreateDialogAnalysisTaskRequestConversationList> & conversationList) { DARABONBA_PTR_SET_VALUE(conversationList_, conversationList) };
    inline CreateDialogAnalysisTaskRequest& setConversationList(vector<CreateDialogAnalysisTaskRequestConversationList> && conversationList) { DARABONBA_PTR_SET_RVALUE(conversationList_, conversationList) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline     const Darabonba::Json & metaData() const { DARABONBA_GET(metaData_) };
    Darabonba::Json & metaData() { DARABONBA_GET(metaData_) };
    inline CreateDialogAnalysisTaskRequest& setMetaData(const Darabonba::Json & metaData) { DARABONBA_SET_VALUE(metaData_, metaData) };
    inline CreateDialogAnalysisTaskRequest& setMetaData(Darabonba::Json & metaData) { DARABONBA_SET_RVALUE(metaData_, metaData) };


    // playCode Field Functions 
    bool hasPlayCode() const { return this->playCode_ != nullptr;};
    void deletePlayCode() { this->playCode_ = nullptr;};
    inline string playCode() const { DARABONBA_PTR_GET_DEFAULT(playCode_, "") };
    inline CreateDialogAnalysisTaskRequest& setPlayCode(string playCode) { DARABONBA_PTR_SET_VALUE(playCode_, playCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDialogAnalysisTaskRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<string>> analysisNodes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<CreateDialogAnalysisTaskRequestConversationList>> conversationList_ = nullptr;
    Darabonba::Json metaData_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> playCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
