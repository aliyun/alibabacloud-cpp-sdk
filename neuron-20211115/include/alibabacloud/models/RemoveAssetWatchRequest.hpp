// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEASSETWATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEASSETWATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class RemoveAssetWatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveAssetWatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(assetType, assetType_);
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveAssetWatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(assetType, assetType_);
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
    };
    RemoveAssetWatchRequest() = default ;
    RemoveAssetWatchRequest(const RemoveAssetWatchRequest &) = default ;
    RemoveAssetWatchRequest(RemoveAssetWatchRequest &&) = default ;
    RemoveAssetWatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveAssetWatchRequest() = default ;
    RemoveAssetWatchRequest& operator=(const RemoveAssetWatchRequest &) = default ;
    RemoveAssetWatchRequest& operator=(RemoveAssetWatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetType_ == nullptr
        && this->companyId_ == nullptr; };
    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline RemoveAssetWatchRequest& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline RemoveAssetWatchRequest& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


  protected:
    // This parameter is required.
    shared_ptr<string> assetType_ {};
    shared_ptr<int64_t> companyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
