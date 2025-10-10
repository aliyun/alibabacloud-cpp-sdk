// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEASCRIPTSRESPONSEBODYASCRIPTIDS_HPP_
#define ALIBABACLOUD_MODELS_CREATEASCRIPTSRESPONSEBODYASCRIPTIDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateAScriptsResponseBodyAScriptIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAScriptsResponseBodyAScriptIds& obj) { 
      DARABONBA_PTR_TO_JSON(AScriptId, AScriptId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAScriptsResponseBodyAScriptIds& obj) { 
      DARABONBA_PTR_FROM_JSON(AScriptId, AScriptId_);
    };
    CreateAScriptsResponseBodyAScriptIds() = default ;
    CreateAScriptsResponseBodyAScriptIds(const CreateAScriptsResponseBodyAScriptIds &) = default ;
    CreateAScriptsResponseBodyAScriptIds(CreateAScriptsResponseBodyAScriptIds &&) = default ;
    CreateAScriptsResponseBodyAScriptIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAScriptsResponseBodyAScriptIds() = default ;
    CreateAScriptsResponseBodyAScriptIds& operator=(const CreateAScriptsResponseBodyAScriptIds &) = default ;
    CreateAScriptsResponseBodyAScriptIds& operator=(CreateAScriptsResponseBodyAScriptIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AScriptId_ != nullptr; };
    // AScriptId Field Functions 
    bool hasAScriptId() const { return this->AScriptId_ != nullptr;};
    void deleteAScriptId() { this->AScriptId_ = nullptr;};
    inline string AScriptId() const { DARABONBA_PTR_GET_DEFAULT(AScriptId_, "") };
    inline CreateAScriptsResponseBodyAScriptIds& setAScriptId(string AScriptId) { DARABONBA_PTR_SET_VALUE(AScriptId_, AScriptId) };


  protected:
    // The AScript rule ID.
    std::shared_ptr<string> AScriptId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
