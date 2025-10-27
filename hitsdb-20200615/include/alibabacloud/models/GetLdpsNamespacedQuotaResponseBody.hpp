// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLDPSNAMESPACEDQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLDPSNAMESPACEDQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLdpsNamespacedQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLdpsNamespacedQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NamespacedQuotas, namespacedQuotas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLdpsNamespacedQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespacedQuotas, namespacedQuotas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLdpsNamespacedQuotaResponseBody() = default ;
    GetLdpsNamespacedQuotaResponseBody(const GetLdpsNamespacedQuotaResponseBody &) = default ;
    GetLdpsNamespacedQuotaResponseBody(GetLdpsNamespacedQuotaResponseBody &&) = default ;
    GetLdpsNamespacedQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLdpsNamespacedQuotaResponseBody() = default ;
    GetLdpsNamespacedQuotaResponseBody& operator=(const GetLdpsNamespacedQuotaResponseBody &) = default ;
    GetLdpsNamespacedQuotaResponseBody& operator=(GetLdpsNamespacedQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespacedQuotas_ == nullptr
        && return this->requestId_ == nullptr; };
    // namespacedQuotas Field Functions 
    bool hasNamespacedQuotas() const { return this->namespacedQuotas_ != nullptr;};
    void deleteNamespacedQuotas() { this->namespacedQuotas_ = nullptr;};
    inline const vector<GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas> & namespacedQuotas() const { DARABONBA_PTR_GET_CONST(namespacedQuotas_, vector<GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas>) };
    inline vector<GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas> namespacedQuotas() { DARABONBA_PTR_GET(namespacedQuotas_, vector<GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas>) };
    inline GetLdpsNamespacedQuotaResponseBody& setNamespacedQuotas(const vector<GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas> & namespacedQuotas) { DARABONBA_PTR_SET_VALUE(namespacedQuotas_, namespacedQuotas) };
    inline GetLdpsNamespacedQuotaResponseBody& setNamespacedQuotas(vector<GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas> && namespacedQuotas) { DARABONBA_PTR_SET_RVALUE(namespacedQuotas_, namespacedQuotas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLdpsNamespacedQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetLdpsNamespacedQuotaResponseBodyNamespacedQuotas>> namespacedQuotas_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
