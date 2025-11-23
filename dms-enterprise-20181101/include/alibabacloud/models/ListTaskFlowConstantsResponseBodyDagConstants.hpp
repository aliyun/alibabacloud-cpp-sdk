// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWCONSTANTSRESPONSEBODYDAGCONSTANTS_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWCONSTANTSRESPONSEBODYDAGCONSTANTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTaskFlowConstantsResponseBodyDagConstantsDagConstant.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowConstantsResponseBodyDagConstants : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowConstantsResponseBodyDagConstants& obj) { 
      DARABONBA_PTR_TO_JSON(DagConstant, dagConstant_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowConstantsResponseBodyDagConstants& obj) { 
      DARABONBA_PTR_FROM_JSON(DagConstant, dagConstant_);
    };
    ListTaskFlowConstantsResponseBodyDagConstants() = default ;
    ListTaskFlowConstantsResponseBodyDagConstants(const ListTaskFlowConstantsResponseBodyDagConstants &) = default ;
    ListTaskFlowConstantsResponseBodyDagConstants(ListTaskFlowConstantsResponseBodyDagConstants &&) = default ;
    ListTaskFlowConstantsResponseBodyDagConstants(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowConstantsResponseBodyDagConstants() = default ;
    ListTaskFlowConstantsResponseBodyDagConstants& operator=(const ListTaskFlowConstantsResponseBodyDagConstants &) = default ;
    ListTaskFlowConstantsResponseBodyDagConstants& operator=(ListTaskFlowConstantsResponseBodyDagConstants &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dagConstant_ == nullptr; };
    // dagConstant Field Functions 
    bool hasDagConstant() const { return this->dagConstant_ != nullptr;};
    void deleteDagConstant() { this->dagConstant_ = nullptr;};
    inline const vector<Models::ListTaskFlowConstantsResponseBodyDagConstantsDagConstant> & dagConstant() const { DARABONBA_PTR_GET_CONST(dagConstant_, vector<Models::ListTaskFlowConstantsResponseBodyDagConstantsDagConstant>) };
    inline vector<Models::ListTaskFlowConstantsResponseBodyDagConstantsDagConstant> dagConstant() { DARABONBA_PTR_GET(dagConstant_, vector<Models::ListTaskFlowConstantsResponseBodyDagConstantsDagConstant>) };
    inline ListTaskFlowConstantsResponseBodyDagConstants& setDagConstant(const vector<Models::ListTaskFlowConstantsResponseBodyDagConstantsDagConstant> & dagConstant) { DARABONBA_PTR_SET_VALUE(dagConstant_, dagConstant) };
    inline ListTaskFlowConstantsResponseBodyDagConstants& setDagConstant(vector<Models::ListTaskFlowConstantsResponseBodyDagConstantsDagConstant> && dagConstant) { DARABONBA_PTR_SET_RVALUE(dagConstant_, dagConstant) };


  protected:
    std::shared_ptr<vector<Models::ListTaskFlowConstantsResponseBodyDagConstantsDagConstant>> dagConstant_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
