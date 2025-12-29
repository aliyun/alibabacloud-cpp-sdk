// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Application.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListApplicationsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(applications, applications_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(applications, applications_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListApplicationsOutput() = default ;
    ListApplicationsOutput(const ListApplicationsOutput &) = default ;
    ListApplicationsOutput(ListApplicationsOutput &&) = default ;
    ListApplicationsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsOutput() = default ;
    ListApplicationsOutput& operator=(const ListApplicationsOutput &) = default ;
    ListApplicationsOutput& operator=(ListApplicationsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applications_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<Application> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<Application>) };
    inline vector<Application> getApplications() { DARABONBA_PTR_GET(applications_, vector<Application>) };
    inline ListApplicationsOutput& setApplications(const vector<Application> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListApplicationsOutput& setApplications(vector<Application> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApplicationsOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationsOutput& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<Application>> applications_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
