// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVEREQUESTREWRITE_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVEREQUESTREWRITE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class RetrieveRequestRewrite : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveRequestRewrite& obj) { 
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveRequestRewrite& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
    };
    RetrieveRequestRewrite() = default ;
    RetrieveRequestRewrite(const RetrieveRequestRewrite &) = default ;
    RetrieveRequestRewrite(RetrieveRequestRewrite &&) = default ;
    RetrieveRequestRewrite(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveRequestRewrite() = default ;
    RetrieveRequestRewrite& operator=(const RetrieveRequestRewrite &) = default ;
    RetrieveRequestRewrite& operator=(RetrieveRequestRewrite &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelName_ == nullptr; };
    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline RetrieveRequestRewrite& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


  protected:
    // Conversation rewriting model name. The query rewriting model automatically adjusts the original prompt based on the context to improve retrieval performance. Valid value:
    // 
    // *   conv-rewrite-qwen-1.8b
    // 
    // By default, this parameter is left empty, which means conv-rewrite-qwen-1.8b is used.
    std::shared_ptr<string> modelName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
