// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACEOPERATELOG_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACEOPERATELOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceOperateLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceOperateLog& obj) { 
      DARABONBA_PTR_TO_JSON(date, date_);
      DARABONBA_PTR_TO_JSON(detail, detail_);
      DARABONBA_PTR_TO_JSON(grafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(operatorId, operatorId_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceOperateLog& obj) { 
      DARABONBA_PTR_FROM_JSON(date, date_);
      DARABONBA_PTR_FROM_JSON(detail, detail_);
      DARABONBA_PTR_FROM_JSON(grafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(operatorId, operatorId_);
    };
    GrafanaWorkspaceOperateLog() = default ;
    GrafanaWorkspaceOperateLog(const GrafanaWorkspaceOperateLog &) = default ;
    GrafanaWorkspaceOperateLog(GrafanaWorkspaceOperateLog &&) = default ;
    GrafanaWorkspaceOperateLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceOperateLog() = default ;
    GrafanaWorkspaceOperateLog& operator=(const GrafanaWorkspaceOperateLog &) = default ;
    GrafanaWorkspaceOperateLog& operator=(GrafanaWorkspaceOperateLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->date_ == nullptr
        && this->detail_ == nullptr && this->grafanaWorkspaceId_ == nullptr && this->id_ == nullptr && this->operatorId_ == nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline float getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, 0.0) };
    inline GrafanaWorkspaceOperateLog& setDate(float date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline GrafanaWorkspaceOperateLog& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // grafanaWorkspaceId Field Functions 
    bool hasGrafanaWorkspaceId() const { return this->grafanaWorkspaceId_ != nullptr;};
    void deleteGrafanaWorkspaceId() { this->grafanaWorkspaceId_ = nullptr;};
    inline string getGrafanaWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceId_, "") };
    inline GrafanaWorkspaceOperateLog& setGrafanaWorkspaceId(string grafanaWorkspaceId) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceId_, grafanaWorkspaceId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GrafanaWorkspaceOperateLog& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // operatorId Field Functions 
    bool hasOperatorId() const { return this->operatorId_ != nullptr;};
    void deleteOperatorId() { this->operatorId_ = nullptr;};
    inline string getOperatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
    inline GrafanaWorkspaceOperateLog& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


  protected:
    shared_ptr<float> date_ {};
    shared_ptr<string> detail_ {};
    shared_ptr<string> grafanaWorkspaceId_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> operatorId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
