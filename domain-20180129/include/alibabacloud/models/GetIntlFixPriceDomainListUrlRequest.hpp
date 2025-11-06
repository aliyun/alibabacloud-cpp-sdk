// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTLFIXPRICEDOMAINLISTURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINTLFIXPRICEDOMAINLISTURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class GetIntlFixPriceDomainListUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIntlFixPriceDomainListUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListDate, listDate_);
    };
    friend void from_json(const Darabonba::Json& j, GetIntlFixPriceDomainListUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListDate, listDate_);
    };
    GetIntlFixPriceDomainListUrlRequest() = default ;
    GetIntlFixPriceDomainListUrlRequest(const GetIntlFixPriceDomainListUrlRequest &) = default ;
    GetIntlFixPriceDomainListUrlRequest(GetIntlFixPriceDomainListUrlRequest &&) = default ;
    GetIntlFixPriceDomainListUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIntlFixPriceDomainListUrlRequest() = default ;
    GetIntlFixPriceDomainListUrlRequest& operator=(const GetIntlFixPriceDomainListUrlRequest &) = default ;
    GetIntlFixPriceDomainListUrlRequest& operator=(GetIntlFixPriceDomainListUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listDate_ == nullptr; };
    // listDate Field Functions 
    bool hasListDate() const { return this->listDate_ != nullptr;};
    void deleteListDate() { this->listDate_ = nullptr;};
    inline string listDate() const { DARABONBA_PTR_GET_DEFAULT(listDate_, "") };
    inline GetIntlFixPriceDomainListUrlRequest& setListDate(string listDate) { DARABONBA_PTR_SET_VALUE(listDate_, listDate) };


  protected:
    std::shared_ptr<string> listDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
