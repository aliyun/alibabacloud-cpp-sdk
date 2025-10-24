// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMEDIARESPONSEBODYMEDIARUNIDLIST_HPP_
#define ALIBABACLOUD_MODELS_ADDMEDIARESPONSEBODYMEDIARUNIDLIST_HPP_
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
  class AddMediaResponseBodyMediaRunIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMediaResponseBodyMediaRunIdList& obj) { 
      DARABONBA_PTR_TO_JSON(RunId, runId_);
    };
    friend void from_json(const Darabonba::Json& j, AddMediaResponseBodyMediaRunIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(RunId, runId_);
    };
    AddMediaResponseBodyMediaRunIdList() = default ;
    AddMediaResponseBodyMediaRunIdList(const AddMediaResponseBodyMediaRunIdList &) = default ;
    AddMediaResponseBodyMediaRunIdList(AddMediaResponseBodyMediaRunIdList &&) = default ;
    AddMediaResponseBodyMediaRunIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMediaResponseBodyMediaRunIdList() = default ;
    AddMediaResponseBodyMediaRunIdList& operator=(const AddMediaResponseBodyMediaRunIdList &) = default ;
    AddMediaResponseBodyMediaRunIdList& operator=(AddMediaResponseBodyMediaRunIdList &&) = default ;
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
    inline AddMediaResponseBodyMediaRunIdList& setRunId(const vector<string> & runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };
    inline AddMediaResponseBodyMediaRunIdList& setRunId(vector<string> && runId) { DARABONBA_PTR_SET_RVALUE(runId_, runId) };


  protected:
    std::shared_ptr<vector<string>> runId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
