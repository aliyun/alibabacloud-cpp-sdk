// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIGITALEMPLOYEESRESPONSEBODYDIGITALEMPLOYEESKNOWLEDGES_HPP_
#define ALIBABACLOUD_MODELS_LISTDIGITALEMPLOYEESRESPONSEBODYDIGITALEMPLOYEESKNOWLEDGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges& obj) { 
      DARABONBA_PTR_TO_JSON(bailian, bailian_);
    };
    friend void from_json(const Darabonba::Json& j, ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges& obj) { 
      DARABONBA_PTR_FROM_JSON(bailian, bailian_);
    };
    ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges() = default ;
    ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges(const ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges &) = default ;
    ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges(ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges &&) = default ;
    ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges() = default ;
    ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges& operator=(const ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges &) = default ;
    ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges& operator=(ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bailian_ == nullptr; };
    // bailian Field Functions 
    bool hasBailian() const { return this->bailian_ != nullptr;};
    void deleteBailian() { this->bailian_ = nullptr;};
    inline const vector<Models::ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian> & bailian() const { DARABONBA_PTR_GET_CONST(bailian_, vector<Models::ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian>) };
    inline vector<Models::ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian> bailian() { DARABONBA_PTR_GET(bailian_, vector<Models::ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian>) };
    inline ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges& setBailian(const vector<Models::ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian> & bailian) { DARABONBA_PTR_SET_VALUE(bailian_, bailian) };
    inline ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledges& setBailian(vector<Models::ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian> && bailian) { DARABONBA_PTR_SET_RVALUE(bailian_, bailian) };


  protected:
    std::shared_ptr<vector<Models::ListDigitalEmployeesResponseBodyDigitalEmployeesKnowledgesBailian>> bailian_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
