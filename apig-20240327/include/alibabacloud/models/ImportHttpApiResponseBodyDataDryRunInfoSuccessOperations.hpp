// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTHTTPAPIRESPONSEBODYDATADRYRUNINFOSUCCESSOPERATIONS_HPP_
#define ALIBABACLOUD_MODELS_IMPORTHTTPAPIRESPONSEBODYDATADRYRUNINFOSUCCESSOPERATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(method, method_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(path, path_);
    };
    friend void from_json(const Darabonba::Json& j, ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(method, method_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(path, path_);
    };
    ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations() = default ;
    ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations(const ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations &) = default ;
    ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations(ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations &&) = default ;
    ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations() = default ;
    ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations& operator=(const ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations &) = default ;
    ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations& operator=(ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->method_ != nullptr && this->name_ != nullptr && this->path_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ImportHttpApiResponseBodyDataDryRunInfoSuccessOperations& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The action that will be performed for the operation after the dry run.
    // 
    // *   Create: The operation is created.
    // *   Update: The operation is updated.
    std::shared_ptr<string> action_ = nullptr;
    // The HTTP method of the operation.
    std::shared_ptr<string> method_ = nullptr;
    // The operation name.
    std::shared_ptr<string> name_ = nullptr;
    // The operation path.
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
