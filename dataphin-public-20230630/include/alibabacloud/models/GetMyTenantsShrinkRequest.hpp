// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMYTENANTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMYTENANTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetMyTenantsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMyTenantsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureCodeList, featureCodeListShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMyTenantsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureCodeList, featureCodeListShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetMyTenantsShrinkRequest() = default ;
    GetMyTenantsShrinkRequest(const GetMyTenantsShrinkRequest &) = default ;
    GetMyTenantsShrinkRequest(GetMyTenantsShrinkRequest &&) = default ;
    GetMyTenantsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMyTenantsShrinkRequest() = default ;
    GetMyTenantsShrinkRequest& operator=(const GetMyTenantsShrinkRequest &) = default ;
    GetMyTenantsShrinkRequest& operator=(GetMyTenantsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureCodeListShrink_ == nullptr
        && this->opTenantId_ == nullptr; };
    // featureCodeListShrink Field Functions 
    bool hasFeatureCodeListShrink() const { return this->featureCodeListShrink_ != nullptr;};
    void deleteFeatureCodeListShrink() { this->featureCodeListShrink_ = nullptr;};
    inline string getFeatureCodeListShrink() const { DARABONBA_PTR_GET_DEFAULT(featureCodeListShrink_, "") };
    inline GetMyTenantsShrinkRequest& setFeatureCodeListShrink(string featureCodeListShrink) { DARABONBA_PTR_SET_VALUE(featureCodeListShrink_, featureCodeListShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetMyTenantsShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    shared_ptr<string> featureCodeListShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
