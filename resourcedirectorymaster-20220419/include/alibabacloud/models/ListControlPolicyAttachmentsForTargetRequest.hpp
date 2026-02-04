// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTROLPOLICYATTACHMENTSFORTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTROLPOLICYATTACHMENTSFORTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListControlPolicyAttachmentsForTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListControlPolicyAttachmentsForTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
    };
    friend void from_json(const Darabonba::Json& j, ListControlPolicyAttachmentsForTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
    };
    ListControlPolicyAttachmentsForTargetRequest() = default ;
    ListControlPolicyAttachmentsForTargetRequest(const ListControlPolicyAttachmentsForTargetRequest &) = default ;
    ListControlPolicyAttachmentsForTargetRequest(ListControlPolicyAttachmentsForTargetRequest &&) = default ;
    ListControlPolicyAttachmentsForTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListControlPolicyAttachmentsForTargetRequest() = default ;
    ListControlPolicyAttachmentsForTargetRequest& operator=(const ListControlPolicyAttachmentsForTargetRequest &) = default ;
    ListControlPolicyAttachmentsForTargetRequest& operator=(ListControlPolicyAttachmentsForTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->language_ == nullptr
        && this->targetId_ == nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListControlPolicyAttachmentsForTargetRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline ListControlPolicyAttachmentsForTargetRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


  protected:
    // The language in which you want to return the descriptions of the access control policies. Valid values:
    // 
    // *   zh-CN (default value): Chinese
    // *   en: English
    // *   ja: Japanese
    // 
    // > This parameter is valid only for system access control policies.
    shared_ptr<string> language_ {};
    // The ID of the object whose access control policies you want to query. Access control policies can be attached to the following objects:
    // 
    // *   Root folder
    // *   Subfolders of the Root folder
    // *   Members
    // 
    // This parameter is required.
    shared_ptr<string> targetId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
