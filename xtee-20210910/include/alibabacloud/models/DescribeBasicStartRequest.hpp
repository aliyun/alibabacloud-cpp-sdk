// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBASICSTARTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBASICSTARTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeBasicStartRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBasicStartRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appKey, appKey_);
      DARABONBA_PTR_TO_JSON(endDs, endDs_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(service, service_);
      DARABONBA_PTR_TO_JSON(startDs, startDs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBasicStartRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appKey, appKey_);
      DARABONBA_PTR_FROM_JSON(endDs, endDs_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(service, service_);
      DARABONBA_PTR_FROM_JSON(startDs, startDs_);
    };
    DescribeBasicStartRequest() = default ;
    DescribeBasicStartRequest(const DescribeBasicStartRequest &) = default ;
    DescribeBasicStartRequest(DescribeBasicStartRequest &&) = default ;
    DescribeBasicStartRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBasicStartRequest() = default ;
    DescribeBasicStartRequest& operator=(const DescribeBasicStartRequest &) = default ;
    DescribeBasicStartRequest& operator=(DescribeBasicStartRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && this->endDs_ == nullptr && this->regId_ == nullptr && this->service_ == nullptr && this->startDs_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline DescribeBasicStartRequest& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // endDs Field Functions 
    bool hasEndDs() const { return this->endDs_ != nullptr;};
    void deleteEndDs() { this->endDs_ = nullptr;};
    inline string getEndDs() const { DARABONBA_PTR_GET_DEFAULT(endDs_, "") };
    inline DescribeBasicStartRequest& setEndDs(string endDs) { DARABONBA_PTR_SET_VALUE(endDs_, endDs) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeBasicStartRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline DescribeBasicStartRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // startDs Field Functions 
    bool hasStartDs() const { return this->startDs_ != nullptr;};
    void deleteStartDs() { this->startDs_ = nullptr;};
    inline string getStartDs() const { DARABONBA_PTR_GET_DEFAULT(startDs_, "") };
    inline DescribeBasicStartRequest& setStartDs(string startDs) { DARABONBA_PTR_SET_VALUE(startDs_, startDs) };


  protected:
    // Application appkey.
    shared_ptr<string> appKey_ {};
    // End time, accurate to milliseconds (ms).
    shared_ptr<string> endDs_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Service to call
    shared_ptr<string> service_ {};
    // Start time, accurate to milliseconds (ms).
    shared_ptr<string> startDs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
