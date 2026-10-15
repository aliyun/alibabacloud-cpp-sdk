// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICTEMPLATESTEP_HPP_
#define ALIBABACLOUD_MODELS_PUBLICTEMPLATESTEP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class PublicTemplateStep : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicTemplateStep& obj) { 
      DARABONBA_PTR_TO_JSON(args, args_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PublicTemplateStep& obj) { 
      DARABONBA_PTR_FROM_JSON(args, args_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    PublicTemplateStep() = default ;
    PublicTemplateStep(const PublicTemplateStep &) = default ;
    PublicTemplateStep(PublicTemplateStep &&) = default ;
    PublicTemplateStep(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicTemplateStep() = default ;
    PublicTemplateStep& operator=(const PublicTemplateStep &) = default ;
    PublicTemplateStep& operator=(PublicTemplateStep &&) = default ;
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
    inline PublicTemplateStep& setArgs(const vector<string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
    inline PublicTemplateStep& setArgs(vector<string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PublicTemplateStep& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The build step parameter list.
    shared_ptr<vector<string>> args_ {};
    // The build instruction type, such as RUN.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
