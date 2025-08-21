// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLEANDISTDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLEANDISTDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CleanDistDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CleanDistDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DataName, dataName_);
      DARABONBA_PTR_TO_JSON(DataVersion, dataVersion_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, CleanDistDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DataName, dataName_);
      DARABONBA_PTR_FROM_JSON(DataVersion, dataVersion_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
    };
    CleanDistDataRequest() = default ;
    CleanDistDataRequest(const CleanDistDataRequest &) = default ;
    CleanDistDataRequest(CleanDistDataRequest &&) = default ;
    CleanDistDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CleanDistDataRequest() = default ;
    CleanDistDataRequest& operator=(const CleanDistDataRequest &) = default ;
    CleanDistDataRequest& operator=(CleanDistDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->dataName_ != nullptr && this->dataVersion_ != nullptr && this->ensRegionId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CleanDistDataRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dataName Field Functions 
    bool hasDataName() const { return this->dataName_ != nullptr;};
    void deleteDataName() { this->dataName_ = nullptr;};
    inline string dataName() const { DARABONBA_PTR_GET_DEFAULT(dataName_, "") };
    inline CleanDistDataRequest& setDataName(string dataName) { DARABONBA_PTR_SET_VALUE(dataName_, dataName) };


    // dataVersion Field Functions 
    bool hasDataVersion() const { return this->dataVersion_ != nullptr;};
    void deleteDataVersion() { this->dataVersion_ = nullptr;};
    inline string dataVersion() const { DARABONBA_PTR_GET_DEFAULT(dataVersion_, "") };
    inline CleanDistDataRequest& setDataVersion(string dataVersion) { DARABONBA_PTR_SET_VALUE(dataVersion_, dataVersion) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline CleanDistDataRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> dataName_ = nullptr;
    std::shared_ptr<string> dataVersion_ = nullptr;
    std::shared_ptr<string> ensRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
