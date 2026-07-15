// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIMODELCARDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAIMODELCARDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetAiModelCardRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiModelCardRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetAiModelCardRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetAiModelCardRequest() = default ;
    GetAiModelCardRequest(const GetAiModelCardRequest &) = default ;
    GetAiModelCardRequest(GetAiModelCardRequest &&) = default ;
    GetAiModelCardRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiModelCardRequest() = default ;
    GetAiModelCardRequest& operator=(const GetAiModelCardRequest &) = default ;
    GetAiModelCardRequest& operator=(GetAiModelCardRequest &&) = default ;
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
