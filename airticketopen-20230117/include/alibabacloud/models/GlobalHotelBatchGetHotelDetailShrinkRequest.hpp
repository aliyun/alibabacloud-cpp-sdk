// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALHOTELBATCHGETHOTELDETAILSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GLOBALHOTELBATCHGETHOTELDETAILSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class GlobalHotelBatchGetHotelDetailShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalHotelBatchGetHotelDetailShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(StandardHotelIds, standardHotelIdsShrink_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalHotelBatchGetHotelDetailShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(StandardHotelIds, standardHotelIdsShrink_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    GlobalHotelBatchGetHotelDetailShrinkRequest() = default ;
    GlobalHotelBatchGetHotelDetailShrinkRequest(const GlobalHotelBatchGetHotelDetailShrinkRequest &) = default ;
    GlobalHotelBatchGetHotelDetailShrinkRequest(GlobalHotelBatchGetHotelDetailShrinkRequest &&) = default ;
    GlobalHotelBatchGetHotelDetailShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalHotelBatchGetHotelDetailShrinkRequest() = default ;
    GlobalHotelBatchGetHotelDetailShrinkRequest& operator=(const GlobalHotelBatchGetHotelDetailShrinkRequest &) = default ;
    GlobalHotelBatchGetHotelDetailShrinkRequest& operator=(GlobalHotelBatchGetHotelDetailShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->language_ == nullptr && this->standardHotelIdsShrink_ == nullptr && this->tracerId_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline int64_t getAccountNo() const { DARABONBA_PTR_GET_DEFAULT(accountNo_, 0L) };
    inline GlobalHotelBatchGetHotelDetailShrinkRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GlobalHotelBatchGetHotelDetailShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // standardHotelIdsShrink Field Functions 
    bool hasStandardHotelIdsShrink() const { return this->standardHotelIdsShrink_ != nullptr;};
    void deleteStandardHotelIdsShrink() { this->standardHotelIdsShrink_ = nullptr;};
    inline string getStandardHotelIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(standardHotelIdsShrink_, "") };
    inline GlobalHotelBatchGetHotelDetailShrinkRequest& setStandardHotelIdsShrink(string standardHotelIdsShrink) { DARABONBA_PTR_SET_VALUE(standardHotelIdsShrink_, standardHotelIdsShrink) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline GlobalHotelBatchGetHotelDetailShrinkRequest& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    shared_ptr<string> language_ {};
    // This parameter is required.
    shared_ptr<string> standardHotelIdsShrink_ {};
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
