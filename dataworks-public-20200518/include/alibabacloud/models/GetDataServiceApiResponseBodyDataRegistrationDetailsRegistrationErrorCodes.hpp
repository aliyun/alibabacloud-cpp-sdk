// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPIRESPONSEBODYDATAREGISTRATIONDETAILSREGISTRATIONERRORCODES_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPIRESPONSEBODYDATAREGISTRATIONDETAILSREGISTRATIONERRORCODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDataServiceApiResponseBodyDataRegistrationDetailsRegistrationErrorCodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiResponseBodyDataRegistrationDetailsRegistrationErrorCodes& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ErrorSolution, errorSolution_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiResponseBodyDataRegistrationDetailsRegistrationErrorCodes& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorSolution, errorSolution_);
    };
    GetDataServiceApiResponseBodyDataRegistrationDetailsRegistrationErrorCodes() = default ;
    GetDataServiceApiResponseBodyDataRegistrationDetailsRegistrationErrorCodes(const GetDataServiceApiResponseBodyDataRegistrationDetailsRegistrationErrorCodes &) = default ;
    GetDataServiceApiResponseBodyDataRegistrationDetailsRegistrationErrorCodes(GetDataServiceApiResponseBodyDataRegistrationDetailsRegistrationErrorCodes &&) = default ;
    GetDataServiceApiResponseBodyDataRegistrationDetailsRegistrationErrorCodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiResponseBodyDataRegistrationDetailsRegistrationErrorCodes() = default ;
    GetDataServiceApiResponseBodyDataRegistrationDetailsRegistrationErrorCodes& operator=(const GetDataServiceApiResponseBodyDataRegistrationDetailsRegistrationErrorCodes &) = default ;
    GetDataServiceApiResponseBodyDataRegistrationDetailsRegistrationErrorCodes& operator=(GetDataServiceApiResponseBodyDataRegistrationDetailsRegistrationErrorCodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->errorSolution_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataServiceApiResponseBodyDataRegistrationDetailsRegistrationErrorCodes& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataServiceApiResponseBodyDataRegistrationDetailsRegistrationErrorCodes& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // errorSolution Field Functions 
    bool hasErrorSolution() const { return this->errorSolution_ != nullptr;};
    void deleteErrorSolution() { this->errorSolution_ = nullptr;};
    inline string errorSolution() const { DARABONBA_PTR_GET_DEFAULT(errorSolution_, "") };
    inline GetDataServiceApiResponseBodyDataRegistrationDetailsRegistrationErrorCodes& setErrorSolution(string errorSolution) { DARABONBA_PTR_SET_VALUE(errorSolution_, errorSolution) };


  protected:
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The solution used to fix the error.
    std::shared_ptr<string> errorSolution_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
