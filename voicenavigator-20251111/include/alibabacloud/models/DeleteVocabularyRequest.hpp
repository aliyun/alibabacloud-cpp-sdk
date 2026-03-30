// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVOCABULARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVOCABULARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class DeleteVocabularyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVocabularyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(VocabularyId, vocabularyId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVocabularyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(VocabularyId, vocabularyId_);
    };
    DeleteVocabularyRequest() = default ;
    DeleteVocabularyRequest(const DeleteVocabularyRequest &) = default ;
    DeleteVocabularyRequest(DeleteVocabularyRequest &&) = default ;
    DeleteVocabularyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVocabularyRequest() = default ;
    DeleteVocabularyRequest& operator=(const DeleteVocabularyRequest &) = default ;
    DeleteVocabularyRequest& operator=(DeleteVocabularyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->vocabularyId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteVocabularyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // vocabularyId Field Functions 
    bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
    void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
    inline string getVocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
    inline DeleteVocabularyRequest& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> vocabularyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
