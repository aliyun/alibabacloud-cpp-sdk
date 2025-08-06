// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHINSTANCERAMROLERESPONSEBODYDETACHINSTANCERAMROLERESULTS_HPP_
#define ALIBABACLOUD_MODELS_DETACHINSTANCERAMROLERESPONSEBODYDETACHINSTANCERAMROLERESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults& obj) { 
      DARABONBA_PTR_TO_JSON(DetachInstanceRamRoleResult, detachInstanceRamRoleResult_);
    };
    friend void from_json(const Darabonba::Json& j, DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults& obj) { 
      DARABONBA_PTR_FROM_JSON(DetachInstanceRamRoleResult, detachInstanceRamRoleResult_);
    };
    DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults() = default ;
    DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults(const DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults &) = default ;
    DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults(DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults &&) = default ;
    DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults() = default ;
    DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults& operator=(const DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults &) = default ;
    DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults& operator=(DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detachInstanceRamRoleResult_ != nullptr; };
    // detachInstanceRamRoleResult Field Functions 
    bool hasDetachInstanceRamRoleResult() const { return this->detachInstanceRamRoleResult_ != nullptr;};
    void deleteDetachInstanceRamRoleResult() { this->detachInstanceRamRoleResult_ = nullptr;};
    inline const vector<Models::DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResult> & detachInstanceRamRoleResult() const { DARABONBA_PTR_GET_CONST(detachInstanceRamRoleResult_, vector<Models::DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResult>) };
    inline vector<Models::DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResult> detachInstanceRamRoleResult() { DARABONBA_PTR_GET(detachInstanceRamRoleResult_, vector<Models::DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResult>) };
    inline DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults& setDetachInstanceRamRoleResult(const vector<Models::DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResult> & detachInstanceRamRoleResult) { DARABONBA_PTR_SET_VALUE(detachInstanceRamRoleResult_, detachInstanceRamRoleResult) };
    inline DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults& setDetachInstanceRamRoleResult(vector<Models::DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResult> && detachInstanceRamRoleResult) { DARABONBA_PTR_SET_RVALUE(detachInstanceRamRoleResult_, detachInstanceRamRoleResult) };


  protected:
    std::shared_ptr<vector<Models::DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResult>> detachInstanceRamRoleResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
