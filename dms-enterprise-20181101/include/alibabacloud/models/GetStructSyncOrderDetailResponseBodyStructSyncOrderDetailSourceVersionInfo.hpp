// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRUCTSYNCORDERDETAILRESPONSEBODYSTRUCTSYNCORDERDETAILSOURCEVERSIONINFO_HPP_
#define ALIBABACLOUD_MODELS_GETSTRUCTSYNCORDERDETAILRESPONSEBODYSTRUCTSYNCORDERDETAILSOURCEVERSIONINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo& obj) { 
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo() = default ;
    GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo(const GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo &) = default ;
    GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo(GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo &&) = default ;
    GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo() = default ;
    GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo& operator=(const GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo &) = default ;
    GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo& operator=(GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->versionId_ == nullptr; };
    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The version number.
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
