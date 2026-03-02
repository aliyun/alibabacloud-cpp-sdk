// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCREPOFORKLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_PBCREPOFORKLISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ReposFork.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcRepoForkListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcRepoForkListResult& obj) { 
      DARABONBA_PTR_TO_JSON(reposForks, reposForks_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PbcRepoForkListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(reposForks, reposForks_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    PbcRepoForkListResult() = default ;
    PbcRepoForkListResult(const PbcRepoForkListResult &) = default ;
    PbcRepoForkListResult(PbcRepoForkListResult &&) = default ;
    PbcRepoForkListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcRepoForkListResult() = default ;
    PbcRepoForkListResult& operator=(const PbcRepoForkListResult &) = default ;
    PbcRepoForkListResult& operator=(PbcRepoForkListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reposForks_ == nullptr
        && this->requestId_ == nullptr; };
    // reposForks Field Functions 
    bool hasReposForks() const { return this->reposForks_ != nullptr;};
    void deleteReposForks() { this->reposForks_ = nullptr;};
    inline const vector<ReposFork> & getReposForks() const { DARABONBA_PTR_GET_CONST(reposForks_, vector<ReposFork>) };
    inline vector<ReposFork> getReposForks() { DARABONBA_PTR_GET(reposForks_, vector<ReposFork>) };
    inline PbcRepoForkListResult& setReposForks(const vector<ReposFork> & reposForks) { DARABONBA_PTR_SET_VALUE(reposForks_, reposForks) };
    inline PbcRepoForkListResult& setReposForks(vector<ReposFork> && reposForks) { DARABONBA_PTR_SET_RVALUE(reposForks_, reposForks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PbcRepoForkListResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ReposFork>> reposForks_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
