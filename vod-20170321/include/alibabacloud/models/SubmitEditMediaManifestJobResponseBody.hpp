// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITEDITMEDIAMANIFESTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITEDITMEDIAMANIFESTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitEditMediaManifestJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitEditMediaManifestJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ManifestEditJobId, manifestEditJobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitEditMediaManifestJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ManifestEditJobId, manifestEditJobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitEditMediaManifestJobResponseBody() = default ;
    SubmitEditMediaManifestJobResponseBody(const SubmitEditMediaManifestJobResponseBody &) = default ;
    SubmitEditMediaManifestJobResponseBody(SubmitEditMediaManifestJobResponseBody &&) = default ;
    SubmitEditMediaManifestJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitEditMediaManifestJobResponseBody() = default ;
    SubmitEditMediaManifestJobResponseBody& operator=(const SubmitEditMediaManifestJobResponseBody &) = default ;
    SubmitEditMediaManifestJobResponseBody& operator=(SubmitEditMediaManifestJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->manifestEditJobId_ == nullptr
        && this->requestId_ == nullptr; };
    // manifestEditJobId Field Functions 
    bool hasManifestEditJobId() const { return this->manifestEditJobId_ != nullptr;};
    void deleteManifestEditJobId() { this->manifestEditJobId_ = nullptr;};
    inline string getManifestEditJobId() const { DARABONBA_PTR_GET_DEFAULT(manifestEditJobId_, "") };
    inline SubmitEditMediaManifestJobResponseBody& setManifestEditJobId(string manifestEditJobId) { DARABONBA_PTR_SET_VALUE(manifestEditJobId_, manifestEditJobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitEditMediaManifestJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The manifest editing task ID, which is the MediaConvert pipeline task ID.
    shared_ptr<string> manifestEditJobId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
