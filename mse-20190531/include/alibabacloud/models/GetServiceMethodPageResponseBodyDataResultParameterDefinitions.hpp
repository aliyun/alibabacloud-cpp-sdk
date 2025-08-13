// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEMETHODPAGERESPONSEBODYDATARESULTPARAMETERDEFINITIONS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEMETHODPAGERESPONSEBODYDATARESULTPARAMETERDEFINITIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetServiceMethodPageResponseBodyDataResultParameterDefinitions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceMethodPageResponseBodyDataResultParameterDefinitions& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceMethodPageResponseBodyDataResultParameterDefinitions& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetServiceMethodPageResponseBodyDataResultParameterDefinitions() = default ;
    GetServiceMethodPageResponseBodyDataResultParameterDefinitions(const GetServiceMethodPageResponseBodyDataResultParameterDefinitions &) = default ;
    GetServiceMethodPageResponseBodyDataResultParameterDefinitions(GetServiceMethodPageResponseBodyDataResultParameterDefinitions &&) = default ;
    GetServiceMethodPageResponseBodyDataResultParameterDefinitions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceMethodPageResponseBodyDataResultParameterDefinitions() = default ;
    GetServiceMethodPageResponseBodyDataResultParameterDefinitions& operator=(const GetServiceMethodPageResponseBodyDataResultParameterDefinitions &) = default ;
    GetServiceMethodPageResponseBodyDataResultParameterDefinitions& operator=(GetServiceMethodPageResponseBodyDataResultParameterDefinitions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->name_ != nullptr && this->type_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetServiceMethodPageResponseBodyDataResultParameterDefinitions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetServiceMethodPageResponseBodyDataResultParameterDefinitions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetServiceMethodPageResponseBodyDataResultParameterDefinitions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
