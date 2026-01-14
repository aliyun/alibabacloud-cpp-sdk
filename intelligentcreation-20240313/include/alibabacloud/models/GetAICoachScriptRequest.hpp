// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHSCRIPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHSCRIPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachScriptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachScriptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(scriptRecordId, scriptRecordId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachScriptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(scriptRecordId, scriptRecordId_);
    };
    GetAICoachScriptRequest() = default ;
    GetAICoachScriptRequest(const GetAICoachScriptRequest &) = default ;
    GetAICoachScriptRequest(GetAICoachScriptRequest &&) = default ;
    GetAICoachScriptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachScriptRequest() = default ;
    GetAICoachScriptRequest& operator=(const GetAICoachScriptRequest &) = default ;
    GetAICoachScriptRequest& operator=(GetAICoachScriptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scriptRecordId_ == nullptr; };
    // scriptRecordId Field Functions 
    bool hasScriptRecordId() const { return this->scriptRecordId_ != nullptr;};
    void deleteScriptRecordId() { this->scriptRecordId_ = nullptr;};
    inline string getScriptRecordId() const { DARABONBA_PTR_GET_DEFAULT(scriptRecordId_, "") };
    inline GetAICoachScriptRequest& setScriptRecordId(string scriptRecordId) { DARABONBA_PTR_SET_VALUE(scriptRecordId_, scriptRecordId) };


  protected:
    shared_ptr<string> scriptRecordId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
