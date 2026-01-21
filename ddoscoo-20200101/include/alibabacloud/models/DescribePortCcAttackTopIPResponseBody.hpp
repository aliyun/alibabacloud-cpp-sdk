// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTCCATTACKTOPIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTCCATTACKTOPIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortCcAttackTopIPResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortCcAttackTopIPResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TopIp, topIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortCcAttackTopIPResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TopIp, topIp_);
    };
    DescribePortCcAttackTopIPResponseBody() = default ;
    DescribePortCcAttackTopIPResponseBody(const DescribePortCcAttackTopIPResponseBody &) = default ;
    DescribePortCcAttackTopIPResponseBody(DescribePortCcAttackTopIPResponseBody &&) = default ;
    DescribePortCcAttackTopIPResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortCcAttackTopIPResponseBody() = default ;
    DescribePortCcAttackTopIPResponseBody& operator=(const DescribePortCcAttackTopIPResponseBody &) = default ;
    DescribePortCcAttackTopIPResponseBody& operator=(DescribePortCcAttackTopIPResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TopIp : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TopIp& obj) { 
        DARABONBA_PTR_TO_JSON(AreaId, areaId_);
        DARABONBA_PTR_TO_JSON(Pv, pv_);
        DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
      };
      friend void from_json(const Darabonba::Json& j, TopIp& obj) { 
        DARABONBA_PTR_FROM_JSON(AreaId, areaId_);
        DARABONBA_PTR_FROM_JSON(Pv, pv_);
        DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
      };
      TopIp() = default ;
      TopIp(const TopIp &) = default ;
      TopIp(TopIp &&) = default ;
      TopIp(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TopIp() = default ;
      TopIp& operator=(const TopIp &) = default ;
      TopIp& operator=(TopIp &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->areaId_ == nullptr
        && this->pv_ == nullptr && this->srcIp_ == nullptr; };
      // areaId Field Functions 
      bool hasAreaId() const { return this->areaId_ != nullptr;};
      void deleteAreaId() { this->areaId_ = nullptr;};
      inline string getAreaId() const { DARABONBA_PTR_GET_DEFAULT(areaId_, "") };
      inline TopIp& setAreaId(string areaId) { DARABONBA_PTR_SET_VALUE(areaId_, areaId) };


      // pv Field Functions 
      bool hasPv() const { return this->pv_ != nullptr;};
      void deletePv() { this->pv_ = nullptr;};
      inline int64_t getPv() const { DARABONBA_PTR_GET_DEFAULT(pv_, 0L) };
      inline TopIp& setPv(int64_t pv) { DARABONBA_PTR_SET_VALUE(pv_, pv) };


      // srcIp Field Functions 
      bool hasSrcIp() const { return this->srcIp_ != nullptr;};
      void deleteSrcIp() { this->srcIp_ = nullptr;};
      inline string getSrcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
      inline TopIp& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


    protected:
      // The code of the location from which the attack is initiated. For more information, see [Codes of administrative regions in China and codes of countries and areas](https://help.aliyun.com/document_detail/167926.html). For example, **110000** indicates Beijing, China, and **us** indicates the United States.
      shared_ptr<string> areaId_ {};
      // The number of attacks from the IP address.
      shared_ptr<int64_t> pv_ {};
      // The source IP address of the attack.
      shared_ptr<string> srcIp_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->topIp_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortCcAttackTopIPResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // topIp Field Functions 
    bool hasTopIp() const { return this->topIp_ != nullptr;};
    void deleteTopIp() { this->topIp_ = nullptr;};
    inline const vector<DescribePortCcAttackTopIPResponseBody::TopIp> & getTopIp() const { DARABONBA_PTR_GET_CONST(topIp_, vector<DescribePortCcAttackTopIPResponseBody::TopIp>) };
    inline vector<DescribePortCcAttackTopIPResponseBody::TopIp> getTopIp() { DARABONBA_PTR_GET(topIp_, vector<DescribePortCcAttackTopIPResponseBody::TopIp>) };
    inline DescribePortCcAttackTopIPResponseBody& setTopIp(const vector<DescribePortCcAttackTopIPResponseBody::TopIp> & topIp) { DARABONBA_PTR_SET_VALUE(topIp_, topIp) };
    inline DescribePortCcAttackTopIPResponseBody& setTopIp(vector<DescribePortCcAttackTopIPResponseBody::TopIp> && topIp) { DARABONBA_PTR_SET_RVALUE(topIp_, topIp) };


  protected:
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The top IP addresses from which most attacks are initiated.
    shared_ptr<vector<DescribePortCcAttackTopIPResponseBody::TopIp>> topIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
