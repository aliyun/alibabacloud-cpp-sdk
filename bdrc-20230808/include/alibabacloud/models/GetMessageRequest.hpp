// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class GetMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetMessageRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetMessageRequest() = default ;
    GetMessageRequest(const GetMessageRequest &) = default ;
    GetMessageRequest(GetMessageRequest &&) = default ;
    GetMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageRequest() = default ;
    GetMessageRequest& operator=(const GetMessageRequest &) = default ;
    GetMessageRequest& operator=(GetMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
