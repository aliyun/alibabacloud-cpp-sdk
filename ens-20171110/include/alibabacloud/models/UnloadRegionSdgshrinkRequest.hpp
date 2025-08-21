// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNLOADREGIONSDGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNLOADREGIONSDGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class UnloadRegionSDGShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnloadRegionSDGShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationRegionIds, destinationRegionIdsShrink_);
      DARABONBA_PTR_TO_JSON(Namespaces, namespacesShrink_);
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
    };
    friend void from_json(const Darabonba::Json& j, UnloadRegionSDGShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationRegionIds, destinationRegionIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Namespaces, namespacesShrink_);
      DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
    };
    UnloadRegionSDGShrinkRequest() = default ;
    UnloadRegionSDGShrinkRequest(const UnloadRegionSDGShrinkRequest &) = default ;
    UnloadRegionSDGShrinkRequest(UnloadRegionSDGShrinkRequest &&) = default ;
    UnloadRegionSDGShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnloadRegionSDGShrinkRequest() = default ;
    UnloadRegionSDGShrinkRequest& operator=(const UnloadRegionSDGShrinkRequest &) = default ;
    UnloadRegionSDGShrinkRequest& operator=(UnloadRegionSDGShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationRegionIdsShrink_ != nullptr
        && this->namespacesShrink_ != nullptr && this->SDGId_ != nullptr; };
    // destinationRegionIdsShrink Field Functions 
    bool hasDestinationRegionIdsShrink() const { return this->destinationRegionIdsShrink_ != nullptr;};
    void deleteDestinationRegionIdsShrink() { this->destinationRegionIdsShrink_ = nullptr;};
    inline string destinationRegionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(destinationRegionIdsShrink_, "") };
    inline UnloadRegionSDGShrinkRequest& setDestinationRegionIdsShrink(string destinationRegionIdsShrink) { DARABONBA_PTR_SET_VALUE(destinationRegionIdsShrink_, destinationRegionIdsShrink) };


    // namespacesShrink Field Functions 
    bool hasNamespacesShrink() const { return this->namespacesShrink_ != nullptr;};
    void deleteNamespacesShrink() { this->namespacesShrink_ = nullptr;};
    inline string namespacesShrink() const { DARABONBA_PTR_GET_DEFAULT(namespacesShrink_, "") };
    inline UnloadRegionSDGShrinkRequest& setNamespacesShrink(string namespacesShrink) { DARABONBA_PTR_SET_VALUE(namespacesShrink_, namespacesShrink) };


    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline string SDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
    inline UnloadRegionSDGShrinkRequest& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


  protected:
    // The destination nodes.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationRegionIdsShrink_ = nullptr;
    // An array that consists of queried namespaces.
    std::shared_ptr<string> namespacesShrink_ = nullptr;
    // Deletes the shared data group (SDG) ID of the preloaded data.
    // 
    // This parameter is required.
    std::shared_ptr<string> SDGId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
