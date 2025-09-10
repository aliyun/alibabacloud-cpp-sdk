// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPENDENTQUOTASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPENDENTQUOTASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDependentQuotasResponseBodyQuotas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListDependentQuotasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDependentQuotasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Quotas, quotas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDependentQuotasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Quotas, quotas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDependentQuotasResponseBody() = default ;
    ListDependentQuotasResponseBody(const ListDependentQuotasResponseBody &) = default ;
    ListDependentQuotasResponseBody(ListDependentQuotasResponseBody &&) = default ;
    ListDependentQuotasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDependentQuotasResponseBody() = default ;
    ListDependentQuotasResponseBody& operator=(const ListDependentQuotasResponseBody &) = default ;
    ListDependentQuotasResponseBody& operator=(ListDependentQuotasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->quotas_ != nullptr
        && this->requestId_ != nullptr; };
    // quotas Field Functions 
    bool hasQuotas() const { return this->quotas_ != nullptr;};
    void deleteQuotas() { this->quotas_ = nullptr;};
    inline const vector<ListDependentQuotasResponseBodyQuotas> & quotas() const { DARABONBA_PTR_GET_CONST(quotas_, vector<ListDependentQuotasResponseBodyQuotas>) };
    inline vector<ListDependentQuotasResponseBodyQuotas> quotas() { DARABONBA_PTR_GET(quotas_, vector<ListDependentQuotasResponseBodyQuotas>) };
    inline ListDependentQuotasResponseBody& setQuotas(const vector<ListDependentQuotasResponseBodyQuotas> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
    inline ListDependentQuotasResponseBody& setQuotas(vector<ListDependentQuotasResponseBodyQuotas> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDependentQuotasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The quotas on which the specified quota depends.
    std::shared_ptr<vector<ListDependentQuotasResponseBodyQuotas>> quotas_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
