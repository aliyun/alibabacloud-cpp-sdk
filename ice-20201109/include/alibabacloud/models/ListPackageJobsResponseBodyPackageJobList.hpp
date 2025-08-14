// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPACKAGEJOBSRESPONSEBODYPACKAGEJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPACKAGEJOBSRESPONSEBODYPACKAGEJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPackageJobsResponseBodyPackageJobListPackageJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListPackageJobsResponseBodyPackageJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPackageJobsResponseBodyPackageJobList& obj) { 
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(PackageJobs, packageJobs_);
    };
    friend void from_json(const Darabonba::Json& j, ListPackageJobsResponseBodyPackageJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(PackageJobs, packageJobs_);
    };
    ListPackageJobsResponseBodyPackageJobList() = default ;
    ListPackageJobsResponseBodyPackageJobList(const ListPackageJobsResponseBodyPackageJobList &) = default ;
    ListPackageJobsResponseBodyPackageJobList(ListPackageJobsResponseBodyPackageJobList &&) = default ;
    ListPackageJobsResponseBodyPackageJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPackageJobsResponseBodyPackageJobList() = default ;
    ListPackageJobsResponseBodyPackageJobList& operator=(const ListPackageJobsResponseBodyPackageJobList &) = default ;
    ListPackageJobsResponseBodyPackageJobList& operator=(ListPackageJobsResponseBodyPackageJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextPageToken_ != nullptr
        && this->packageJobs_ != nullptr; };
    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListPackageJobsResponseBodyPackageJobList& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // packageJobs Field Functions 
    bool hasPackageJobs() const { return this->packageJobs_ != nullptr;};
    void deletePackageJobs() { this->packageJobs_ = nullptr;};
    inline const vector<Models::ListPackageJobsResponseBodyPackageJobListPackageJobs> & packageJobs() const { DARABONBA_PTR_GET_CONST(packageJobs_, vector<Models::ListPackageJobsResponseBodyPackageJobListPackageJobs>) };
    inline vector<Models::ListPackageJobsResponseBodyPackageJobListPackageJobs> packageJobs() { DARABONBA_PTR_GET(packageJobs_, vector<Models::ListPackageJobsResponseBodyPackageJobListPackageJobs>) };
    inline ListPackageJobsResponseBodyPackageJobList& setPackageJobs(const vector<Models::ListPackageJobsResponseBodyPackageJobListPackageJobs> & packageJobs) { DARABONBA_PTR_SET_VALUE(packageJobs_, packageJobs) };
    inline ListPackageJobsResponseBodyPackageJobList& setPackageJobs(vector<Models::ListPackageJobsResponseBodyPackageJobListPackageJobs> && packageJobs) { DARABONBA_PTR_SET_RVALUE(packageJobs_, packageJobs) };


  protected:
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. The token of the next page is returned after you call this operation for the first time.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The list of packaging jobs.
    std::shared_ptr<vector<Models::ListPackageJobsResponseBodyPackageJobListPackageJobs>> packageJobs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
