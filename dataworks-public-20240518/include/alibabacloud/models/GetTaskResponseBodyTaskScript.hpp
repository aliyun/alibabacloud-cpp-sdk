// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKRESPONSEBODYTASKSCRIPT_HPP_
#define ALIBABACLOUD_MODELS_GETTASKRESPONSEBODYTASKSCRIPT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetTaskResponseBodyTaskScript : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskResponseBodyTaskScript& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskResponseBodyTaskScript& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
    };
    GetTaskResponseBodyTaskScript() = default ;
    GetTaskResponseBodyTaskScript(const GetTaskResponseBodyTaskScript &) = default ;
    GetTaskResponseBodyTaskScript(GetTaskResponseBodyTaskScript &&) = default ;
    GetTaskResponseBodyTaskScript(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskResponseBodyTaskScript() = default ;
    GetTaskResponseBodyTaskScript& operator=(const GetTaskResponseBodyTaskScript &) = default ;
    GetTaskResponseBodyTaskScript& operator=(GetTaskResponseBodyTaskScript &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->parameters_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetTaskResponseBodyTaskScript& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline GetTaskResponseBodyTaskScript& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


  protected:
    // The script content.
    std::shared_ptr<string> content_ = nullptr;
    // The script parameters.
    std::shared_ptr<string> parameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
