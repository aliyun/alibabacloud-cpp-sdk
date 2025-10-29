// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTHTTPAPIRESPONSEBODYDATADRYRUNINFOFAILURECOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_IMPORTHTTPAPIRESPONSEBODYDATADRYRUNINFOFAILURECOMPONENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ImportHttpApiResponseBodyDataDryRunInfoFailureComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportHttpApiResponseBodyDataDryRunInfoFailureComponents& obj) { 
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ImportHttpApiResponseBodyDataDryRunInfoFailureComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ImportHttpApiResponseBodyDataDryRunInfoFailureComponents() = default ;
    ImportHttpApiResponseBodyDataDryRunInfoFailureComponents(const ImportHttpApiResponseBodyDataDryRunInfoFailureComponents &) = default ;
    ImportHttpApiResponseBodyDataDryRunInfoFailureComponents(ImportHttpApiResponseBodyDataDryRunInfoFailureComponents &&) = default ;
    ImportHttpApiResponseBodyDataDryRunInfoFailureComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportHttpApiResponseBodyDataDryRunInfoFailureComponents() = default ;
    ImportHttpApiResponseBodyDataDryRunInfoFailureComponents& operator=(const ImportHttpApiResponseBodyDataDryRunInfoFailureComponents &) = default ;
    ImportHttpApiResponseBodyDataDryRunInfoFailureComponents& operator=(ImportHttpApiResponseBodyDataDryRunInfoFailureComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && return this->name_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ImportHttpApiResponseBodyDataDryRunInfoFailureComponents& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ImportHttpApiResponseBodyDataDryRunInfoFailureComponents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The data struct name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
