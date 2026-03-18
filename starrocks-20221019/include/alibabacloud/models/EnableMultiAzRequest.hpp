// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEMULTIAZREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEMULTIAZREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class EnableMultiAzRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableMultiAzRequest& obj) { 
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(observers, observers_);
      DARABONBA_PTR_TO_JSON(promotionOptionNo, promotionOptionNo_);
    };
    friend void from_json(const Darabonba::Json& j, EnableMultiAzRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(observers, observers_);
      DARABONBA_PTR_FROM_JSON(promotionOptionNo, promotionOptionNo_);
    };
    EnableMultiAzRequest() = default ;
    EnableMultiAzRequest(const EnableMultiAzRequest &) = default ;
    EnableMultiAzRequest(EnableMultiAzRequest &&) = default ;
    EnableMultiAzRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableMultiAzRequest() = default ;
    EnableMultiAzRequest& operator=(const EnableMultiAzRequest &) = default ;
    EnableMultiAzRequest& operator=(EnableMultiAzRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Observers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Observers& obj) { 
        DARABONBA_PTR_TO_JSON(vswId, vswId_);
        DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Observers& obj) { 
        DARABONBA_PTR_FROM_JSON(vswId, vswId_);
        DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
      };
      Observers() = default ;
      Observers(const Observers &) = default ;
      Observers(Observers &&) = default ;
      Observers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Observers() = default ;
      Observers& operator=(const Observers &) = default ;
      Observers& operator=(Observers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->vswId_ == nullptr
        && this->zoneId_ == nullptr; };
      // vswId Field Functions 
      bool hasVswId() const { return this->vswId_ != nullptr;};
      void deleteVswId() { this->vswId_ = nullptr;};
      inline string getVswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
      inline Observers& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Observers& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> vswId_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->observers_ == nullptr && this->promotionOptionNo_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EnableMultiAzRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // observers Field Functions 
    bool hasObservers() const { return this->observers_ != nullptr;};
    void deleteObservers() { this->observers_ = nullptr;};
    inline const vector<EnableMultiAzRequest::Observers> & getObservers() const { DARABONBA_PTR_GET_CONST(observers_, vector<EnableMultiAzRequest::Observers>) };
    inline vector<EnableMultiAzRequest::Observers> getObservers() { DARABONBA_PTR_GET(observers_, vector<EnableMultiAzRequest::Observers>) };
    inline EnableMultiAzRequest& setObservers(const vector<EnableMultiAzRequest::Observers> & observers) { DARABONBA_PTR_SET_VALUE(observers_, observers) };
    inline EnableMultiAzRequest& setObservers(vector<EnableMultiAzRequest::Observers> && observers) { DARABONBA_PTR_SET_RVALUE(observers_, observers) };


    // promotionOptionNo Field Functions 
    bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
    void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
    inline string getPromotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
    inline EnableMultiAzRequest& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<vector<EnableMultiAzRequest::Observers>> observers_ {};
    shared_ptr<string> promotionOptionNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
