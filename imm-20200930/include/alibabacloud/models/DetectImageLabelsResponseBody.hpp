// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTIMAGELABELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETECTIMAGELABELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Label.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DetectImageLabelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectImageLabelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetectImageLabelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetectImageLabelsResponseBody() = default ;
    DetectImageLabelsResponseBody(const DetectImageLabelsResponseBody &) = default ;
    DetectImageLabelsResponseBody(DetectImageLabelsResponseBody &&) = default ;
    DetectImageLabelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectImageLabelsResponseBody() = default ;
    DetectImageLabelsResponseBody& operator=(const DetectImageLabelsResponseBody &) = default ;
    DetectImageLabelsResponseBody& operator=(DetectImageLabelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labels_ == nullptr
        && return this->requestId_ == nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> labels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline DetectImageLabelsResponseBody& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline DetectImageLabelsResponseBody& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetectImageLabelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of labels detected.
    std::shared_ptr<vector<Label>> labels_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
