// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMULTIMODALLABELSTUDIOSERVICEWHITELISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMULTIMODALLABELSTUDIOSERVICEWHITELISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class UpdateMultimodalLabelStudioServiceWhiteListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMultimodalLabelStudioServiceWhiteListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMultimodalLabelStudioServiceWhiteListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteListShrink_);
    };
    UpdateMultimodalLabelStudioServiceWhiteListShrinkRequest() = default ;
    UpdateMultimodalLabelStudioServiceWhiteListShrinkRequest(const UpdateMultimodalLabelStudioServiceWhiteListShrinkRequest &) = default ;
    UpdateMultimodalLabelStudioServiceWhiteListShrinkRequest(UpdateMultimodalLabelStudioServiceWhiteListShrinkRequest &&) = default ;
    UpdateMultimodalLabelStudioServiceWhiteListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMultimodalLabelStudioServiceWhiteListShrinkRequest() = default ;
    UpdateMultimodalLabelStudioServiceWhiteListShrinkRequest& operator=(const UpdateMultimodalLabelStudioServiceWhiteListShrinkRequest &) = default ;
    UpdateMultimodalLabelStudioServiceWhiteListShrinkRequest& operator=(UpdateMultimodalLabelStudioServiceWhiteListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->whiteListShrink_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline UpdateMultimodalLabelStudioServiceWhiteListShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // whiteListShrink Field Functions 
    bool hasWhiteListShrink() const { return this->whiteListShrink_ != nullptr;};
    void deleteWhiteListShrink() { this->whiteListShrink_ = nullptr;};
    inline string getWhiteListShrink() const { DARABONBA_PTR_GET_DEFAULT(whiteListShrink_, "") };
    inline UpdateMultimodalLabelStudioServiceWhiteListShrinkRequest& setWhiteListShrink(string whiteListShrink) { DARABONBA_PTR_SET_VALUE(whiteListShrink_, whiteListShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> whiteListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
