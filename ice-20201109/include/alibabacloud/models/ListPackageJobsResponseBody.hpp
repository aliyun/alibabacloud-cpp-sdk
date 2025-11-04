// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPACKAGEJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPACKAGEJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPackageJobsResponseBodyPackageJobList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListPackageJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPackageJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PackageJobList, packageJobList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPackageJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PackageJobList, packageJobList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPackageJobsResponseBody() = default ;
    ListPackageJobsResponseBody(const ListPackageJobsResponseBody &) = default ;
    ListPackageJobsResponseBody(ListPackageJobsResponseBody &&) = default ;
    ListPackageJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPackageJobsResponseBody() = default ;
    ListPackageJobsResponseBody& operator=(const ListPackageJobsResponseBody &) = default ;
    ListPackageJobsResponseBody& operator=(ListPackageJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->packageJobList_ == nullptr
        && return this->requestId_ == nullptr; };
    // packageJobList Field Functions 
    bool hasPackageJobList() const { return this->packageJobList_ != nullptr;};
    void deletePackageJobList() { this->packageJobList_ = nullptr;};
    inline const ListPackageJobsResponseBodyPackageJobList & packageJobList() const { DARABONBA_PTR_GET_CONST(packageJobList_, ListPackageJobsResponseBodyPackageJobList) };
    inline ListPackageJobsResponseBodyPackageJobList packageJobList() { DARABONBA_PTR_GET(packageJobList_, ListPackageJobsResponseBodyPackageJobList) };
    inline ListPackageJobsResponseBody& setPackageJobList(const ListPackageJobsResponseBodyPackageJobList & packageJobList) { DARABONBA_PTR_SET_VALUE(packageJobList_, packageJobList) };
    inline ListPackageJobsResponseBody& setPackageJobList(ListPackageJobsResponseBodyPackageJobList && packageJobList) { DARABONBA_PTR_SET_RVALUE(packageJobList_, packageJobList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPackageJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of packaging jobs.
    std::shared_ptr<ListPackageJobsResponseBodyPackageJobList> packageJobList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
