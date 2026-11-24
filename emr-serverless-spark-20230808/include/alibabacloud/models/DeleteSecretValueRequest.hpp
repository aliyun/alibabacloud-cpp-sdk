// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECRETVALUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESECRETVALUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class DeleteSecretValueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecretValueRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecretValueRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteSecretValueRequest() = default ;
    DeleteSecretValueRequest(const DeleteSecretValueRequest &) = default ;
    DeleteSecretValueRequest(DeleteSecretValueRequest &&) = default ;
    DeleteSecretValueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecretValueRequest() = default ;
    DeleteSecretValueRequest& operator=(const DeleteSecretValueRequest &) = default ;
    DeleteSecretValueRequest& operator=(DeleteSecretValueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
