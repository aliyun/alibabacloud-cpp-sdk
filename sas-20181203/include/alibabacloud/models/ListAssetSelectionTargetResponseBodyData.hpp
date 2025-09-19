// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSETSELECTIONTARGETRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTASSETSELECTIONTARGETRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAssetSelectionTargetResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssetSelectionTargetResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssetSelectionTargetResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
    };
    ListAssetSelectionTargetResponseBodyData() = default ;
    ListAssetSelectionTargetResponseBodyData(const ListAssetSelectionTargetResponseBodyData &) = default ;
    ListAssetSelectionTargetResponseBodyData(ListAssetSelectionTargetResponseBodyData &&) = default ;
    ListAssetSelectionTargetResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssetSelectionTargetResponseBodyData() = default ;
    ListAssetSelectionTargetResponseBodyData& operator=(const ListAssetSelectionTargetResponseBodyData &) = default ;
    ListAssetSelectionTargetResponseBodyData& operator=(ListAssetSelectionTargetResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->targetId_ != nullptr
        && this->targetName_ != nullptr; };
    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline ListAssetSelectionTargetResponseBodyData& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline ListAssetSelectionTargetResponseBodyData& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


  protected:
    // The ID of the asset.
    std::shared_ptr<string> targetId_ = nullptr;
    // The name of the asset.
    std::shared_ptr<string> targetName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
