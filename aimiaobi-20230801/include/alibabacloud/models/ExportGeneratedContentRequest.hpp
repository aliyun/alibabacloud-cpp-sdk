// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTGENERATEDCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTGENERATEDCONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ExportGeneratedContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportGeneratedContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, ExportGeneratedContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    ExportGeneratedContentRequest() = default ;
    ExportGeneratedContentRequest(const ExportGeneratedContentRequest &) = default ;
    ExportGeneratedContentRequest(ExportGeneratedContentRequest &&) = default ;
    ExportGeneratedContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportGeneratedContentRequest() = default ;
    ExportGeneratedContentRequest& operator=(const ExportGeneratedContentRequest &) = default ;
    ExportGeneratedContentRequest& operator=(ExportGeneratedContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->id_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ExportGeneratedContentRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ExportGeneratedContentRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
