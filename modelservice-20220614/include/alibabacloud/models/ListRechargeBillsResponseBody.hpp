// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECHARGEBILLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECHARGEBILLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelService20220614
{
namespace Models
{
  class ListRechargeBillsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRechargeBillsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanseInfos, instanseInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResidueAmount, residueAmount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRechargeBillsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanseInfos, instanseInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResidueAmount, residueAmount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRechargeBillsResponseBody() = default ;
    ListRechargeBillsResponseBody(const ListRechargeBillsResponseBody &) = default ;
    ListRechargeBillsResponseBody(ListRechargeBillsResponseBody &&) = default ;
    ListRechargeBillsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRechargeBillsResponseBody() = default ;
    ListRechargeBillsResponseBody& operator=(const ListRechargeBillsResponseBody &) = default ;
    ListRechargeBillsResponseBody& operator=(ListRechargeBillsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanseInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanseInfos& obj) { 
        DARABONBA_PTR_TO_JSON(CurrTimes, currTimes_);
        DARABONBA_PTR_TO_JSON(GmtEndTime, gmtEndTime_);
        DARABONBA_PTR_TO_JSON(InitTimes, initTimes_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Source, source_);
      };
      friend void from_json(const Darabonba::Json& j, InstanseInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrTimes, currTimes_);
        DARABONBA_PTR_FROM_JSON(GmtEndTime, gmtEndTime_);
        DARABONBA_PTR_FROM_JSON(InitTimes, initTimes_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
      };
      InstanseInfos() = default ;
      InstanseInfos(const InstanseInfos &) = default ;
      InstanseInfos(InstanseInfos &&) = default ;
      InstanseInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanseInfos() = default ;
      InstanseInfos& operator=(const InstanseInfos &) = default ;
      InstanseInfos& operator=(InstanseInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currTimes_ == nullptr
        && this->gmtEndTime_ == nullptr && this->initTimes_ == nullptr && this->instanceId_ == nullptr && this->source_ == nullptr; };
      // currTimes Field Functions 
      bool hasCurrTimes() const { return this->currTimes_ != nullptr;};
      void deleteCurrTimes() { this->currTimes_ = nullptr;};
      inline int32_t getCurrTimes() const { DARABONBA_PTR_GET_DEFAULT(currTimes_, 0) };
      inline InstanseInfos& setCurrTimes(int32_t currTimes) { DARABONBA_PTR_SET_VALUE(currTimes_, currTimes) };


      // gmtEndTime Field Functions 
      bool hasGmtEndTime() const { return this->gmtEndTime_ != nullptr;};
      void deleteGmtEndTime() { this->gmtEndTime_ = nullptr;};
      inline string getGmtEndTime() const { DARABONBA_PTR_GET_DEFAULT(gmtEndTime_, "") };
      inline InstanseInfos& setGmtEndTime(string gmtEndTime) { DARABONBA_PTR_SET_VALUE(gmtEndTime_, gmtEndTime) };


      // initTimes Field Functions 
      bool hasInitTimes() const { return this->initTimes_ != nullptr;};
      void deleteInitTimes() { this->initTimes_ = nullptr;};
      inline int32_t getInitTimes() const { DARABONBA_PTR_GET_DEFAULT(initTimes_, 0) };
      inline InstanseInfos& setInitTimes(int32_t initTimes) { DARABONBA_PTR_SET_VALUE(initTimes_, initTimes) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanseInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline InstanseInfos& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    protected:
      shared_ptr<int32_t> currTimes_ {};
      shared_ptr<string> gmtEndTime_ {};
      shared_ptr<int32_t> initTimes_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> source_ {};
    };

    virtual bool empty() const override { return this->instanseInfos_ == nullptr
        && this->requestId_ == nullptr && this->residueAmount_ == nullptr && this->totalCount_ == nullptr; };
    // instanseInfos Field Functions 
    bool hasInstanseInfos() const { return this->instanseInfos_ != nullptr;};
    void deleteInstanseInfos() { this->instanseInfos_ = nullptr;};
    inline const vector<ListRechargeBillsResponseBody::InstanseInfos> & getInstanseInfos() const { DARABONBA_PTR_GET_CONST(instanseInfos_, vector<ListRechargeBillsResponseBody::InstanseInfos>) };
    inline vector<ListRechargeBillsResponseBody::InstanseInfos> getInstanseInfos() { DARABONBA_PTR_GET(instanseInfos_, vector<ListRechargeBillsResponseBody::InstanseInfos>) };
    inline ListRechargeBillsResponseBody& setInstanseInfos(const vector<ListRechargeBillsResponseBody::InstanseInfos> & instanseInfos) { DARABONBA_PTR_SET_VALUE(instanseInfos_, instanseInfos) };
    inline ListRechargeBillsResponseBody& setInstanseInfos(vector<ListRechargeBillsResponseBody::InstanseInfos> && instanseInfos) { DARABONBA_PTR_SET_RVALUE(instanseInfos_, instanseInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRechargeBillsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // residueAmount Field Functions 
    bool hasResidueAmount() const { return this->residueAmount_ != nullptr;};
    void deleteResidueAmount() { this->residueAmount_ = nullptr;};
    inline int32_t getResidueAmount() const { DARABONBA_PTR_GET_DEFAULT(residueAmount_, 0) };
    inline ListRechargeBillsResponseBody& setResidueAmount(int32_t residueAmount) { DARABONBA_PTR_SET_VALUE(residueAmount_, residueAmount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListRechargeBillsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListRechargeBillsResponseBody::InstanseInfos>> instanseInfos_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> residueAmount_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelService20220614
#endif
