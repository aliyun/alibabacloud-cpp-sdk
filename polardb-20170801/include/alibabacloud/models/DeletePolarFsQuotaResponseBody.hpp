// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLARFSQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLARFSQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeletePolarFsQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolarFsQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolarFsQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeletePolarFsQuotaResponseBody() = default ;
    DeletePolarFsQuotaResponseBody(const DeletePolarFsQuotaResponseBody &) = default ;
    DeletePolarFsQuotaResponseBody(DeletePolarFsQuotaResponseBody &&) = default ;
    DeletePolarFsQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolarFsQuotaResponseBody() = default ;
    DeletePolarFsQuotaResponseBody& operator=(const DeletePolarFsQuotaResponseBody &) = default ;
    DeletePolarFsQuotaResponseBody& operator=(DeletePolarFsQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->polarFsInstanceId_ == nullptr
        && this->requestId_ == nullptr; };
    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline DeletePolarFsQuotaResponseBody& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeletePolarFsQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> polarFsInstanceId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
