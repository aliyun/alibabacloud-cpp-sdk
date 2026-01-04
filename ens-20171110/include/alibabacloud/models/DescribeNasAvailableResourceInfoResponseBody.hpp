// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENASAVAILABLERESOURCEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENASAVAILABLERESOURCEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNASAvailableResourceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNASAvailableResourceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NasAvailableResourceInfo, nasAvailableResourceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNASAvailableResourceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NasAvailableResourceInfo, nasAvailableResourceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNASAvailableResourceInfoResponseBody() = default ;
    DescribeNASAvailableResourceInfoResponseBody(const DescribeNASAvailableResourceInfoResponseBody &) = default ;
    DescribeNASAvailableResourceInfoResponseBody(DescribeNASAvailableResourceInfoResponseBody &&) = default ;
    DescribeNASAvailableResourceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNASAvailableResourceInfoResponseBody() = default ;
    DescribeNASAvailableResourceInfoResponseBody& operator=(const DescribeNASAvailableResourceInfoResponseBody &) = default ;
    DescribeNASAvailableResourceInfoResponseBody& operator=(DescribeNASAvailableResourceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NasAvailableResourceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NasAvailableResourceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Ability, ability_);
        DARABONBA_PTR_TO_JSON(Area, area_);
        DARABONBA_PTR_TO_JSON(EnName, enName_);
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(EnsRegionName, ensRegionName_);
        DARABONBA_PTR_TO_JSON(NasAvailableAmount, nasAvailableAmount_);
        DARABONBA_PTR_TO_JSON(NasAvailableStorgeType, nasAvailableStorgeType_);
        DARABONBA_PTR_TO_JSON(Province, province_);
      };
      friend void from_json(const Darabonba::Json& j, NasAvailableResourceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Ability, ability_);
        DARABONBA_PTR_FROM_JSON(Area, area_);
        DARABONBA_PTR_FROM_JSON(EnName, enName_);
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(EnsRegionName, ensRegionName_);
        DARABONBA_PTR_FROM_JSON(NasAvailableAmount, nasAvailableAmount_);
        DARABONBA_PTR_FROM_JSON(NasAvailableStorgeType, nasAvailableStorgeType_);
        DARABONBA_PTR_FROM_JSON(Province, province_);
      };
      NasAvailableResourceInfo() = default ;
      NasAvailableResourceInfo(const NasAvailableResourceInfo &) = default ;
      NasAvailableResourceInfo(NasAvailableResourceInfo &&) = default ;
      NasAvailableResourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NasAvailableResourceInfo() = default ;
      NasAvailableResourceInfo& operator=(const NasAvailableResourceInfo &) = default ;
      NasAvailableResourceInfo& operator=(NasAvailableResourceInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ability_ == nullptr
        && this->area_ == nullptr && this->enName_ == nullptr && this->ensRegionId_ == nullptr && this->ensRegionName_ == nullptr && this->nasAvailableAmount_ == nullptr
        && this->nasAvailableStorgeType_ == nullptr && this->province_ == nullptr; };
      // ability Field Functions 
      bool hasAbility() const { return this->ability_ != nullptr;};
      void deleteAbility() { this->ability_ = nullptr;};
      inline const vector<string> & getAbility() const { DARABONBA_PTR_GET_CONST(ability_, vector<string>) };
      inline vector<string> getAbility() { DARABONBA_PTR_GET(ability_, vector<string>) };
      inline NasAvailableResourceInfo& setAbility(const vector<string> & ability) { DARABONBA_PTR_SET_VALUE(ability_, ability) };
      inline NasAvailableResourceInfo& setAbility(vector<string> && ability) { DARABONBA_PTR_SET_RVALUE(ability_, ability) };


      // area Field Functions 
      bool hasArea() const { return this->area_ != nullptr;};
      void deleteArea() { this->area_ = nullptr;};
      inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
      inline NasAvailableResourceInfo& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


      // enName Field Functions 
      bool hasEnName() const { return this->enName_ != nullptr;};
      void deleteEnName() { this->enName_ = nullptr;};
      inline string getEnName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
      inline NasAvailableResourceInfo& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline NasAvailableResourceInfo& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // ensRegionName Field Functions 
      bool hasEnsRegionName() const { return this->ensRegionName_ != nullptr;};
      void deleteEnsRegionName() { this->ensRegionName_ = nullptr;};
      inline string getEnsRegionName() const { DARABONBA_PTR_GET_DEFAULT(ensRegionName_, "") };
      inline NasAvailableResourceInfo& setEnsRegionName(string ensRegionName) { DARABONBA_PTR_SET_VALUE(ensRegionName_, ensRegionName) };


      // nasAvailableAmount Field Functions 
      bool hasNasAvailableAmount() const { return this->nasAvailableAmount_ != nullptr;};
      void deleteNasAvailableAmount() { this->nasAvailableAmount_ = nullptr;};
      inline int32_t getNasAvailableAmount() const { DARABONBA_PTR_GET_DEFAULT(nasAvailableAmount_, 0) };
      inline NasAvailableResourceInfo& setNasAvailableAmount(int32_t nasAvailableAmount) { DARABONBA_PTR_SET_VALUE(nasAvailableAmount_, nasAvailableAmount) };


      // nasAvailableStorgeType Field Functions 
      bool hasNasAvailableStorgeType() const { return this->nasAvailableStorgeType_ != nullptr;};
      void deleteNasAvailableStorgeType() { this->nasAvailableStorgeType_ = nullptr;};
      inline string getNasAvailableStorgeType() const { DARABONBA_PTR_GET_DEFAULT(nasAvailableStorgeType_, "") };
      inline NasAvailableResourceInfo& setNasAvailableStorgeType(string nasAvailableStorgeType) { DARABONBA_PTR_SET_VALUE(nasAvailableStorgeType_, nasAvailableStorgeType) };


      // province Field Functions 
      bool hasProvince() const { return this->province_ != nullptr;};
      void deleteProvince() { this->province_ = nullptr;};
      inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
      inline NasAvailableResourceInfo& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    protected:
      // The product supported by the edge node.
      shared_ptr<vector<string>> ability_ {};
      // The region to which the ENS node belongs.
      shared_ptr<string> area_ {};
      // The English name.
      shared_ptr<string> enName_ {};
      // The ID of the ENS node.
      shared_ptr<string> ensRegionId_ {};
      // The name of the ENS node.
      shared_ptr<string> ensRegionName_ {};
      // the number of available NAS resources.
      shared_ptr<int32_t> nasAvailableAmount_ {};
      // The types of available NAS resources.
      shared_ptr<string> nasAvailableStorgeType_ {};
      // The province to which the ENS node belongs.
      shared_ptr<string> province_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->nasAvailableResourceInfo_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeNASAvailableResourceInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeNASAvailableResourceInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nasAvailableResourceInfo Field Functions 
    bool hasNasAvailableResourceInfo() const { return this->nasAvailableResourceInfo_ != nullptr;};
    void deleteNasAvailableResourceInfo() { this->nasAvailableResourceInfo_ = nullptr;};
    inline const vector<DescribeNASAvailableResourceInfoResponseBody::NasAvailableResourceInfo> & getNasAvailableResourceInfo() const { DARABONBA_PTR_GET_CONST(nasAvailableResourceInfo_, vector<DescribeNASAvailableResourceInfoResponseBody::NasAvailableResourceInfo>) };
    inline vector<DescribeNASAvailableResourceInfoResponseBody::NasAvailableResourceInfo> getNasAvailableResourceInfo() { DARABONBA_PTR_GET(nasAvailableResourceInfo_, vector<DescribeNASAvailableResourceInfoResponseBody::NasAvailableResourceInfo>) };
    inline DescribeNASAvailableResourceInfoResponseBody& setNasAvailableResourceInfo(const vector<DescribeNASAvailableResourceInfoResponseBody::NasAvailableResourceInfo> & nasAvailableResourceInfo) { DARABONBA_PTR_SET_VALUE(nasAvailableResourceInfo_, nasAvailableResourceInfo) };
    inline DescribeNASAvailableResourceInfoResponseBody& setNasAvailableResourceInfo(vector<DescribeNASAvailableResourceInfoResponseBody::NasAvailableResourceInfo> && nasAvailableResourceInfo) { DARABONBA_PTR_SET_RVALUE(nasAvailableResourceInfo_, nasAvailableResourceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNASAvailableResourceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned service code. A value of 0 indicates that the operation was successful.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The information of available NAS resources.
    shared_ptr<vector<DescribeNASAvailableResourceInfoResponseBody::NasAvailableResourceInfo>> nasAvailableResourceInfo_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
