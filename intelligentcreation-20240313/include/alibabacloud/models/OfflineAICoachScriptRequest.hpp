// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OFFLINEAICOACHSCRIPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OFFLINEAICOACHSCRIPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class OfflineAICoachScriptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OfflineAICoachScriptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(scriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, OfflineAICoachScriptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(scriptId, scriptId_);
    };
    OfflineAICoachScriptRequest() = default ;
    OfflineAICoachScriptRequest(const OfflineAICoachScriptRequest &) = default ;
    OfflineAICoachScriptRequest(OfflineAICoachScriptRequest &&) = default ;
    OfflineAICoachScriptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OfflineAICoachScriptRequest() = default ;
    OfflineAICoachScriptRequest& operator=(const OfflineAICoachScriptRequest &) = default ;
    OfflineAICoachScriptRequest& operator=(OfflineAICoachScriptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scriptId_ == nullptr; };
    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline OfflineAICoachScriptRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    shared_ptr<string> scriptId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
