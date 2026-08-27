// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPSCENERECIPIENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPSCENERECIPIENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class DeleteAppSceneRecipientRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppSceneRecipientRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(RecipientId, recipientId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppSceneRecipientRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(RecipientId, recipientId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    DeleteAppSceneRecipientRequest() = default ;
    DeleteAppSceneRecipientRequest(const DeleteAppSceneRecipientRequest &) = default ;
    DeleteAppSceneRecipientRequest(DeleteAppSceneRecipientRequest &&) = default ;
    DeleteAppSceneRecipientRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppSceneRecipientRequest() = default ;
    DeleteAppSceneRecipientRequest& operator=(const DeleteAppSceneRecipientRequest &) = default ;
    DeleteAppSceneRecipientRequest& operator=(DeleteAppSceneRecipientRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->recipientId_ == nullptr && this->sceneId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline DeleteAppSceneRecipientRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // recipientId Field Functions 
    bool hasRecipientId() const { return this->recipientId_ != nullptr;};
    void deleteRecipientId() { this->recipientId_ = nullptr;};
    inline string getRecipientId() const { DARABONBA_PTR_GET_DEFAULT(recipientId_, "") };
    inline DeleteAppSceneRecipientRequest& setRecipientId(string recipientId) { DARABONBA_PTR_SET_VALUE(recipientId_, recipientId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline DeleteAppSceneRecipientRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // The business ID.
    shared_ptr<string> bizId_ {};
    // The recipient ID.
    shared_ptr<string> recipientId_ {};
    // The scenario ID.
    shared_ptr<string> sceneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
