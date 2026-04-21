// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIMITATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIMITATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class ListLimitationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLimitationsRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, ListLimitationsRequest& obj) { 
      (void)j; (void)obj; 
    };
    ListLimitationsRequest() = default ;
    ListLimitationsRequest(const ListLimitationsRequest &) = default ;
    ListLimitationsRequest(ListLimitationsRequest &&) = default ;
    ListLimitationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLimitationsRequest() = default ;
    ListLimitationsRequest& operator=(const ListLimitationsRequest &) = default ;
    ListLimitationsRequest& operator=(ListLimitationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
