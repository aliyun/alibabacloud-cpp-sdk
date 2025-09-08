// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSWITHSTATUSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSWITHSTATUSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApplicationWithStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListApplicationsWithStatusOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsWithStatusOutput& obj) { 
      DARABONBA_PTR_TO_JSON(applications, applications_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsWithStatusOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(applications, applications_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListApplicationsWithStatusOutput() = default ;
    ListApplicationsWithStatusOutput(const ListApplicationsWithStatusOutput &) = default ;
    ListApplicationsWithStatusOutput(ListApplicationsWithStatusOutput &&) = default ;
    ListApplicationsWithStatusOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsWithStatusOutput() = default ;
    ListApplicationsWithStatusOutput& operator=(const ListApplicationsWithStatusOutput &) = default ;
    ListApplicationsWithStatusOutput& operator=(ListApplicationsWithStatusOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applications_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<ApplicationWithStatus> & applications() const { DARABONBA_PTR_GET_CONST(applications_, vector<ApplicationWithStatus>) };
    inline vector<ApplicationWithStatus> applications() { DARABONBA_PTR_GET(applications_, vector<ApplicationWithStatus>) };
    inline ListApplicationsWithStatusOutput& setApplications(const vector<ApplicationWithStatus> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListApplicationsWithStatusOutput& setApplications(vector<ApplicationWithStatus> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApplicationsWithStatusOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationsWithStatusOutput& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ApplicationWithStatus>> applications_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
