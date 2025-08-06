// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICAPTIONEXTRACTIONJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAICAPTIONEXTRACTIONJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAICaptionExtractionJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICaptionExtractionJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobIds, jobIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICaptionExtractionJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobIds, jobIds_);
    };
    GetAICaptionExtractionJobsRequest() = default ;
    GetAICaptionExtractionJobsRequest(const GetAICaptionExtractionJobsRequest &) = default ;
    GetAICaptionExtractionJobsRequest(GetAICaptionExtractionJobsRequest &&) = default ;
    GetAICaptionExtractionJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICaptionExtractionJobsRequest() = default ;
    GetAICaptionExtractionJobsRequest& operator=(const GetAICaptionExtractionJobsRequest &) = default ;
    GetAICaptionExtractionJobsRequest& operator=(GetAICaptionExtractionJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobIds_ != nullptr; };
    // jobIds Field Functions 
    bool hasJobIds() const { return this->jobIds_ != nullptr;};
    void deleteJobIds() { this->jobIds_ = nullptr;};
    inline string jobIds() const { DARABONBA_PTR_GET_DEFAULT(jobIds_, "") };
    inline GetAICaptionExtractionJobsRequest& setJobIds(string jobIds) { DARABONBA_PTR_SET_VALUE(jobIds_, jobIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> jobIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
