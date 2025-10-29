// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKREQUESTSCRIPT_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKREQUESTSCRIPT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateTaskRequestScript : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskRequestScript& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskRequestScript& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
    };
    UpdateTaskRequestScript() = default ;
    UpdateTaskRequestScript(const UpdateTaskRequestScript &) = default ;
    UpdateTaskRequestScript(UpdateTaskRequestScript &&) = default ;
    UpdateTaskRequestScript(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskRequestScript() = default ;
    UpdateTaskRequestScript& operator=(const UpdateTaskRequestScript &) = default ;
    UpdateTaskRequestScript& operator=(UpdateTaskRequestScript &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->parameters_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateTaskRequestScript& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline UpdateTaskRequestScript& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


  protected:
    // The script content.
    std::shared_ptr<string> content_ = nullptr;
    // The script parameter list.
    std::shared_ptr<string> parameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
