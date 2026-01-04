// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYSDGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYSDGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CopySDGShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopySDGShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationRegionIds, destinationRegionIdsShrink_);
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
    };
    friend void from_json(const Darabonba::Json& j, CopySDGShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationRegionIds, destinationRegionIdsShrink_);
      DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
    };
    CopySDGShrinkRequest() = default ;
    CopySDGShrinkRequest(const CopySDGShrinkRequest &) = default ;
    CopySDGShrinkRequest(CopySDGShrinkRequest &&) = default ;
    CopySDGShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopySDGShrinkRequest() = default ;
    CopySDGShrinkRequest& operator=(const CopySDGShrinkRequest &) = default ;
    CopySDGShrinkRequest& operator=(CopySDGShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationRegionIdsShrink_ == nullptr
        && this->SDGId_ == nullptr; };
    // destinationRegionIdsShrink Field Functions 
    bool hasDestinationRegionIdsShrink() const { return this->destinationRegionIdsShrink_ != nullptr;};
    void deleteDestinationRegionIdsShrink() { this->destinationRegionIdsShrink_ = nullptr;};
    inline string getDestinationRegionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(destinationRegionIdsShrink_, "") };
    inline CopySDGShrinkRequest& setDestinationRegionIdsShrink(string destinationRegionIdsShrink) { DARABONBA_PTR_SET_VALUE(destinationRegionIdsShrink_, destinationRegionIdsShrink) };


    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline string getSDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
    inline CopySDGShrinkRequest& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


  protected:
    // The destination nodes.
    // 
    // This parameter is required.
    shared_ptr<string> destinationRegionIdsShrink_ {};
    // The ID of the SDG that you want to copy.
    // 
    // This parameter is required.
    shared_ptr<string> SDGId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
