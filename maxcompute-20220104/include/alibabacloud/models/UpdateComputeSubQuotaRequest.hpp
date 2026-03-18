// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTESUBQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTESUBQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateComputeSubQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeSubQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(subQuotaInfoList, subQuotaInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeSubQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(subQuotaInfoList, subQuotaInfoList_);
    };
    UpdateComputeSubQuotaRequest() = default ;
    UpdateComputeSubQuotaRequest(const UpdateComputeSubQuotaRequest &) = default ;
    UpdateComputeSubQuotaRequest(UpdateComputeSubQuotaRequest &&) = default ;
    UpdateComputeSubQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeSubQuotaRequest() = default ;
    UpdateComputeSubQuotaRequest& operator=(const UpdateComputeSubQuotaRequest &) = default ;
    UpdateComputeSubQuotaRequest& operator=(UpdateComputeSubQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubQuotaInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubQuotaInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(nickName, nickName_);
        DARABONBA_PTR_TO_JSON(parameter, parameter_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, SubQuotaInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(nickName, nickName_);
        DARABONBA_PTR_FROM_JSON(parameter, parameter_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      SubQuotaInfoList() = default ;
      SubQuotaInfoList(const SubQuotaInfoList &) = default ;
      SubQuotaInfoList(SubQuotaInfoList &&) = default ;
      SubQuotaInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubQuotaInfoList() = default ;
      SubQuotaInfoList& operator=(const SubQuotaInfoList &) = default ;
      SubQuotaInfoList& operator=(SubQuotaInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Parameter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Parameter& obj) { 
          DARABONBA_PTR_TO_JSON(enablePriority, enablePriority_);
          DARABONBA_PTR_TO_JSON(forceReservedMin, forceReservedMin_);
          DARABONBA_PTR_TO_JSON(maxCU, maxCU_);
          DARABONBA_PTR_TO_JSON(minCU, minCU_);
          DARABONBA_PTR_TO_JSON(schedulerType, schedulerType_);
          DARABONBA_PTR_TO_JSON(singleJobCULimit, singleJobCULimit_);
        };
        friend void from_json(const Darabonba::Json& j, Parameter& obj) { 
          DARABONBA_PTR_FROM_JSON(enablePriority, enablePriority_);
          DARABONBA_PTR_FROM_JSON(forceReservedMin, forceReservedMin_);
          DARABONBA_PTR_FROM_JSON(maxCU, maxCU_);
          DARABONBA_PTR_FROM_JSON(minCU, minCU_);
          DARABONBA_PTR_FROM_JSON(schedulerType, schedulerType_);
          DARABONBA_PTR_FROM_JSON(singleJobCULimit, singleJobCULimit_);
        };
        Parameter() = default ;
        Parameter(const Parameter &) = default ;
        Parameter(Parameter &&) = default ;
        Parameter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Parameter() = default ;
        Parameter& operator=(const Parameter &) = default ;
        Parameter& operator=(Parameter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enablePriority_ == nullptr
        && this->forceReservedMin_ == nullptr && this->maxCU_ == nullptr && this->minCU_ == nullptr && this->schedulerType_ == nullptr && this->singleJobCULimit_ == nullptr; };
        // enablePriority Field Functions 
        bool hasEnablePriority() const { return this->enablePriority_ != nullptr;};
        void deleteEnablePriority() { this->enablePriority_ = nullptr;};
        inline bool getEnablePriority() const { DARABONBA_PTR_GET_DEFAULT(enablePriority_, false) };
        inline Parameter& setEnablePriority(bool enablePriority) { DARABONBA_PTR_SET_VALUE(enablePriority_, enablePriority) };


        // forceReservedMin Field Functions 
        bool hasForceReservedMin() const { return this->forceReservedMin_ != nullptr;};
        void deleteForceReservedMin() { this->forceReservedMin_ = nullptr;};
        inline bool getForceReservedMin() const { DARABONBA_PTR_GET_DEFAULT(forceReservedMin_, false) };
        inline Parameter& setForceReservedMin(bool forceReservedMin) { DARABONBA_PTR_SET_VALUE(forceReservedMin_, forceReservedMin) };


        // maxCU Field Functions 
        bool hasMaxCU() const { return this->maxCU_ != nullptr;};
        void deleteMaxCU() { this->maxCU_ = nullptr;};
        inline int64_t getMaxCU() const { DARABONBA_PTR_GET_DEFAULT(maxCU_, 0L) };
        inline Parameter& setMaxCU(int64_t maxCU) { DARABONBA_PTR_SET_VALUE(maxCU_, maxCU) };


        // minCU Field Functions 
        bool hasMinCU() const { return this->minCU_ != nullptr;};
        void deleteMinCU() { this->minCU_ = nullptr;};
        inline int64_t getMinCU() const { DARABONBA_PTR_GET_DEFAULT(minCU_, 0L) };
        inline Parameter& setMinCU(int64_t minCU) { DARABONBA_PTR_SET_VALUE(minCU_, minCU) };


        // schedulerType Field Functions 
        bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
        void deleteSchedulerType() { this->schedulerType_ = nullptr;};
        inline string getSchedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, "") };
        inline Parameter& setSchedulerType(string schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


        // singleJobCULimit Field Functions 
        bool hasSingleJobCULimit() const { return this->singleJobCULimit_ != nullptr;};
        void deleteSingleJobCULimit() { this->singleJobCULimit_ = nullptr;};
        inline int64_t getSingleJobCULimit() const { DARABONBA_PTR_GET_DEFAULT(singleJobCULimit_, 0L) };
        inline Parameter& setSingleJobCULimit(int64_t singleJobCULimit) { DARABONBA_PTR_SET_VALUE(singleJobCULimit_, singleJobCULimit) };


      protected:
        shared_ptr<bool> enablePriority_ {};
        shared_ptr<bool> forceReservedMin_ {};
        // This parameter is required.
        shared_ptr<int64_t> maxCU_ {};
        // This parameter is required.
        shared_ptr<int64_t> minCU_ {};
        shared_ptr<string> schedulerType_ {};
        shared_ptr<int64_t> singleJobCULimit_ {};
      };

      virtual bool empty() const override { return this->nickName_ == nullptr
        && this->parameter_ == nullptr && this->type_ == nullptr; };
      // nickName Field Functions 
      bool hasNickName() const { return this->nickName_ != nullptr;};
      void deleteNickName() { this->nickName_ = nullptr;};
      inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
      inline SubQuotaInfoList& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


      // parameter Field Functions 
      bool hasParameter() const { return this->parameter_ != nullptr;};
      void deleteParameter() { this->parameter_ = nullptr;};
      inline const SubQuotaInfoList::Parameter & getParameter() const { DARABONBA_PTR_GET_CONST(parameter_, SubQuotaInfoList::Parameter) };
      inline SubQuotaInfoList::Parameter getParameter() { DARABONBA_PTR_GET(parameter_, SubQuotaInfoList::Parameter) };
      inline SubQuotaInfoList& setParameter(const SubQuotaInfoList::Parameter & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
      inline SubQuotaInfoList& setParameter(SubQuotaInfoList::Parameter && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline SubQuotaInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // This parameter is required.
      shared_ptr<string> nickName_ {};
      shared_ptr<SubQuotaInfoList::Parameter> parameter_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->subQuotaInfoList_ == nullptr; };
    // subQuotaInfoList Field Functions 
    bool hasSubQuotaInfoList() const { return this->subQuotaInfoList_ != nullptr;};
    void deleteSubQuotaInfoList() { this->subQuotaInfoList_ = nullptr;};
    inline const vector<UpdateComputeSubQuotaRequest::SubQuotaInfoList> & getSubQuotaInfoList() const { DARABONBA_PTR_GET_CONST(subQuotaInfoList_, vector<UpdateComputeSubQuotaRequest::SubQuotaInfoList>) };
    inline vector<UpdateComputeSubQuotaRequest::SubQuotaInfoList> getSubQuotaInfoList() { DARABONBA_PTR_GET(subQuotaInfoList_, vector<UpdateComputeSubQuotaRequest::SubQuotaInfoList>) };
    inline UpdateComputeSubQuotaRequest& setSubQuotaInfoList(const vector<UpdateComputeSubQuotaRequest::SubQuotaInfoList> & subQuotaInfoList) { DARABONBA_PTR_SET_VALUE(subQuotaInfoList_, subQuotaInfoList) };
    inline UpdateComputeSubQuotaRequest& setSubQuotaInfoList(vector<UpdateComputeSubQuotaRequest::SubQuotaInfoList> && subQuotaInfoList) { DARABONBA_PTR_SET_RVALUE(subQuotaInfoList_, subQuotaInfoList) };


  protected:
    shared_ptr<vector<UpdateComputeSubQuotaRequest::SubQuotaInfoList>> subQuotaInfoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
