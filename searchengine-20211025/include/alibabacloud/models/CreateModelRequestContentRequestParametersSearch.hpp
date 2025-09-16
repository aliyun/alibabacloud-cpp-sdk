// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELREQUESTCONTENTREQUESTPARAMETERSSEARCH_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELREQUESTCONTENTREQUESTPARAMETERSSEARCH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class CreateModelRequestContentRequestParametersSearch : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelRequestContentRequestParametersSearch& obj) { 
      DARABONBA_PTR_TO_JSON(input_type, inputType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelRequestContentRequestParametersSearch& obj) { 
      DARABONBA_PTR_FROM_JSON(input_type, inputType_);
    };
    CreateModelRequestContentRequestParametersSearch() = default ;
    CreateModelRequestContentRequestParametersSearch(const CreateModelRequestContentRequestParametersSearch &) = default ;
    CreateModelRequestContentRequestParametersSearch(CreateModelRequestContentRequestParametersSearch &&) = default ;
    CreateModelRequestContentRequestParametersSearch(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelRequestContentRequestParametersSearch() = default ;
    CreateModelRequestContentRequestParametersSearch& operator=(const CreateModelRequestContentRequestParametersSearch &) = default ;
    CreateModelRequestContentRequestParametersSearch& operator=(CreateModelRequestContentRequestParametersSearch &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputType_ != nullptr; };
    // inputType Field Functions 
    bool hasInputType() const { return this->inputType_ != nullptr;};
    void deleteInputType() { this->inputType_ = nullptr;};
    inline string inputType() const { DARABONBA_PTR_GET_DEFAULT(inputType_, "") };
    inline CreateModelRequestContentRequestParametersSearch& setInputType(string inputType) { DARABONBA_PTR_SET_VALUE(inputType_, inputType) };


  protected:
    std::shared_ptr<string> inputType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
