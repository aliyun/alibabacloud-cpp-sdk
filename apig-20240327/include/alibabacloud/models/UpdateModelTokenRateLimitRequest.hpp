// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELTOKENRATELIMITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELTOKENRATELIMITREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateModelTokenRateLimitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelTokenRateLimitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(consumers, consumers_);
      DARABONBA_PTR_TO_JSON(expectedRevision, expectedRevision_);
      DARABONBA_PTR_TO_JSON(globalTpm, globalTpm_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelTokenRateLimitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(consumers, consumers_);
      DARABONBA_PTR_FROM_JSON(expectedRevision, expectedRevision_);
      DARABONBA_PTR_FROM_JSON(globalTpm, globalTpm_);
    };
    UpdateModelTokenRateLimitRequest() = default ;
    UpdateModelTokenRateLimitRequest(const UpdateModelTokenRateLimitRequest &) = default ;
    UpdateModelTokenRateLimitRequest(UpdateModelTokenRateLimitRequest &&) = default ;
    UpdateModelTokenRateLimitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelTokenRateLimitRequest() = default ;
    UpdateModelTokenRateLimitRequest& operator=(const UpdateModelTokenRateLimitRequest &) = default ;
    UpdateModelTokenRateLimitRequest& operator=(UpdateModelTokenRateLimitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Consumers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Consumers& obj) { 
        DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
        DARABONBA_PTR_TO_JSON(tpm, tpm_);
      };
      friend void from_json(const Darabonba::Json& j, Consumers& obj) { 
        DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
        DARABONBA_PTR_FROM_JSON(tpm, tpm_);
      };
      Consumers() = default ;
      Consumers(const Consumers &) = default ;
      Consumers(Consumers &&) = default ;
      Consumers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Consumers() = default ;
      Consumers& operator=(const Consumers &) = default ;
      Consumers& operator=(Consumers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->consumerId_ == nullptr
        && this->tpm_ == nullptr; };
      // consumerId Field Functions 
      bool hasConsumerId() const { return this->consumerId_ != nullptr;};
      void deleteConsumerId() { this->consumerId_ = nullptr;};
      inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
      inline Consumers& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


      // tpm Field Functions 
      bool hasTpm() const { return this->tpm_ != nullptr;};
      void deleteTpm() { this->tpm_ = nullptr;};
      inline int64_t getTpm() const { DARABONBA_PTR_GET_DEFAULT(tpm_, 0L) };
      inline Consumers& setTpm(int64_t tpm) { DARABONBA_PTR_SET_VALUE(tpm_, tpm) };


    protected:
      // The ID of the consumer.
      // 
      // This parameter is required.
      shared_ptr<string> consumerId_ {};
      // The tokens per minute (TPM) limit for the consumer using this model.
      // 
      // This parameter is required.
      shared_ptr<int64_t> tpm_ {};
    };

    virtual bool empty() const override { return this->consumers_ == nullptr
        && this->expectedRevision_ == nullptr && this->globalTpm_ == nullptr; };
    // consumers Field Functions 
    bool hasConsumers() const { return this->consumers_ != nullptr;};
    void deleteConsumers() { this->consumers_ = nullptr;};
    inline const vector<UpdateModelTokenRateLimitRequest::Consumers> & getConsumers() const { DARABONBA_PTR_GET_CONST(consumers_, vector<UpdateModelTokenRateLimitRequest::Consumers>) };
    inline vector<UpdateModelTokenRateLimitRequest::Consumers> getConsumers() { DARABONBA_PTR_GET(consumers_, vector<UpdateModelTokenRateLimitRequest::Consumers>) };
    inline UpdateModelTokenRateLimitRequest& setConsumers(const vector<UpdateModelTokenRateLimitRequest::Consumers> & consumers) { DARABONBA_PTR_SET_VALUE(consumers_, consumers) };
    inline UpdateModelTokenRateLimitRequest& setConsumers(vector<UpdateModelTokenRateLimitRequest::Consumers> && consumers) { DARABONBA_PTR_SET_RVALUE(consumers_, consumers) };


    // expectedRevision Field Functions 
    bool hasExpectedRevision() const { return this->expectedRevision_ != nullptr;};
    void deleteExpectedRevision() { this->expectedRevision_ = nullptr;};
    inline int64_t getExpectedRevision() const { DARABONBA_PTR_GET_DEFAULT(expectedRevision_, 0L) };
    inline UpdateModelTokenRateLimitRequest& setExpectedRevision(int64_t expectedRevision) { DARABONBA_PTR_SET_VALUE(expectedRevision_, expectedRevision) };


    // globalTpm Field Functions 
    bool hasGlobalTpm() const { return this->globalTpm_ != nullptr;};
    void deleteGlobalTpm() { this->globalTpm_ = nullptr;};
    inline int64_t getGlobalTpm() const { DARABONBA_PTR_GET_DEFAULT(globalTpm_, 0L) };
    inline UpdateModelTokenRateLimitRequest& setGlobalTpm(int64_t globalTpm) { DARABONBA_PTR_SET_VALUE(globalTpm_, globalTpm) };


  protected:
    // The complete list of consumer limits. Pass an empty array to clear the consumer limits for the model.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateModelTokenRateLimitRequest::Consumers>> consumers_ {};
    // The revision returned by the last query. Set this parameter to 0 for the first configuration.
    // 
    // This parameter is required.
    shared_ptr<int64_t> expectedRevision_ {};
    // The global tokens per minute (TPM) limit for the model within the instance. If this parameter is omitted, the global limit is disabled.
    shared_ptr<int64_t> globalTpm_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
