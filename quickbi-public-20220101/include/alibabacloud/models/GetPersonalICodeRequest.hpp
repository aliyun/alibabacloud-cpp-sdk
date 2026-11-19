// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERSONALICODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPERSONALICODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class GetPersonalICodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPersonalICodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(QuickBIUserId, quickBIUserId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPersonalICodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(QuickBIUserId, quickBIUserId_);
    };
    GetPersonalICodeRequest() = default ;
    GetPersonalICodeRequest(const GetPersonalICodeRequest &) = default ;
    GetPersonalICodeRequest(GetPersonalICodeRequest &&) = default ;
    GetPersonalICodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPersonalICodeRequest() = default ;
    GetPersonalICodeRequest& operator=(const GetPersonalICodeRequest &) = default ;
    GetPersonalICodeRequest& operator=(GetPersonalICodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->quickBIUserId_ == nullptr; };
    // quickBIUserId Field Functions 
    bool hasQuickBIUserId() const { return this->quickBIUserId_ != nullptr;};
    void deleteQuickBIUserId() { this->quickBIUserId_ = nullptr;};
    inline string getQuickBIUserId() const { DARABONBA_PTR_GET_DEFAULT(quickBIUserId_, "") };
    inline GetPersonalICodeRequest& setQuickBIUserId(string quickBIUserId) { DARABONBA_PTR_SET_VALUE(quickBIUserId_, quickBIUserId) };


  protected:
    // The Quick BI user ID.
    shared_ptr<string> quickBIUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
