// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIGITALEMPLOYEEREQUESTKNOWLEDGES_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIGITALEMPLOYEEREQUESTKNOWLEDGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDigitalEmployeeRequestKnowledgesBailian.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateDigitalEmployeeRequestKnowledges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDigitalEmployeeRequestKnowledges& obj) { 
      DARABONBA_PTR_TO_JSON(bailian, bailian_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDigitalEmployeeRequestKnowledges& obj) { 
      DARABONBA_PTR_FROM_JSON(bailian, bailian_);
    };
    CreateDigitalEmployeeRequestKnowledges() = default ;
    CreateDigitalEmployeeRequestKnowledges(const CreateDigitalEmployeeRequestKnowledges &) = default ;
    CreateDigitalEmployeeRequestKnowledges(CreateDigitalEmployeeRequestKnowledges &&) = default ;
    CreateDigitalEmployeeRequestKnowledges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDigitalEmployeeRequestKnowledges() = default ;
    CreateDigitalEmployeeRequestKnowledges& operator=(const CreateDigitalEmployeeRequestKnowledges &) = default ;
    CreateDigitalEmployeeRequestKnowledges& operator=(CreateDigitalEmployeeRequestKnowledges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bailian_ == nullptr; };
    // bailian Field Functions 
    bool hasBailian() const { return this->bailian_ != nullptr;};
    void deleteBailian() { this->bailian_ = nullptr;};
    inline const vector<Models::CreateDigitalEmployeeRequestKnowledgesBailian> & bailian() const { DARABONBA_PTR_GET_CONST(bailian_, vector<Models::CreateDigitalEmployeeRequestKnowledgesBailian>) };
    inline vector<Models::CreateDigitalEmployeeRequestKnowledgesBailian> bailian() { DARABONBA_PTR_GET(bailian_, vector<Models::CreateDigitalEmployeeRequestKnowledgesBailian>) };
    inline CreateDigitalEmployeeRequestKnowledges& setBailian(const vector<Models::CreateDigitalEmployeeRequestKnowledgesBailian> & bailian) { DARABONBA_PTR_SET_VALUE(bailian_, bailian) };
    inline CreateDigitalEmployeeRequestKnowledges& setBailian(vector<Models::CreateDigitalEmployeeRequestKnowledgesBailian> && bailian) { DARABONBA_PTR_SET_RVALUE(bailian_, bailian) };


  protected:
    std::shared_ptr<vector<Models::CreateDigitalEmployeeRequestKnowledgesBailian>> bailian_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
