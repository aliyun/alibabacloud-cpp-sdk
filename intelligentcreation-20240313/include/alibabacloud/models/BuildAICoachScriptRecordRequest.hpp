// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDAICOACHSCRIPTRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BUILDAICOACHSCRIPTRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BuildAICoachScriptRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuildAICoachScriptRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(scriptJsonUrl, scriptJsonUrl_);
    };
    friend void from_json(const Darabonba::Json& j, BuildAICoachScriptRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(scriptJsonUrl, scriptJsonUrl_);
    };
    BuildAICoachScriptRecordRequest() = default ;
    BuildAICoachScriptRecordRequest(const BuildAICoachScriptRecordRequest &) = default ;
    BuildAICoachScriptRecordRequest(BuildAICoachScriptRecordRequest &&) = default ;
    BuildAICoachScriptRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuildAICoachScriptRecordRequest() = default ;
    BuildAICoachScriptRecordRequest& operator=(const BuildAICoachScriptRecordRequest &) = default ;
    BuildAICoachScriptRecordRequest& operator=(BuildAICoachScriptRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scriptJsonUrl_ == nullptr; };
    // scriptJsonUrl Field Functions 
    bool hasScriptJsonUrl() const { return this->scriptJsonUrl_ != nullptr;};
    void deleteScriptJsonUrl() { this->scriptJsonUrl_ = nullptr;};
    inline string getScriptJsonUrl() const { DARABONBA_PTR_GET_DEFAULT(scriptJsonUrl_, "") };
    inline BuildAICoachScriptRecordRequest& setScriptJsonUrl(string scriptJsonUrl) { DARABONBA_PTR_SET_VALUE(scriptJsonUrl_, scriptJsonUrl) };


  protected:
    shared_ptr<string> scriptJsonUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
