// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTCSECURITYIPHOSTSFORSQLSERVERRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTCSECURITYIPHOSTSFORSQLSERVERRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(WhiteListGroups, whiteListGroups_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(WhiteListGroups, whiteListGroups_);
    };
    DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems() = default ;
    DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems(const DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems &) = default ;
    DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems(DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems &&) = default ;
    DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems() = default ;
    DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems& operator=(const DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems &) = default ;
    DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems& operator=(DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->whiteListGroups_ == nullptr; };
    // whiteListGroups Field Functions 
    bool hasWhiteListGroups() const { return this->whiteListGroups_ != nullptr;};
    void deleteWhiteListGroups() { this->whiteListGroups_ = nullptr;};
    inline const vector<Models::DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups> & whiteListGroups() const { DARABONBA_PTR_GET_CONST(whiteListGroups_, vector<Models::DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups>) };
    inline vector<Models::DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups> whiteListGroups() { DARABONBA_PTR_GET(whiteListGroups_, vector<Models::DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups>) };
    inline DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems& setWhiteListGroups(const vector<Models::DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups> & whiteListGroups) { DARABONBA_PTR_SET_VALUE(whiteListGroups_, whiteListGroups) };
    inline DescribeDTCSecurityIpHostsForSQLServerResponseBodyItems& setWhiteListGroups(vector<Models::DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups> && whiteListGroups) { DARABONBA_PTR_SET_RVALUE(whiteListGroups_, whiteListGroups) };


  protected:
    std::shared_ptr<vector<Models::DescribeDTCSecurityIpHostsForSQLServerResponseBodyItemsWhiteListGroups>> whiteListGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
