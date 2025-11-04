// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVEREQUESTRERANK_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVEREQUESTRERANK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class RetrieveRequestRerank : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveRequestRerank& obj) { 
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveRequestRerank& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
    };
    RetrieveRequestRerank() = default ;
    RetrieveRequestRerank(const RetrieveRequestRerank &) = default ;
    RetrieveRequestRerank(RetrieveRequestRerank &&) = default ;
    RetrieveRequestRerank(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveRequestRerank() = default ;
    RetrieveRequestRerank& operator=(const RetrieveRequestRerank &) = default ;
    RetrieveRequestRerank& operator=(RetrieveRequestRerank &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelName_ == nullptr; };
    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline RetrieveRequestRerank& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


  protected:
    // The name of the rank model. For more information, see [Create a knowledge base](https://www.alibabacloud.com/help/en/model-studio/user-guide/rag-knowledge-base). Valid values:
    // 
    // *   gte-rerank-hybrid: Recommended official model.
    // *   gte-rerank
    std::shared_ptr<string> modelName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
