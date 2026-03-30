// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTVOCABULARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTVOCABULARYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class ExportVocabularyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportVocabularyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(VocabularyIds, vocabularyIds_);
    };
    friend void from_json(const Darabonba::Json& j, ExportVocabularyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(VocabularyIds, vocabularyIds_);
    };
    ExportVocabularyRequest() = default ;
    ExportVocabularyRequest(const ExportVocabularyRequest &) = default ;
    ExportVocabularyRequest(ExportVocabularyRequest &&) = default ;
    ExportVocabularyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportVocabularyRequest() = default ;
    ExportVocabularyRequest& operator=(const ExportVocabularyRequest &) = default ;
    ExportVocabularyRequest& operator=(ExportVocabularyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->vocabularyIds_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ExportVocabularyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // vocabularyIds Field Functions 
    bool hasVocabularyIds() const { return this->vocabularyIds_ != nullptr;};
    void deleteVocabularyIds() { this->vocabularyIds_ = nullptr;};
    inline const vector<string> & getVocabularyIds() const { DARABONBA_PTR_GET_CONST(vocabularyIds_, vector<string>) };
    inline vector<string> getVocabularyIds() { DARABONBA_PTR_GET(vocabularyIds_, vector<string>) };
    inline ExportVocabularyRequest& setVocabularyIds(const vector<string> & vocabularyIds) { DARABONBA_PTR_SET_VALUE(vocabularyIds_, vocabularyIds) };
    inline ExportVocabularyRequest& setVocabularyIds(vector<string> && vocabularyIds) { DARABONBA_PTR_SET_RVALUE(vocabularyIds_, vocabularyIds) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<vector<string>> vocabularyIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
