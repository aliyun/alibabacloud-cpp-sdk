// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAIMODELPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAIMODELPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class DeleteAiModelProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAiModelProviderRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteAiModelProviderRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteAiModelProviderRequest() = default ;
    DeleteAiModelProviderRequest(const DeleteAiModelProviderRequest &) = default ;
    DeleteAiModelProviderRequest(DeleteAiModelProviderRequest &&) = default ;
    DeleteAiModelProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAiModelProviderRequest() = default ;
    DeleteAiModelProviderRequest& operator=(const DeleteAiModelProviderRequest &) = default ;
    DeleteAiModelProviderRequest& operator=(DeleteAiModelProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
