// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUESTDATASOURCES_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUESTDATASOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class CreateKnowledgeBaseRequestDataSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeBaseRequestDataSources& obj) { 
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeBaseRequestDataSources& obj) { 
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    CreateKnowledgeBaseRequestDataSources() = default ;
    CreateKnowledgeBaseRequestDataSources(const CreateKnowledgeBaseRequestDataSources &) = default ;
    CreateKnowledgeBaseRequestDataSources(CreateKnowledgeBaseRequestDataSources &&) = default ;
    CreateKnowledgeBaseRequestDataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeBaseRequestDataSources() = default ;
    CreateKnowledgeBaseRequestDataSources& operator=(const CreateKnowledgeBaseRequestDataSources &) = default ;
    CreateKnowledgeBaseRequestDataSources& operator=(CreateKnowledgeBaseRequestDataSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->uri_ == nullptr; };
    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline CreateKnowledgeBaseRequestDataSources& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    // 统一资源识别码
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
