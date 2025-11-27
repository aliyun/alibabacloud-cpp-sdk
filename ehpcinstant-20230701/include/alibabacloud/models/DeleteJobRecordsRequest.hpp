// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEJOBRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEJOBRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class DeleteJobRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteJobRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobIds, jobIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteJobRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobIds, jobIds_);
    };
    DeleteJobRecordsRequest() = default ;
    DeleteJobRecordsRequest(const DeleteJobRecordsRequest &) = default ;
    DeleteJobRecordsRequest(DeleteJobRecordsRequest &&) = default ;
    DeleteJobRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteJobRecordsRequest() = default ;
    DeleteJobRecordsRequest& operator=(const DeleteJobRecordsRequest &) = default ;
    DeleteJobRecordsRequest& operator=(DeleteJobRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobIds_ == nullptr; };
    // jobIds Field Functions 
    bool hasJobIds() const { return this->jobIds_ != nullptr;};
    void deleteJobIds() { this->jobIds_ = nullptr;};
    inline const vector<string> & jobIds() const { DARABONBA_PTR_GET_CONST(jobIds_, vector<string>) };
    inline vector<string> jobIds() { DARABONBA_PTR_GET(jobIds_, vector<string>) };
    inline DeleteJobRecordsRequest& setJobIds(const vector<string> & jobIds) { DARABONBA_PTR_SET_VALUE(jobIds_, jobIds) };
    inline DeleteJobRecordsRequest& setJobIds(vector<string> && jobIds) { DARABONBA_PTR_SET_RVALUE(jobIds_, jobIds) };


  protected:
    // The list of job IDs.
    std::shared_ptr<vector<string>> jobIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
