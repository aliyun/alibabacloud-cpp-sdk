// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONVERSIONRESPONSEBODYRESULTVERSIONCONFIGUSAGEPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONVERSIONRESPONSEBODYRESULTVERSIONCONFIGUSAGEPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetFunctionVersionResponseBodyResultVersionConfigUsageParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionVersionResponseBodyResultVersionConfigUsageParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Required, required_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionVersionResponseBodyResultVersionConfigUsageParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Required, required_);
    };
    GetFunctionVersionResponseBodyResultVersionConfigUsageParameters() = default ;
    GetFunctionVersionResponseBodyResultVersionConfigUsageParameters(const GetFunctionVersionResponseBodyResultVersionConfigUsageParameters &) = default ;
    GetFunctionVersionResponseBodyResultVersionConfigUsageParameters(GetFunctionVersionResponseBodyResultVersionConfigUsageParameters &&) = default ;
    GetFunctionVersionResponseBodyResultVersionConfigUsageParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionVersionResponseBodyResultVersionConfigUsageParameters() = default ;
    GetFunctionVersionResponseBodyResultVersionConfigUsageParameters& operator=(const GetFunctionVersionResponseBodyResultVersionConfigUsageParameters &) = default ;
    GetFunctionVersionResponseBodyResultVersionConfigUsageParameters& operator=(GetFunctionVersionResponseBodyResultVersionConfigUsageParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->required_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetFunctionVersionResponseBodyResultVersionConfigUsageParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline string required() const { DARABONBA_PTR_GET_DEFAULT(required_, "") };
    inline GetFunctionVersionResponseBodyResultVersionConfigUsageParameters& setRequired(string required) { DARABONBA_PTR_SET_VALUE(required_, required) };


  protected:
    // The name of the instance.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether the parameter is required.
    std::shared_ptr<string> required_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
