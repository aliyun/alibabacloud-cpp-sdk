// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECURITYIPGROUPRESPONSEBODYDATAGLOBALSECURITYIPGROUP_HPP_
#define ALIBABACLOUD_MODELS_DELETESECURITYIPGROUPRESPONSEBODYDATAGLOBALSECURITYIPGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
    };
    DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup() = default ;
    DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup(const DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup &) = default ;
    DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup(DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup &&) = default ;
    DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup() = default ;
    DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup& operator=(const DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup &) = default ;
    DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup& operator=(DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->globalSecurityGroupId_ == nullptr; };
    // globalSecurityGroupId Field Functions 
    bool hasGlobalSecurityGroupId() const { return this->globalSecurityGroupId_ != nullptr;};
    void deleteGlobalSecurityGroupId() { this->globalSecurityGroupId_ = nullptr;};
    inline string globalSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(globalSecurityGroupId_, "") };
    inline DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup& setGlobalSecurityGroupId(string globalSecurityGroupId) { DARABONBA_PTR_SET_VALUE(globalSecurityGroupId_, globalSecurityGroupId) };


  protected:
    std::shared_ptr<string> globalSecurityGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
