// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNINSTALLAPPLICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUNINSTALLAPPLICATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUninstallApplicationsResponseBodyApplications.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUninstallApplicationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUninstallApplicationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListUninstallApplicationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListUninstallApplicationsResponseBody() = default ;
    ListUninstallApplicationsResponseBody(const ListUninstallApplicationsResponseBody &) = default ;
    ListUninstallApplicationsResponseBody(ListUninstallApplicationsResponseBody &&) = default ;
    ListUninstallApplicationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUninstallApplicationsResponseBody() = default ;
    ListUninstallApplicationsResponseBody& operator=(const ListUninstallApplicationsResponseBody &) = default ;
    ListUninstallApplicationsResponseBody& operator=(ListUninstallApplicationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applications_ == nullptr
        && return this->requestId_ == nullptr && return this->totalNum_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<ListUninstallApplicationsResponseBodyApplications> & applications() const { DARABONBA_PTR_GET_CONST(applications_, vector<ListUninstallApplicationsResponseBodyApplications>) };
    inline vector<ListUninstallApplicationsResponseBodyApplications> applications() { DARABONBA_PTR_GET(applications_, vector<ListUninstallApplicationsResponseBodyApplications>) };
    inline ListUninstallApplicationsResponseBody& setApplications(const vector<ListUninstallApplicationsResponseBodyApplications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListUninstallApplicationsResponseBody& setApplications(vector<ListUninstallApplicationsResponseBodyApplications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUninstallApplicationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline ListUninstallApplicationsResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    std::shared_ptr<vector<ListUninstallApplicationsResponseBodyApplications>> applications_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
