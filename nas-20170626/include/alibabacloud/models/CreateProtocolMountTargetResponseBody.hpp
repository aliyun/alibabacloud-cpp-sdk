// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROTOCOLMOUNTTARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROTOCOLMOUNTTARGETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateProtocolMountTargetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProtocolMountTargetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExportId, exportId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProtocolMountTargetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportId, exportId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateProtocolMountTargetResponseBody() = default ;
    CreateProtocolMountTargetResponseBody(const CreateProtocolMountTargetResponseBody &) = default ;
    CreateProtocolMountTargetResponseBody(CreateProtocolMountTargetResponseBody &&) = default ;
    CreateProtocolMountTargetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProtocolMountTargetResponseBody() = default ;
    CreateProtocolMountTargetResponseBody& operator=(const CreateProtocolMountTargetResponseBody &) = default ;
    CreateProtocolMountTargetResponseBody& operator=(CreateProtocolMountTargetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportId_ == nullptr
        && return this->requestId_ == nullptr; };
    // exportId Field Functions 
    bool hasExportId() const { return this->exportId_ != nullptr;};
    void deleteExportId() { this->exportId_ = nullptr;};
    inline string exportId() const { DARABONBA_PTR_GET_DEFAULT(exportId_, "") };
    inline CreateProtocolMountTargetResponseBody& setExportId(string exportId) { DARABONBA_PTR_SET_VALUE(exportId_, exportId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateProtocolMountTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the export directory for the protocol service.
    std::shared_ptr<string> exportId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
