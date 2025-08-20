// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVOCABREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVOCABREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class GetVocabRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVocabRequest& obj) { 
      DARABONBA_PTR_TO_JSON(vocabularyId, vocabularyId_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVocabRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(vocabularyId, vocabularyId_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    GetVocabRequest() = default ;
    GetVocabRequest(const GetVocabRequest &) = default ;
    GetVocabRequest(GetVocabRequest &&) = default ;
    GetVocabRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVocabRequest() = default ;
    GetVocabRequest& operator=(const GetVocabRequest &) = default ;
    GetVocabRequest& operator=(GetVocabRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vocabularyId_ != nullptr
        && this->workspaceId_ != nullptr; };
    // vocabularyId Field Functions 
    bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
    void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
    inline string vocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
    inline GetVocabRequest& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetVocabRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> vocabularyId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
