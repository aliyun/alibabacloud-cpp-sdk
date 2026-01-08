// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENIPACCESSSRCSTATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENIPACCESSSRCSTATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOpenIpAccessSrcStatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpenIpAccessSrcStatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatList, statList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpenIpAccessSrcStatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatList, statList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeOpenIpAccessSrcStatResponseBody() = default ;
    DescribeOpenIpAccessSrcStatResponseBody(const DescribeOpenIpAccessSrcStatResponseBody &) = default ;
    DescribeOpenIpAccessSrcStatResponseBody(DescribeOpenIpAccessSrcStatResponseBody &&) = default ;
    DescribeOpenIpAccessSrcStatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpenIpAccessSrcStatResponseBody() = default ;
    DescribeOpenIpAccessSrcStatResponseBody& operator=(const DescribeOpenIpAccessSrcStatResponseBody &) = default ;
    DescribeOpenIpAccessSrcStatResponseBody& operator=(DescribeOpenIpAccessSrcStatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StatList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StatList& obj) { 
        DARABONBA_PTR_TO_JSON(AbnormalSrcIp, abnormalSrcIp_);
        DARABONBA_PTR_TO_JSON(App, app_);
        DARABONBA_PTR_TO_JSON(NormalSrcIp, normalSrcIp_);
        DARABONBA_PTR_TO_JSON(Port, port_);
      };
      friend void from_json(const Darabonba::Json& j, StatList& obj) { 
        DARABONBA_PTR_FROM_JSON(AbnormalSrcIp, abnormalSrcIp_);
        DARABONBA_PTR_FROM_JSON(App, app_);
        DARABONBA_PTR_FROM_JSON(NormalSrcIp, normalSrcIp_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
      };
      StatList() = default ;
      StatList(const StatList &) = default ;
      StatList(StatList &&) = default ;
      StatList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StatList() = default ;
      StatList& operator=(const StatList &) = default ;
      StatList& operator=(StatList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->abnormalSrcIp_ == nullptr
        && this->app_ == nullptr && this->normalSrcIp_ == nullptr && this->port_ == nullptr; };
      // abnormalSrcIp Field Functions 
      bool hasAbnormalSrcIp() const { return this->abnormalSrcIp_ != nullptr;};
      void deleteAbnormalSrcIp() { this->abnormalSrcIp_ = nullptr;};
      inline int64_t getAbnormalSrcIp() const { DARABONBA_PTR_GET_DEFAULT(abnormalSrcIp_, 0L) };
      inline StatList& setAbnormalSrcIp(int64_t abnormalSrcIp) { DARABONBA_PTR_SET_VALUE(abnormalSrcIp_, abnormalSrcIp) };


      // app Field Functions 
      bool hasApp() const { return this->app_ != nullptr;};
      void deleteApp() { this->app_ = nullptr;};
      inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
      inline StatList& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


      // normalSrcIp Field Functions 
      bool hasNormalSrcIp() const { return this->normalSrcIp_ != nullptr;};
      void deleteNormalSrcIp() { this->normalSrcIp_ = nullptr;};
      inline int64_t getNormalSrcIp() const { DARABONBA_PTR_GET_DEFAULT(normalSrcIp_, 0L) };
      inline StatList& setNormalSrcIp(int64_t normalSrcIp) { DARABONBA_PTR_SET_VALUE(normalSrcIp_, normalSrcIp) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline StatList& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    protected:
      shared_ptr<int64_t> abnormalSrcIp_ {};
      shared_ptr<string> app_ {};
      shared_ptr<int64_t> normalSrcIp_ {};
      shared_ptr<string> port_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->statList_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOpenIpAccessSrcStatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statList Field Functions 
    bool hasStatList() const { return this->statList_ != nullptr;};
    void deleteStatList() { this->statList_ = nullptr;};
    inline const vector<DescribeOpenIpAccessSrcStatResponseBody::StatList> & getStatList() const { DARABONBA_PTR_GET_CONST(statList_, vector<DescribeOpenIpAccessSrcStatResponseBody::StatList>) };
    inline vector<DescribeOpenIpAccessSrcStatResponseBody::StatList> getStatList() { DARABONBA_PTR_GET(statList_, vector<DescribeOpenIpAccessSrcStatResponseBody::StatList>) };
    inline DescribeOpenIpAccessSrcStatResponseBody& setStatList(const vector<DescribeOpenIpAccessSrcStatResponseBody::StatList> & statList) { DARABONBA_PTR_SET_VALUE(statList_, statList) };
    inline DescribeOpenIpAccessSrcStatResponseBody& setStatList(vector<DescribeOpenIpAccessSrcStatResponseBody::StatList> && statList) { DARABONBA_PTR_SET_RVALUE(statList_, statList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeOpenIpAccessSrcStatResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeOpenIpAccessSrcStatResponseBody::StatList>> statList_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
