// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGANIZATIONMEMBERSEATSTATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETORGANIZATIONMEMBERSEATSTATSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class GetOrganizationMemberSeatStatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrganizationMemberSeatStatsRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetOrganizationMemberSeatStatsRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetOrganizationMemberSeatStatsRequest() = default ;
    GetOrganizationMemberSeatStatsRequest(const GetOrganizationMemberSeatStatsRequest &) = default ;
    GetOrganizationMemberSeatStatsRequest(GetOrganizationMemberSeatStatsRequest &&) = default ;
    GetOrganizationMemberSeatStatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrganizationMemberSeatStatsRequest() = default ;
    GetOrganizationMemberSeatStatsRequest& operator=(const GetOrganizationMemberSeatStatsRequest &) = default ;
    GetOrganizationMemberSeatStatsRequest& operator=(GetOrganizationMemberSeatStatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
