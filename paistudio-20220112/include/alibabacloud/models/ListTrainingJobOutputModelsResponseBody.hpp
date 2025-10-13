// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBOUTPUTMODELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBOUTPUTMODELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTrainingJobOutputModelsResponseBodyOutputModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobOutputModelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobOutputModelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OutputModels, outputModels_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobOutputModelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OutputModels, outputModels_);
    };
    ListTrainingJobOutputModelsResponseBody() = default ;
    ListTrainingJobOutputModelsResponseBody(const ListTrainingJobOutputModelsResponseBody &) = default ;
    ListTrainingJobOutputModelsResponseBody(ListTrainingJobOutputModelsResponseBody &&) = default ;
    ListTrainingJobOutputModelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobOutputModelsResponseBody() = default ;
    ListTrainingJobOutputModelsResponseBody& operator=(const ListTrainingJobOutputModelsResponseBody &) = default ;
    ListTrainingJobOutputModelsResponseBody& operator=(ListTrainingJobOutputModelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outputModels_ == nullptr; };
    // outputModels Field Functions 
    bool hasOutputModels() const { return this->outputModels_ != nullptr;};
    void deleteOutputModels() { this->outputModels_ = nullptr;};
    inline const vector<ListTrainingJobOutputModelsResponseBodyOutputModels> & outputModels() const { DARABONBA_PTR_GET_CONST(outputModels_, vector<ListTrainingJobOutputModelsResponseBodyOutputModels>) };
    inline vector<ListTrainingJobOutputModelsResponseBodyOutputModels> outputModels() { DARABONBA_PTR_GET(outputModels_, vector<ListTrainingJobOutputModelsResponseBodyOutputModels>) };
    inline ListTrainingJobOutputModelsResponseBody& setOutputModels(const vector<ListTrainingJobOutputModelsResponseBodyOutputModels> & outputModels) { DARABONBA_PTR_SET_VALUE(outputModels_, outputModels) };
    inline ListTrainingJobOutputModelsResponseBody& setOutputModels(vector<ListTrainingJobOutputModelsResponseBodyOutputModels> && outputModels) { DARABONBA_PTR_SET_RVALUE(outputModels_, outputModels) };


  protected:
    std::shared_ptr<vector<ListTrainingJobOutputModelsResponseBodyOutputModels>> outputModels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
