// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTANCERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTANCERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class DeleteInstanceResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstanceResourceRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstanceResourceRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteInstanceResourceRequest() = default ;
    DeleteInstanceResourceRequest(const DeleteInstanceResourceRequest &) = default ;
    DeleteInstanceResourceRequest(DeleteInstanceResourceRequest &&) = default ;
    DeleteInstanceResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstanceResourceRequest() = default ;
    DeleteInstanceResourceRequest& operator=(const DeleteInstanceResourceRequest &) = default ;
    DeleteInstanceResourceRequest& operator=(DeleteInstanceResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
