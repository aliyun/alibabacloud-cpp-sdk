// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEMORYNODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEMORYNODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class DeleteMemoryNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMemoryNodeRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteMemoryNodeRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteMemoryNodeRequest() = default ;
    DeleteMemoryNodeRequest(const DeleteMemoryNodeRequest &) = default ;
    DeleteMemoryNodeRequest(DeleteMemoryNodeRequest &&) = default ;
    DeleteMemoryNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMemoryNodeRequest() = default ;
    DeleteMemoryNodeRequest& operator=(const DeleteMemoryNodeRequest &) = default ;
    DeleteMemoryNodeRequest& operator=(DeleteMemoryNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
