// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODYAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODYAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApplicationsResponseBodyApplicationsApplication.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListApplicationsResponseBodyApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsResponseBodyApplications& obj) { 
      DARABONBA_PTR_TO_JSON(Application, application_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsResponseBodyApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(Application, application_);
    };
    ListApplicationsResponseBodyApplications() = default ;
    ListApplicationsResponseBodyApplications(const ListApplicationsResponseBodyApplications &) = default ;
    ListApplicationsResponseBodyApplications(ListApplicationsResponseBodyApplications &&) = default ;
    ListApplicationsResponseBodyApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsResponseBodyApplications() = default ;
    ListApplicationsResponseBodyApplications& operator=(const ListApplicationsResponseBodyApplications &) = default ;
    ListApplicationsResponseBodyApplications& operator=(ListApplicationsResponseBodyApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->application_ != nullptr; };
    // application Field Functions 
    bool hasApplication() const { return this->application_ != nullptr;};
    void deleteApplication() { this->application_ = nullptr;};
    inline const vector<Models::ListApplicationsResponseBodyApplicationsApplication> & application() const { DARABONBA_PTR_GET_CONST(application_, vector<Models::ListApplicationsResponseBodyApplicationsApplication>) };
    inline vector<Models::ListApplicationsResponseBodyApplicationsApplication> application() { DARABONBA_PTR_GET(application_, vector<Models::ListApplicationsResponseBodyApplicationsApplication>) };
    inline ListApplicationsResponseBodyApplications& setApplication(const vector<Models::ListApplicationsResponseBodyApplicationsApplication> & application) { DARABONBA_PTR_SET_VALUE(application_, application) };
    inline ListApplicationsResponseBodyApplications& setApplication(vector<Models::ListApplicationsResponseBodyApplicationsApplication> && application) { DARABONBA_PTR_SET_RVALUE(application_, application) };


  protected:
    std::shared_ptr<vector<Models::ListApplicationsResponseBodyApplicationsApplication>> application_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
