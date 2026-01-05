// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELPOLARFSFILEQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CANCELPOLARFSFILEQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CancelPolarFsFileQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelPolarFsFileQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FilePathIds, filePathIds_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelPolarFsFileQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FilePathIds, filePathIds_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CancelPolarFsFileQuotaResponseBody() = default ;
    CancelPolarFsFileQuotaResponseBody(const CancelPolarFsFileQuotaResponseBody &) = default ;
    CancelPolarFsFileQuotaResponseBody(CancelPolarFsFileQuotaResponseBody &&) = default ;
    CancelPolarFsFileQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelPolarFsFileQuotaResponseBody() = default ;
    CancelPolarFsFileQuotaResponseBody& operator=(const CancelPolarFsFileQuotaResponseBody &) = default ;
    CancelPolarFsFileQuotaResponseBody& operator=(CancelPolarFsFileQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filePathIds_ == nullptr
        && this->polarFsInstanceId_ == nullptr && this->requestId_ == nullptr; };
    // filePathIds Field Functions 
    bool hasFilePathIds() const { return this->filePathIds_ != nullptr;};
    void deleteFilePathIds() { this->filePathIds_ = nullptr;};
    inline string getFilePathIds() const { DARABONBA_PTR_GET_DEFAULT(filePathIds_, "") };
    inline CancelPolarFsFileQuotaResponseBody& setFilePathIds(string filePathIds) { DARABONBA_PTR_SET_VALUE(filePathIds_, filePathIds) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline CancelPolarFsFileQuotaResponseBody& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CancelPolarFsFileQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> filePathIds_ {};
    shared_ptr<string> polarFsInstanceId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
