// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEAPISTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEAPISTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveApiStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveApiStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveApiStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSensitiveApiStatisticResponseBody() = default ;
    DescribeSensitiveApiStatisticResponseBody(const DescribeSensitiveApiStatisticResponseBody &) = default ;
    DescribeSensitiveApiStatisticResponseBody(DescribeSensitiveApiStatisticResponseBody &&) = default ;
    DescribeSensitiveApiStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveApiStatisticResponseBody() = default ;
    DescribeSensitiveApiStatisticResponseBody& operator=(const DescribeSensitiveApiStatisticResponseBody &) = default ;
    DescribeSensitiveApiStatisticResponseBody& operator=(DescribeSensitiveApiStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(InfoOutboundCount, infoOutboundCount_);
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(MatchedHost, matchedHost_);
        DARABONBA_PTR_TO_JSON(SensitiveOutboundCount, sensitiveOutboundCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(InfoOutboundCount, infoOutboundCount_);
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(MatchedHost, matchedHost_);
        DARABONBA_PTR_FROM_JSON(SensitiveOutboundCount, sensitiveOutboundCount_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(ApiFormat, apiFormat_);
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(InfoCount, infoCount_);
          DARABONBA_PTR_TO_JSON(SensitiveCode, sensitiveCode_);
          DARABONBA_PTR_TO_JSON(SensitiveCount, sensitiveCount_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiFormat, apiFormat_);
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(InfoCount, infoCount_);
          DARABONBA_PTR_FROM_JSON(SensitiveCode, sensitiveCode_);
          DARABONBA_PTR_FROM_JSON(SensitiveCount, sensitiveCount_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiFormat_ == nullptr
        && this->apiId_ == nullptr && this->infoCount_ == nullptr && this->sensitiveCode_ == nullptr && this->sensitiveCount_ == nullptr; };
        // apiFormat Field Functions 
        bool hasApiFormat() const { return this->apiFormat_ != nullptr;};
        void deleteApiFormat() { this->apiFormat_ = nullptr;};
        inline string getApiFormat() const { DARABONBA_PTR_GET_DEFAULT(apiFormat_, "") };
        inline List& setApiFormat(string apiFormat) { DARABONBA_PTR_SET_VALUE(apiFormat_, apiFormat) };


        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
        inline List& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // infoCount Field Functions 
        bool hasInfoCount() const { return this->infoCount_ != nullptr;};
        void deleteInfoCount() { this->infoCount_ = nullptr;};
        inline int64_t getInfoCount() const { DARABONBA_PTR_GET_DEFAULT(infoCount_, 0L) };
        inline List& setInfoCount(int64_t infoCount) { DARABONBA_PTR_SET_VALUE(infoCount_, infoCount) };


        // sensitiveCode Field Functions 
        bool hasSensitiveCode() const { return this->sensitiveCode_ != nullptr;};
        void deleteSensitiveCode() { this->sensitiveCode_ = nullptr;};
        inline const vector<string> & getSensitiveCode() const { DARABONBA_PTR_GET_CONST(sensitiveCode_, vector<string>) };
        inline vector<string> getSensitiveCode() { DARABONBA_PTR_GET(sensitiveCode_, vector<string>) };
        inline List& setSensitiveCode(const vector<string> & sensitiveCode) { DARABONBA_PTR_SET_VALUE(sensitiveCode_, sensitiveCode) };
        inline List& setSensitiveCode(vector<string> && sensitiveCode) { DARABONBA_PTR_SET_RVALUE(sensitiveCode_, sensitiveCode) };


        // sensitiveCount Field Functions 
        bool hasSensitiveCount() const { return this->sensitiveCount_ != nullptr;};
        void deleteSensitiveCount() { this->sensitiveCount_ = nullptr;};
        inline int64_t getSensitiveCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCount_, 0L) };
        inline List& setSensitiveCount(int64_t sensitiveCount) { DARABONBA_PTR_SET_VALUE(sensitiveCount_, sensitiveCount) };


      protected:
        // The API.
        shared_ptr<string> apiFormat_ {};
        // The ID of the API.
        shared_ptr<string> apiId_ {};
        // The number of personal information records involved in cross-border data transfer by API.
        shared_ptr<int64_t> infoCount_ {};
        // The types of sensitive data.
        shared_ptr<vector<string>> sensitiveCode_ {};
        // The number of sensitive personal information records involved in cross-border data transfer by API.
        shared_ptr<int64_t> sensitiveCount_ {};
      };

      virtual bool empty() const override { return this->infoOutboundCount_ == nullptr
        && this->list_ == nullptr && this->matchedHost_ == nullptr && this->sensitiveOutboundCount_ == nullptr; };
      // infoOutboundCount Field Functions 
      bool hasInfoOutboundCount() const { return this->infoOutboundCount_ != nullptr;};
      void deleteInfoOutboundCount() { this->infoOutboundCount_ = nullptr;};
      inline int64_t getInfoOutboundCount() const { DARABONBA_PTR_GET_DEFAULT(infoOutboundCount_, 0L) };
      inline Data& setInfoOutboundCount(int64_t infoOutboundCount) { DARABONBA_PTR_SET_VALUE(infoOutboundCount_, infoOutboundCount) };


      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // matchedHost Field Functions 
      bool hasMatchedHost() const { return this->matchedHost_ != nullptr;};
      void deleteMatchedHost() { this->matchedHost_ = nullptr;};
      inline string getMatchedHost() const { DARABONBA_PTR_GET_DEFAULT(matchedHost_, "") };
      inline Data& setMatchedHost(string matchedHost) { DARABONBA_PTR_SET_VALUE(matchedHost_, matchedHost) };


      // sensitiveOutboundCount Field Functions 
      bool hasSensitiveOutboundCount() const { return this->sensitiveOutboundCount_ != nullptr;};
      void deleteSensitiveOutboundCount() { this->sensitiveOutboundCount_ = nullptr;};
      inline int64_t getSensitiveOutboundCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveOutboundCount_, 0L) };
      inline Data& setSensitiveOutboundCount(int64_t sensitiveOutboundCount) { DARABONBA_PTR_SET_VALUE(sensitiveOutboundCount_, sensitiveOutboundCount) };


    protected:
      // The number of personal information records involved in cross-border data transfer by domain name.
      shared_ptr<int64_t> infoOutboundCount_ {};
      // The domain name-related APIs.
      shared_ptr<vector<Data::List>> list_ {};
      // The domain name or IP address.
      shared_ptr<string> matchedHost_ {};
      // The number of sensitive personal information records involved in cross-border data transfer by domain name.
      shared_ptr<int64_t> sensitiveOutboundCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeSensitiveApiStatisticResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeSensitiveApiStatisticResponseBody::Data>) };
    inline vector<DescribeSensitiveApiStatisticResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeSensitiveApiStatisticResponseBody::Data>) };
    inline DescribeSensitiveApiStatisticResponseBody& setData(const vector<DescribeSensitiveApiStatisticResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSensitiveApiStatisticResponseBody& setData(vector<DescribeSensitiveApiStatisticResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSensitiveApiStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSensitiveApiStatisticResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The statistics.
    shared_ptr<vector<DescribeSensitiveApiStatisticResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
