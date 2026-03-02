// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEASSETWATCHCMD_HPP_
#define ALIBABACLOUD_MODELS_CREATEASSETWATCHCMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateAssetWatchCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAssetWatchCmd& obj) { 
      DARABONBA_PTR_TO_JSON(assetId, assetId_);
      DARABONBA_PTR_TO_JSON(assetType, assetType_);
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAssetWatchCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(assetId, assetId_);
      DARABONBA_PTR_FROM_JSON(assetType, assetType_);
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
    };
    CreateAssetWatchCmd() = default ;
    CreateAssetWatchCmd(const CreateAssetWatchCmd &) = default ;
    CreateAssetWatchCmd(CreateAssetWatchCmd &&) = default ;
    CreateAssetWatchCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAssetWatchCmd() = default ;
    CreateAssetWatchCmd& operator=(const CreateAssetWatchCmd &) = default ;
    CreateAssetWatchCmd& operator=(CreateAssetWatchCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetId_ == nullptr
        && this->assetType_ == nullptr && this->companyId_ == nullptr && this->marketId_ == nullptr; };
    // assetId Field Functions 
    bool hasAssetId() const { return this->assetId_ != nullptr;};
    void deleteAssetId() { this->assetId_ = nullptr;};
    inline int64_t getAssetId() const { DARABONBA_PTR_GET_DEFAULT(assetId_, 0L) };
    inline CreateAssetWatchCmd& setAssetId(int64_t assetId) { DARABONBA_PTR_SET_VALUE(assetId_, assetId) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline CreateAssetWatchCmd& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline CreateAssetWatchCmd& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline CreateAssetWatchCmd& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


  protected:
    shared_ptr<int64_t> assetId_ {};
    shared_ptr<string> assetType_ {};
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<int64_t> marketId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
