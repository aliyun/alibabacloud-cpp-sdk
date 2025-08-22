// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNL2IPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNL2IPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnL2IpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnL2IpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Vips, vips_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnL2IpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Vips, vips_);
    };
    DescribeDcdnL2IpsResponseBody() = default ;
    DescribeDcdnL2IpsResponseBody(const DescribeDcdnL2IpsResponseBody &) = default ;
    DescribeDcdnL2IpsResponseBody(DescribeDcdnL2IpsResponseBody &&) = default ;
    DescribeDcdnL2IpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnL2IpsResponseBody() = default ;
    DescribeDcdnL2IpsResponseBody& operator=(const DescribeDcdnL2IpsResponseBody &) = default ;
    DescribeDcdnL2IpsResponseBody& operator=(DescribeDcdnL2IpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->vips_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnL2IpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vips Field Functions 
    bool hasVips() const { return this->vips_ != nullptr;};
    void deleteVips() { this->vips_ = nullptr;};
    inline const vector<string> & vips() const { DARABONBA_PTR_GET_CONST(vips_, vector<string>) };
    inline vector<string> vips() { DARABONBA_PTR_GET(vips_, vector<string>) };
    inline DescribeDcdnL2IpsResponseBody& setVips(const vector<string> & vips) { DARABONBA_PTR_SET_VALUE(vips_, vips) };
    inline DescribeDcdnL2IpsResponseBody& setVips(vector<string> && vips) { DARABONBA_PTR_SET_RVALUE(vips_, vips) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The CIDR blocks of the POPs.
    std::shared_ptr<vector<string>> vips_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
