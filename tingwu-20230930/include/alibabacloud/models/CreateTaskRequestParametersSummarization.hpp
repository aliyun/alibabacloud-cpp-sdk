// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSSUMMARIZATION_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSSUMMARIZATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTaskRequestParametersSummarization : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestParametersSummarization& obj) { 
      DARABONBA_PTR_TO_JSON(Types, types_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestParametersSummarization& obj) { 
      DARABONBA_PTR_FROM_JSON(Types, types_);
    };
    CreateTaskRequestParametersSummarization() = default ;
    CreateTaskRequestParametersSummarization(const CreateTaskRequestParametersSummarization &) = default ;
    CreateTaskRequestParametersSummarization(CreateTaskRequestParametersSummarization &&) = default ;
    CreateTaskRequestParametersSummarization(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestParametersSummarization() = default ;
    CreateTaskRequestParametersSummarization& operator=(const CreateTaskRequestParametersSummarization &) = default ;
    CreateTaskRequestParametersSummarization& operator=(CreateTaskRequestParametersSummarization &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->types_ != nullptr; };
    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline const vector<string> & types() const { DARABONBA_PTR_GET_CONST(types_, vector<string>) };
    inline vector<string> types() { DARABONBA_PTR_GET(types_, vector<string>) };
    inline CreateTaskRequestParametersSummarization& setTypes(const vector<string> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
    inline CreateTaskRequestParametersSummarization& setTypes(vector<string> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


  protected:
    std::shared_ptr<vector<string>> types_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
