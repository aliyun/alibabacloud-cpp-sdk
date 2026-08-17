// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFLINKAISERVICEFREEQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFLINKAISERVICEFREEQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class GetFlinkAiServiceFreeQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFlinkAiServiceFreeQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FlinkAiFreeQuotaDTO, flinkAiFreeQuotaDTO_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetFlinkAiServiceFreeQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FlinkAiFreeQuotaDTO, flinkAiFreeQuotaDTO_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetFlinkAiServiceFreeQuotaResponseBody() = default ;
    GetFlinkAiServiceFreeQuotaResponseBody(const GetFlinkAiServiceFreeQuotaResponseBody &) = default ;
    GetFlinkAiServiceFreeQuotaResponseBody(GetFlinkAiServiceFreeQuotaResponseBody &&) = default ;
    GetFlinkAiServiceFreeQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFlinkAiServiceFreeQuotaResponseBody() = default ;
    GetFlinkAiServiceFreeQuotaResponseBody& operator=(const GetFlinkAiServiceFreeQuotaResponseBody &) = default ;
    GetFlinkAiServiceFreeQuotaResponseBody& operator=(GetFlinkAiServiceFreeQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FlinkAiFreeQuotaDTO : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FlinkAiFreeQuotaDTO& obj) { 
        DARABONBA_PTR_TO_JSON(FreeQuota, freeQuota_);
        DARABONBA_PTR_TO_JSON(UsedQuotaDetails, usedQuotaDetails_);
      };
      friend void from_json(const Darabonba::Json& j, FlinkAiFreeQuotaDTO& obj) { 
        DARABONBA_PTR_FROM_JSON(FreeQuota, freeQuota_);
        DARABONBA_PTR_FROM_JSON(UsedQuotaDetails, usedQuotaDetails_);
      };
      FlinkAiFreeQuotaDTO() = default ;
      FlinkAiFreeQuotaDTO(const FlinkAiFreeQuotaDTO &) = default ;
      FlinkAiFreeQuotaDTO(FlinkAiFreeQuotaDTO &&) = default ;
      FlinkAiFreeQuotaDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FlinkAiFreeQuotaDTO() = default ;
      FlinkAiFreeQuotaDTO& operator=(const FlinkAiFreeQuotaDTO &) = default ;
      FlinkAiFreeQuotaDTO& operator=(FlinkAiFreeQuotaDTO &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UsedQuotaDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UsedQuotaDetails& obj) { 
          DARABONBA_PTR_TO_JSON(Amount, amount_);
          DARABONBA_PTR_TO_JSON(UsageType, usageType_);
        };
        friend void from_json(const Darabonba::Json& j, UsedQuotaDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(Amount, amount_);
          DARABONBA_PTR_FROM_JSON(UsageType, usageType_);
        };
        UsedQuotaDetails() = default ;
        UsedQuotaDetails(const UsedQuotaDetails &) = default ;
        UsedQuotaDetails(UsedQuotaDetails &&) = default ;
        UsedQuotaDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UsedQuotaDetails() = default ;
        UsedQuotaDetails& operator=(const UsedQuotaDetails &) = default ;
        UsedQuotaDetails& operator=(UsedQuotaDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->usageType_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline double getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
        inline UsedQuotaDetails& setAmount(double amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // usageType Field Functions 
        bool hasUsageType() const { return this->usageType_ != nullptr;};
        void deleteUsageType() { this->usageType_ = nullptr;};
        inline string getUsageType() const { DARABONBA_PTR_GET_DEFAULT(usageType_, "") };
        inline UsedQuotaDetails& setUsageType(string usageType) { DARABONBA_PTR_SET_VALUE(usageType_, usageType) };


      protected:
        // The used quota for this usage type.
        shared_ptr<double> amount_ {};
        // The usage type.
        shared_ptr<string> usageType_ {};
      };

      virtual bool empty() const override { return this->freeQuota_ == nullptr
        && this->usedQuotaDetails_ == nullptr; };
      // freeQuota Field Functions 
      bool hasFreeQuota() const { return this->freeQuota_ != nullptr;};
      void deleteFreeQuota() { this->freeQuota_ = nullptr;};
      inline double getFreeQuota() const { DARABONBA_PTR_GET_DEFAULT(freeQuota_, 0.0) };
      inline FlinkAiFreeQuotaDTO& setFreeQuota(double freeQuota) { DARABONBA_PTR_SET_VALUE(freeQuota_, freeQuota) };


      // usedQuotaDetails Field Functions 
      bool hasUsedQuotaDetails() const { return this->usedQuotaDetails_ != nullptr;};
      void deleteUsedQuotaDetails() { this->usedQuotaDetails_ = nullptr;};
      inline const vector<FlinkAiFreeQuotaDTO::UsedQuotaDetails> & getUsedQuotaDetails() const { DARABONBA_PTR_GET_CONST(usedQuotaDetails_, vector<FlinkAiFreeQuotaDTO::UsedQuotaDetails>) };
      inline vector<FlinkAiFreeQuotaDTO::UsedQuotaDetails> getUsedQuotaDetails() { DARABONBA_PTR_GET(usedQuotaDetails_, vector<FlinkAiFreeQuotaDTO::UsedQuotaDetails>) };
      inline FlinkAiFreeQuotaDTO& setUsedQuotaDetails(const vector<FlinkAiFreeQuotaDTO::UsedQuotaDetails> & usedQuotaDetails) { DARABONBA_PTR_SET_VALUE(usedQuotaDetails_, usedQuotaDetails) };
      inline FlinkAiFreeQuotaDTO& setUsedQuotaDetails(vector<FlinkAiFreeQuotaDTO::UsedQuotaDetails> && usedQuotaDetails) { DARABONBA_PTR_SET_RVALUE(usedQuotaDetails_, usedQuotaDetails) };


    protected:
      // The total free quota.
      shared_ptr<double> freeQuota_ {};
      // The list of used quota details for each usage type.
      shared_ptr<vector<FlinkAiFreeQuotaDTO::UsedQuotaDetails>> usedQuotaDetails_ {};
    };

    virtual bool empty() const override { return this->flinkAiFreeQuotaDTO_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // flinkAiFreeQuotaDTO Field Functions 
    bool hasFlinkAiFreeQuotaDTO() const { return this->flinkAiFreeQuotaDTO_ != nullptr;};
    void deleteFlinkAiFreeQuotaDTO() { this->flinkAiFreeQuotaDTO_ = nullptr;};
    inline const GetFlinkAiServiceFreeQuotaResponseBody::FlinkAiFreeQuotaDTO & getFlinkAiFreeQuotaDTO() const { DARABONBA_PTR_GET_CONST(flinkAiFreeQuotaDTO_, GetFlinkAiServiceFreeQuotaResponseBody::FlinkAiFreeQuotaDTO) };
    inline GetFlinkAiServiceFreeQuotaResponseBody::FlinkAiFreeQuotaDTO getFlinkAiFreeQuotaDTO() { DARABONBA_PTR_GET(flinkAiFreeQuotaDTO_, GetFlinkAiServiceFreeQuotaResponseBody::FlinkAiFreeQuotaDTO) };
    inline GetFlinkAiServiceFreeQuotaResponseBody& setFlinkAiFreeQuotaDTO(const GetFlinkAiServiceFreeQuotaResponseBody::FlinkAiFreeQuotaDTO & flinkAiFreeQuotaDTO) { DARABONBA_PTR_SET_VALUE(flinkAiFreeQuotaDTO_, flinkAiFreeQuotaDTO) };
    inline GetFlinkAiServiceFreeQuotaResponseBody& setFlinkAiFreeQuotaDTO(GetFlinkAiServiceFreeQuotaResponseBody::FlinkAiFreeQuotaDTO && flinkAiFreeQuotaDTO) { DARABONBA_PTR_SET_RVALUE(flinkAiFreeQuotaDTO_, flinkAiFreeQuotaDTO) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFlinkAiServiceFreeQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetFlinkAiServiceFreeQuotaResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The Flink AI free quota data transfer object.
    shared_ptr<GetFlinkAiServiceFreeQuotaResponseBody::FlinkAiFreeQuotaDTO> flinkAiFreeQuotaDTO_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
