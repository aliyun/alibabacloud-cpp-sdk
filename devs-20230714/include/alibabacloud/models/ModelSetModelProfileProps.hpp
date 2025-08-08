// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELSETMODELPROFILEPROPS_HPP_
#define ALIBABACLOUD_MODELS_MODELSETMODELPROFILEPROPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ModelSetModelProfileProps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelSetModelProfileProps& obj) { 
      DARABONBA_PTR_TO_JSON(contextSize, contextSize_);
      DARABONBA_PTR_TO_JSON(llmMode, llmMode_);
    };
    friend void from_json(const Darabonba::Json& j, ModelSetModelProfileProps& obj) { 
      DARABONBA_PTR_FROM_JSON(contextSize, contextSize_);
      DARABONBA_PTR_FROM_JSON(llmMode, llmMode_);
    };
    ModelSetModelProfileProps() = default ;
    ModelSetModelProfileProps(const ModelSetModelProfileProps &) = default ;
    ModelSetModelProfileProps(ModelSetModelProfileProps &&) = default ;
    ModelSetModelProfileProps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelSetModelProfileProps() = default ;
    ModelSetModelProfileProps& operator=(const ModelSetModelProfileProps &) = default ;
    ModelSetModelProfileProps& operator=(ModelSetModelProfileProps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contextSize_ != nullptr
        && this->llmMode_ != nullptr; };
    // contextSize Field Functions 
    bool hasContextSize() const { return this->contextSize_ != nullptr;};
    void deleteContextSize() { this->contextSize_ = nullptr;};
    inline int64_t contextSize() const { DARABONBA_PTR_GET_DEFAULT(contextSize_, 0L) };
    inline ModelSetModelProfileProps& setContextSize(int64_t contextSize) { DARABONBA_PTR_SET_VALUE(contextSize_, contextSize) };


    // llmMode Field Functions 
    bool hasLlmMode() const { return this->llmMode_ != nullptr;};
    void deleteLlmMode() { this->llmMode_ = nullptr;};
    inline string llmMode() const { DARABONBA_PTR_GET_DEFAULT(llmMode_, "") };
    inline ModelSetModelProfileProps& setLlmMode(string llmMode) { DARABONBA_PTR_SET_VALUE(llmMode_, llmMode) };


  protected:
    std::shared_ptr<int64_t> contextSize_ = nullptr;
    std::shared_ptr<string> llmMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
