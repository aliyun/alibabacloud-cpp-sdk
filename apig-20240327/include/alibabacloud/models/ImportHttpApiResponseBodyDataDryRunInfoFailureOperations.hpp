// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTHTTPAPIRESPONSEBODYDATADRYRUNINFOFAILUREOPERATIONS_HPP_
#define ALIBABACLOUD_MODELS_IMPORTHTTPAPIRESPONSEBODYDATADRYRUNINFOFAILUREOPERATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ImportHttpApiResponseBodyDataDryRunInfoFailureOperations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportHttpApiResponseBodyDataDryRunInfoFailureOperations& obj) { 
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(method, method_);
      DARABONBA_PTR_TO_JSON(path, path_);
    };
    friend void from_json(const Darabonba::Json& j, ImportHttpApiResponseBodyDataDryRunInfoFailureOperations& obj) { 
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(method, method_);
      DARABONBA_PTR_FROM_JSON(path, path_);
    };
    ImportHttpApiResponseBodyDataDryRunInfoFailureOperations() = default ;
    ImportHttpApiResponseBodyDataDryRunInfoFailureOperations(const ImportHttpApiResponseBodyDataDryRunInfoFailureOperations &) = default ;
    ImportHttpApiResponseBodyDataDryRunInfoFailureOperations(ImportHttpApiResponseBodyDataDryRunInfoFailureOperations &&) = default ;
    ImportHttpApiResponseBodyDataDryRunInfoFailureOperations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportHttpApiResponseBodyDataDryRunInfoFailureOperations() = default ;
    ImportHttpApiResponseBodyDataDryRunInfoFailureOperations& operator=(const ImportHttpApiResponseBodyDataDryRunInfoFailureOperations &) = default ;
    ImportHttpApiResponseBodyDataDryRunInfoFailureOperations& operator=(ImportHttpApiResponseBodyDataDryRunInfoFailureOperations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorMessage_ != nullptr
        && this->method_ != nullptr && this->path_ != nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ImportHttpApiResponseBodyDataDryRunInfoFailureOperations& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline ImportHttpApiResponseBodyDataDryRunInfoFailureOperations& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ImportHttpApiResponseBodyDataDryRunInfoFailureOperations& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The HTTP method of the operation.
    std::shared_ptr<string> method_ = nullptr;
    // The operation path.
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
