// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHVERSIONSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHVERSIONSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAuthVersionStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthVersionStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthVersionStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
    };
    GetAuthVersionStatisticResponseBody() = default ;
    GetAuthVersionStatisticResponseBody(const GetAuthVersionStatisticResponseBody &) = default ;
    GetAuthVersionStatisticResponseBody(GetAuthVersionStatisticResponseBody &&) = default ;
    GetAuthVersionStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthVersionStatisticResponseBody() = default ;
    GetAuthVersionStatisticResponseBody& operator=(const GetAuthVersionStatisticResponseBody &) = default ;
    GetAuthVersionStatisticResponseBody& operator=(GetAuthVersionStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Statistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Statistics& obj) { 
        DARABONBA_PTR_TO_JSON(AuthVersion, authVersion_);
        DARABONBA_PTR_TO_JSON(Count, count_);
      };
      friend void from_json(const Darabonba::Json& j, Statistics& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthVersion, authVersion_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
      };
      Statistics() = default ;
      Statistics(const Statistics &) = default ;
      Statistics(Statistics &&) = default ;
      Statistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Statistics() = default ;
      Statistics& operator=(const Statistics &) = default ;
      Statistics& operator=(Statistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authVersion_ == nullptr
        && this->count_ == nullptr; };
      // authVersion Field Functions 
      bool hasAuthVersion() const { return this->authVersion_ != nullptr;};
      void deleteAuthVersion() { this->authVersion_ = nullptr;};
      inline int32_t getAuthVersion() const { DARABONBA_PTR_GET_DEFAULT(authVersion_, 0) };
      inline Statistics& setAuthVersion(int32_t authVersion) { DARABONBA_PTR_SET_VALUE(authVersion_, authVersion) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Statistics& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    protected:
      // The edition of Security Center. Valid values:
      // 
      // *   **1**: Basic edition (Unauthorized)
      // *   **6**: Anti-virus edition
      // *   **5**: Advanced edition
      // *   **3**: Enterprise edition
      // *   **7**: Ultimate edition
      // *   **10**: Value-added Plan edition
      shared_ptr<int32_t> authVersion_ {};
      // The number of authorized servers.
      shared_ptr<int32_t> count_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->statistics_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuthVersionStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline const vector<GetAuthVersionStatisticResponseBody::Statistics> & getStatistics() const { DARABONBA_PTR_GET_CONST(statistics_, vector<GetAuthVersionStatisticResponseBody::Statistics>) };
    inline vector<GetAuthVersionStatisticResponseBody::Statistics> getStatistics() { DARABONBA_PTR_GET(statistics_, vector<GetAuthVersionStatisticResponseBody::Statistics>) };
    inline GetAuthVersionStatisticResponseBody& setStatistics(const vector<GetAuthVersionStatisticResponseBody::Statistics> & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
    inline GetAuthVersionStatisticResponseBody& setStatistics(vector<GetAuthVersionStatisticResponseBody::Statistics> && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The statistics about the numbers of assets protected by each edition of Security Center.
    shared_ptr<vector<GetAuthVersionStatisticResponseBody::Statistics>> statistics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
