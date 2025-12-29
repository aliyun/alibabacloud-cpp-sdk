// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERCLUSTERBACKUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERCLUSTERBACKUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class TransferClusterBackupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferClusterBackupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlreadyDone, alreadyDone_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TransferClusterBackupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlreadyDone, alreadyDone_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TransferClusterBackupResponseBody() = default ;
    TransferClusterBackupResponseBody(const TransferClusterBackupResponseBody &) = default ;
    TransferClusterBackupResponseBody(TransferClusterBackupResponseBody &&) = default ;
    TransferClusterBackupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferClusterBackupResponseBody() = default ;
    TransferClusterBackupResponseBody& operator=(const TransferClusterBackupResponseBody &) = default ;
    TransferClusterBackupResponseBody& operator=(TransferClusterBackupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alreadyDone_ == nullptr
        && this->requestId_ == nullptr; };
    // alreadyDone Field Functions 
    bool hasAlreadyDone() const { return this->alreadyDone_ != nullptr;};
    void deleteAlreadyDone() { this->alreadyDone_ = nullptr;};
    inline string getAlreadyDone() const { DARABONBA_PTR_GET_DEFAULT(alreadyDone_, "") };
    inline TransferClusterBackupResponseBody& setAlreadyDone(string alreadyDone) { DARABONBA_PTR_SET_VALUE(alreadyDone_, alreadyDone) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TransferClusterBackupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the instance is switched to the cluster backup mode. If the value of this parameter is **1**, the instance is switched to the cluster backup mode.
    shared_ptr<string> alreadyDone_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
