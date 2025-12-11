// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUALITYCHECKTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUALITYCHECKTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateQualityCheckTaskRequestConversationList.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateQualityCheckTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQualityCheckTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(conversationList, conversationList_);
      DARABONBA_PTR_TO_JSON(gmtService, gmtService_);
      DARABONBA_PTR_TO_JSON(metaData, metaData_);
      DARABONBA_PTR_TO_JSON(qualityGroup, qualityGroup_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQualityCheckTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(conversationList, conversationList_);
      DARABONBA_PTR_FROM_JSON(gmtService, gmtService_);
      DARABONBA_PTR_FROM_JSON(metaData, metaData_);
      DARABONBA_PTR_FROM_JSON(qualityGroup, qualityGroup_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateQualityCheckTaskRequest() = default ;
    CreateQualityCheckTaskRequest(const CreateQualityCheckTaskRequest &) = default ;
    CreateQualityCheckTaskRequest(CreateQualityCheckTaskRequest &&) = default ;
    CreateQualityCheckTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQualityCheckTaskRequest() = default ;
    CreateQualityCheckTaskRequest& operator=(const CreateQualityCheckTaskRequest &) = default ;
    CreateQualityCheckTaskRequest& operator=(CreateQualityCheckTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conversationList_ == nullptr
        && return this->gmtService_ == nullptr && return this->metaData_ == nullptr && return this->qualityGroup_ == nullptr && return this->requestId_ == nullptr && return this->sceneCode_ == nullptr
        && return this->type_ == nullptr; };
    // conversationList Field Functions 
    bool hasConversationList() const { return this->conversationList_ != nullptr;};
    void deleteConversationList() { this->conversationList_ = nullptr;};
    inline const CreateQualityCheckTaskRequestConversationList & conversationList() const { DARABONBA_PTR_GET_CONST(conversationList_, CreateQualityCheckTaskRequestConversationList) };
    inline CreateQualityCheckTaskRequestConversationList conversationList() { DARABONBA_PTR_GET(conversationList_, CreateQualityCheckTaskRequestConversationList) };
    inline CreateQualityCheckTaskRequest& setConversationList(const CreateQualityCheckTaskRequestConversationList & conversationList) { DARABONBA_PTR_SET_VALUE(conversationList_, conversationList) };
    inline CreateQualityCheckTaskRequest& setConversationList(CreateQualityCheckTaskRequestConversationList && conversationList) { DARABONBA_PTR_SET_RVALUE(conversationList_, conversationList) };


    // gmtService Field Functions 
    bool hasGmtService() const { return this->gmtService_ != nullptr;};
    void deleteGmtService() { this->gmtService_ = nullptr;};
    inline string gmtService() const { DARABONBA_PTR_GET_DEFAULT(gmtService_, "") };
    inline CreateQualityCheckTaskRequest& setGmtService(string gmtService) { DARABONBA_PTR_SET_VALUE(gmtService_, gmtService) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline const map<string, string> & metaData() const { DARABONBA_PTR_GET_CONST(metaData_, map<string, string>) };
    inline map<string, string> metaData() { DARABONBA_PTR_GET(metaData_, map<string, string>) };
    inline CreateQualityCheckTaskRequest& setMetaData(const map<string, string> & metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };
    inline CreateQualityCheckTaskRequest& setMetaData(map<string, string> && metaData) { DARABONBA_PTR_SET_RVALUE(metaData_, metaData) };


    // qualityGroup Field Functions 
    bool hasQualityGroup() const { return this->qualityGroup_ != nullptr;};
    void deleteQualityGroup() { this->qualityGroup_ = nullptr;};
    inline const vector<string> & qualityGroup() const { DARABONBA_PTR_GET_CONST(qualityGroup_, vector<string>) };
    inline vector<string> qualityGroup() { DARABONBA_PTR_GET(qualityGroup_, vector<string>) };
    inline CreateQualityCheckTaskRequest& setQualityGroup(const vector<string> & qualityGroup) { DARABONBA_PTR_SET_VALUE(qualityGroup_, qualityGroup) };
    inline CreateQualityCheckTaskRequest& setQualityGroup(vector<string> && qualityGroup) { DARABONBA_PTR_SET_RVALUE(qualityGroup_, qualityGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateQualityCheckTaskRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline CreateQualityCheckTaskRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateQualityCheckTaskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<CreateQualityCheckTaskRequestConversationList> conversationList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> gmtService_ = nullptr;
    std::shared_ptr<map<string, string>> metaData_ = nullptr;
    std::shared_ptr<vector<string>> qualityGroup_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> sceneCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
