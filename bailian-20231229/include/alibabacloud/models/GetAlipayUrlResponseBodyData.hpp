// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALIPAYURLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETALIPAYURLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetAlipayUrlResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlipayUrlResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(qrUrl, qrUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlipayUrlResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(qrUrl, qrUrl_);
    };
    GetAlipayUrlResponseBodyData() = default ;
    GetAlipayUrlResponseBodyData(const GetAlipayUrlResponseBodyData &) = default ;
    GetAlipayUrlResponseBodyData(GetAlipayUrlResponseBodyData &&) = default ;
    GetAlipayUrlResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlipayUrlResponseBodyData() = default ;
    GetAlipayUrlResponseBodyData& operator=(const GetAlipayUrlResponseBodyData &) = default ;
    GetAlipayUrlResponseBodyData& operator=(GetAlipayUrlResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->qrUrl_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAlipayUrlResponseBodyData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // qrUrl Field Functions 
    bool hasQrUrl() const { return this->qrUrl_ != nullptr;};
    void deleteQrUrl() { this->qrUrl_ = nullptr;};
    inline string qrUrl() const { DARABONBA_PTR_GET_DEFAULT(qrUrl_, "") };
    inline GetAlipayUrlResponseBodyData& setQrUrl(string qrUrl) { DARABONBA_PTR_SET_VALUE(qrUrl_, qrUrl) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> qrUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
