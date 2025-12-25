// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIGITALEMPLOYEERESPONSEBODYKNOWLEDGES_HPP_
#define ALIBABACLOUD_MODELS_GETDIGITALEMPLOYEERESPONSEBODYKNOWLEDGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDigitalEmployeeResponseBodyKnowledgesBailian.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetDigitalEmployeeResponseBodyKnowledges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDigitalEmployeeResponseBodyKnowledges& obj) { 
      DARABONBA_PTR_TO_JSON(bailian, bailian_);
    };
    friend void from_json(const Darabonba::Json& j, GetDigitalEmployeeResponseBodyKnowledges& obj) { 
      DARABONBA_PTR_FROM_JSON(bailian, bailian_);
    };
    GetDigitalEmployeeResponseBodyKnowledges() = default ;
    GetDigitalEmployeeResponseBodyKnowledges(const GetDigitalEmployeeResponseBodyKnowledges &) = default ;
    GetDigitalEmployeeResponseBodyKnowledges(GetDigitalEmployeeResponseBodyKnowledges &&) = default ;
    GetDigitalEmployeeResponseBodyKnowledges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDigitalEmployeeResponseBodyKnowledges() = default ;
    GetDigitalEmployeeResponseBodyKnowledges& operator=(const GetDigitalEmployeeResponseBodyKnowledges &) = default ;
    GetDigitalEmployeeResponseBodyKnowledges& operator=(GetDigitalEmployeeResponseBodyKnowledges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bailian_ == nullptr; };
    // bailian Field Functions 
    bool hasBailian() const { return this->bailian_ != nullptr;};
    void deleteBailian() { this->bailian_ = nullptr;};
    inline const vector<Models::GetDigitalEmployeeResponseBodyKnowledgesBailian> & bailian() const { DARABONBA_PTR_GET_CONST(bailian_, vector<Models::GetDigitalEmployeeResponseBodyKnowledgesBailian>) };
    inline vector<Models::GetDigitalEmployeeResponseBodyKnowledgesBailian> bailian() { DARABONBA_PTR_GET(bailian_, vector<Models::GetDigitalEmployeeResponseBodyKnowledgesBailian>) };
    inline GetDigitalEmployeeResponseBodyKnowledges& setBailian(const vector<Models::GetDigitalEmployeeResponseBodyKnowledgesBailian> & bailian) { DARABONBA_PTR_SET_VALUE(bailian_, bailian) };
    inline GetDigitalEmployeeResponseBodyKnowledges& setBailian(vector<Models::GetDigitalEmployeeResponseBodyKnowledgesBailian> && bailian) { DARABONBA_PTR_SET_RVALUE(bailian_, bailian) };


  protected:
    std::shared_ptr<vector<Models::GetDigitalEmployeeResponseBodyKnowledgesBailian>> bailian_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
