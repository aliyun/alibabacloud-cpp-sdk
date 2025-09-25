// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNLIBRARYCHATGENERATIONREQUESTVECTORSEARCHPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_RUNLIBRARYCHATGENERATIONREQUESTVECTORSEARCHPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunLibraryChatGenerationRequestVectorSearchParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunLibraryChatGenerationRequestVectorSearchParameter& obj) { 
      DARABONBA_PTR_TO_JSON(limit, limit_);
    };
    friend void from_json(const Darabonba::Json& j, RunLibraryChatGenerationRequestVectorSearchParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(limit, limit_);
    };
    RunLibraryChatGenerationRequestVectorSearchParameter() = default ;
    RunLibraryChatGenerationRequestVectorSearchParameter(const RunLibraryChatGenerationRequestVectorSearchParameter &) = default ;
    RunLibraryChatGenerationRequestVectorSearchParameter(RunLibraryChatGenerationRequestVectorSearchParameter &&) = default ;
    RunLibraryChatGenerationRequestVectorSearchParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunLibraryChatGenerationRequestVectorSearchParameter() = default ;
    RunLibraryChatGenerationRequestVectorSearchParameter& operator=(const RunLibraryChatGenerationRequestVectorSearchParameter &) = default ;
    RunLibraryChatGenerationRequestVectorSearchParameter& operator=(RunLibraryChatGenerationRequestVectorSearchParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->limit_ != nullptr; };
    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline RunLibraryChatGenerationRequestVectorSearchParameter& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


  protected:
    std::shared_ptr<int32_t> limit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
