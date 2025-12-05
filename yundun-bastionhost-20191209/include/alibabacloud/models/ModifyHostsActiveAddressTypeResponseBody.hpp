// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHOSTSACTIVEADDRESSTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHOSTSACTIVEADDRESSTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyHostsActiveAddressTypeResponseBodyResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyHostsActiveAddressTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHostsActiveAddressTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHostsActiveAddressTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    ModifyHostsActiveAddressTypeResponseBody() = default ;
    ModifyHostsActiveAddressTypeResponseBody(const ModifyHostsActiveAddressTypeResponseBody &) = default ;
    ModifyHostsActiveAddressTypeResponseBody(ModifyHostsActiveAddressTypeResponseBody &&) = default ;
    ModifyHostsActiveAddressTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHostsActiveAddressTypeResponseBody() = default ;
    ModifyHostsActiveAddressTypeResponseBody& operator=(const ModifyHostsActiveAddressTypeResponseBody &) = default ;
    ModifyHostsActiveAddressTypeResponseBody& operator=(ModifyHostsActiveAddressTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyHostsActiveAddressTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<ModifyHostsActiveAddressTypeResponseBodyResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<ModifyHostsActiveAddressTypeResponseBodyResults>) };
    inline vector<ModifyHostsActiveAddressTypeResponseBodyResults> results() { DARABONBA_PTR_GET(results_, vector<ModifyHostsActiveAddressTypeResponseBodyResults>) };
    inline ModifyHostsActiveAddressTypeResponseBody& setResults(const vector<ModifyHostsActiveAddressTypeResponseBodyResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline ModifyHostsActiveAddressTypeResponseBody& setResults(vector<ModifyHostsActiveAddressTypeResponseBodyResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result of the call.
    std::shared_ptr<vector<ModifyHostsActiveAddressTypeResponseBodyResults>> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
