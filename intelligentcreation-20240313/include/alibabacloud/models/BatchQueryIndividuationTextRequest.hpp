// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYINDIVIDUATIONTEXTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYINDIVIDUATIONTEXTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchQueryIndividuationTextRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryIndividuationTextRequest& obj) { 
      DARABONBA_PTR_TO_JSON(textIdList, textIdList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryIndividuationTextRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(textIdList, textIdList_);
    };
    BatchQueryIndividuationTextRequest() = default ;
    BatchQueryIndividuationTextRequest(const BatchQueryIndividuationTextRequest &) = default ;
    BatchQueryIndividuationTextRequest(BatchQueryIndividuationTextRequest &&) = default ;
    BatchQueryIndividuationTextRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryIndividuationTextRequest() = default ;
    BatchQueryIndividuationTextRequest& operator=(const BatchQueryIndividuationTextRequest &) = default ;
    BatchQueryIndividuationTextRequest& operator=(BatchQueryIndividuationTextRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->textIdList_ == nullptr; };
    // textIdList Field Functions 
    bool hasTextIdList() const { return this->textIdList_ != nullptr;};
    void deleteTextIdList() { this->textIdList_ = nullptr;};
    inline const vector<string> & getTextIdList() const { DARABONBA_PTR_GET_CONST(textIdList_, vector<string>) };
    inline vector<string> getTextIdList() { DARABONBA_PTR_GET(textIdList_, vector<string>) };
    inline BatchQueryIndividuationTextRequest& setTextIdList(const vector<string> & textIdList) { DARABONBA_PTR_SET_VALUE(textIdList_, textIdList) };
    inline BatchQueryIndividuationTextRequest& setTextIdList(vector<string> && textIdList) { DARABONBA_PTR_SET_RVALUE(textIdList_, textIdList) };


  protected:
    shared_ptr<vector<string>> textIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
