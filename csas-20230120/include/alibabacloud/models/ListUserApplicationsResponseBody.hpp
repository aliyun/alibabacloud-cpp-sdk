// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERAPPLICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERAPPLICATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserApplicationsResponseBodyApplications.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUserApplicationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserApplicationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserApplicationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListUserApplicationsResponseBody() = default ;
    ListUserApplicationsResponseBody(const ListUserApplicationsResponseBody &) = default ;
    ListUserApplicationsResponseBody(ListUserApplicationsResponseBody &&) = default ;
    ListUserApplicationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserApplicationsResponseBody() = default ;
    ListUserApplicationsResponseBody& operator=(const ListUserApplicationsResponseBody &) = default ;
    ListUserApplicationsResponseBody& operator=(ListUserApplicationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applications_ != nullptr
        && this->requestId_ != nullptr && this->totalNum_ != nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<ListUserApplicationsResponseBodyApplications> & applications() const { DARABONBA_PTR_GET_CONST(applications_, vector<ListUserApplicationsResponseBodyApplications>) };
    inline vector<ListUserApplicationsResponseBodyApplications> applications() { DARABONBA_PTR_GET(applications_, vector<ListUserApplicationsResponseBodyApplications>) };
    inline ListUserApplicationsResponseBody& setApplications(const vector<ListUserApplicationsResponseBodyApplications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListUserApplicationsResponseBody& setApplications(vector<ListUserApplicationsResponseBodyApplications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserApplicationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListUserApplicationsResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    std::shared_ptr<vector<ListUserApplicationsResponseBodyApplications>> applications_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
