// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEMORYCOLLECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMEMORYCOLLECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class GetMemoryCollectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMemoryCollectionRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetMemoryCollectionRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetMemoryCollectionRequest() = default ;
    GetMemoryCollectionRequest(const GetMemoryCollectionRequest &) = default ;
    GetMemoryCollectionRequest(GetMemoryCollectionRequest &&) = default ;
    GetMemoryCollectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMemoryCollectionRequest() = default ;
    GetMemoryCollectionRequest& operator=(const GetMemoryCollectionRequest &) = default ;
    GetMemoryCollectionRequest& operator=(GetMemoryCollectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
