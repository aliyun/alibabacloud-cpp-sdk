// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREGISTRANTPROFILESRESPONSEBODYREGISTRANTPROFILES_HPP_
#define ALIBABACLOUD_MODELS_QUERYREGISTRANTPROFILESRESPONSEBODYREGISTRANTPROFILES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryRegistrantProfilesResponseBodyRegistrantProfiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRegistrantProfilesResponseBodyRegistrantProfiles& obj) { 
      DARABONBA_PTR_TO_JSON(RegistrantProfile, registrantProfile_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRegistrantProfilesResponseBodyRegistrantProfiles& obj) { 
      DARABONBA_PTR_FROM_JSON(RegistrantProfile, registrantProfile_);
    };
    QueryRegistrantProfilesResponseBodyRegistrantProfiles() = default ;
    QueryRegistrantProfilesResponseBodyRegistrantProfiles(const QueryRegistrantProfilesResponseBodyRegistrantProfiles &) = default ;
    QueryRegistrantProfilesResponseBodyRegistrantProfiles(QueryRegistrantProfilesResponseBodyRegistrantProfiles &&) = default ;
    QueryRegistrantProfilesResponseBodyRegistrantProfiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRegistrantProfilesResponseBodyRegistrantProfiles() = default ;
    QueryRegistrantProfilesResponseBodyRegistrantProfiles& operator=(const QueryRegistrantProfilesResponseBodyRegistrantProfiles &) = default ;
    QueryRegistrantProfilesResponseBodyRegistrantProfiles& operator=(QueryRegistrantProfilesResponseBodyRegistrantProfiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->registrantProfile_ == nullptr; };
    // registrantProfile Field Functions 
    bool hasRegistrantProfile() const { return this->registrantProfile_ != nullptr;};
    void deleteRegistrantProfile() { this->registrantProfile_ = nullptr;};
    inline const vector<Models::QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile> & registrantProfile() const { DARABONBA_PTR_GET_CONST(registrantProfile_, vector<Models::QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile>) };
    inline vector<Models::QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile> registrantProfile() { DARABONBA_PTR_GET(registrantProfile_, vector<Models::QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile>) };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfiles& setRegistrantProfile(const vector<Models::QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile> & registrantProfile) { DARABONBA_PTR_SET_VALUE(registrantProfile_, registrantProfile) };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfiles& setRegistrantProfile(vector<Models::QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile> && registrantProfile) { DARABONBA_PTR_SET_RVALUE(registrantProfile_, registrantProfile) };


  protected:
    std::shared_ptr<vector<Models::QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile>> registrantProfile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
