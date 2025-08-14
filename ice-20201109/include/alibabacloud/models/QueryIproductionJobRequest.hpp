// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYIPRODUCTIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYIPRODUCTIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryIProductionJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryIProductionJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryIProductionJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    QueryIProductionJobRequest() = default ;
    QueryIProductionJobRequest(const QueryIProductionJobRequest &) = default ;
    QueryIProductionJobRequest(QueryIProductionJobRequest &&) = default ;
    QueryIProductionJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryIProductionJobRequest() = default ;
    QueryIProductionJobRequest& operator=(const QueryIProductionJobRequest &) = default ;
    QueryIProductionJobRequest& operator=(QueryIProductionJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->jobId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline QueryIProductionJobRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline QueryIProductionJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the intelligent production job.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
