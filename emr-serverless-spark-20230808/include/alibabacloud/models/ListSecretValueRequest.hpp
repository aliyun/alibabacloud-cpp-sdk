// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETVALUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETVALUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListSecretValueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretValueRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, ListSecretValueRequest& obj) { 
      (void)j; (void)obj; 
    };
    ListSecretValueRequest() = default ;
    ListSecretValueRequest(const ListSecretValueRequest &) = default ;
    ListSecretValueRequest(ListSecretValueRequest &&) = default ;
    ListSecretValueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretValueRequest() = default ;
    ListSecretValueRequest& operator=(const ListSecretValueRequest &) = default ;
    ListSecretValueRequest& operator=(ListSecretValueRequest &&) = default ;
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
