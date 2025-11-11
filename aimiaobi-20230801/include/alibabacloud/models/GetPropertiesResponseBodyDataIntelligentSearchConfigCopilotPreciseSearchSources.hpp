// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROPERTIESRESPONSEBODYDATAINTELLIGENTSEARCHCONFIGCOPILOTPRECISESEARCHSOURCES_HPP_
#define ALIBABACLOUD_MODELS_GETPROPERTIESRESPONSEBODYDATAINTELLIGENTSEARCHCONFIGCOPILOTPRECISESEARCHSOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources() = default ;
    GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources(const GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources &) = default ;
    GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources(GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources &&) = default ;
    GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources() = default ;
    GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources& operator=(const GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources &) = default ;
    GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources& operator=(GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->datasetName_ == nullptr && return this->name_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPropertiesResponseBodyDataIntelligentSearchConfigCopilotPreciseSearchSources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> datasetName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
