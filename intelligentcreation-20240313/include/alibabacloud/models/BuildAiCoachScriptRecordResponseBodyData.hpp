// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDAICOACHSCRIPTRECORDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BUILDAICOACHSCRIPTRECORDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BuildAICoachScriptRecordResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuildAICoachScriptRecordResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(scriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, BuildAICoachScriptRecordResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(scriptId, scriptId_);
    };
    BuildAICoachScriptRecordResponseBodyData() = default ;
    BuildAICoachScriptRecordResponseBodyData(const BuildAICoachScriptRecordResponseBodyData &) = default ;
    BuildAICoachScriptRecordResponseBodyData(BuildAICoachScriptRecordResponseBodyData &&) = default ;
    BuildAICoachScriptRecordResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuildAICoachScriptRecordResponseBodyData() = default ;
    BuildAICoachScriptRecordResponseBodyData& operator=(const BuildAICoachScriptRecordResponseBodyData &) = default ;
    BuildAICoachScriptRecordResponseBodyData& operator=(BuildAICoachScriptRecordResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scriptId_ == nullptr; };
    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline BuildAICoachScriptRecordResponseBodyData& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    std::shared_ptr<string> scriptId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
