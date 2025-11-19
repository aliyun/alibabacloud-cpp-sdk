// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYIPGROUPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYIPGROUPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSecurityIPGroupResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityIPGroupResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityIpGroups, securityIpGroups_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityIPGroupResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityIpGroups, securityIpGroups_);
    };
    DescribeSecurityIPGroupResponseBodyData() = default ;
    DescribeSecurityIPGroupResponseBodyData(const DescribeSecurityIPGroupResponseBodyData &) = default ;
    DescribeSecurityIPGroupResponseBodyData(DescribeSecurityIPGroupResponseBodyData &&) = default ;
    DescribeSecurityIPGroupResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityIPGroupResponseBodyData() = default ;
    DescribeSecurityIPGroupResponseBodyData& operator=(const DescribeSecurityIPGroupResponseBodyData &) = default ;
    DescribeSecurityIPGroupResponseBodyData& operator=(DescribeSecurityIPGroupResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityIpGroups_ == nullptr; };
    // securityIpGroups Field Functions 
    bool hasSecurityIpGroups() const { return this->securityIpGroups_ != nullptr;};
    void deleteSecurityIpGroups() { this->securityIpGroups_ = nullptr;};
    inline const vector<Models::DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups> & securityIpGroups() const { DARABONBA_PTR_GET_CONST(securityIpGroups_, vector<Models::DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups>) };
    inline vector<Models::DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups> securityIpGroups() { DARABONBA_PTR_GET(securityIpGroups_, vector<Models::DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups>) };
    inline DescribeSecurityIPGroupResponseBodyData& setSecurityIpGroups(const vector<Models::DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups> & securityIpGroups) { DARABONBA_PTR_SET_VALUE(securityIpGroups_, securityIpGroups) };
    inline DescribeSecurityIPGroupResponseBodyData& setSecurityIpGroups(vector<Models::DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups> && securityIpGroups) { DARABONBA_PTR_SET_RVALUE(securityIpGroups_, securityIpGroups) };


  protected:
    std::shared_ptr<vector<Models::DescribeSecurityIPGroupResponseBodyDataSecurityIpGroups>> securityIpGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
