// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDDATASERVICEAPIDETAILSRESPONSEBODYRESULTDATAAUTHORIZEDDEVRETURNPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDDATASERVICEAPIDETAILSRESPONSEBODYRESULTDATAAUTHORIZEDDEVRETURNPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ExampleValue, exampleValue_);
      DARABONBA_PTR_TO_JSON(IsAuthorized, isAuthorized_);
      DARABONBA_PTR_TO_JSON(ParameterDataType, parameterDataType_);
      DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ExampleValue, exampleValue_);
      DARABONBA_PTR_FROM_JSON(IsAuthorized, isAuthorized_);
      DARABONBA_PTR_FROM_JSON(ParameterDataType, parameterDataType_);
      DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
    };
    ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters() = default ;
    ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters(const ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters &) = default ;
    ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters(ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters &&) = default ;
    ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters() = default ;
    ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters& operator=(const ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters &) = default ;
    ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters& operator=(ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exampleValue_ != nullptr
        && this->isAuthorized_ != nullptr && this->parameterDataType_ != nullptr && this->parameterDescription_ != nullptr && this->parameterName_ != nullptr; };
    // exampleValue Field Functions 
    bool hasExampleValue() const { return this->exampleValue_ != nullptr;};
    void deleteExampleValue() { this->exampleValue_ = nullptr;};
    inline string exampleValue() const { DARABONBA_PTR_GET_DEFAULT(exampleValue_, "") };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters& setExampleValue(string exampleValue) { DARABONBA_PTR_SET_VALUE(exampleValue_, exampleValue) };


    // isAuthorized Field Functions 
    bool hasIsAuthorized() const { return this->isAuthorized_ != nullptr;};
    void deleteIsAuthorized() { this->isAuthorized_ = nullptr;};
    inline int32_t isAuthorized() const { DARABONBA_PTR_GET_DEFAULT(isAuthorized_, 0) };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters& setIsAuthorized(int32_t isAuthorized) { DARABONBA_PTR_SET_VALUE(isAuthorized_, isAuthorized) };


    // parameterDataType Field Functions 
    bool hasParameterDataType() const { return this->parameterDataType_ != nullptr;};
    void deleteParameterDataType() { this->parameterDataType_ = nullptr;};
    inline int32_t parameterDataType() const { DARABONBA_PTR_GET_DEFAULT(parameterDataType_, 0) };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters& setParameterDataType(int32_t parameterDataType) { DARABONBA_PTR_SET_VALUE(parameterDataType_, parameterDataType) };


    // parameterDescription Field Functions 
    bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
    void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
    inline string parameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline ListAuthorizedDataServiceApiDetailsResponseBodyResultDataAuthorizedDevReturnParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


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
