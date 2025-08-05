// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLIENTSRESPONSEBODYINSTANCESTATUSES_HPP_
#define ALIBABACLOUD_MODELS_CREATECLIENTSRESPONSEBODYINSTANCESTATUSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateClientsResponseBodyInstanceStatusesInstanceStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreateClientsResponseBodyInstanceStatuses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClientsResponseBodyInstanceStatuses& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClientsResponseBodyInstanceStatuses& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
    };
    CreateClientsResponseBodyInstanceStatuses() = default ;
    CreateClientsResponseBodyInstanceStatuses(const CreateClientsResponseBodyInstanceStatuses &) = default ;
    CreateClientsResponseBodyInstanceStatuses(CreateClientsResponseBodyInstanceStatuses &&) = default ;
    CreateClientsResponseBodyInstanceStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClientsResponseBodyInstanceStatuses() = default ;
    CreateClientsResponseBodyInstanceStatuses& operator=(const CreateClientsResponseBodyInstanceStatuses &) = default ;
    CreateClientsResponseBodyInstanceStatuses& operator=(CreateClientsResponseBodyInstanceStatuses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceStatus_ != nullptr; };
    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline const vector<Models::CreateClientsResponseBodyInstanceStatusesInstanceStatus> & instanceStatus() const { DARABONBA_PTR_GET_CONST(instanceStatus_, vector<Models::CreateClientsResponseBodyInstanceStatusesInstanceStatus>) };
    inline vector<Models::CreateClientsResponseBodyInstanceStatusesInstanceStatus> instanceStatus() { DARABONBA_PTR_GET(instanceStatus_, vector<Models::CreateClientsResponseBodyInstanceStatusesInstanceStatus>) };
    inline CreateClientsResponseBodyInstanceStatuses& setInstanceStatus(const vector<Models::CreateClientsResponseBodyInstanceStatusesInstanceStatus> & instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };
    inline CreateClientsResponseBodyInstanceStatuses& setInstanceStatus(vector<Models::CreateClientsResponseBodyInstanceStatusesInstanceStatus> && instanceStatus) { DARABONBA_PTR_SET_RVALUE(instanceStatus_, instanceStatus) };


  protected:
    std::shared_ptr<vector<Models::CreateClientsResponseBodyInstanceStatusesInstanceStatus>> instanceStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
