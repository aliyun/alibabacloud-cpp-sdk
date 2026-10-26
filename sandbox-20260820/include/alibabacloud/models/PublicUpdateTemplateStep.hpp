// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICUPDATETEMPLATESTEP_HPP_
#define ALIBABACLOUD_MODELS_PUBLICUPDATETEMPLATESTEP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class PublicUpdateTemplateStep : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicUpdateTemplateStep& obj) { 
      DARABONBA_PTR_TO_JSON(args, args_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PublicUpdateTemplateStep& obj) { 
      DARABONBA_PTR_FROM_JSON(args, args_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    PublicUpdateTemplateStep() = default ;
    PublicUpdateTemplateStep(const PublicUpdateTemplateStep &) = default ;
    PublicUpdateTemplateStep(PublicUpdateTemplateStep &&) = default ;
    PublicUpdateTemplateStep(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicUpdateTemplateStep() = default ;
    PublicUpdateTemplateStep& operator=(const PublicUpdateTemplateStep &) = default ;
    PublicUpdateTemplateStep& operator=(PublicUpdateTemplateStep &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->args_ == nullptr
        && this->type_ == nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline const vector<string> & getArgs() const { DARABONBA_PTR_GET_CONST(args_, vector<string>) };
    inline vector<string> getArgs() { DARABONBA_PTR_GET(args_, vector<string>) };
    inline PublicUpdateTemplateStep& setArgs(const vector<string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
    inline PublicUpdateTemplateStep& setArgs(vector<string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PublicUpdateTemplateStep& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The build instruction parameters. The meaning varies depending on type: for USER, it is [username, optional passwordless sudo flag], and the second item configures passwordless sudo when the string is true; for WORKDIR, it is [directory]; for ENV, it is [key, value, ...], and multiple pairs can be set at once; for RUN, it is [command, optional temporary user].
    shared_ptr<vector<string>> args_ {};
    // The build instruction type. Valid values: USER, WORKDIR, ENV, and RUN. The instructions are executed sequentially in the order of the array.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
