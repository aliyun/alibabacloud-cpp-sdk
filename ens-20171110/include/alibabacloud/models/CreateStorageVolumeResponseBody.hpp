// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTORAGEVOLUMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESTORAGEVOLUMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateStorageVolumeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStorageVolumeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VolumeId, volumeId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStorageVolumeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VolumeId, volumeId_);
    };
    CreateStorageVolumeResponseBody() = default ;
    CreateStorageVolumeResponseBody(const CreateStorageVolumeResponseBody &) = default ;
    CreateStorageVolumeResponseBody(CreateStorageVolumeResponseBody &&) = default ;
    CreateStorageVolumeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStorageVolumeResponseBody() = default ;
    CreateStorageVolumeResponseBody& operator=(const CreateStorageVolumeResponseBody &) = default ;
    CreateStorageVolumeResponseBody& operator=(CreateStorageVolumeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->volumeId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateStorageVolumeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // volumeId Field Functions 
    bool hasVolumeId() const { return this->volumeId_ != nullptr;};
    void deleteVolumeId() { this->volumeId_ = nullptr;};
    inline const vector<string> & getVolumeId() const { DARABONBA_PTR_GET_CONST(volumeId_, vector<string>) };
    inline vector<string> getVolumeId() { DARABONBA_PTR_GET(volumeId_, vector<string>) };
    inline CreateStorageVolumeResponseBody& setVolumeId(const vector<string> & volumeId) { DARABONBA_PTR_SET_VALUE(volumeId_, volumeId) };
    inline CreateStorageVolumeResponseBody& setVolumeId(vector<string> && volumeId) { DARABONBA_PTR_SET_RVALUE(volumeId_, volumeId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // An array of volume IDs.
    shared_ptr<vector<string>> volumeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
