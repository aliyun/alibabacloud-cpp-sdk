// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROMPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROMPTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class UpdatePromptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePromptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizTags, bizTags_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_ANY_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(PromptKey, promptKey_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePromptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizTags, bizTags_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_ANY_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(PromptKey, promptKey_);
    };
    UpdatePromptRequest() = default ;
    UpdatePromptRequest(const UpdatePromptRequest &) = default ;
    UpdatePromptRequest(UpdatePromptRequest &&) = default ;
    UpdatePromptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePromptRequest() = default ;
    UpdatePromptRequest& operator=(const UpdatePromptRequest &) = default ;
    UpdatePromptRequest& operator=(UpdatePromptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizTags_ == nullptr
        && this->description_ == nullptr && this->labels_ == nullptr && this->namespaceId_ == nullptr && this->promptKey_ == nullptr; };
    // bizTags Field Functions 
    bool hasBizTags() const { return this->bizTags_ != nullptr;};
    void deleteBizTags() { this->bizTags_ = nullptr;};
    inline const vector<string> & getBizTags() const { DARABONBA_PTR_GET_CONST(bizTags_, vector<string>) };
    inline vector<string> getBizTags() { DARABONBA_PTR_GET(bizTags_, vector<string>) };
    inline UpdatePromptRequest& setBizTags(const vector<string> & bizTags) { DARABONBA_PTR_SET_VALUE(bizTags_, bizTags) };
    inline UpdatePromptRequest& setBizTags(vector<string> && bizTags) { DARABONBA_PTR_SET_RVALUE(bizTags_, bizTags) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdatePromptRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline     const Darabonba::Json & getLabels() const { DARABONBA_GET(labels_) };
    Darabonba::Json & getLabels() { DARABONBA_GET(labels_) };
    inline UpdatePromptRequest& setLabels(const Darabonba::Json & labels) { DARABONBA_SET_VALUE(labels_, labels) };
    inline UpdatePromptRequest& setLabels(Darabonba::Json && labels) { DARABONBA_SET_RVALUE(labels_, labels) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline UpdatePromptRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // promptKey Field Functions 
    bool hasPromptKey() const { return this->promptKey_ != nullptr;};
    void deletePromptKey() { this->promptKey_ = nullptr;};
    inline string getPromptKey() const { DARABONBA_PTR_GET_DEFAULT(promptKey_, "") };
    inline UpdatePromptRequest& setPromptKey(string promptKey) { DARABONBA_PTR_SET_VALUE(promptKey_, promptKey) };


  protected:
    shared_ptr<vector<string>> bizTags_ {};
    shared_ptr<string> description_ {};
    Darabonba::Json labels_ {};
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // This parameter is required.
    shared_ptr<string> promptKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
