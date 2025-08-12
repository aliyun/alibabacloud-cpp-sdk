// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASYNJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTASYNJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListAsynJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAsynJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobIds, jobIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListAsynJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobIds, jobIds_);
    };
    ListAsynJobsRequest() = default ;
    ListAsynJobsRequest(const ListAsynJobsRequest &) = default ;
    ListAsynJobsRequest(ListAsynJobsRequest &&) = default ;
    ListAsynJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAsynJobsRequest() = default ;
    ListAsynJobsRequest& operator=(const ListAsynJobsRequest &) = default ;
    ListAsynJobsRequest& operator=(ListAsynJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobIds_ != nullptr; };
    // jobIds Field Functions 
    bool hasJobIds() const { return this->jobIds_ != nullptr;};
    void deleteJobIds() { this->jobIds_ = nullptr;};
    inline const vector<string> & jobIds() const { DARABONBA_PTR_GET_CONST(jobIds_, vector<string>) };
    inline vector<string> jobIds() { DARABONBA_PTR_GET(jobIds_, vector<string>) };
    inline ListAsynJobsRequest& setJobIds(const vector<string> & jobIds) { DARABONBA_PTR_SET_VALUE(jobIds_, jobIds) };
    inline ListAsynJobsRequest& setJobIds(vector<string> && jobIds) { DARABONBA_PTR_SET_RVALUE(jobIds_, jobIds) };


  protected:
    // The task IDs.
    std::shared_ptr<vector<string>> jobIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
