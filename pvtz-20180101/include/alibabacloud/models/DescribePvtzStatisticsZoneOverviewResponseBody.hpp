// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPVTZSTATISTICSZONEOVERVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPVTZSTATISTICSZONEOVERVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DescribePvtzStatisticsZoneOverviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePvtzStatisticsZoneOverviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePvtzStatisticsZoneOverviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePvtzStatisticsZoneOverviewResponseBody() = default ;
    DescribePvtzStatisticsZoneOverviewResponseBody(const DescribePvtzStatisticsZoneOverviewResponseBody &) = default ;
    DescribePvtzStatisticsZoneOverviewResponseBody(DescribePvtzStatisticsZoneOverviewResponseBody &&) = default ;
    DescribePvtzStatisticsZoneOverviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePvtzStatisticsZoneOverviewResponseBody() = default ;
    DescribePvtzStatisticsZoneOverviewResponseBody& operator=(const DescribePvtzStatisticsZoneOverviewResponseBody &) = default ;
    DescribePvtzStatisticsZoneOverviewResponseBody& operator=(DescribePvtzStatisticsZoneOverviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RefusedDomainCount, refusedDomainCount_);
        DARABONBA_PTR_TO_JSON(SuddenDropDomainCount, suddenDropDomainCount_);
        DARABONBA_PTR_TO_JSON(SuddenIncreaseDomainCount, suddenIncreaseDomainCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RefusedDomainCount, refusedDomainCount_);
        DARABONBA_PTR_FROM_JSON(SuddenDropDomainCount, suddenDropDomainCount_);
        DARABONBA_PTR_FROM_JSON(SuddenIncreaseDomainCount, suddenIncreaseDomainCount_);
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
      virtual bool empty() const override { return this->refusedDomainCount_ == nullptr
        && this->suddenDropDomainCount_ == nullptr && this->suddenIncreaseDomainCount_ == nullptr; };
      // refusedDomainCount Field Functions 
      bool hasRefusedDomainCount() const { return this->refusedDomainCount_ != nullptr;};
      void deleteRefusedDomainCount() { this->refusedDomainCount_ = nullptr;};
      inline int64_t getRefusedDomainCount() const { DARABONBA_PTR_GET_DEFAULT(refusedDomainCount_, 0L) };
      inline Data& setRefusedDomainCount(int64_t refusedDomainCount) { DARABONBA_PTR_SET_VALUE(refusedDomainCount_, refusedDomainCount) };


      // suddenDropDomainCount Field Functions 
      bool hasSuddenDropDomainCount() const { return this->suddenDropDomainCount_ != nullptr;};
      void deleteSuddenDropDomainCount() { this->suddenDropDomainCount_ = nullptr;};
      inline int64_t getSuddenDropDomainCount() const { DARABONBA_PTR_GET_DEFAULT(suddenDropDomainCount_, 0L) };
      inline Data& setSuddenDropDomainCount(int64_t suddenDropDomainCount) { DARABONBA_PTR_SET_VALUE(suddenDropDomainCount_, suddenDropDomainCount) };


      // suddenIncreaseDomainCount Field Functions 
      bool hasSuddenIncreaseDomainCount() const { return this->suddenIncreaseDomainCount_ != nullptr;};
      void deleteSuddenIncreaseDomainCount() { this->suddenIncreaseDomainCount_ = nullptr;};
      inline int64_t getSuddenIncreaseDomainCount() const { DARABONBA_PTR_GET_DEFAULT(suddenIncreaseDomainCount_, 0L) };
      inline Data& setSuddenIncreaseDomainCount(int64_t suddenIncreaseDomainCount) { DARABONBA_PTR_SET_VALUE(suddenIncreaseDomainCount_, suddenIncreaseDomainCount) };


    protected:
      shared_ptr<int64_t> refusedDomainCount_ {};
      shared_ptr<int64_t> suddenDropDomainCount_ {};
      shared_ptr<int64_t> suddenIncreaseDomainCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribePvtzStatisticsZoneOverviewResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribePvtzStatisticsZoneOverviewResponseBody::Data) };
    inline DescribePvtzStatisticsZoneOverviewResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribePvtzStatisticsZoneOverviewResponseBody::Data) };
    inline DescribePvtzStatisticsZoneOverviewResponseBody& setData(const DescribePvtzStatisticsZoneOverviewResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribePvtzStatisticsZoneOverviewResponseBody& setData(DescribePvtzStatisticsZoneOverviewResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePvtzStatisticsZoneOverviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribePvtzStatisticsZoneOverviewResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
