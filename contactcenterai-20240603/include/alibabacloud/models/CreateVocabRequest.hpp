// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVOCABREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVOCABREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateVocabRequestWordWeightList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class CreateVocabRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVocabRequest& obj) { 
      DARABONBA_PTR_TO_JSON(audioModelCode, audioModelCode_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(wordWeightList, wordWeightList_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVocabRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(audioModelCode, audioModelCode_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(wordWeightList, wordWeightList_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    CreateVocabRequest() = default ;
    CreateVocabRequest(const CreateVocabRequest &) = default ;
    CreateVocabRequest(CreateVocabRequest &&) = default ;
    CreateVocabRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVocabRequest() = default ;
    CreateVocabRequest& operator=(const CreateVocabRequest &) = default ;
    CreateVocabRequest& operator=(CreateVocabRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioModelCode_ != nullptr
        && this->description_ != nullptr && this->name_ != nullptr && this->wordWeightList_ != nullptr && this->workspaceId_ != nullptr; };
    // audioModelCode Field Functions 
    bool hasAudioModelCode() const { return this->audioModelCode_ != nullptr;};
    void deleteAudioModelCode() { this->audioModelCode_ = nullptr;};
    inline string audioModelCode() const { DARABONBA_PTR_GET_DEFAULT(audioModelCode_, "") };
    inline CreateVocabRequest& setAudioModelCode(string audioModelCode) { DARABONBA_PTR_SET_VALUE(audioModelCode_, audioModelCode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVocabRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateVocabRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // wordWeightList Field Functions 
    bool hasWordWeightList() const { return this->wordWeightList_ != nullptr;};
    void deleteWordWeightList() { this->wordWeightList_ = nullptr;};
    inline const vector<CreateVocabRequestWordWeightList> & wordWeightList() const { DARABONBA_PTR_GET_CONST(wordWeightList_, vector<CreateVocabRequestWordWeightList>) };
    inline vector<CreateVocabRequestWordWeightList> wordWeightList() { DARABONBA_PTR_GET(wordWeightList_, vector<CreateVocabRequestWordWeightList>) };
    inline CreateVocabRequest& setWordWeightList(const vector<CreateVocabRequestWordWeightList> & wordWeightList) { DARABONBA_PTR_SET_VALUE(wordWeightList_, wordWeightList) };
    inline CreateVocabRequest& setWordWeightList(vector<CreateVocabRequestWordWeightList> && wordWeightList) { DARABONBA_PTR_SET_RVALUE(wordWeightList_, wordWeightList) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateVocabRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> audioModelCode_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<CreateVocabRequestWordWeightList>> wordWeightList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
