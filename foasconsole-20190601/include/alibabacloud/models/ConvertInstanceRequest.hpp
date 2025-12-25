// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONVERTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ConvertInstanceRequestConvertPostpayInstanceRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class ConvertInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConvertInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConvertPostpayInstanceRequest, convertPostpayInstanceRequest_);
    };
    friend void from_json(const Darabonba::Json& j, ConvertInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConvertPostpayInstanceRequest, convertPostpayInstanceRequest_);
    };
    ConvertInstanceRequest() = default ;
    ConvertInstanceRequest(const ConvertInstanceRequest &) = default ;
    ConvertInstanceRequest(ConvertInstanceRequest &&) = default ;
    ConvertInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConvertInstanceRequest() = default ;
    ConvertInstanceRequest& operator=(const ConvertInstanceRequest &) = default ;
    ConvertInstanceRequest& operator=(ConvertInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->convertPostpayInstanceRequest_ == nullptr; };
    // convertPostpayInstanceRequest Field Functions 
    bool hasConvertPostpayInstanceRequest() const { return this->convertPostpayInstanceRequest_ != nullptr;};
    void deleteConvertPostpayInstanceRequest() { this->convertPostpayInstanceRequest_ = nullptr;};
    inline const ConvertInstanceRequestConvertPostpayInstanceRequest & convertPostpayInstanceRequest() const { DARABONBA_PTR_GET_CONST(convertPostpayInstanceRequest_, ConvertInstanceRequestConvertPostpayInstanceRequest) };
    inline ConvertInstanceRequestConvertPostpayInstanceRequest convertPostpayInstanceRequest() { DARABONBA_PTR_GET(convertPostpayInstanceRequest_, ConvertInstanceRequestConvertPostpayInstanceRequest) };
    inline ConvertInstanceRequest& setConvertPostpayInstanceRequest(const ConvertInstanceRequestConvertPostpayInstanceRequest & convertPostpayInstanceRequest) { DARABONBA_PTR_SET_VALUE(convertPostpayInstanceRequest_, convertPostpayInstanceRequest) };
    inline ConvertInstanceRequest& setConvertPostpayInstanceRequest(ConvertInstanceRequestConvertPostpayInstanceRequest && convertPostpayInstanceRequest) { DARABONBA_PTR_SET_RVALUE(convertPostpayInstanceRequest_, convertPostpayInstanceRequest) };


  protected:
    // This parameter is required.
    std::shared_ptr<ConvertInstanceRequestConvertPostpayInstanceRequest> convertPostpayInstanceRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
