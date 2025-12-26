// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUESTINDEXCOLUMNCONFIGCOLUMNDEFINITIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUESTINDEXCOLUMNCONFIGCOLUMNDEFINITIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
    };
    CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions() = default ;
    CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions(const CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions &) = default ;
    CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions(CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions &&) = default ;
    CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions() = default ;
    CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions& operator=(const CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions &) = default ;
    CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions& operator=(CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CreateKnowledgeBaseRequestIndexColumnConfigColumnDefinitions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    // 列Key
    std::shared_ptr<string> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
