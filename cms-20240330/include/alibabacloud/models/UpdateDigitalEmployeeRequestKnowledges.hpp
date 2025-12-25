// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDIGITALEMPLOYEEREQUESTKNOWLEDGES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDIGITALEMPLOYEEREQUESTKNOWLEDGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDigitalEmployeeRequestKnowledgesBailian.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdateDigitalEmployeeRequestKnowledges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDigitalEmployeeRequestKnowledges& obj) { 
      DARABONBA_PTR_TO_JSON(bailian, bailian_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDigitalEmployeeRequestKnowledges& obj) { 
      DARABONBA_PTR_FROM_JSON(bailian, bailian_);
    };
    UpdateDigitalEmployeeRequestKnowledges() = default ;
    UpdateDigitalEmployeeRequestKnowledges(const UpdateDigitalEmployeeRequestKnowledges &) = default ;
    UpdateDigitalEmployeeRequestKnowledges(UpdateDigitalEmployeeRequestKnowledges &&) = default ;
    UpdateDigitalEmployeeRequestKnowledges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDigitalEmployeeRequestKnowledges() = default ;
    UpdateDigitalEmployeeRequestKnowledges& operator=(const UpdateDigitalEmployeeRequestKnowledges &) = default ;
    UpdateDigitalEmployeeRequestKnowledges& operator=(UpdateDigitalEmployeeRequestKnowledges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bailian_ == nullptr; };
    // bailian Field Functions 
    bool hasBailian() const { return this->bailian_ != nullptr;};
    void deleteBailian() { this->bailian_ = nullptr;};
    inline const vector<Models::UpdateDigitalEmployeeRequestKnowledgesBailian> & bailian() const { DARABONBA_PTR_GET_CONST(bailian_, vector<Models::UpdateDigitalEmployeeRequestKnowledgesBailian>) };
    inline vector<Models::UpdateDigitalEmployeeRequestKnowledgesBailian> bailian() { DARABONBA_PTR_GET(bailian_, vector<Models::UpdateDigitalEmployeeRequestKnowledgesBailian>) };
    inline UpdateDigitalEmployeeRequestKnowledges& setBailian(const vector<Models::UpdateDigitalEmployeeRequestKnowledgesBailian> & bailian) { DARABONBA_PTR_SET_VALUE(bailian_, bailian) };
    inline UpdateDigitalEmployeeRequestKnowledges& setBailian(vector<Models::UpdateDigitalEmployeeRequestKnowledgesBailian> && bailian) { DARABONBA_PTR_SET_RVALUE(bailian_, bailian) };


  protected:
    std::shared_ptr<vector<Models::UpdateDigitalEmployeeRequestKnowledgesBailian>> bailian_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
