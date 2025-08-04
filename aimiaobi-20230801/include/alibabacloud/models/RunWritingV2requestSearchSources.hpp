// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITINGV2REQUESTSEARCHSOURCES_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITINGV2REQUESTSEARCHSOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunWritingV2RequestSearchSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWritingV2RequestSearchSources& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, RunWritingV2RequestSearchSources& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    RunWritingV2RequestSearchSources() = default ;
    RunWritingV2RequestSearchSources(const RunWritingV2RequestSearchSources &) = default ;
    RunWritingV2RequestSearchSources(RunWritingV2RequestSearchSources &&) = default ;
    RunWritingV2RequestSearchSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWritingV2RequestSearchSources() = default ;
    RunWritingV2RequestSearchSources& operator=(const RunWritingV2RequestSearchSources &) = default ;
    RunWritingV2RequestSearchSources& operator=(RunWritingV2RequestSearchSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->datasetName_ != nullptr && this->name_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RunWritingV2RequestSearchSources& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline RunWritingV2RequestSearchSources& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RunWritingV2RequestSearchSources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> datasetName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
