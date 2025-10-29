// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLARFSFILEQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETPOLARFSFILEQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class SetPolarFsFileQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolarFsFileQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolarFsFileQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetPolarFsFileQuotaResponseBody() = default ;
    SetPolarFsFileQuotaResponseBody(const SetPolarFsFileQuotaResponseBody &) = default ;
    SetPolarFsFileQuotaResponseBody(SetPolarFsFileQuotaResponseBody &&) = default ;
    SetPolarFsFileQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolarFsFileQuotaResponseBody() = default ;
    SetPolarFsFileQuotaResponseBody& operator=(const SetPolarFsFileQuotaResponseBody &) = default ;
    SetPolarFsFileQuotaResponseBody& operator=(SetPolarFsFileQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->polarFsInstanceId_ == nullptr
        && return this->requestId_ == nullptr; };
    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string polarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline SetPolarFsFileQuotaResponseBody& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetPolarFsFileQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> polarFsInstanceId_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
