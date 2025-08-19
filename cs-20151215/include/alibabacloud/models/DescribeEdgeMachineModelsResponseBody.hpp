// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEDGEMACHINEMODELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEDGEMACHINEMODELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEdgeMachineModelsResponseBodyModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeEdgeMachineModelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEdgeMachineModelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(models, models_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEdgeMachineModelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(models, models_);
    };
    DescribeEdgeMachineModelsResponseBody() = default ;
    DescribeEdgeMachineModelsResponseBody(const DescribeEdgeMachineModelsResponseBody &) = default ;
    DescribeEdgeMachineModelsResponseBody(DescribeEdgeMachineModelsResponseBody &&) = default ;
    DescribeEdgeMachineModelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEdgeMachineModelsResponseBody() = default ;
    DescribeEdgeMachineModelsResponseBody& operator=(const DescribeEdgeMachineModelsResponseBody &) = default ;
    DescribeEdgeMachineModelsResponseBody& operator=(DescribeEdgeMachineModelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->models_ != nullptr; };
    // models Field Functions 
    bool hasModels() const { return this->models_ != nullptr;};
    void deleteModels() { this->models_ = nullptr;};
    inline const vector<DescribeEdgeMachineModelsResponseBodyModels> & models() const { DARABONBA_PTR_GET_CONST(models_, vector<DescribeEdgeMachineModelsResponseBodyModels>) };
    inline vector<DescribeEdgeMachineModelsResponseBodyModels> models() { DARABONBA_PTR_GET(models_, vector<DescribeEdgeMachineModelsResponseBodyModels>) };
    inline DescribeEdgeMachineModelsResponseBody& setModels(const vector<DescribeEdgeMachineModelsResponseBodyModels> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
    inline DescribeEdgeMachineModelsResponseBody& setModels(vector<DescribeEdgeMachineModelsResponseBodyModels> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


  protected:
    // The cloud-native box models.
    std::shared_ptr<vector<DescribeEdgeMachineModelsResponseBodyModels>> models_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
