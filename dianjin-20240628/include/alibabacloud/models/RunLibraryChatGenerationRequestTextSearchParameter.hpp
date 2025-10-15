// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNLIBRARYCHATGENERATIONREQUESTTEXTSEARCHPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_RUNLIBRARYCHATGENERATIONREQUESTTEXTSEARCHPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunLibraryChatGenerationRequestTextSearchParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunLibraryChatGenerationRequestTextSearchParameter& obj) { 
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(searchAnalyzerType, searchAnalyzerType_);
    };
    friend void from_json(const Darabonba::Json& j, RunLibraryChatGenerationRequestTextSearchParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(searchAnalyzerType, searchAnalyzerType_);
    };
    RunLibraryChatGenerationRequestTextSearchParameter() = default ;
    RunLibraryChatGenerationRequestTextSearchParameter(const RunLibraryChatGenerationRequestTextSearchParameter &) = default ;
    RunLibraryChatGenerationRequestTextSearchParameter(RunLibraryChatGenerationRequestTextSearchParameter &&) = default ;
    RunLibraryChatGenerationRequestTextSearchParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunLibraryChatGenerationRequestTextSearchParameter() = default ;
    RunLibraryChatGenerationRequestTextSearchParameter& operator=(const RunLibraryChatGenerationRequestTextSearchParameter &) = default ;
    RunLibraryChatGenerationRequestTextSearchParameter& operator=(RunLibraryChatGenerationRequestTextSearchParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->limit_ == nullptr
        && return this->searchAnalyzerType_ == nullptr; };
    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline RunLibraryChatGenerationRequestTextSearchParameter& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // searchAnalyzerType Field Functions 
    bool hasSearchAnalyzerType() const { return this->searchAnalyzerType_ != nullptr;};
    void deleteSearchAnalyzerType() { this->searchAnalyzerType_ = nullptr;};
    inline string searchAnalyzerType() const { DARABONBA_PTR_GET_DEFAULT(searchAnalyzerType_, "") };
    inline RunLibraryChatGenerationRequestTextSearchParameter& setSearchAnalyzerType(string searchAnalyzerType) { DARABONBA_PTR_SET_VALUE(searchAnalyzerType_, searchAnalyzerType) };


  protected:
    std::shared_ptr<int32_t> limit_ = nullptr;
    std::shared_ptr<string> searchAnalyzerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
