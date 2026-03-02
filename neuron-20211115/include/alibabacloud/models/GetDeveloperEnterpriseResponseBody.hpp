// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVELOPERENTERPRISERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEVELOPERENTERPRISERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Enterprise.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class GetDeveloperEnterpriseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeveloperEnterpriseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(enterprise, enterprise_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeveloperEnterpriseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(enterprise, enterprise_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetDeveloperEnterpriseResponseBody() = default ;
    GetDeveloperEnterpriseResponseBody(const GetDeveloperEnterpriseResponseBody &) = default ;
    GetDeveloperEnterpriseResponseBody(GetDeveloperEnterpriseResponseBody &&) = default ;
    GetDeveloperEnterpriseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeveloperEnterpriseResponseBody() = default ;
    GetDeveloperEnterpriseResponseBody& operator=(const GetDeveloperEnterpriseResponseBody &) = default ;
    GetDeveloperEnterpriseResponseBody& operator=(GetDeveloperEnterpriseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enterprise_ == nullptr
        && this->requestId_ == nullptr; };
    // enterprise Field Functions 
    bool hasEnterprise() const { return this->enterprise_ != nullptr;};
    void deleteEnterprise() { this->enterprise_ = nullptr;};
    inline const Enterprise & getEnterprise() const { DARABONBA_PTR_GET_CONST(enterprise_, Enterprise) };
    inline Enterprise getEnterprise() { DARABONBA_PTR_GET(enterprise_, Enterprise) };
    inline GetDeveloperEnterpriseResponseBody& setEnterprise(const Enterprise & enterprise) { DARABONBA_PTR_SET_VALUE(enterprise_, enterprise) };
    inline GetDeveloperEnterpriseResponseBody& setEnterprise(Enterprise && enterprise) { DARABONBA_PTR_SET_RVALUE(enterprise_, enterprise) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDeveloperEnterpriseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<Enterprise> enterprise_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
