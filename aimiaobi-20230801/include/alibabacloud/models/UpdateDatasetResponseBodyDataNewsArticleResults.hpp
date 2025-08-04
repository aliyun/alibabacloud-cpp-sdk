// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETRESPONSEBODYDATANEWSARTICLERESULTS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETRESPONSEBODYDATANEWSARTICLERESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDatasetResponseBodyDataNewsArticleResultsData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class UpdateDatasetResponseBodyDataNewsArticleResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetResponseBodyDataNewsArticleResults& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetResponseBodyDataNewsArticleResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    UpdateDatasetResponseBodyDataNewsArticleResults() = default ;
    UpdateDatasetResponseBodyDataNewsArticleResults(const UpdateDatasetResponseBodyDataNewsArticleResults &) = default ;
    UpdateDatasetResponseBodyDataNewsArticleResults(UpdateDatasetResponseBodyDataNewsArticleResults &&) = default ;
    UpdateDatasetResponseBodyDataNewsArticleResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetResponseBodyDataNewsArticleResults() = default ;
    UpdateDatasetResponseBodyDataNewsArticleResults& operator=(const UpdateDatasetResponseBodyDataNewsArticleResults &) = default ;
    UpdateDatasetResponseBodyDataNewsArticleResults& operator=(UpdateDatasetResponseBodyDataNewsArticleResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->current_ != nullptr && this->data_ != nullptr && this->message_ != nullptr && this->size_ != nullptr && this->total_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateDatasetResponseBodyDataNewsArticleResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t current() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline UpdateDatasetResponseBodyDataNewsArticleResults& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::UpdateDatasetResponseBodyDataNewsArticleResultsData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::UpdateDatasetResponseBodyDataNewsArticleResultsData>) };
    inline vector<Models::UpdateDatasetResponseBodyDataNewsArticleResultsData> data() { DARABONBA_PTR_GET(data_, vector<Models::UpdateDatasetResponseBodyDataNewsArticleResultsData>) };
    inline UpdateDatasetResponseBodyDataNewsArticleResults& setData(const vector<Models::UpdateDatasetResponseBodyDataNewsArticleResultsData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateDatasetResponseBodyDataNewsArticleResults& setData(vector<Models::UpdateDatasetResponseBodyDataNewsArticleResultsData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateDatasetResponseBodyDataNewsArticleResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline UpdateDatasetResponseBodyDataNewsArticleResults& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline UpdateDatasetResponseBodyDataNewsArticleResults& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> current_ = nullptr;
    std::shared_ptr<vector<Models::UpdateDatasetResponseBodyDataNewsArticleResultsData>> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
