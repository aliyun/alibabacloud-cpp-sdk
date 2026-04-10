// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGGTASKGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGGTASKGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteAggTaskGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAggTaskGroupRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteAggTaskGroupRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteAggTaskGroupRequest() = default ;
    DeleteAggTaskGroupRequest(const DeleteAggTaskGroupRequest &) = default ;
    DeleteAggTaskGroupRequest(DeleteAggTaskGroupRequest &&) = default ;
    DeleteAggTaskGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAggTaskGroupRequest() = default ;
    DeleteAggTaskGroupRequest& operator=(const DeleteAggTaskGroupRequest &) = default ;
    DeleteAggTaskGroupRequest& operator=(DeleteAggTaskGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
