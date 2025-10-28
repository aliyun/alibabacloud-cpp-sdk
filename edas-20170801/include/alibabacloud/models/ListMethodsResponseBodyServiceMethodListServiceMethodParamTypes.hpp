// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETHODSRESPONSEBODYSERVICEMETHODLISTSERVICEMETHODPARAMTYPES_HPP_
#define ALIBABACLOUD_MODELS_LISTMETHODSRESPONSEBODYSERVICEMETHODLISTSERVICEMETHODPARAMTYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes& obj) { 
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
    };
    friend void from_json(const Darabonba::Json& j, ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
    };
    ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes() = default ;
    ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes(const ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes &) = default ;
    ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes(ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes &&) = default ;
    ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes() = default ;
    ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes& operator=(const ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes &) = default ;
    ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes& operator=(ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paramType_ == nullptr; };
    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline const vector<string> & paramType() const { DARABONBA_PTR_GET_CONST(paramType_, vector<string>) };
    inline vector<string> paramType() { DARABONBA_PTR_GET(paramType_, vector<string>) };
    inline ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes& setParamType(const vector<string> & paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };
    inline ListMethodsResponseBodyServiceMethodListServiceMethodParamTypes& setParamType(vector<string> && paramType) { DARABONBA_PTR_SET_RVALUE(paramType_, paramType) };


  protected:
    std::shared_ptr<vector<string>> paramType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
