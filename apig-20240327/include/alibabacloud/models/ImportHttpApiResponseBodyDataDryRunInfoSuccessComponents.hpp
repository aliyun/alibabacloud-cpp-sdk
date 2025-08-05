// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTHTTPAPIRESPONSEBODYDATADRYRUNINFOSUCCESSCOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_IMPORTHTTPAPIRESPONSEBODYDATADRYRUNINFOSUCCESSCOMPONENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents() = default ;
    ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents(const ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents &) = default ;
    ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents(ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents &&) = default ;
    ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents() = default ;
    ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents& operator=(const ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents &) = default ;
    ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents& operator=(ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->name_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ImportHttpApiResponseBodyDataDryRunInfoSuccessComponents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The action that will be performed for the data struct after the dry run.
    // 
    // *   Create: The data struct is created.
    // *   Update: The data struct is updated.
    std::shared_ptr<string> action_ = nullptr;
    // The data struct name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
