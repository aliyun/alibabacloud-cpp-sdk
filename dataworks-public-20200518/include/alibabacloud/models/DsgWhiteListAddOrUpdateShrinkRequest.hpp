// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGWHITELISTADDORUPDATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGWHITELISTADDORUPDATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgWhiteListAddOrUpdateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgWhiteListAddOrUpdateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WhiteLists, whiteListsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DsgWhiteListAddOrUpdateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WhiteLists, whiteListsShrink_);
    };
    DsgWhiteListAddOrUpdateShrinkRequest() = default ;
    DsgWhiteListAddOrUpdateShrinkRequest(const DsgWhiteListAddOrUpdateShrinkRequest &) = default ;
    DsgWhiteListAddOrUpdateShrinkRequest(DsgWhiteListAddOrUpdateShrinkRequest &&) = default ;
    DsgWhiteListAddOrUpdateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgWhiteListAddOrUpdateShrinkRequest() = default ;
    DsgWhiteListAddOrUpdateShrinkRequest& operator=(const DsgWhiteListAddOrUpdateShrinkRequest &) = default ;
    DsgWhiteListAddOrUpdateShrinkRequest& operator=(DsgWhiteListAddOrUpdateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->whiteListsShrink_ != nullptr; };
    // whiteListsShrink Field Functions 
    bool hasWhiteListsShrink() const { return this->whiteListsShrink_ != nullptr;};
    void deleteWhiteListsShrink() { this->whiteListsShrink_ = nullptr;};
    inline string whiteListsShrink() const { DARABONBA_PTR_GET_DEFAULT(whiteListsShrink_, "") };
    inline DsgWhiteListAddOrUpdateShrinkRequest& setWhiteListsShrink(string whiteListsShrink) { DARABONBA_PTR_SET_VALUE(whiteListsShrink_, whiteListsShrink) };


  protected:
    // A collection of whitelists.
    // 
    // This parameter is required.
    std::shared_ptr<string> whiteListsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
