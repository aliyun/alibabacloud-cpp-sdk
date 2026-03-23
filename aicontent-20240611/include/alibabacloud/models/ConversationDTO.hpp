// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERSATIONDTO_HPP_
#define ALIBABACLOUD_MODELS_CONVERSATIONDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ConversationDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConversationDTO& obj) { 
      DARABONBA_PTR_TO_JSON(chatData, chatData_);
      DARABONBA_PTR_TO_JSON(deleteTag, deleteTag_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(messageCount, messageCount_);
      DARABONBA_PTR_TO_JSON(modelIds, modelIds_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ConversationDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(chatData, chatData_);
      DARABONBA_PTR_FROM_JSON(deleteTag, deleteTag_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(messageCount, messageCount_);
      DARABONBA_PTR_FROM_JSON(modelIds, modelIds_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    ConversationDTO() = default ;
    ConversationDTO(const ConversationDTO &) = default ;
    ConversationDTO(ConversationDTO &&) = default ;
    ConversationDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConversationDTO() = default ;
    ConversationDTO& operator=(const ConversationDTO &) = default ;
    ConversationDTO& operator=(ConversationDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chatData_ == nullptr
        && this->deleteTag_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->messageCount_ == nullptr
        && this->modelIds_ == nullptr && this->title_ == nullptr; };
    // chatData Field Functions 
    bool hasChatData() const { return this->chatData_ != nullptr;};
    void deleteChatData() { this->chatData_ = nullptr;};
    inline string getChatData() const { DARABONBA_PTR_GET_DEFAULT(chatData_, "") };
    inline ConversationDTO& setChatData(string chatData) { DARABONBA_PTR_SET_VALUE(chatData_, chatData) };


    // deleteTag Field Functions 
    bool hasDeleteTag() const { return this->deleteTag_ != nullptr;};
    void deleteDeleteTag() { this->deleteTag_ = nullptr;};
    inline int32_t getDeleteTag() const { DARABONBA_PTR_GET_DEFAULT(deleteTag_, 0) };
    inline ConversationDTO& setDeleteTag(int32_t deleteTag) { DARABONBA_PTR_SET_VALUE(deleteTag_, deleteTag) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ConversationDTO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ConversationDTO& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ConversationDTO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // messageCount Field Functions 
    bool hasMessageCount() const { return this->messageCount_ != nullptr;};
    void deleteMessageCount() { this->messageCount_ = nullptr;};
    inline int32_t getMessageCount() const { DARABONBA_PTR_GET_DEFAULT(messageCount_, 0) };
    inline ConversationDTO& setMessageCount(int32_t messageCount) { DARABONBA_PTR_SET_VALUE(messageCount_, messageCount) };


    // modelIds Field Functions 
    bool hasModelIds() const { return this->modelIds_ != nullptr;};
    void deleteModelIds() { this->modelIds_ = nullptr;};
    inline string getModelIds() const { DARABONBA_PTR_GET_DEFAULT(modelIds_, "") };
    inline ConversationDTO& setModelIds(string modelIds) { DARABONBA_PTR_SET_VALUE(modelIds_, modelIds) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ConversationDTO& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> chatData_ {};
    shared_ptr<int32_t> deleteTag_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    // ID
    shared_ptr<int64_t> id_ {};
    shared_ptr<int32_t> messageCount_ {};
    shared_ptr<string> modelIds_ {};
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
