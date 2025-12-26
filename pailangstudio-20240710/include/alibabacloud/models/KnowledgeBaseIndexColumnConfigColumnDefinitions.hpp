// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGEBASEINDEXCOLUMNCONFIGCOLUMNDEFINITIONS_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGEBASEINDEXCOLUMNCONFIGCOLUMNDEFINITIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class KnowledgeBaseIndexColumnConfigColumnDefinitions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KnowledgeBaseIndexColumnConfigColumnDefinitions& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
    };
    friend void from_json(const Darabonba::Json& j, KnowledgeBaseIndexColumnConfigColumnDefinitions& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
    };
    KnowledgeBaseIndexColumnConfigColumnDefinitions() = default ;
    KnowledgeBaseIndexColumnConfigColumnDefinitions(const KnowledgeBaseIndexColumnConfigColumnDefinitions &) = default ;
    KnowledgeBaseIndexColumnConfigColumnDefinitions(KnowledgeBaseIndexColumnConfigColumnDefinitions &&) = default ;
    KnowledgeBaseIndexColumnConfigColumnDefinitions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KnowledgeBaseIndexColumnConfigColumnDefinitions() = default ;
    KnowledgeBaseIndexColumnConfigColumnDefinitions& operator=(const KnowledgeBaseIndexColumnConfigColumnDefinitions &) = default ;
    KnowledgeBaseIndexColumnConfigColumnDefinitions& operator=(KnowledgeBaseIndexColumnConfigColumnDefinitions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline KnowledgeBaseIndexColumnConfigColumnDefinitions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    // 列Key
    std::shared_ptr<string> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
