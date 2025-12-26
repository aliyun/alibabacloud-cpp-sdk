// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKNOWLEDGEBASERESPONSEBODYINDEXCOLUMNCONFIGCONTENTCOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_GETKNOWLEDGEBASERESPONSEBODYINDEXCOLUMNCONFIGCONTENTCOLUMNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
    };
    friend void from_json(const Darabonba::Json& j, GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
    };
    GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns() = default ;
    GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns(const GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns &) = default ;
    GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns(GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns &&) = default ;
    GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns() = default ;
    GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns& operator=(const GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns &) = default ;
    GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns& operator=(GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetKnowledgeBaseResponseBodyIndexColumnConfigContentColumns& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    // 列Key
    std::shared_ptr<string> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
