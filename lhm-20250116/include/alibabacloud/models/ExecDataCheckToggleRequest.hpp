// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECDATACHECKTOGGLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECDATACHECKTOGGLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ExecDataCheckToggleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecDataCheckToggleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(params, params_);
    };
    friend void from_json(const Darabonba::Json& j, ExecDataCheckToggleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(params, params_);
    };
    ExecDataCheckToggleRequest() = default ;
    ExecDataCheckToggleRequest(const ExecDataCheckToggleRequest &) = default ;
    ExecDataCheckToggleRequest(ExecDataCheckToggleRequest &&) = default ;
    ExecDataCheckToggleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecDataCheckToggleRequest() = default ;
    ExecDataCheckToggleRequest& operator=(const ExecDataCheckToggleRequest &) = default ;
    ExecDataCheckToggleRequest& operator=(ExecDataCheckToggleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Params : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Params& obj) { 
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(isScheduled, isScheduled_);
        DARABONBA_PTR_TO_JSON(lastBatchId, lastBatchId_);
      };
      friend void from_json(const Darabonba::Json& j, Params& obj) { 
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(isScheduled, isScheduled_);
        DARABONBA_PTR_FROM_JSON(lastBatchId, lastBatchId_);
      };
      Params() = default ;
      Params(const Params &) = default ;
      Params(Params &&) = default ;
      Params(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Params() = default ;
      Params& operator=(const Params &) = default ;
      Params& operator=(Params &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->isScheduled_ == nullptr && this->lastBatchId_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Params& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isScheduled Field Functions 
      bool hasIsScheduled() const { return this->isScheduled_ != nullptr;};
      void deleteIsScheduled() { this->isScheduled_ = nullptr;};
      inline int32_t getIsScheduled() const { DARABONBA_PTR_GET_DEFAULT(isScheduled_, 0) };
      inline Params& setIsScheduled(int32_t isScheduled) { DARABONBA_PTR_SET_VALUE(isScheduled_, isScheduled) };


      // lastBatchId Field Functions 
      bool hasLastBatchId() const { return this->lastBatchId_ != nullptr;};
      void deleteLastBatchId() { this->lastBatchId_ = nullptr;};
      inline int64_t getLastBatchId() const { DARABONBA_PTR_GET_DEFAULT(lastBatchId_, 0L) };
      inline Params& setLastBatchId(int64_t lastBatchId) { DARABONBA_PTR_SET_VALUE(lastBatchId_, lastBatchId) };


    protected:
      // The task ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> id_ {};
      // Specifies whether to enable scheduling. Valid values:
      // 
      // - 0: Disabled.
      // - 1: Enabled.
      // 
      // This parameter is required.
      shared_ptr<int32_t> isScheduled_ {};
      // The most recent batch number.
      // 
      // This parameter is required.
      shared_ptr<int64_t> lastBatchId_ {};
    };

    virtual bool empty() const override { return this->params_ == nullptr; };
    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<ExecDataCheckToggleRequest::Params> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<ExecDataCheckToggleRequest::Params>) };
    inline vector<ExecDataCheckToggleRequest::Params> getParams() { DARABONBA_PTR_GET(params_, vector<ExecDataCheckToggleRequest::Params>) };
    inline ExecDataCheckToggleRequest& setParams(const vector<ExecDataCheckToggleRequest::Params> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ExecDataCheckToggleRequest& setParams(vector<ExecDataCheckToggleRequest::Params> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


  protected:
    // The task scheduling parameter list. Each item must contain id, lastBatchId, and isScheduled.
    // 
    // This parameter is required.
    shared_ptr<vector<ExecDataCheckToggleRequest::Params>> params_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
