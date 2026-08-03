// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETHOTELDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETHOTELDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class BatchGetHotelDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetHotelDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(StandardHotelIds, standardHotelIds_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetHotelDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(StandardHotelIds, standardHotelIds_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    BatchGetHotelDetailRequest() = default ;
    BatchGetHotelDetailRequest(const BatchGetHotelDetailRequest &) = default ;
    BatchGetHotelDetailRequest(BatchGetHotelDetailRequest &&) = default ;
    BatchGetHotelDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetHotelDetailRequest() = default ;
    BatchGetHotelDetailRequest& operator=(const BatchGetHotelDetailRequest &) = default ;
    BatchGetHotelDetailRequest& operator=(BatchGetHotelDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->language_ == nullptr && this->standardHotelIds_ == nullptr && this->tracerId_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline int64_t getAccountNo() const { DARABONBA_PTR_GET_DEFAULT(accountNo_, 0L) };
    inline BatchGetHotelDetailRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline BatchGetHotelDetailRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // standardHotelIds Field Functions 
    bool hasStandardHotelIds() const { return this->standardHotelIds_ != nullptr;};
    void deleteStandardHotelIds() { this->standardHotelIds_ = nullptr;};
    inline const vector<string> & getStandardHotelIds() const { DARABONBA_PTR_GET_CONST(standardHotelIds_, vector<string>) };
    inline vector<string> getStandardHotelIds() { DARABONBA_PTR_GET(standardHotelIds_, vector<string>) };
    inline BatchGetHotelDetailRequest& setStandardHotelIds(const vector<string> & standardHotelIds) { DARABONBA_PTR_SET_VALUE(standardHotelIds_, standardHotelIds) };
    inline BatchGetHotelDetailRequest& setStandardHotelIds(vector<string> && standardHotelIds) { DARABONBA_PTR_SET_RVALUE(standardHotelIds_, standardHotelIds) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline BatchGetHotelDetailRequest& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    shared_ptr<string> language_ {};
    // This parameter is required.
    shared_ptr<vector<string>> standardHotelIds_ {};
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
