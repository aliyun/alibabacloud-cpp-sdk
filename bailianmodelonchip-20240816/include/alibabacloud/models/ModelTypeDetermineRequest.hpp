// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELTYPEDETERMINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELTYPEDETERMINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModelTypeDetermineRequestHistory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianModelOnChip20240816
{
namespace Models
{
  class ModelTypeDetermineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelTypeDetermineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(history, history_);
      DARABONBA_PTR_TO_JSON(inputText, inputText_);
    };
    friend void from_json(const Darabonba::Json& j, ModelTypeDetermineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(history, history_);
      DARABONBA_PTR_FROM_JSON(inputText, inputText_);
    };
    ModelTypeDetermineRequest() = default ;
    ModelTypeDetermineRequest(const ModelTypeDetermineRequest &) = default ;
    ModelTypeDetermineRequest(ModelTypeDetermineRequest &&) = default ;
    ModelTypeDetermineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelTypeDetermineRequest() = default ;
    ModelTypeDetermineRequest& operator=(const ModelTypeDetermineRequest &) = default ;
    ModelTypeDetermineRequest& operator=(ModelTypeDetermineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->history_ == nullptr
        && return this->inputText_ == nullptr; };
    // history Field Functions 
    bool hasHistory() const { return this->history_ != nullptr;};
    void deleteHistory() { this->history_ = nullptr;};
    inline const vector<ModelTypeDetermineRequestHistory> & history() const { DARABONBA_PTR_GET_CONST(history_, vector<ModelTypeDetermineRequestHistory>) };
    inline vector<ModelTypeDetermineRequestHistory> history() { DARABONBA_PTR_GET(history_, vector<ModelTypeDetermineRequestHistory>) };
    inline ModelTypeDetermineRequest& setHistory(const vector<ModelTypeDetermineRequestHistory> & history) { DARABONBA_PTR_SET_VALUE(history_, history) };
    inline ModelTypeDetermineRequest& setHistory(vector<ModelTypeDetermineRequestHistory> && history) { DARABONBA_PTR_SET_RVALUE(history_, history) };


    // inputText Field Functions 
    bool hasInputText() const { return this->inputText_ != nullptr;};
    void deleteInputText() { this->inputText_ = nullptr;};
    inline string inputText() const { DARABONBA_PTR_GET_DEFAULT(inputText_, "") };
    inline ModelTypeDetermineRequest& setInputText(string inputText) { DARABONBA_PTR_SET_VALUE(inputText_, inputText) };


  protected:
    std::shared_ptr<vector<ModelTypeDetermineRequestHistory>> history_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianModelOnChip20240816
#endif
