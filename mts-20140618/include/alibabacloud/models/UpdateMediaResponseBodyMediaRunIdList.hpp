// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIARESPONSEBODYMEDIARUNIDLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIARESPONSEBODYMEDIARUNIDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UpdateMediaResponseBodyMediaRunIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaResponseBodyMediaRunIdList& obj) { 
      DARABONBA_PTR_TO_JSON(RunId, runId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaResponseBodyMediaRunIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(RunId, runId_);
    };
    UpdateMediaResponseBodyMediaRunIdList() = default ;
    UpdateMediaResponseBodyMediaRunIdList(const UpdateMediaResponseBodyMediaRunIdList &) = default ;
    UpdateMediaResponseBodyMediaRunIdList(UpdateMediaResponseBodyMediaRunIdList &&) = default ;
    UpdateMediaResponseBodyMediaRunIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaResponseBodyMediaRunIdList() = default ;
    UpdateMediaResponseBodyMediaRunIdList& operator=(const UpdateMediaResponseBodyMediaRunIdList &) = default ;
    UpdateMediaResponseBodyMediaRunIdList& operator=(UpdateMediaResponseBodyMediaRunIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->runId_ == nullptr; };
    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline const vector<string> & runId() const { DARABONBA_PTR_GET_CONST(runId_, vector<string>) };
    inline vector<string> runId() { DARABONBA_PTR_GET(runId_, vector<string>) };
    inline UpdateMediaResponseBodyMediaRunIdList& setRunId(const vector<string> & runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };
    inline UpdateMediaResponseBodyMediaRunIdList& setRunId(vector<string> && runId) { DARABONBA_PTR_SET_RVALUE(runId_, runId) };


  protected:
    std::shared_ptr<vector<string>> runId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
