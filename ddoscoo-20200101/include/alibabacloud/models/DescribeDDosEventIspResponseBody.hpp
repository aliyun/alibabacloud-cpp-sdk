// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTISPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTISPRESPONSEBODY_HPP_
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
  class DescribeDDosEventIspResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDosEventIspResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Isps, isps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDosEventIspResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Isps, isps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDDosEventIspResponseBody() = default ;
    DescribeDDosEventIspResponseBody(const DescribeDDosEventIspResponseBody &) = default ;
    DescribeDDosEventIspResponseBody(DescribeDDosEventIspResponseBody &&) = default ;
    DescribeDDosEventIspResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDosEventIspResponseBody() = default ;
    DescribeDDosEventIspResponseBody& operator=(const DescribeDDosEventIspResponseBody &) = default ;
    DescribeDDosEventIspResponseBody& operator=(DescribeDDosEventIspResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Isps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Isps& obj) { 
        DARABONBA_PTR_TO_JSON(InPkts, inPkts_);
        DARABONBA_PTR_TO_JSON(Isp, isp_);
      };
      friend void from_json(const Darabonba::Json& j, Isps& obj) { 
        DARABONBA_PTR_FROM_JSON(InPkts, inPkts_);
        DARABONBA_PTR_FROM_JSON(Isp, isp_);
      };
      Isps() = default ;
      Isps(const Isps &) = default ;
      Isps(Isps &&) = default ;
      Isps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Isps() = default ;
      Isps& operator=(const Isps &) = default ;
      Isps& operator=(Isps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->inPkts_ == nullptr
        && this->isp_ == nullptr; };
      // inPkts Field Functions 
      bool hasInPkts() const { return this->inPkts_ != nullptr;};
      void deleteInPkts() { this->inPkts_ = nullptr;};
      inline int64_t getInPkts() const { DARABONBA_PTR_GET_DEFAULT(inPkts_, 0L) };
      inline Isps& setInPkts(int64_t inPkts) { DARABONBA_PTR_SET_VALUE(inPkts_, inPkts) };


      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline Isps& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    protected:
      // The number of request packets that were sent from the ISP.
      shared_ptr<int64_t> inPkts_ {};
      // The code of the ISP. Valid values:
      // 
      // *   **100017**: China Telecom
      // *   **100026**: China Unicom
      // *   **100025**: China Mobile
      // *   **100027**: China Education and Research Network
      // *   **100020**: China Mobile Tietong
      // *   **1000143**: Dr.Peng Telecom & Media Group
      // *   **100080**: Beijing Gehua CATV Network
      // *   **1000139**: National Radio and Television Administration
      // *   **100023**: Oriental Cable Network
      // *   **100063**: Founder Broadband
      // *   **1000337**: China Internet Exchange
      // *   **100021**: 21Vianet Group
      // *   **1000333**: Wasu Media Holding
      // *   **100093**: Wangsu Science & Technology
      // *   **1000401**: Tencent
      // *   **100099**: Baidu
      // *   **1000323**: Alibaba Cloud
      // *   **100098**: Alibaba
      shared_ptr<string> isp_ {};
    };

    virtual bool empty() const override { return this->isps_ == nullptr
        && this->requestId_ == nullptr; };
    // isps Field Functions 
    bool hasIsps() const { return this->isps_ != nullptr;};
    void deleteIsps() { this->isps_ = nullptr;};
    inline const vector<DescribeDDosEventIspResponseBody::Isps> & getIsps() const { DARABONBA_PTR_GET_CONST(isps_, vector<DescribeDDosEventIspResponseBody::Isps>) };
    inline vector<DescribeDDosEventIspResponseBody::Isps> getIsps() { DARABONBA_PTR_GET(isps_, vector<DescribeDDosEventIspResponseBody::Isps>) };
    inline DescribeDDosEventIspResponseBody& setIsps(const vector<DescribeDDosEventIspResponseBody::Isps> & isps) { DARABONBA_PTR_SET_VALUE(isps_, isps) };
    inline DescribeDDosEventIspResponseBody& setIsps(vector<DescribeDDosEventIspResponseBody::Isps> && isps) { DARABONBA_PTR_SET_RVALUE(isps_, isps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDosEventIspResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ISPs for the volumetric attack.
    shared_ptr<vector<DescribeDDosEventIspResponseBody::Isps>> isps_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
