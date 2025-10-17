// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHINSTANCERAMROLERESPONSEBODYATTACHINSTANCERAMROLERESULTS_HPP_
#define ALIBABACLOUD_MODELS_ATTACHINSTANCERAMROLERESPONSEBODYATTACHINSTANCERAMROLERESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResultsAttachInstanceRamRoleResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults& obj) { 
      DARABONBA_PTR_TO_JSON(AttachInstanceRamRoleResult, attachInstanceRamRoleResult_);
    };
    friend void from_json(const Darabonba::Json& j, AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachInstanceRamRoleResult, attachInstanceRamRoleResult_);
    };
    AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults() = default ;
    AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults(const AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults &) = default ;
    AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults(AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults &&) = default ;
    AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults() = default ;
    AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults& operator=(const AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults &) = default ;
    AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults& operator=(AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachInstanceRamRoleResult_ == nullptr; };
    // attachInstanceRamRoleResult Field Functions 
    bool hasAttachInstanceRamRoleResult() const { return this->attachInstanceRamRoleResult_ != nullptr;};
    void deleteAttachInstanceRamRoleResult() { this->attachInstanceRamRoleResult_ = nullptr;};
    inline const vector<Models::AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResultsAttachInstanceRamRoleResult> & attachInstanceRamRoleResult() const { DARABONBA_PTR_GET_CONST(attachInstanceRamRoleResult_, vector<Models::AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResultsAttachInstanceRamRoleResult>) };
    inline vector<Models::AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResultsAttachInstanceRamRoleResult> attachInstanceRamRoleResult() { DARABONBA_PTR_GET(attachInstanceRamRoleResult_, vector<Models::AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResultsAttachInstanceRamRoleResult>) };
    inline AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults& setAttachInstanceRamRoleResult(const vector<Models::AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResultsAttachInstanceRamRoleResult> & attachInstanceRamRoleResult) { DARABONBA_PTR_SET_VALUE(attachInstanceRamRoleResult_, attachInstanceRamRoleResult) };
    inline AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults& setAttachInstanceRamRoleResult(vector<Models::AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResultsAttachInstanceRamRoleResult> && attachInstanceRamRoleResult) { DARABONBA_PTR_SET_RVALUE(attachInstanceRamRoleResult_, attachInstanceRamRoleResult) };


  protected:
    std::shared_ptr<vector<Models::AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResultsAttachInstanceRamRoleResult>> attachInstanceRamRoleResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
