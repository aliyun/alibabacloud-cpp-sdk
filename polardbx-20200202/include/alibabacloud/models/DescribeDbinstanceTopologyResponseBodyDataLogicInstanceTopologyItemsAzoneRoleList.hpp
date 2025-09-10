// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETOPOLOGYRESPONSEBODYDATALOGICINSTANCETOPOLOGYITEMSAZONEROLELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETOPOLOGYRESPONSEBODYDATALOGICINSTANCETOPOLOGYITEMSAZONEROLELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList& obj) { 
      DARABONBA_PTR_TO_JSON(Azone, azone_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList& obj) { 
      DARABONBA_PTR_FROM_JSON(Azone, azone_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList() = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList(const DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList &) = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList(DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList &&) = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList() = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList& operator=(const DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList &) = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList& operator=(DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->azone_ != nullptr
        && this->role_ != nullptr; };
    // azone Field Functions 
    bool hasAzone() const { return this->azone_ != nullptr;};
    void deleteAzone() { this->azone_ = nullptr;};
    inline string azone() const { DARABONBA_PTR_GET_DEFAULT(azone_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList& setAzone(string azone) { DARABONBA_PTR_SET_VALUE(azone_, azone) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsAzoneRoleList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    std::shared_ptr<string> azone_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
