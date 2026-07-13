// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROTECTIONPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROTECTIONPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class GetProtectionPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProtectionPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProtectionPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProtectionPolicyResponseBody() = default ;
    GetProtectionPolicyResponseBody(const GetProtectionPolicyResponseBody &) = default ;
    GetProtectionPolicyResponseBody(GetProtectionPolicyResponseBody &&) = default ;
    GetProtectionPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProtectionPolicyResponseBody() = default ;
    GetProtectionPolicyResponseBody& operator=(const GetProtectionPolicyResponseBody &) = default ;
    GetProtectionPolicyResponseBody& operator=(GetProtectionPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BoundResourceCategoryIds, boundResourceCategoryIds_);
        DARABONBA_PTR_TO_JSON(LatestApplyTime, latestApplyTime_);
        DARABONBA_PTR_TO_JSON(LatestTaskId, latestTaskId_);
        DARABONBA_PTR_TO_JSON(ProtectionPolicyId, protectionPolicyId_);
        DARABONBA_PTR_TO_JSON(ProtectionPolicyName, protectionPolicyName_);
        DARABONBA_PTR_TO_JSON(ProtectionPolicyRegionId, protectionPolicyRegionId_);
        DARABONBA_PTR_TO_JSON(SubProtectionPolicies, subProtectionPolicies_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BoundResourceCategoryIds, boundResourceCategoryIds_);
        DARABONBA_PTR_FROM_JSON(LatestApplyTime, latestApplyTime_);
        DARABONBA_PTR_FROM_JSON(LatestTaskId, latestTaskId_);
        DARABONBA_PTR_FROM_JSON(ProtectionPolicyId, protectionPolicyId_);
        DARABONBA_PTR_FROM_JSON(ProtectionPolicyName, protectionPolicyName_);
        DARABONBA_PTR_FROM_JSON(ProtectionPolicyRegionId, protectionPolicyRegionId_);
        DARABONBA_PTR_FROM_JSON(SubProtectionPolicies, subProtectionPolicies_);
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
      class SubProtectionPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubProtectionPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(Config, config_);
          DARABONBA_PTR_TO_JSON(SubProtectionPolicyType, subProtectionPolicyType_);
        };
        friend void from_json(const Darabonba::Json& j, SubProtectionPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(Config, config_);
          DARABONBA_PTR_FROM_JSON(SubProtectionPolicyType, subProtectionPolicyType_);
        };
        SubProtectionPolicies() = default ;
        SubProtectionPolicies(const SubProtectionPolicies &) = default ;
        SubProtectionPolicies(SubProtectionPolicies &&) = default ;
        SubProtectionPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubProtectionPolicies() = default ;
        SubProtectionPolicies& operator=(const SubProtectionPolicies &) = default ;
        SubProtectionPolicies& operator=(SubProtectionPolicies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->config_ == nullptr
        && this->subProtectionPolicyType_ == nullptr; };
        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
        inline SubProtectionPolicies& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


        // subProtectionPolicyType Field Functions 
        bool hasSubProtectionPolicyType() const { return this->subProtectionPolicyType_ != nullptr;};
        void deleteSubProtectionPolicyType() { this->subProtectionPolicyType_ = nullptr;};
        inline string getSubProtectionPolicyType() const { DARABONBA_PTR_GET_DEFAULT(subProtectionPolicyType_, "") };
        inline SubProtectionPolicies& setSubProtectionPolicyType(string subProtectionPolicyType) { DARABONBA_PTR_SET_VALUE(subProtectionPolicyType_, subProtectionPolicyType) };


      protected:
        // The sub-protection policy configuration.
        shared_ptr<string> config_ {};
        // The sub-protection policy type.
        shared_ptr<string> subProtectionPolicyType_ {};
      };

      virtual bool empty() const override { return this->boundResourceCategoryIds_ == nullptr
        && this->latestApplyTime_ == nullptr && this->latestTaskId_ == nullptr && this->protectionPolicyId_ == nullptr && this->protectionPolicyName_ == nullptr && this->protectionPolicyRegionId_ == nullptr
        && this->subProtectionPolicies_ == nullptr; };
      // boundResourceCategoryIds Field Functions 
      bool hasBoundResourceCategoryIds() const { return this->boundResourceCategoryIds_ != nullptr;};
      void deleteBoundResourceCategoryIds() { this->boundResourceCategoryIds_ = nullptr;};
      inline const vector<string> & getBoundResourceCategoryIds() const { DARABONBA_PTR_GET_CONST(boundResourceCategoryIds_, vector<string>) };
      inline vector<string> getBoundResourceCategoryIds() { DARABONBA_PTR_GET(boundResourceCategoryIds_, vector<string>) };
      inline Data& setBoundResourceCategoryIds(const vector<string> & boundResourceCategoryIds) { DARABONBA_PTR_SET_VALUE(boundResourceCategoryIds_, boundResourceCategoryIds) };
      inline Data& setBoundResourceCategoryIds(vector<string> && boundResourceCategoryIds) { DARABONBA_PTR_SET_RVALUE(boundResourceCategoryIds_, boundResourceCategoryIds) };


      // latestApplyTime Field Functions 
      bool hasLatestApplyTime() const { return this->latestApplyTime_ != nullptr;};
      void deleteLatestApplyTime() { this->latestApplyTime_ = nullptr;};
      inline int64_t getLatestApplyTime() const { DARABONBA_PTR_GET_DEFAULT(latestApplyTime_, 0L) };
      inline Data& setLatestApplyTime(int64_t latestApplyTime) { DARABONBA_PTR_SET_VALUE(latestApplyTime_, latestApplyTime) };


      // latestTaskId Field Functions 
      bool hasLatestTaskId() const { return this->latestTaskId_ != nullptr;};
      void deleteLatestTaskId() { this->latestTaskId_ = nullptr;};
      inline string getLatestTaskId() const { DARABONBA_PTR_GET_DEFAULT(latestTaskId_, "") };
      inline Data& setLatestTaskId(string latestTaskId) { DARABONBA_PTR_SET_VALUE(latestTaskId_, latestTaskId) };


      // protectionPolicyId Field Functions 
      bool hasProtectionPolicyId() const { return this->protectionPolicyId_ != nullptr;};
      void deleteProtectionPolicyId() { this->protectionPolicyId_ = nullptr;};
      inline string getProtectionPolicyId() const { DARABONBA_PTR_GET_DEFAULT(protectionPolicyId_, "") };
      inline Data& setProtectionPolicyId(string protectionPolicyId) { DARABONBA_PTR_SET_VALUE(protectionPolicyId_, protectionPolicyId) };


      // protectionPolicyName Field Functions 
      bool hasProtectionPolicyName() const { return this->protectionPolicyName_ != nullptr;};
      void deleteProtectionPolicyName() { this->protectionPolicyName_ = nullptr;};
      inline string getProtectionPolicyName() const { DARABONBA_PTR_GET_DEFAULT(protectionPolicyName_, "") };
      inline Data& setProtectionPolicyName(string protectionPolicyName) { DARABONBA_PTR_SET_VALUE(protectionPolicyName_, protectionPolicyName) };


      // protectionPolicyRegionId Field Functions 
      bool hasProtectionPolicyRegionId() const { return this->protectionPolicyRegionId_ != nullptr;};
      void deleteProtectionPolicyRegionId() { this->protectionPolicyRegionId_ = nullptr;};
      inline string getProtectionPolicyRegionId() const { DARABONBA_PTR_GET_DEFAULT(protectionPolicyRegionId_, "") };
      inline Data& setProtectionPolicyRegionId(string protectionPolicyRegionId) { DARABONBA_PTR_SET_VALUE(protectionPolicyRegionId_, protectionPolicyRegionId) };


      // subProtectionPolicies Field Functions 
      bool hasSubProtectionPolicies() const { return this->subProtectionPolicies_ != nullptr;};
      void deleteSubProtectionPolicies() { this->subProtectionPolicies_ = nullptr;};
      inline const vector<Data::SubProtectionPolicies> & getSubProtectionPolicies() const { DARABONBA_PTR_GET_CONST(subProtectionPolicies_, vector<Data::SubProtectionPolicies>) };
      inline vector<Data::SubProtectionPolicies> getSubProtectionPolicies() { DARABONBA_PTR_GET(subProtectionPolicies_, vector<Data::SubProtectionPolicies>) };
      inline Data& setSubProtectionPolicies(const vector<Data::SubProtectionPolicies> & subProtectionPolicies) { DARABONBA_PTR_SET_VALUE(subProtectionPolicies_, subProtectionPolicies) };
      inline Data& setSubProtectionPolicies(vector<Data::SubProtectionPolicies> && subProtectionPolicies) { DARABONBA_PTR_SET_RVALUE(subProtectionPolicies_, subProtectionPolicies) };


    protected:
      // The list of associated resource category IDs.
      shared_ptr<vector<string>> boundResourceCategoryIds_ {};
      // The time when the policy was last applied.
      shared_ptr<int64_t> latestApplyTime_ {};
      // The ID of the latest application task.
      shared_ptr<string> latestTaskId_ {};
      // The protection policy ID.
      shared_ptr<string> protectionPolicyId_ {};
      // The protection policy name.
      shared_ptr<string> protectionPolicyName_ {};
      // The region ID of the protection policy.
      shared_ptr<string> protectionPolicyRegionId_ {};
      // The list of configured sub-protection policies.
      shared_ptr<vector<Data::SubProtectionPolicies>> subProtectionPolicies_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetProtectionPolicyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetProtectionPolicyResponseBody::Data) };
    inline GetProtectionPolicyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetProtectionPolicyResponseBody::Data) };
    inline GetProtectionPolicyResponseBody& setData(const GetProtectionPolicyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetProtectionPolicyResponseBody& setData(GetProtectionPolicyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProtectionPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<GetProtectionPolicyResponseBody::Data> data_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
