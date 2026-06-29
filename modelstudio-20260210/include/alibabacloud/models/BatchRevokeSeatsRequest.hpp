// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHREVOKESEATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHREVOKESEATSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class BatchRevokeSeatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchRevokeSeatsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Locale, locale_);
    };
    friend void from_json(const Darabonba::Json& j, BatchRevokeSeatsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Locale, locale_);
    };
    BatchRevokeSeatsRequest() = default ;
    BatchRevokeSeatsRequest(const BatchRevokeSeatsRequest &) = default ;
    BatchRevokeSeatsRequest(BatchRevokeSeatsRequest &&) = default ;
    BatchRevokeSeatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchRevokeSeatsRequest() = default ;
    BatchRevokeSeatsRequest& operator=(const BatchRevokeSeatsRequest &) = default ;
    BatchRevokeSeatsRequest& operator=(BatchRevokeSeatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Items& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    protected:
      // The ID of the currently associated member.
      shared_ptr<string> accountId_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->locale_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<BatchRevokeSeatsRequest::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<BatchRevokeSeatsRequest::Items>) };
    inline vector<BatchRevokeSeatsRequest::Items> getItems() { DARABONBA_PTR_GET(items_, vector<BatchRevokeSeatsRequest::Items>) };
    inline BatchRevokeSeatsRequest& setItems(const vector<BatchRevokeSeatsRequest::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline BatchRevokeSeatsRequest& setItems(vector<BatchRevokeSeatsRequest::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // locale Field Functions 
    bool hasLocale() const { return this->locale_ != nullptr;};
    void deleteLocale() { this->locale_ = nullptr;};
    inline string getLocale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
    inline BatchRevokeSeatsRequest& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


  protected:
    // The list of revocation items. This parameter is required.
    shared_ptr<vector<BatchRevokeSeatsRequest::Items>> items_ {};
    // The language. Valid values: zh-CN and en-US.
    shared_ptr<string> locale_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
