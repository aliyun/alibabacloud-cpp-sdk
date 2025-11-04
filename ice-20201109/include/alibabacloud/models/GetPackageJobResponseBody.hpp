// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPACKAGEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPACKAGEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPackageJobResponseBodyPackageJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetPackageJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPackageJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PackageJob, packageJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPackageJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PackageJob, packageJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPackageJobResponseBody() = default ;
    GetPackageJobResponseBody(const GetPackageJobResponseBody &) = default ;
    GetPackageJobResponseBody(GetPackageJobResponseBody &&) = default ;
    GetPackageJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPackageJobResponseBody() = default ;
    GetPackageJobResponseBody& operator=(const GetPackageJobResponseBody &) = default ;
    GetPackageJobResponseBody& operator=(GetPackageJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->packageJob_ == nullptr
        && return this->requestId_ == nullptr; };
    // packageJob Field Functions 
    bool hasPackageJob() const { return this->packageJob_ != nullptr;};
    void deletePackageJob() { this->packageJob_ = nullptr;};
    inline const GetPackageJobResponseBodyPackageJob & packageJob() const { DARABONBA_PTR_GET_CONST(packageJob_, GetPackageJobResponseBodyPackageJob) };
    inline GetPackageJobResponseBodyPackageJob packageJob() { DARABONBA_PTR_GET(packageJob_, GetPackageJobResponseBodyPackageJob) };
    inline GetPackageJobResponseBody& setPackageJob(const GetPackageJobResponseBodyPackageJob & packageJob) { DARABONBA_PTR_SET_VALUE(packageJob_, packageJob) };
    inline GetPackageJobResponseBody& setPackageJob(GetPackageJobResponseBodyPackageJob && packageJob) { DARABONBA_PTR_SET_RVALUE(packageJob_, packageJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPackageJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the packaging job.
    std::shared_ptr<GetPackageJobResponseBodyPackageJob> packageJob_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
