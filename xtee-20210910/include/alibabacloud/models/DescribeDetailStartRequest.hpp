// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDETAILSTARTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDETAILSTARTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeDetailStartRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDetailStartRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appKey, appKey_);
      DARABONBA_PTR_TO_JSON(endDs, endDs_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(service, service_);
      DARABONBA_PTR_TO_JSON(startDs, startDs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDetailStartRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appKey, appKey_);
      DARABONBA_PTR_FROM_JSON(endDs, endDs_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(service, service_);
      DARABONBA_PTR_FROM_JSON(startDs, startDs_);
    };
    DescribeDetailStartRequest() = default ;
    DescribeDetailStartRequest(const DescribeDetailStartRequest &) = default ;
    DescribeDetailStartRequest(DescribeDetailStartRequest &&) = default ;
    DescribeDetailStartRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDetailStartRequest() = default ;
    DescribeDetailStartRequest& operator=(const DescribeDetailStartRequest &) = default ;
    DescribeDetailStartRequest& operator=(DescribeDetailStartRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && return this->endDs_ == nullptr && return this->regId_ == nullptr && return this->service_ == nullptr && return this->startDs_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline DescribeDetailStartRequest& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // endDs Field Functions 
    bool hasEndDs() const { return this->endDs_ != nullptr;};
    void deleteEndDs() { this->endDs_ = nullptr;};
    inline string endDs() const { DARABONBA_PTR_GET_DEFAULT(endDs_, "") };
    inline DescribeDetailStartRequest& setEndDs(string endDs) { DARABONBA_PTR_SET_VALUE(endDs_, endDs) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeDetailStartRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline DescribeDetailStartRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // startDs Field Functions 
    bool hasStartDs() const { return this->startDs_ != nullptr;};
    void deleteStartDs() { this->startDs_ = nullptr;};
    inline string startDs() const { DARABONBA_PTR_GET_DEFAULT(startDs_, "") };
    inline DescribeDetailStartRequest& setStartDs(string startDs) { DARABONBA_PTR_SET_VALUE(startDs_, startDs) };


  protected:
    // Application appkey.
    std::shared_ptr<string> appKey_ = nullptr;
    // End time
    //      
    // Format yyyymmdd
    std::shared_ptr<string> endDs_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Called service
    std::shared_ptr<string> service_ = nullptr;
    // Start time
    //      
    //  Format yyyymmdd
    std::shared_ptr<string> startDs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
