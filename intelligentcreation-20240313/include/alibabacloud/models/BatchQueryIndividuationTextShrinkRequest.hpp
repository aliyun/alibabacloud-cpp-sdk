// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYINDIVIDUATIONTEXTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYINDIVIDUATIONTEXTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchQueryIndividuationTextShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryIndividuationTextShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(textIdList, textIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryIndividuationTextShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(textIdList, textIdListShrink_);
    };
    BatchQueryIndividuationTextShrinkRequest() = default ;
    BatchQueryIndividuationTextShrinkRequest(const BatchQueryIndividuationTextShrinkRequest &) = default ;
    BatchQueryIndividuationTextShrinkRequest(BatchQueryIndividuationTextShrinkRequest &&) = default ;
    BatchQueryIndividuationTextShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryIndividuationTextShrinkRequest() = default ;
    BatchQueryIndividuationTextShrinkRequest& operator=(const BatchQueryIndividuationTextShrinkRequest &) = default ;
    BatchQueryIndividuationTextShrinkRequest& operator=(BatchQueryIndividuationTextShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->textIdListShrink_ == nullptr; };
    // textIdListShrink Field Functions 
    bool hasTextIdListShrink() const { return this->textIdListShrink_ != nullptr;};
    void deleteTextIdListShrink() { this->textIdListShrink_ = nullptr;};
    inline string textIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(textIdListShrink_, "") };
    inline BatchQueryIndividuationTextShrinkRequest& setTextIdListShrink(string textIdListShrink) { DARABONBA_PTR_SET_VALUE(textIdListShrink_, textIdListShrink) };


  protected:
    std::shared_ptr<string> textIdListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
