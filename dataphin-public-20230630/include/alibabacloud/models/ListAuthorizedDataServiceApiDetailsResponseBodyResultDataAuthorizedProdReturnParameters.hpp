// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDDATASERVICEAPIDETAILSRESPONSEBODYRESULTDATAAUTHORIZEDPRODRETURNPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDDATASERVICEAPIDETAILSRESPONSEBODYRESULTDATAAUTHORIZEDPRODRETURNPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ExampleValue, exampleValue_);
      DARABONBA_PTR_TO_JSON(IsAuthorized, isAuthorized_);
      DARABONBA_PTR_TO_JSON(ParameterDataType, parameterDataType_);
      DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ExampleValue, exampleValue_);
      DARABONBA_PTR_FROM_JSON(IsAuthorized, isAuthorized_);
      DARABONBA_PTR_FROM_JSON(ParameterDataType, parameterDataType_);
      DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
    };
    ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters() = default ;
    ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters(const ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters &) = default ;
    ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters(ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters &&) = default ;
    ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters() = default ;
    ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters& operator=(const ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters &) = default ;
    ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters& operator=(ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exampleValue_ == nullptr
        && return this->isAuthorized_ == nullptr && return this->parameterDataType_ == nullptr && return this->parameterDescription_ == nullptr && return this->parameterName_ == nullptr; };
    // exampleValue Field Functions 
    bool hasExampleValue() const { return this->exampleValue_ != nullptr;};
    void deleteExampleValue() { this->exampleValue_ = nullptr;};
    inline string exampleValue() const { DARABONBA_PTR_GET_DEFAULT(exampleValue_, "") };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters& setExampleValue(string exampleValue) { DARABONBA_PTR_SET_VALUE(exampleValue_, exampleValue) };


    // isAuthorized Field Functions 
    bool hasIsAuthorized() const { return this->isAuthorized_ != nullptr;};
    void deleteIsAuthorized() { this->isAuthorized_ = nullptr;};
    inline int32_t isAuthorized() const { DARABONBA_PTR_GET_DEFAULT(isAuthorized_, 0) };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters& setIsAuthorized(int32_t isAuthorized) { DARABONBA_PTR_SET_VALUE(isAuthorized_, isAuthorized) };


    // parameterDataType Field Functions 
    bool hasParameterDataType() const { return this->parameterDataType_ != nullptr;};
    void deleteParameterDataType() { this->parameterDataType_ = nullptr;};
    inline int32_t parameterDataType() const { DARABONBA_PTR_GET_DEFAULT(parameterDataType_, 0) };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters& setParameterDataType(int32_t parameterDataType) { DARABONBA_PTR_SET_VALUE(parameterDataType_, parameterDataType) };


    // parameterDescription Field Functions 
    bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
    void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
    inline string parameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedProdReturnParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


  protected:
    std::shared_ptr<string> exampleValue_ = nullptr;
    std::shared_ptr<int32_t> isAuthorized_ = nullptr;
    std::shared_ptr<int32_t> parameterDataType_ = nullptr;
    std::shared_ptr<string> parameterDescription_ = nullptr;
    std::shared_ptr<string> parameterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
