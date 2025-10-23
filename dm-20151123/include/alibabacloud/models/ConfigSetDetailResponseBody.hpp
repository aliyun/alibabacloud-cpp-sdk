// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGSETDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONFIGSETDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ConfigSetDetailResponseBodyDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ConfigSetDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigSetDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigSetDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ConfigSetDetailResponseBody() = default ;
    ConfigSetDetailResponseBody(const ConfigSetDetailResponseBody &) = default ;
    ConfigSetDetailResponseBody(ConfigSetDetailResponseBody &&) = default ;
    ConfigSetDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigSetDetailResponseBody() = default ;
    ConfigSetDetailResponseBody& operator=(const ConfigSetDetailResponseBody &) = default ;
    ConfigSetDetailResponseBody& operator=(ConfigSetDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && return this->requestId_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const ConfigSetDetailResponseBodyDetail & detail() const { DARABONBA_PTR_GET_CONST(detail_, ConfigSetDetailResponseBodyDetail) };
    inline ConfigSetDetailResponseBodyDetail detail() { DARABONBA_PTR_GET(detail_, ConfigSetDetailResponseBodyDetail) };
    inline ConfigSetDetailResponseBody& setDetail(const ConfigSetDetailResponseBodyDetail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline ConfigSetDetailResponseBody& setDetail(ConfigSetDetailResponseBodyDetail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ConfigSetDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ConfigSetDetailResponseBodyDetail> detail_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
