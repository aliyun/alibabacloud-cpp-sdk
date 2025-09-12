// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSCRIPTIONPHRASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSCRIPTIONPHRASESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTranscriptionPhrasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTranscriptionPhrasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(WordWeights, wordWeights_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTranscriptionPhrasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(WordWeights, wordWeights_);
    };
    CreateTranscriptionPhrasesRequest() = default ;
    CreateTranscriptionPhrasesRequest(const CreateTranscriptionPhrasesRequest &) = default ;
    CreateTranscriptionPhrasesRequest(CreateTranscriptionPhrasesRequest &&) = default ;
    CreateTranscriptionPhrasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTranscriptionPhrasesRequest() = default ;
    CreateTranscriptionPhrasesRequest& operator=(const CreateTranscriptionPhrasesRequest &) = default ;
    CreateTranscriptionPhrasesRequest& operator=(CreateTranscriptionPhrasesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->name_ != nullptr && this->wordWeights_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTranscriptionPhrasesRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTranscriptionPhrasesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // wordWeights Field Functions 
    bool hasWordWeights() const { return this->wordWeights_ != nullptr;};
    void deleteWordWeights() { this->wordWeights_ = nullptr;};
    inline string wordWeights() const { DARABONBA_PTR_GET_DEFAULT(wordWeights_, "") };
    inline CreateTranscriptionPhrasesRequest& setWordWeights(string wordWeights) { DARABONBA_PTR_SET_VALUE(wordWeights_, wordWeights) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> wordWeights_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
