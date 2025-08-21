// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXTERNALAPPLICATIONSRESPONSEBODYEXTERNALAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTEXTERNALAPPLICATIONSRESPONSEBODYEXTERNALAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListExternalApplicationsResponseBodyExternalApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExternalApplicationsResponseBodyExternalApplications& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalApplication, externalApplication_);
    };
    friend void from_json(const Darabonba::Json& j, ListExternalApplicationsResponseBodyExternalApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalApplication, externalApplication_);
    };
    ListExternalApplicationsResponseBodyExternalApplications() = default ;
    ListExternalApplicationsResponseBodyExternalApplications(const ListExternalApplicationsResponseBodyExternalApplications &) = default ;
    ListExternalApplicationsResponseBodyExternalApplications(ListExternalApplicationsResponseBodyExternalApplications &&) = default ;
    ListExternalApplicationsResponseBodyExternalApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExternalApplicationsResponseBodyExternalApplications() = default ;
    ListExternalApplicationsResponseBodyExternalApplications& operator=(const ListExternalApplicationsResponseBodyExternalApplications &) = default ;
    ListExternalApplicationsResponseBodyExternalApplications& operator=(ListExternalApplicationsResponseBodyExternalApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->externalApplication_ != nullptr; };
    // externalApplication Field Functions 
    bool hasExternalApplication() const { return this->externalApplication_ != nullptr;};
    void deleteExternalApplication() { this->externalApplication_ = nullptr;};
    inline const vector<Models::ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication> & externalApplication() const { DARABONBA_PTR_GET_CONST(externalApplication_, vector<Models::ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication>) };
    inline vector<Models::ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication> externalApplication() { DARABONBA_PTR_GET(externalApplication_, vector<Models::ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication>) };
    inline ListExternalApplicationsResponseBodyExternalApplications& setExternalApplication(const vector<Models::ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication> & externalApplication) { DARABONBA_PTR_SET_VALUE(externalApplication_, externalApplication) };
    inline ListExternalApplicationsResponseBodyExternalApplications& setExternalApplication(vector<Models::ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication> && externalApplication) { DARABONBA_PTR_SET_RVALUE(externalApplication_, externalApplication) };


  protected:
    std::shared_ptr<vector<Models::ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication>> externalApplication_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
