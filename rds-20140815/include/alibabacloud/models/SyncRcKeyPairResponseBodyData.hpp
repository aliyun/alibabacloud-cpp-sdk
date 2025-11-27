// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCRCKEYPAIRRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SYNCRCKEYPAIRRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class SyncRCKeyPairResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncRCKeyPairResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(IsSyncInfo, isSyncInfo_);
    };
    friend void from_json(const Darabonba::Json& j, SyncRCKeyPairResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(IsSyncInfo, isSyncInfo_);
    };
    SyncRCKeyPairResponseBodyData() = default ;
    SyncRCKeyPairResponseBodyData(const SyncRCKeyPairResponseBodyData &) = default ;
    SyncRCKeyPairResponseBodyData(SyncRCKeyPairResponseBodyData &&) = default ;
    SyncRCKeyPairResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncRCKeyPairResponseBodyData() = default ;
    SyncRCKeyPairResponseBodyData& operator=(const SyncRCKeyPairResponseBodyData &) = default ;
    SyncRCKeyPairResponseBodyData& operator=(SyncRCKeyPairResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isSyncInfo_ == nullptr; };
    // isSyncInfo Field Functions 
    bool hasIsSyncInfo() const { return this->isSyncInfo_ != nullptr;};
    void deleteIsSyncInfo() { this->isSyncInfo_ = nullptr;};
    inline bool isSyncInfo() const { DARABONBA_PTR_GET_DEFAULT(isSyncInfo_, false) };
    inline SyncRCKeyPairResponseBodyData& setIsSyncInfo(bool isSyncInfo) { DARABONBA_PTR_SET_VALUE(isSyncInfo_, isSyncInfo) };


  protected:
    // Indicates whether the synchronization succeeded. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isSyncInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
