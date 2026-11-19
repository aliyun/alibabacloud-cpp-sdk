// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPERSONALICODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPERSONALICODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class UpdatePersonalICodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePersonalICodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(QuickBIUserId, quickBIUserId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePersonalICodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(QuickBIUserId, quickBIUserId_);
    };
    UpdatePersonalICodeRequest() = default ;
    UpdatePersonalICodeRequest(const UpdatePersonalICodeRequest &) = default ;
    UpdatePersonalICodeRequest(UpdatePersonalICodeRequest &&) = default ;
    UpdatePersonalICodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePersonalICodeRequest() = default ;
    UpdatePersonalICodeRequest& operator=(const UpdatePersonalICodeRequest &) = default ;
    UpdatePersonalICodeRequest& operator=(UpdatePersonalICodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->quickBIUserId_ == nullptr; };
    // quickBIUserId Field Functions 
    bool hasQuickBIUserId() const { return this->quickBIUserId_ != nullptr;};
    void deleteQuickBIUserId() { this->quickBIUserId_ = nullptr;};
    inline string getQuickBIUserId() const { DARABONBA_PTR_GET_DEFAULT(quickBIUserId_, "") };
    inline UpdatePersonalICodeRequest& setQuickBIUserId(string quickBIUserId) { DARABONBA_PTR_SET_VALUE(quickBIUserId_, quickBIUserId) };


  protected:
    // The user ID in Quick BI.
    shared_ptr<string> quickBIUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
