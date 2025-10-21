// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOPICREQUESTBODYDATATOPICEXAMPLEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATETOPICREQUESTBODYDATATOPICEXAMPLEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class CreateTopicRequestBodyDataTopicExampleInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTopicRequestBodyDataTopicExampleInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ExampleType, exampleType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTopicRequestBodyDataTopicExampleInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ExampleType, exampleType_);
    };
    CreateTopicRequestBodyDataTopicExampleInfoList() = default ;
    CreateTopicRequestBodyDataTopicExampleInfoList(const CreateTopicRequestBodyDataTopicExampleInfoList &) = default ;
    CreateTopicRequestBodyDataTopicExampleInfoList(CreateTopicRequestBodyDataTopicExampleInfoList &&) = default ;
    CreateTopicRequestBodyDataTopicExampleInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTopicRequestBodyDataTopicExampleInfoList() = default ;
    CreateTopicRequestBodyDataTopicExampleInfoList& operator=(const CreateTopicRequestBodyDataTopicExampleInfoList &) = default ;
    CreateTopicRequestBodyDataTopicExampleInfoList& operator=(CreateTopicRequestBodyDataTopicExampleInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->exampleType_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateTopicRequestBodyDataTopicExampleInfoList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // exampleType Field Functions 
    bool hasExampleType() const { return this->exampleType_ != nullptr;};
    void deleteExampleType() { this->exampleType_ = nullptr;};
    inline int32_t exampleType() const { DARABONBA_PTR_GET_DEFAULT(exampleType_, 0) };
    inline CreateTopicRequestBodyDataTopicExampleInfoList& setExampleType(int32_t exampleType) { DARABONBA_PTR_SET_VALUE(exampleType_, exampleType) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<int32_t> exampleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
