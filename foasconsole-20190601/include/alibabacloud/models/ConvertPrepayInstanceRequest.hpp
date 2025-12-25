// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERTPREPAYINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONVERTPREPAYINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ConvertPrepayInstanceRequestConvertPrepayInstanceRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class ConvertPrepayInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConvertPrepayInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConvertPrepayInstanceRequest, convertPrepayInstanceRequest_);
    };
    friend void from_json(const Darabonba::Json& j, ConvertPrepayInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConvertPrepayInstanceRequest, convertPrepayInstanceRequest_);
    };
    ConvertPrepayInstanceRequest() = default ;
    ConvertPrepayInstanceRequest(const ConvertPrepayInstanceRequest &) = default ;
    ConvertPrepayInstanceRequest(ConvertPrepayInstanceRequest &&) = default ;
    ConvertPrepayInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConvertPrepayInstanceRequest() = default ;
    ConvertPrepayInstanceRequest& operator=(const ConvertPrepayInstanceRequest &) = default ;
    ConvertPrepayInstanceRequest& operator=(ConvertPrepayInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->convertPrepayInstanceRequest_ == nullptr; };
    // convertPrepayInstanceRequest Field Functions 
    bool hasConvertPrepayInstanceRequest() const { return this->convertPrepayInstanceRequest_ != nullptr;};
    void deleteConvertPrepayInstanceRequest() { this->convertPrepayInstanceRequest_ = nullptr;};
    inline const ConvertPrepayInstanceRequestConvertPrepayInstanceRequest & convertPrepayInstanceRequest() const { DARABONBA_PTR_GET_CONST(convertPrepayInstanceRequest_, ConvertPrepayInstanceRequestConvertPrepayInstanceRequest) };
    inline ConvertPrepayInstanceRequestConvertPrepayInstanceRequest convertPrepayInstanceRequest() { DARABONBA_PTR_GET(convertPrepayInstanceRequest_, ConvertPrepayInstanceRequestConvertPrepayInstanceRequest) };
    inline ConvertPrepayInstanceRequest& setConvertPrepayInstanceRequest(const ConvertPrepayInstanceRequestConvertPrepayInstanceRequest & convertPrepayInstanceRequest) { DARABONBA_PTR_SET_VALUE(convertPrepayInstanceRequest_, convertPrepayInstanceRequest) };
    inline ConvertPrepayInstanceRequest& setConvertPrepayInstanceRequest(ConvertPrepayInstanceRequestConvertPrepayInstanceRequest && convertPrepayInstanceRequest) { DARABONBA_PTR_SET_RVALUE(convertPrepayInstanceRequest_, convertPrepayInstanceRequest) };


  protected:
    // This parameter is required.
    std::shared_ptr<ConvertPrepayInstanceRequestConvertPrepayInstanceRequest> convertPrepayInstanceRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
