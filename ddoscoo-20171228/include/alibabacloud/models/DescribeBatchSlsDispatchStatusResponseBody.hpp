// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBATCHSLSDISPATCHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBATCHSLSDISPATCHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeBatchSlsDispatchStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBatchSlsDispatchStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsConfigStatusList, slsConfigStatusList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBatchSlsDispatchStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsConfigStatusList, slsConfigStatusList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBatchSlsDispatchStatusResponseBody() = default ;
    DescribeBatchSlsDispatchStatusResponseBody(const DescribeBatchSlsDispatchStatusResponseBody &) = default ;
    DescribeBatchSlsDispatchStatusResponseBody(DescribeBatchSlsDispatchStatusResponseBody &&) = default ;
    DescribeBatchSlsDispatchStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBatchSlsDispatchStatusResponseBody() = default ;
    DescribeBatchSlsDispatchStatusResponseBody& operator=(const DescribeBatchSlsDispatchStatusResponseBody &) = default ;
    DescribeBatchSlsDispatchStatusResponseBody& operator=(DescribeBatchSlsDispatchStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SlsConfigStatusList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlsConfigStatusList& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
      };
      friend void from_json(const Darabonba::Json& j, SlsConfigStatusList& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
      };
      SlsConfigStatusList() = default ;
      SlsConfigStatusList(const SlsConfigStatusList &) = default ;
      SlsConfigStatusList(SlsConfigStatusList &&) = default ;
      SlsConfigStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlsConfigStatusList() = default ;
      SlsConfigStatusList& operator=(const SlsConfigStatusList &) = default ;
      SlsConfigStatusList& operator=(SlsConfigStatusList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->enable_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline SlsConfigStatusList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline SlsConfigStatusList& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    protected:
      shared_ptr<string> domain_ {};
      shared_ptr<bool> enable_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->slsConfigStatusList_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBatchSlsDispatchStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsConfigStatusList Field Functions 
    bool hasSlsConfigStatusList() const { return this->slsConfigStatusList_ != nullptr;};
    void deleteSlsConfigStatusList() { this->slsConfigStatusList_ = nullptr;};
    inline const vector<DescribeBatchSlsDispatchStatusResponseBody::SlsConfigStatusList> & getSlsConfigStatusList() const { DARABONBA_PTR_GET_CONST(slsConfigStatusList_, vector<DescribeBatchSlsDispatchStatusResponseBody::SlsConfigStatusList>) };
    inline vector<DescribeBatchSlsDispatchStatusResponseBody::SlsConfigStatusList> getSlsConfigStatusList() { DARABONBA_PTR_GET(slsConfigStatusList_, vector<DescribeBatchSlsDispatchStatusResponseBody::SlsConfigStatusList>) };
    inline DescribeBatchSlsDispatchStatusResponseBody& setSlsConfigStatusList(const vector<DescribeBatchSlsDispatchStatusResponseBody::SlsConfigStatusList> & slsConfigStatusList) { DARABONBA_PTR_SET_VALUE(slsConfigStatusList_, slsConfigStatusList) };
    inline DescribeBatchSlsDispatchStatusResponseBody& setSlsConfigStatusList(vector<DescribeBatchSlsDispatchStatusResponseBody::SlsConfigStatusList> && slsConfigStatusList) { DARABONBA_PTR_SET_RVALUE(slsConfigStatusList_, slsConfigStatusList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeBatchSlsDispatchStatusResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeBatchSlsDispatchStatusResponseBody::SlsConfigStatusList>> slsConfigStatusList_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
