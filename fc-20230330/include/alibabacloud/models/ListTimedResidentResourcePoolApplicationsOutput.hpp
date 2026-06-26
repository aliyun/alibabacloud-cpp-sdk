// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTIMEDRESIDENTRESOURCEPOOLAPPLICATIONSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTTIMEDRESIDENTRESOURCEPOOLAPPLICATIONSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TimedResidentResourcePoolApplication.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListTimedResidentResourcePoolApplicationsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTimedResidentResourcePoolApplicationsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(applications, applications_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListTimedResidentResourcePoolApplicationsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(applications, applications_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListTimedResidentResourcePoolApplicationsOutput() = default ;
    ListTimedResidentResourcePoolApplicationsOutput(const ListTimedResidentResourcePoolApplicationsOutput &) = default ;
    ListTimedResidentResourcePoolApplicationsOutput(ListTimedResidentResourcePoolApplicationsOutput &&) = default ;
    ListTimedResidentResourcePoolApplicationsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTimedResidentResourcePoolApplicationsOutput() = default ;
    ListTimedResidentResourcePoolApplicationsOutput& operator=(const ListTimedResidentResourcePoolApplicationsOutput &) = default ;
    ListTimedResidentResourcePoolApplicationsOutput& operator=(ListTimedResidentResourcePoolApplicationsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applications_ == nullptr
        && this->nextToken_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<TimedResidentResourcePoolApplication> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<TimedResidentResourcePoolApplication>) };
    inline vector<TimedResidentResourcePoolApplication> getApplications() { DARABONBA_PTR_GET(applications_, vector<TimedResidentResourcePoolApplication>) };
    inline ListTimedResidentResourcePoolApplicationsOutput& setApplications(const vector<TimedResidentResourcePoolApplication> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListTimedResidentResourcePoolApplicationsOutput& setApplications(vector<TimedResidentResourcePoolApplication> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTimedResidentResourcePoolApplicationsOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    shared_ptr<vector<TimedResidentResourcePoolApplication>> applications_ {};
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
