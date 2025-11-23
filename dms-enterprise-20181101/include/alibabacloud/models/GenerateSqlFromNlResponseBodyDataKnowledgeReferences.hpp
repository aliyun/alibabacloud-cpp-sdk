// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATESQLFROMNLRESPONSEBODYDATAKNOWLEDGEREFERENCES_HPP_
#define ALIBABACLOUD_MODELS_GENERATESQLFROMNLRESPONSEBODYDATAKNOWLEDGEREFERENCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GenerateSqlFromNLResponseBodyDataKnowledgeReferences : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateSqlFromNLResponseBodyDataKnowledgeReferences& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateSqlFromNLResponseBodyDataKnowledgeReferences& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GenerateSqlFromNLResponseBodyDataKnowledgeReferences() = default ;
    GenerateSqlFromNLResponseBodyDataKnowledgeReferences(const GenerateSqlFromNLResponseBodyDataKnowledgeReferences &) = default ;
    GenerateSqlFromNLResponseBodyDataKnowledgeReferences(GenerateSqlFromNLResponseBodyDataKnowledgeReferences &&) = default ;
    GenerateSqlFromNLResponseBodyDataKnowledgeReferences(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateSqlFromNLResponseBodyDataKnowledgeReferences() = default ;
    GenerateSqlFromNLResponseBodyDataKnowledgeReferences& operator=(const GenerateSqlFromNLResponseBodyDataKnowledgeReferences &) = default ;
    GenerateSqlFromNLResponseBodyDataKnowledgeReferences& operator=(GenerateSqlFromNLResponseBodyDataKnowledgeReferences &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->level_ == nullptr && return this->name_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GenerateSqlFromNLResponseBodyDataKnowledgeReferences& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GenerateSqlFromNLResponseBodyDataKnowledgeReferences& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GenerateSqlFromNLResponseBodyDataKnowledgeReferences& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
