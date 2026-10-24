// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTRULESTRATEGYSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTRULESTRATEGYSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{
namespace Models
{
  class GetClientRuleStrategyStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientRuleStrategyStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientRuleStrategyStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetClientRuleStrategyStatisticsResponseBody() = default ;
    GetClientRuleStrategyStatisticsResponseBody(const GetClientRuleStrategyStatisticsResponseBody &) = default ;
    GetClientRuleStrategyStatisticsResponseBody(GetClientRuleStrategyStatisticsResponseBody &&) = default ;
    GetClientRuleStrategyStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientRuleStrategyStatisticsResponseBody() = default ;
    GetClientRuleStrategyStatisticsResponseBody& operator=(const GetClientRuleStrategyStatisticsResponseBody &) = default ;
    GetClientRuleStrategyStatisticsResponseBody& operator=(GetClientRuleStrategyStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CustomRuleCount, customRuleCount_);
        DARABONBA_PTR_TO_JSON(SystemRuleCount, systemRuleCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomRuleCount, customRuleCount_);
        DARABONBA_PTR_FROM_JSON(SystemRuleCount, systemRuleCount_);
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
      virtual bool empty() const override { return this->customRuleCount_ == nullptr
        && this->systemRuleCount_ == nullptr; };
      // customRuleCount Field Functions 
      bool hasCustomRuleCount() const { return this->customRuleCount_ != nullptr;};
      void deleteCustomRuleCount() { this->customRuleCount_ = nullptr;};
      inline int32_t getCustomRuleCount() const { DARABONBA_PTR_GET_DEFAULT(customRuleCount_, 0) };
      inline Data& setCustomRuleCount(int32_t customRuleCount) { DARABONBA_PTR_SET_VALUE(customRuleCount_, customRuleCount) };


      // systemRuleCount Field Functions 
      bool hasSystemRuleCount() const { return this->systemRuleCount_ != nullptr;};
      void deleteSystemRuleCount() { this->systemRuleCount_ = nullptr;};
      inline int32_t getSystemRuleCount() const { DARABONBA_PTR_GET_DEFAULT(systemRuleCount_, 0) };
      inline Data& setSystemRuleCount(int32_t systemRuleCount) { DARABONBA_PTR_SET_VALUE(systemRuleCount_, systemRuleCount) };


    protected:
      // The number of custom rule policies for proactive defense.
      shared_ptr<int32_t> customRuleCount_ {};
      // The number of system rule policies for proactive defense.
      shared_ptr<int32_t> systemRuleCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetClientRuleStrategyStatisticsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetClientRuleStrategyStatisticsResponseBody::Data) };
    inline GetClientRuleStrategyStatisticsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetClientRuleStrategyStatisticsResponseBody::Data) };
    inline GetClientRuleStrategyStatisticsResponseBody& setData(const GetClientRuleStrategyStatisticsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetClientRuleStrategyStatisticsResponseBody& setData(GetClientRuleStrategyStatisticsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClientRuleStrategyStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics of proactive defense policies.
    shared_ptr<GetClientRuleStrategyStatisticsResponseBody::Data> data_ {};
    // The unique identifier of the request. You can use the ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
