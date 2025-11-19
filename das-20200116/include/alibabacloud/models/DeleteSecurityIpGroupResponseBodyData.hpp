// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECURITYIPGROUPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DELETESECURITYIPGROUPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DeleteSecurityIPGroupResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecurityIPGroupResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalSecurityIPGroup, globalSecurityIPGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecurityIPGroupResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalSecurityIPGroup, globalSecurityIPGroup_);
    };
    DeleteSecurityIPGroupResponseBodyData() = default ;
    DeleteSecurityIPGroupResponseBodyData(const DeleteSecurityIPGroupResponseBodyData &) = default ;
    DeleteSecurityIPGroupResponseBodyData(DeleteSecurityIPGroupResponseBodyData &&) = default ;
    DeleteSecurityIPGroupResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecurityIPGroupResponseBodyData() = default ;
    DeleteSecurityIPGroupResponseBodyData& operator=(const DeleteSecurityIPGroupResponseBodyData &) = default ;
    DeleteSecurityIPGroupResponseBodyData& operator=(DeleteSecurityIPGroupResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->globalSecurityIPGroup_ == nullptr; };
    // globalSecurityIPGroup Field Functions 
    bool hasGlobalSecurityIPGroup() const { return this->globalSecurityIPGroup_ != nullptr;};
    void deleteGlobalSecurityIPGroup() { this->globalSecurityIPGroup_ = nullptr;};
    inline const vector<Models::DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup> & globalSecurityIPGroup() const { DARABONBA_PTR_GET_CONST(globalSecurityIPGroup_, vector<Models::DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup>) };
    inline vector<Models::DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup> globalSecurityIPGroup() { DARABONBA_PTR_GET(globalSecurityIPGroup_, vector<Models::DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup>) };
    inline DeleteSecurityIPGroupResponseBodyData& setGlobalSecurityIPGroup(const vector<Models::DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup> & globalSecurityIPGroup) { DARABONBA_PTR_SET_VALUE(globalSecurityIPGroup_, globalSecurityIPGroup) };
    inline DeleteSecurityIPGroupResponseBodyData& setGlobalSecurityIPGroup(vector<Models::DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup> && globalSecurityIPGroup) { DARABONBA_PTR_SET_RVALUE(globalSecurityIPGroup_, globalSecurityIPGroup) };


  protected:
    std::shared_ptr<vector<Models::DeleteSecurityIPGroupResponseBodyDataGlobalSecurityIPGroup>> globalSecurityIPGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
