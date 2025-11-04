// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTEXTGENERATEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTEXTGENERATEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTextGenerateJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTextGenerateJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GenerateConfig, generateConfig_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTextGenerateJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GenerateConfig, generateConfig_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitTextGenerateJobRequest() = default ;
    SubmitTextGenerateJobRequest(const SubmitTextGenerateJobRequest &) = default ;
    SubmitTextGenerateJobRequest(SubmitTextGenerateJobRequest &&) = default ;
    SubmitTextGenerateJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTextGenerateJobRequest() = default ;
    SubmitTextGenerateJobRequest& operator=(const SubmitTextGenerateJobRequest &) = default ;
    SubmitTextGenerateJobRequest& operator=(SubmitTextGenerateJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->generateConfig_ == nullptr && return this->title_ == nullptr && return this->type_ == nullptr && return this->userData_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SubmitTextGenerateJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // generateConfig Field Functions 
    bool hasGenerateConfig() const { return this->generateConfig_ != nullptr;};
    void deleteGenerateConfig() { this->generateConfig_ = nullptr;};
    inline string generateConfig() const { DARABONBA_PTR_GET_DEFAULT(generateConfig_, "") };
    inline SubmitTextGenerateJobRequest& setGenerateConfig(string generateConfig) { DARABONBA_PTR_SET_VALUE(generateConfig_, generateConfig) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitTextGenerateJobRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SubmitTextGenerateJobRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitTextGenerateJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The job description, which can be up to 1,024 bytes in length and must be encoded in UTF-8.
    std::shared_ptr<string> description_ = nullptr;
    // The text generation configurations, including keywords and the requirements for the word count and number of output copies.
    std::shared_ptr<string> generateConfig_ = nullptr;
    // The job title.
    // 
    // The job title can be up to 128 bytes in length.
    // 
    // The value must be encoded in UTF-8.
    std::shared_ptr<string> title_ = nullptr;
    // The job type.
    // 
    // Valid values:
    // 
    // *   MarketingCopy: the marketing copy.
    // *   Title: the short video title.
    std::shared_ptr<string> type_ = nullptr;
    // The user-defined data in the JSON format, which can be up to 512 bytes in length. You can specify a custom callback URL. For more information, see [Configure a callback upon editing completion](https://help.aliyun.com/document_detail/451631.html).
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
