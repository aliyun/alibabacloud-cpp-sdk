// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAVINGPLANSHAREACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSAVINGPLANSHAREACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetSavingPlanShareAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSavingPlanShareAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSavingPlanShareAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSavingPlanShareAccountsResponseBody() = default ;
    GetSavingPlanShareAccountsResponseBody(const GetSavingPlanShareAccountsResponseBody &) = default ;
    GetSavingPlanShareAccountsResponseBody(GetSavingPlanShareAccountsResponseBody &&) = default ;
    GetSavingPlanShareAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSavingPlanShareAccountsResponseBody() = default ;
    GetSavingPlanShareAccountsResponseBody& operator=(const GetSavingPlanShareAccountsResponseBody &) = default ;
    GetSavingPlanShareAccountsResponseBody& operator=(GetSavingPlanShareAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(ShareTimeList, shareTimeList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(ShareTimeList, shareTimeList_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ShareTimeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ShareTimeList& obj) { 
          DARABONBA_PTR_TO_JSON(ShareEndTime, shareEndTime_);
          DARABONBA_PTR_TO_JSON(ShareStartTime, shareStartTime_);
        };
        friend void from_json(const Darabonba::Json& j, ShareTimeList& obj) { 
          DARABONBA_PTR_FROM_JSON(ShareEndTime, shareEndTime_);
          DARABONBA_PTR_FROM_JSON(ShareStartTime, shareStartTime_);
        };
        ShareTimeList() = default ;
        ShareTimeList(const ShareTimeList &) = default ;
        ShareTimeList(ShareTimeList &&) = default ;
        ShareTimeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ShareTimeList() = default ;
        ShareTimeList& operator=(const ShareTimeList &) = default ;
        ShareTimeList& operator=(ShareTimeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->shareEndTime_ == nullptr
        && this->shareStartTime_ == nullptr; };
        // shareEndTime Field Functions 
        bool hasShareEndTime() const { return this->shareEndTime_ != nullptr;};
        void deleteShareEndTime() { this->shareEndTime_ = nullptr;};
        inline string getShareEndTime() const { DARABONBA_PTR_GET_DEFAULT(shareEndTime_, "") };
        inline ShareTimeList& setShareEndTime(string shareEndTime) { DARABONBA_PTR_SET_VALUE(shareEndTime_, shareEndTime) };


        // shareStartTime Field Functions 
        bool hasShareStartTime() const { return this->shareStartTime_ != nullptr;};
        void deleteShareStartTime() { this->shareStartTime_ = nullptr;};
        inline string getShareStartTime() const { DARABONBA_PTR_GET_DEFAULT(shareStartTime_, "") };
        inline ShareTimeList& setShareStartTime(string shareStartTime) { DARABONBA_PTR_SET_VALUE(shareStartTime_, shareStartTime) };


      protected:
        shared_ptr<string> shareEndTime_ {};
        shared_ptr<string> shareStartTime_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->aliUid_ == nullptr && this->shareTimeList_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline Data& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // shareTimeList Field Functions 
      bool hasShareTimeList() const { return this->shareTimeList_ != nullptr;};
      void deleteShareTimeList() { this->shareTimeList_ = nullptr;};
      inline const vector<Data::ShareTimeList> & getShareTimeList() const { DARABONBA_PTR_GET_CONST(shareTimeList_, vector<Data::ShareTimeList>) };
      inline vector<Data::ShareTimeList> getShareTimeList() { DARABONBA_PTR_GET(shareTimeList_, vector<Data::ShareTimeList>) };
      inline Data& setShareTimeList(const vector<Data::ShareTimeList> & shareTimeList) { DARABONBA_PTR_SET_VALUE(shareTimeList_, shareTimeList) };
      inline Data& setShareTimeList(vector<Data::ShareTimeList> && shareTimeList) { DARABONBA_PTR_SET_RVALUE(shareTimeList_, shareTimeList) };


    protected:
      shared_ptr<string> accountId_ {};
      shared_ptr<int64_t> aliUid_ {};
      shared_ptr<vector<Data::ShareTimeList>> shareTimeList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetSavingPlanShareAccountsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetSavingPlanShareAccountsResponseBody::Data>) };
    inline vector<GetSavingPlanShareAccountsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetSavingPlanShareAccountsResponseBody::Data>) };
    inline GetSavingPlanShareAccountsResponseBody& setData(const vector<GetSavingPlanShareAccountsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSavingPlanShareAccountsResponseBody& setData(vector<GetSavingPlanShareAccountsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSavingPlanShareAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<GetSavingPlanShareAccountsResponseBody::Data>> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
