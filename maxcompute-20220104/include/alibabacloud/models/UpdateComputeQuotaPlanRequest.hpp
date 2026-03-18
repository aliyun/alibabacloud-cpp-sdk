// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTEQUOTAPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTEQUOTAPLANREQUEST_HPP_
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
  class UpdateComputeQuotaPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeQuotaPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(quota, quota_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeQuotaPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(quota, quota_);
    };
    UpdateComputeQuotaPlanRequest() = default ;
    UpdateComputeQuotaPlanRequest(const UpdateComputeQuotaPlanRequest &) = default ;
    UpdateComputeQuotaPlanRequest(UpdateComputeQuotaPlanRequest &&) = default ;
    UpdateComputeQuotaPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeQuotaPlanRequest() = default ;
    UpdateComputeQuotaPlanRequest& operator=(const UpdateComputeQuotaPlanRequest &) = default ;
    UpdateComputeQuotaPlanRequest& operator=(UpdateComputeQuotaPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Quota : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Quota& obj) { 
        DARABONBA_PTR_TO_JSON(parameter, parameter_);
        DARABONBA_PTR_TO_JSON(subQuotaInfoList, subQuotaInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, Quota& obj) { 
        DARABONBA_PTR_FROM_JSON(parameter, parameter_);
        DARABONBA_PTR_FROM_JSON(subQuotaInfoList, subQuotaInfoList_);
      };
      Quota() = default ;
      Quota(const Quota &) = default ;
      Quota(Quota &&) = default ;
      Quota(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Quota() = default ;
      Quota& operator=(const Quota &) = default ;
      Quota& operator=(Quota &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubQuotaInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubQuotaInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(nickName, nickName_);
          DARABONBA_PTR_TO_JSON(parameter, parameter_);
        };
        friend void from_json(const Darabonba::Json& j, SubQuotaInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(nickName, nickName_);
          DARABONBA_PTR_FROM_JSON(parameter, parameter_);
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
            DARABONBA_PTR_TO_JSON(elasticReservedCU, elasticReservedCU_);
            DARABONBA_PTR_TO_JSON(maxCU, maxCU_);
            DARABONBA_PTR_TO_JSON(minCU, minCU_);
          };
          friend void from_json(const Darabonba::Json& j, Parameter& obj) { 
            DARABONBA_PTR_FROM_JSON(elasticReservedCU, elasticReservedCU_);
            DARABONBA_PTR_FROM_JSON(maxCU, maxCU_);
            DARABONBA_PTR_FROM_JSON(minCU, minCU_);
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
          virtual bool empty() const override { return this->elasticReservedCU_ == nullptr
        && this->maxCU_ == nullptr && this->minCU_ == nullptr; };
          // elasticReservedCU Field Functions 
          bool hasElasticReservedCU() const { return this->elasticReservedCU_ != nullptr;};
          void deleteElasticReservedCU() { this->elasticReservedCU_ = nullptr;};
          inline int64_t getElasticReservedCU() const { DARABONBA_PTR_GET_DEFAULT(elasticReservedCU_, 0L) };
          inline Parameter& setElasticReservedCU(int64_t elasticReservedCU) { DARABONBA_PTR_SET_VALUE(elasticReservedCU_, elasticReservedCU) };


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


        protected:
          // This parameter is required.
          shared_ptr<int64_t> elasticReservedCU_ {};
          // This parameter is required.
          shared_ptr<int64_t> maxCU_ {};
          // This parameter is required.
          shared_ptr<int64_t> minCU_ {};
        };

        virtual bool empty() const override { return this->nickName_ == nullptr
        && this->parameter_ == nullptr; };
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


      protected:
        // This parameter is required.
        shared_ptr<string> nickName_ {};
        shared_ptr<SubQuotaInfoList::Parameter> parameter_ {};
      };

      class Parameter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Parameter& obj) { 
          DARABONBA_PTR_TO_JSON(elasticReservedCU, elasticReservedCU_);
        };
        friend void from_json(const Darabonba::Json& j, Parameter& obj) { 
          DARABONBA_PTR_FROM_JSON(elasticReservedCU, elasticReservedCU_);
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
        virtual bool empty() const override { return this->elasticReservedCU_ == nullptr; };
        // elasticReservedCU Field Functions 
        bool hasElasticReservedCU() const { return this->elasticReservedCU_ != nullptr;};
        void deleteElasticReservedCU() { this->elasticReservedCU_ = nullptr;};
        inline int64_t getElasticReservedCU() const { DARABONBA_PTR_GET_DEFAULT(elasticReservedCU_, 0L) };
        inline Parameter& setElasticReservedCU(int64_t elasticReservedCU) { DARABONBA_PTR_SET_VALUE(elasticReservedCU_, elasticReservedCU) };


      protected:
        // This parameter is required.
        shared_ptr<int64_t> elasticReservedCU_ {};
      };

      virtual bool empty() const override { return this->parameter_ == nullptr
        && this->subQuotaInfoList_ == nullptr; };
      // parameter Field Functions 
      bool hasParameter() const { return this->parameter_ != nullptr;};
      void deleteParameter() { this->parameter_ = nullptr;};
      inline const Quota::Parameter & getParameter() const { DARABONBA_PTR_GET_CONST(parameter_, Quota::Parameter) };
      inline Quota::Parameter getParameter() { DARABONBA_PTR_GET(parameter_, Quota::Parameter) };
      inline Quota& setParameter(const Quota::Parameter & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
      inline Quota& setParameter(Quota::Parameter && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


      // subQuotaInfoList Field Functions 
      bool hasSubQuotaInfoList() const { return this->subQuotaInfoList_ != nullptr;};
      void deleteSubQuotaInfoList() { this->subQuotaInfoList_ = nullptr;};
      inline const vector<Quota::SubQuotaInfoList> & getSubQuotaInfoList() const { DARABONBA_PTR_GET_CONST(subQuotaInfoList_, vector<Quota::SubQuotaInfoList>) };
      inline vector<Quota::SubQuotaInfoList> getSubQuotaInfoList() { DARABONBA_PTR_GET(subQuotaInfoList_, vector<Quota::SubQuotaInfoList>) };
      inline Quota& setSubQuotaInfoList(const vector<Quota::SubQuotaInfoList> & subQuotaInfoList) { DARABONBA_PTR_SET_VALUE(subQuotaInfoList_, subQuotaInfoList) };
      inline Quota& setSubQuotaInfoList(vector<Quota::SubQuotaInfoList> && subQuotaInfoList) { DARABONBA_PTR_SET_RVALUE(subQuotaInfoList_, subQuotaInfoList) };


    protected:
      shared_ptr<Quota::Parameter> parameter_ {};
      shared_ptr<vector<Quota::SubQuotaInfoList>> subQuotaInfoList_ {};
    };

    virtual bool empty() const override { return this->name_ == nullptr
        && this->quota_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateComputeQuotaPlanRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const UpdateComputeQuotaPlanRequest::Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, UpdateComputeQuotaPlanRequest::Quota) };
    inline UpdateComputeQuotaPlanRequest::Quota getQuota() { DARABONBA_PTR_GET(quota_, UpdateComputeQuotaPlanRequest::Quota) };
    inline UpdateComputeQuotaPlanRequest& setQuota(const UpdateComputeQuotaPlanRequest::Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline UpdateComputeQuotaPlanRequest& setQuota(UpdateComputeQuotaPlanRequest::Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


  protected:
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<UpdateComputeQuotaPlanRequest::Quota> quota_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
