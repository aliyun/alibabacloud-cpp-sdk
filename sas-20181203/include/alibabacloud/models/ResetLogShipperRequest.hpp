// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETLOGSHIPPERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETLOGSHIPPERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ResetLogShipperRequestLogMetaList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ResetLogShipperRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetLogShipperRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotTtl, hotTtl_);
      DARABONBA_PTR_TO_JSON(LogMetaList, logMetaList_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, ResetLogShipperRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotTtl, hotTtl_);
      DARABONBA_PTR_FROM_JSON(LogMetaList, logMetaList_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    ResetLogShipperRequest() = default ;
    ResetLogShipperRequest(const ResetLogShipperRequest &) = default ;
    ResetLogShipperRequest(ResetLogShipperRequest &&) = default ;
    ResetLogShipperRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetLogShipperRequest() = default ;
    ResetLogShipperRequest& operator=(const ResetLogShipperRequest &) = default ;
    ResetLogShipperRequest& operator=(ResetLogShipperRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotTtl_ == nullptr
        && return this->logMetaList_ == nullptr && return this->ttl_ == nullptr; };
    // hotTtl Field Functions 
    bool hasHotTtl() const { return this->hotTtl_ != nullptr;};
    void deleteHotTtl() { this->hotTtl_ = nullptr;};
    inline int32_t hotTtl() const { DARABONBA_PTR_GET_DEFAULT(hotTtl_, 0) };
    inline ResetLogShipperRequest& setHotTtl(int32_t hotTtl) { DARABONBA_PTR_SET_VALUE(hotTtl_, hotTtl) };


    // logMetaList Field Functions 
    bool hasLogMetaList() const { return this->logMetaList_ != nullptr;};
    void deleteLogMetaList() { this->logMetaList_ = nullptr;};
    inline const vector<ResetLogShipperRequestLogMetaList> & logMetaList() const { DARABONBA_PTR_GET_CONST(logMetaList_, vector<ResetLogShipperRequestLogMetaList>) };
    inline vector<ResetLogShipperRequestLogMetaList> logMetaList() { DARABONBA_PTR_GET(logMetaList_, vector<ResetLogShipperRequestLogMetaList>) };
    inline ResetLogShipperRequest& setLogMetaList(const vector<ResetLogShipperRequestLogMetaList> & logMetaList) { DARABONBA_PTR_SET_VALUE(logMetaList_, logMetaList) };
    inline ResetLogShipperRequest& setLogMetaList(vector<ResetLogShipperRequestLogMetaList> && logMetaList) { DARABONBA_PTR_SET_RVALUE(logMetaList_, logMetaList) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline ResetLogShipperRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // The global retention period of hot data.
    // 
    // >  The value of this parameter must be at least 7 and smaller than the log retention period. Unit: days.
    std::shared_ptr<int32_t> hotTtl_ = nullptr;
    // The settings of the log analysis feature.
    std::shared_ptr<vector<ResetLogShipperRequestLogMetaList>> logMetaList_ = nullptr;
    // The global log retention period.
    // 
    // >  This parameter is supported only when the log analysis feature uses the pay-as-you-go billing method.
    std::shared_ptr<int32_t> ttl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
