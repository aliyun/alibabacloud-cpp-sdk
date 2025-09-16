// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELRESPONSEBODYRESULTCONTENTREQUESTPARAMETERSBUILD_HPP_
#define ALIBABACLOUD_MODELS_GETMODELRESPONSEBODYRESULTCONTENTREQUESTPARAMETERSBUILD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetModelResponseBodyResultContentRequestParametersBuild : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelResponseBodyResultContentRequestParametersBuild& obj) { 
      DARABONBA_PTR_TO_JSON(input_type, inputType_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelResponseBodyResultContentRequestParametersBuild& obj) { 
      DARABONBA_PTR_FROM_JSON(input_type, inputType_);
    };
    GetModelResponseBodyResultContentRequestParametersBuild() = default ;
    GetModelResponseBodyResultContentRequestParametersBuild(const GetModelResponseBodyResultContentRequestParametersBuild &) = default ;
    GetModelResponseBodyResultContentRequestParametersBuild(GetModelResponseBodyResultContentRequestParametersBuild &&) = default ;
    GetModelResponseBodyResultContentRequestParametersBuild(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelResponseBodyResultContentRequestParametersBuild() = default ;
    GetModelResponseBodyResultContentRequestParametersBuild& operator=(const GetModelResponseBodyResultContentRequestParametersBuild &) = default ;
    GetModelResponseBodyResultContentRequestParametersBuild& operator=(GetModelResponseBodyResultContentRequestParametersBuild &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputType_ != nullptr; };
    // inputType Field Functions 
    bool hasInputType() const { return this->inputType_ != nullptr;};
    void deleteInputType() { this->inputType_ = nullptr;};
    inline string inputType() const { DARABONBA_PTR_GET_DEFAULT(inputType_, "") };
    inline GetModelResponseBodyResultContentRequestParametersBuild& setInputType(string inputType) { DARABONBA_PTR_SET_VALUE(inputType_, inputType) };


  protected:
    std::shared_ptr<string> inputType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
