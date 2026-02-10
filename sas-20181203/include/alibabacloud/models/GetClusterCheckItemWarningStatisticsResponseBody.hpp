// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERCHECKITEMWARNINGSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERCHECKITEMWARNINGSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClusterCheckItemWarningStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterCheckItemWarningStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterCheckItemWarningStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetClusterCheckItemWarningStatisticsResponseBody() = default ;
    GetClusterCheckItemWarningStatisticsResponseBody(const GetClusterCheckItemWarningStatisticsResponseBody &) = default ;
    GetClusterCheckItemWarningStatisticsResponseBody(GetClusterCheckItemWarningStatisticsResponseBody &&) = default ;
    GetClusterCheckItemWarningStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterCheckItemWarningStatisticsResponseBody() = default ;
    GetClusterCheckItemWarningStatisticsResponseBody& operator=(const GetClusterCheckItemWarningStatisticsResponseBody &) = default ;
    GetClusterCheckItemWarningStatisticsResponseBody& operator=(GetClusterCheckItemWarningStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(HighWarningCount, highWarningCount_);
        DARABONBA_PTR_TO_JSON(LowWarningCount, lowWarningCount_);
        DARABONBA_PTR_TO_JSON(MediumWarningCount, mediumWarningCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(HighWarningCount, highWarningCount_);
        DARABONBA_PTR_FROM_JSON(LowWarningCount, lowWarningCount_);
        DARABONBA_PTR_FROM_JSON(MediumWarningCount, mediumWarningCount_);
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
      virtual bool empty() const override { return this->highWarningCount_ == nullptr
        && this->lowWarningCount_ == nullptr && this->mediumWarningCount_ == nullptr; };
      // highWarningCount Field Functions 
      bool hasHighWarningCount() const { return this->highWarningCount_ != nullptr;};
      void deleteHighWarningCount() { this->highWarningCount_ = nullptr;};
      inline int32_t getHighWarningCount() const { DARABONBA_PTR_GET_DEFAULT(highWarningCount_, 0) };
      inline Data& setHighWarningCount(int32_t highWarningCount) { DARABONBA_PTR_SET_VALUE(highWarningCount_, highWarningCount) };


      // lowWarningCount Field Functions 
      bool hasLowWarningCount() const { return this->lowWarningCount_ != nullptr;};
      void deleteLowWarningCount() { this->lowWarningCount_ = nullptr;};
      inline int32_t getLowWarningCount() const { DARABONBA_PTR_GET_DEFAULT(lowWarningCount_, 0) };
      inline Data& setLowWarningCount(int32_t lowWarningCount) { DARABONBA_PTR_SET_VALUE(lowWarningCount_, lowWarningCount) };


      // mediumWarningCount Field Functions 
      bool hasMediumWarningCount() const { return this->mediumWarningCount_ != nullptr;};
      void deleteMediumWarningCount() { this->mediumWarningCount_ = nullptr;};
      inline int32_t getMediumWarningCount() const { DARABONBA_PTR_GET_DEFAULT(mediumWarningCount_, 0) };
      inline Data& setMediumWarningCount(int32_t mediumWarningCount) { DARABONBA_PTR_SET_VALUE(mediumWarningCount_, mediumWarningCount) };


    protected:
      // The number of high-risk items.
      shared_ptr<int32_t> highWarningCount_ {};
      // The number of low-risk items.
      shared_ptr<int32_t> lowWarningCount_ {};
      // The number of medium-risk items.
      shared_ptr<int32_t> mediumWarningCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetClusterCheckItemWarningStatisticsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetClusterCheckItemWarningStatisticsResponseBody::Data) };
    inline GetClusterCheckItemWarningStatisticsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetClusterCheckItemWarningStatisticsResponseBody::Data) };
    inline GetClusterCheckItemWarningStatisticsResponseBody& setData(const GetClusterCheckItemWarningStatisticsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetClusterCheckItemWarningStatisticsResponseBody& setData(GetClusterCheckItemWarningStatisticsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterCheckItemWarningStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics on risk items by risk level.
    shared_ptr<GetClusterCheckItemWarningStatisticsResponseBody::Data> data_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
